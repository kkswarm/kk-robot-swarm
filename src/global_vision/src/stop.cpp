#include <geometry_msgs/Twist.h>
#include <ros/ros.h>

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
  ros::init(argc, argv, "stop");
  ros::NodeHandle nh;
  geometry_msgs::Twist vel;
  vel.linear.x = 0.0;
  vel.angular.z = 0.0;
  vector<ros::Publisher> stop_pub;
  ros::Rate rate(10);

  string front_str = "/robot_";
  string end_str = "/cmd_vel";

  while (nh.ok()) {
    for (int i = 1; i <= 10; i++) {
      stringstream ss;
      ss << front_str << i << end_str;
      string topic = ss.str();
      ros::Publisher pub = nh.advertise<geometry_msgs::Twist>(topic, 10);
      stop_pub.push_back(pub);
    }

    for (int j = 1; j <= 10; j++) {
      stringstream ss;
      ss << front_str << j << end_str;
      string topic = ss.str();
      if (stop_pub[j - 1].getTopic() == topic) {
        stop_pub[j - 1].publish(vel);
        ROS_INFO("Publishing %s ...", stop_pub[j - 1].getTopic().c_str());
      }
      rate.sleep();
    }
  }

  return 0;
}