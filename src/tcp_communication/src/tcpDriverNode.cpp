/*
 * @Author: Chaozhen Zhu && Loren
 * @Date: 2022-04-28 21:51:02
 * @LastEditTime: 2022-05-17 17:15:08
 * @Description:
 *
 * @FilePath: /kk-robot-swarm/src/tcp_communication/src/tcpDriverNode.cpp
 */

#include "tcp_communication/tcpDriverNode.h"

using namespace std;

/**
 * \brief:
 * Constructor. Create ROS Subscriber and Publisher and Socket Server.
 * \param {*}
 * \return {*}
 */
tcpDriverNode::tcpDriverNode() {
  status_pub_ = nh_.advertise<kkswarm_msgs::kkSwarmState>("/comm", 1000);

  // Create thread to communicate with client.
  boost::thread recvThread(&tcpDriverNode::createSocketServer, this);
  recvThread.detach();
  ros::Duration(1).sleep();  // wait for 1s to create socket server.

  boost::thread connectThread(&tcpDriverNode::isSocketConnect, this);
  connectThread.detach();
  ros::Duration(1).sleep();

  subFromROS();

  ROS_INFO("Constructor initized.");
}

void tcpDriverNode::isSocketConnect() {
  while (true) {
    for (int i = 1; i <= CAR_NUM; i++) {
      if (car_state_[i].mark == 0) continue;
      if (car_state_[i].socketfd == 0) {
        if (fd[i] != 0) {
          close(fd[i]);
          printf("%d disconnected \n", fd[i]);
        }
        fd[i] = 0;
      } else {
        if (time[i] != car_state_[i].header.stamp.nsec) {
          time[i] = car_state_[i].header.stamp.nsec;
        } else {
          fd[i] = car_state_[i].socketfd;
          car_state_[i].socketfd = 0;
        }
      }
    }
    usleep(2000000);
  }
}

int tcpDriverNode::createSocketServer() {
  // Define socket server pararm.
  struct sockaddr_in server_addr;

  server_addr.sin_family = AF_INET;
  server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
  server_addr.sin_port = htons(gc_tcp_port);
  bzero(&(server_addr.sin_zero), 8);

  // creat socket server
  sockfd = socket(AF_INET, SOCK_STREAM, 0);
  if (sockfd == -1) {
    printf("socket creation failed...\n");
    exit(0);
  } else {
    printf("Socket successfully created... \n");
  }
  int reuse = 1;
  if (setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, (void *)&reuse,
                 sizeof(int)) < 0) {
    perror("setsockopet error\n");
    return -1;
  }

  // bind socket server.
  int bind_result =
      bind(sockfd, (struct sockaddr *)&server_addr, sizeof(server_addr));
  if (bind_result == -1) {
    printf("socket bind failed: %s\n", strerror(errno));
    exit(0);
  } else {
    printf("Socket successfully binded... \n");
  }

  // listen client connection.
  if ((listen(sockfd, 5)) != 0) {
    printf("Listen failed... \n");
    exit(0);
  } else {
    printf("Server listening..\n");
  }

  // Define client pararm.
  struct sockaddr_in client_addr;
  socklen_t client_lenth;
  while (true) {
    int client_socket =
        accept(sockfd, (struct sockaddr *)&client_addr, &client_lenth);

    printf("Wait for client connection... \n");

    if (client_socket == -1) {
      printf("server accept failed... \n");
      exit(EXIT_FAILURE);
    } else {
      printf("server accept the client... \n");
    }

    boost::thread readThread(
        boost::bind(&tcpDriverNode::dataReceived, this, client_socket));
    readThread.detach();
    ros::Duration(1).sleep();  // wait for 1s.
  }

  return 0;
}

void tcpDriverNode::dataReceived(int connfd) {
  printf("Connet connfd: %d \n", connfd);
  while (true) {
    unsigned char buff[gc_max_size];

    memset(buff, 0, sizeof(buff));

    // Get the upstream data.
    int ret = read(connfd, buff, sizeof(buff));

    if (ret == 0) {
      printf("client close... \n");
      return;
    } else if (ret == -1) {
      return;
    }
    parsingUpProtocol(connfd, buff, ret);
  }
}

