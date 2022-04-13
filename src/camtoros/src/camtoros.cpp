/*
 * @Author: Chaozheng Zhu && Loren
 * @Date: 2022-04-13 12:20:08
 * @LastEditTime: 2022-04-13 19:56:03
 * @FilePath: /kk-robot-swarm/src/camtoros/src/camtoros.cpp
 * @Description:
 *
 * Copyright (c) 2022 by AmovLab, All Rights Reserved.
 */

#include "camtoros/camtoros.h"

#include <iostream>

#include "camtoros/init_camera.h"

// Constructor
CamToRos::CamToRos(ros::NodeHandle &nh)
{
    ROS_INFO("camera initialized");

    image_transport::ImageTransport main_camera_image(nh);
    camera_pub_ = main_camera_image.advertiseCamera("/hik_camera/image_raw", 100);

    cv_ptr_ = boost::make_shared<cv_bridge::CvImage>();
    cv_ptr_->encoding = sensor_msgs::image_encodings::MONO8; // Setting image encoding.

    // Hik Camera SDK
    EnumDevice();
    InitCamera();
}

void CamToRos::Publisher(ros::NodeHandle &nh)
{
    cv::Mat src_img;
    ros::Rate rate_hz(10);
    last_time_ = ros::Time::now();

    StartGrabStream(src_img); // Hik Camera SDK. Grab stream.

    cv_ptr_->image = src_img; // Use cv_bridgeconvert to ROS image.

    image_msg_ = *(cv_ptr_->toImageMsg()); // Get the converted image.

    // Load camera info file.
    camera_info_manager::CameraInfoManager camrea_info(
        nh, "hik_camera",
        "file:///home/loren/kk-robot-swarm/src/camtoros/config/caminfo.yaml");

    while (nh.ok())
    {
        camerainfo_msg_ = camrea_info.getCameraInfo();
        image_msg_.header.stamp = ros::Time::now();
        image_msg_.header.frame_id = "hik_camera";
        camerainfo_msg_.header.stamp = image_msg_.header.stamp;       // sync timestamp.
        camerainfo_msg_.header.frame_id = image_msg_.header.frame_id; // sync frame.
        camera_pub_.publish(image_msg_, camerainfo_msg_);             // publish
        rate_hz.sleep();
        // calculate the image FPS.
        current_time_ = ros::Time::now();
        consumed_time_ = current_time_.toSec() - last_time_.toSec();
        ROS_INFO("Image FPS: %.2f", 1 / consumed_time_);
        last_time_ = current_time_; // repeat time.
    }
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "camtoros_node");
    ros::NodeHandle nh;
    CamToRos camtoros(nh);
    camtoros.Publisher(nh);
    ros::requestShutdown();
}