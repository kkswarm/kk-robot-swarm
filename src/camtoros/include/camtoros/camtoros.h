/*
 * @Author: ChaoZheng Zhu && Loren
 * @Date: 2022-04-13 12:08:41
 * @LastEditTime: 2022-04-13 15:38:35
 * @FilePath: /misaro_ws/src/camtoros/include/camtoros/camtoros.h
 * @Description:
 *
 * Copyright (c) 2022 by AmovLab, All Rights Reserved.
 */

#pragma once

#include <camera_info_manager/camera_info_manager.h>
#include <cv_bridge/cv_bridge.h>
#include <image_transport/image_transport.h>
#include <ros/ros.h>
#include <sensor_msgs/CameraInfo.h>
#include <sensor_msgs/Image.h>

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>

class CamToRos
{
public:
  CamToRos(ros::NodeHandle &nh);
  ~CamToRos() = default;

  void Publisher(ros::NodeHandle &nh);

private:
  ros::Publisher img_pub_;
  ros::Subscriber img_sub_;

  image_transport::CameraPublisher camera_pub_;

  cv_bridge::CvImagePtr cv_ptr_;

  sensor_msgs::CameraInfo camerainfo_msg_;
  sensor_msgs::Image image_msg_;

  ros::Time current_time_;
  ros::Time last_time_;
  double consumed_time_;
};