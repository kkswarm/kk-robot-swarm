#include <camera_info_manager/camera_info_manager.h>
#include <ctype.h>
#include <cv_bridge/cv_bridge.h>
#include <image_transport/image_transport.h>
#include <ros/ros.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#include <cmath>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include "camtoros/init_camera.h"

int main(int argc, char** argv) {
  // boost::shared_ptr<camera_info_manager::CameraInfoManager> caminfo;
  ros::init(argc, argv, "image_pub");
  ros::NodeHandle nh;
  image_transport::ImageTransport main_cam_image(nh);
  image_transport::CameraPublisher cam_pub =
      main_cam_image.advertiseCamera("/hik_camera/image_raw", 100);

  sensor_msgs::CameraInfo camerainfo_msg;
  sensor_msgs::Image image_msg;

  cv_bridge::CvImagePtr cv_ptr = boost::make_shared<cv_bridge::CvImage>();
  cv_ptr->encoding = sensor_msgs::image_encodings::MONO8;
  camera_info_manager::CameraInfoManager caminfo(
      nh, "hik_camera",
      "file:///home/amov/kkswarm_ws/src/camtoros/config/caminfo.yaml");

  EnumDevice();
  InitCamera();

  // struct timeval lastTime, currentTime;
  // float consumeTime;
  // gettimeofday(&lastTime, NULL);

  cv::Mat src;

  ros::Rate loop_rate(10);
  double consumeTime;
  ros::Time currentTime, lastTime;
  lastTime = ros::Time::now();

  while (nh.ok()) {
    StartGrabStream(src);

    cv_ptr->image = src;
    image_msg = *(cv_ptr->toImageMsg());
    camerainfo_msg = caminfo.getCameraInfo();
    image_msg.header.stamp = ros::Time::now();
    image_msg.header.frame_id = "hik_camera";
    camerainfo_msg.header.frame_id = image_msg.header.frame_id;
    camerainfo_msg.header.stamp = image_msg.header.stamp;
    cam_pub.publish(image_msg, camerainfo_msg);
    ros::spinOnce();
    // calculate time
    currentTime = ros::Time::now();
    consumeTime = currentTime.toSec() - lastTime.toSec();
    cout << "image fps: " << 1 / consumeTime << "Hz" << endl;
    lastTime = currentTime;
    loop_rate.sleep();
  }

  return 0;
}
