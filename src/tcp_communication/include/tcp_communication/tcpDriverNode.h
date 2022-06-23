/*
 * @Author: Chaozheng Zhu && Loren
 * @Date: 2022-05-07 09:33:32
 * @LastEditTime: 2022-05-17 16:57:40
 * @FilePath:
 * /kk-robot-swarm/src/tcp_communication/include/tcp_communication/tcpDriverNode.h
 * /kk-robot-swarm/src/tcp_communication/include/tcp_communication/tcpDriverNode.h
 * /kk-robot-swarm/src/tcp_communication/include/tcp_communication/tcpDriverNode.h
 * @Description:
 *
 * Copyright (c) 2022 by AmovLab, All Rights Reserved.
 */
#pragma once

#include <boost/thread.hpp>
#include <iostream>
#include <sstream>
#include <string>
#include <thread>
#include <vector>

#include "kkswarm_msgs/kkSwarmState.h"

// socket
#include <arpa/inet.h>
#include <netinet/in.h>
#include <pthread.h>
#include <signal.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

// ros
#include <geometry_msgs/Twist.h>
#include <ros/ros.h>

//集群数量
#define CAR_NUM 10

// c = const, g = global. gc_ means this is a global const variable.
const int gc_max_size = 80;
const int gc_tcp_port = 8234;

class tcpDriverNode {
 public:
  ros::NodeHandle nh_;
  ros::Publisher status_pub_;
  std::vector<ros::Subscriber> vel_sub_;

  // car_state_[1] means No.1 car's state information.
  kkswarm_msgs::kkSwarmState car_state_[11];

  uint time[11] = {0};
  int fd[11] = {0};

  // int g_connfd_;  // client connection socket.

  int sockfd;

  tcpDriverNode();
  ~tcpDriverNode();

  /**
   * \brief: SockerServer. To get upstream data from car.
   * \param {*}
   * \return {*}
   */
  int createSocketServer();

  /**
   * \brief: receive upstream data and parse it.
   * \param {int connfd: sokect file description.}
   * \return {*}
   */
  void dataReceived(int connfd);

  /**
   * \brief:
   * Parsing Up Stream Protocol. From Hex to Dec. Get the car state datas. And
   * Publish to ROS. See Protocol for more information.
   * \param {int connfd:
   * sokect file description.}
   * \param {unsigned char buff[]: save the protocol data}
   * \param {int size: Protocol size. check if the protocol right or not.}
   * \return {*}
   */
  void parsingUpProtocol(int connfd, unsigned char buff[], int size);

  /**
   * \brief: Publish parsed upstream data to ROS.
   * \param {*}
   * \return {*}
   */
  void publish2ROS(kkswarm_msgs::kkSwarmState car_state);

  /**
   * \brief: Subcribe /robot_x/cmd_vel from another Node. x means a specific
   * car.
   * \param {*}
   * \return {*}
   */
  void subFromROS();

  /**
   * \brief:
   * Subscribe callback function. Recevie twist msgs and car id.
   * So that can get every single car's linear speed and angular speed
   * And according to the down stream protocol, send to ccar.
   * \param {const geometry_msgs::Twist::ConstPtr &msgs: ROS geometry_msgs,
   * contain twist messages.}
   * \param {int id: car id}
   * \return {*}
   */
  void velReceviveCallBack(const geometry_msgs::Twist::ConstPtr &msgs, int id);

  /**
   * \brief: Sum cheack.
   * \param {unsigned char buff[]: Save the Protocal}
   * \param {int num: Protocal size}
   * \return {Check Digit}
   */
  unsigned char dataCheck(unsigned char buff[], int num);

  /**
   * \brief: Send linear speed and angular speed to car.
   * \param {int id: Car id}
   * \param {unsigned char buff[]: Save Down Stream Protocol}
   * \param {int size: Protocol size}
   * \return {*}
   */
  void dataSend2Car(int id, unsigned char buff[], int size);

  void isSocketConnect();
};