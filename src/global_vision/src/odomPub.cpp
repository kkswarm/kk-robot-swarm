/*
 * @Author: Chaozheng Zhu && Loren
 * @Date: 2022-04-20 14:29:58
 * @LastEditTime: 2022-06-26 20:59:40
 * @FilePath: /kk-robot-swarm/src/global_vision/src/odomPub.cpp
 * @Description: Combine the car raw datas and the Tf datas, and put odom datas.
 *
 * Copyright (c) 2022 by AmovLab, All Rights Reserved.
 */

#include "global_vision/odomPub.hpp"

#include <boost/thread.hpp>

#include "kkswarm_msgs/kkSwarmPose.h"
#include "kkswarm_msgs/kkSwarmState.h"

using namespace std;

// Constructor
odomPub::odomPub() {
  // subFromTcp();
  boost::thread commThread(&odomPub::subFromTcp, this);
  commThread.detach();

  boost::thread tfThread(&odomPub::subFromTf, this);
  tfThread.detach();

  for (int i = 1; i <= car_total_num_; i++) {
    string topic = odomPub::topicNameGenerate(i);
    ros::Publisher pub = nh_.advertise<nav_msgs::Odometry>(topic, 10);
    odom_pub_set_.push_back(pub);
  }

  ROS_INFO("odomPub initialized.");
}

void odomPub::subFromTcp() {
  ROS_INFO("subFromTcp. \n");
  communication_sub_ = nh_.subscribe<kkswarm_msgs::kkSwarmState>(
      "/comm", 1000, &odomPub::communicationCallBack, this);
}

void odomPub::communicationCallBack(
    const kkswarm_msgs::kkSwarmState::ConstPtr& msgs) {
  car_pose_[msgs->mark].mark = msgs->mark;
  car_pose_[msgs->mark].linear_vel = msgs->linear_speed;
  car_pose_[msgs->mark].angular_vel = msgs->angular_speed;

  // Debug only.
  // ROS_INFO("car_pose_[msgs->mark].mark = %d", car_pose_[msgs->mark].mark);
  // ROS_INFO("car_pose_[msgs->mark].linear_vel = %s",
  //          car_pose_[msgs->mark].linear_vel);
}

void odomPub::subFromTf() {
  ros::Rate pub_rate(10);
  static tf::TransformBroadcaster br;
  tf::Transform transform;
  while (nh_.ok()) {
    try {
      for (int i = 1; i <= car_total_num_; i++) {
        // generate tf fream: /robot_i/base_link
        string tf_base = odomPub::tfNameGenerate(i);
        ROS_INFO("tf_base: %s", tf_base.c_str());
        // 0 0 0 0 0 0 map robot_5/odom
        transform.setOrigin(0.0, 0.0, 0.0);
        tf::Quaternion q;
        q.setRPY(0, 0, 0);
        transform.setRotation(q);
        br.sendTransform(tf::StampedTransform(transform, ros::Time::now(), "map", tf_base));
        // 0 0 0 1 0 0 0 tag_5 robot_5/base_link
        string tag_base = odomPub::tagNameGenerate(i);
        ROS_INFO("tag_base: %s", tag_base.c_str());
        tf::Quaternion q(1, 0, 0, 0);
        transform.setRotation(q);
        br.sendTransform(tf::StampedTransform(transform, ros::Time::now(), tag_base, tf_base));


        car_tf_listener_.waitForTransform("map", tf_base, ros::Time(0),
                                          ros::Duration(10.0));
        car_tf_listener_.lookupTransform("map", tf_base, ros::Time(0),
                                         transform_);

        double quat_x = transform_.getRotation().getX();
        double quat_y = transform_.getRotation().getY();
        double quat_z = transform_.getRotation().getZ();
        double quat_w = transform_.getRotation().getW();

        tf::Quaternion quat = tf::Quaternion(quat_x, quat_y, quat_z, quat_w);
        double angle = tf::getYaw(quat);
        // cout << "angle" << angle << endl;
        car_pose_[i].yaw = convertDegree(angle);
        car_pose_[i].quat.w = quat.w();
        car_pose_[i].quat.x = quat.x();
        car_pose_[i].quat.y = quat.y();
        car_pose_[i].quat.z = quat.z();

        car_pose_[i].car_center_point[0] = transform_.getOrigin().x();
        car_pose_[i].car_center_point[1] = transform_.getOrigin().y();

        // odom msgs.
        car_odom_[i].header.stamp = ros::Time::now();
        car_odom_[i].header.frame_id = "map";
        car_odom_[i].child_frame_id = tf_base;
        car_odom_[i].pose.pose.position.x = car_pose_[i].car_center_point[0];
        car_odom_[i].pose.pose.position.y = car_pose_[i].car_center_point[1];
        car_odom_[i].pose.pose.position.z = 0.0;
        car_odom_[i].pose.pose.orientation = car_pose_[i].quat;
        car_odom_[i].twist.twist.linear.x = car_pose_[i].linear_vel;
        car_odom_[i].twist.twist.angular.z = car_pose_[i].angular_vel;

        string topic = odomPub::topicNameGenerate(i);
        if (odom_pub_set_[i - 1].getTopic() == topic) {
          odom_pub_set_[i - 1].publish(car_odom_[i]);
        }

        // Debug Only.
        // cout << "No." << i << "Car's linear_vel is " <<
        // car_pose_[i].linear_vel
        //      << endl;
        // cout << "No." << i << "Car's angular_vel is "
        //      << car_pose_[i].angular_vel << endl;
        // cout << "No." << i << "Car's x position is "
        //      << car_pose_[i].car_center_point[0] << endl;
        // cout << "No." << i << "Car's y position is "
        //      << car_pose_[i].car_center_point[1] << endl;
        // cout << "No." << i << "car's yaw is " << car_pose_[i].yaw << endl;
      }
    } catch (tf::TransformException ex) {
      ROS_ERROR("%s", ex.what());
      ros::Duration(1.0).sleep();
      continue;
    }
    pub_rate.sleep();
  }
}

int main(int argc, char** argv) {
  ros::init(argc, argv, "odomPub_node");

  odomPub OP;

  ROS_INFO("\033[1;32m----> OdomPub Node Started.\033[0m");

  // ros::MultiThreadedSpinner spinner(2);
  // spinner.spin();
  ros::spin();
  return 0;
}