void tcpDriverNode::parsingUpProtocol(int connfd, unsigned char buff[],
                                      int size) {
  // Ser Protocol for more information.
  if (size != 41) return;

  // 7B = 123, Frame Head
  // 7D = 125, Frame Tail
  if ((buff[0] != 123) | (buff[1] != 123) | buff[40] != 125) return;

  int car_id = buff[2];  // get the car id form firmware.

  car_state_[car_id].socketfd = connfd;  // assign socketfd
  car_state_[car_id].mark = car_id;      // assign mark

  int temp56 = (buff[5] << 8) + buff[6];
  if (temp56 > 32768) temp56 = temp56 - 65525;
  car_state_[car_id].linear_speed =
      (double)(temp56 / 1000.0);  // assign linear_speed

  int temp910 = (buff[9] << 8) + buff[10];
  if (temp910 > 32768) temp910 = temp910 - 65525;
  car_state_[car_id].angular_speed =
      (double)(temp910 / 1000.0) * (-1);  // assign angular_speed

  int temp1112 = (buff[11] << 8) + buff[12];
  if (temp1112 > 32768) temp1112 = temp1112 - 65525;
  car_state_[car_id].acc_x =
      (double)(temp1112 / 1672.0);  // assign acceleration x

  int temp1314 = (buff[13] << 8) + buff[14];
  if (temp1314 > 32768) temp1314 = temp1314 - 65525;
  car_state_[car_id].acc_y =
      (double)(temp1314 / 1672.0);  // assign acceleration y

  int temp2122 = (buff[21] << 8) + buff[22];
  if (temp2122 > 32768) temp2122 = temp2122 - 65525;
  car_state_[car_id].gyro_z = (double)(temp2122 / 3753.0);  // assign gyro z

  // int temp2526 = (buff[25] << 8) + buff[26];
  // if (temp2526 > 32768) temp2526 = temp2526 - 65525;
  // car_state_[car_id].left_encoder =
  //     (double)(temp2526 / 1000.0);  // assign left_encoder

  // int temp2728 = (buff[27] << 8) + buff[28];
  // if (temp2728 > 32768) temp2728 = temp2728 - 65525;
  // car_state_[car_id].right_encoder =
  //     (double)(temp2728 / 1000.0);  // assign right_encoder

  int temp2930 = (buff[29] << 8) + buff[30];
  if (temp2930 > 32768) temp2930 = temp2930 - 65525;
  car_state_[car_id].voltage = (double)(temp2930 / 1000.0);  // assign voltage

  // Debug only.
  // ROS_INFO(
  //     "%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-"
  //     "%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X.",
  //     buff[0], buff[1], buff[2], buff[3], buff[4], buff[5], buff[6], buff[7],
  //     buff[8], buff[9], buff[10], buff[11], buff[12], buff[13], buff[14],
  //     buff[15], buff[16], buff[17], buff[18], buff[19], buff[20], buff[21],
  //     buff[22], buff[23], buff[24], buff[25], buff[26], buff[27], buff[28],
  //     buff[29], buff[30], buff[31], buff[32], buff[33], buff[34], buff[35],
  //     buff[36], buff[37], buff[38], buff[39], buff[40], buff[41]);

  publish2ROS(car_state_[car_id]);
}

void tcpDriverNode::publish2ROS(kkswarm_msgs::kkSwarmState car_state) {
  ros::Rate loop_rate(50);
  car_state.header.stamp = ros::Time::now();
  status_pub_.publish(car_state);
  loop_rate.sleep();
  // for (int i = 1; i <= 8; i++) {
  //   car_state_->header.stamp = ros::Time::now();
  //   status_pub_.publish(car_state_[i]);
  //   loop_rate.sleep();
  // }
}

void tcpDriverNode::subFromROS() {
  // Create the 10th topic once for all.
  string front_str = "/robot_";
  string end_str = "/cmd_vel";

  for (int i = 1; i <= CAR_NUM; i++) {
    // For every single car create a topic name.
    stringstream ss;
    ss << front_str << i << end_str;
    string topic = ss.str();

    ros::Subscriber sub = nh_.subscribe<geometry_msgs::Twist>(
        topic, 100,
        boost::bind(&tcpDriverNode::velReceviveCallBack, this, _1, i));
    vel_sub_.push_back(sub);
  }
}

void tcpDriverNode::velReceviveCallBack(
    const geometry_msgs::Twist::ConstPtr &msgs, int id) {
  int buff_linear = int(msgs->linear.x * 1000);
  int buff_angular = int(msgs->angular.z * 1000);

  unsigned char buff[11];

  // See protocol for more information.
  buff[0] = 123;  // 7B
  buff[1] = 122;
  buff[2] = id;
  buff[3] = buff_linear >> 8;
  buff[4] = buff_linear;
  buff[5] = 0;
  buff[6] = 0;
  buff[7] = buff_angular >> 8;
  buff[8] = buff_angular;
  buff[9] = dataCheck(buff, 9);  // generate check num
  buff[10] = 125;                // 7D

  // Debug only.
  // ROS_INFO("%X-%X-%X-%X-%X-%X-%X-%X-%X-%X-%X.", buff[0], buff[1], buff[2],
  //          buff[3], buff[4], buff[5], buff[6], buff[7], buff[8], buff[9],
  //          buff[10]);

  dataSend2Car(id, buff, sizeof(buff));
}

unsigned char tcpDriverNode::dataCheck(unsigned char buff[], int num) {
  // sum check.
  unsigned char check_sum = 0;
  // Verify the data received
  for (int k = 0; k < num; k++) {
    check_sum = check_sum ^ buff[k];
  }
  return check_sum;
}

void tcpDriverNode::dataSend2Car(int id, unsigned char buff[], int size) {
  if (car_state_[id].socketfd == 0) return;
  write(car_state_[id].socketfd, buff, size);  // send.
}

/**
 * \brief: Deconstructor. Close every signal car socket.
 * \param {*}
 * \return {*}
 */
tcpDriverNode::~tcpDriverNode() {
  for (int i = 1; i <= CAR_NUM; i++) {
    if (car_state_[i].socketfd != 0) {
      printf("%d disconnected \n", car_state_[i].socketfd);
      close(car_state_[i].socketfd);
    }
  }
  close(sockfd);
}

int main(int argc, char **argv) {
  ros::init(argc, argv, "tcp_driver_node");

  tcpDriverNode TDN;

  ROS_INFO("\033[1;32m----> TCP Communication Started.\033[0m");

  // ros::MultiThreadedSpinner spinner(2);
  // spinner.spin();
  ros::spin();
}