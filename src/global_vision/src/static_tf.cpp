#include <geometry_msgs/TransformStamped.h>
#include <ros/ros.h>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_ros/static_transform_broadcaster.h>

#include <cstdio>

#include "global_vision/odomPub.hpp"
#include "kkswarm_msgs/kkSwarmPose.h"
#include "kkswarm_msgs/kkSwarmState.h"

using namespace std;

odomPub::odomPub() {
  ros::NodeHandle nh_private("~");
  // ros::NodeHandle nh;

  int car_num = 1;  // initialize

  nh_private.param("car_num", car_num, 6);

  cout << "car_num: " << car_num << endl;

  static tf2_ros::StaticTransformBroadcaster map2odom_broadcaster;
  static tf2_ros::StaticTransformBroadcaster tag2base_link_broadcaster;
  geometry_msgs::TransformStamped map2odom_transformStamped;
  geometry_msgs::TransformStamped tag2base_link_transformStamped;

  // ros::Rate pubRate(10);

  for (int i = 0; i < car_num; i++) {
    string tf_odom = odomTfNameGenerate(i);
    map2odom_transformStamped.header.stamp = ros::Time::now();
    map2odom_transformStamped.header.frame_id = "map";
    map2odom_transformStamped.child_frame_id = tf_odom;
    map2odom_transformStamped.transform.translation.x = 0;
    map2odom_transformStamped.transform.translation.y = 0;
    map2odom_transformStamped.transform.translation.z = 0;
    map2odom_transformStamped.transform.rotation.x = 0;
    map2odom_transformStamped.transform.rotation.y = 0;
    map2odom_transformStamped.transform.rotation.z = 0;
    map2odom_transformStamped.transform.rotation.w = 1;

    // Publish
    map2odom_broadcaster.sendTransform(map2odom_transformStamped);

    string tf_tag = tagTfNameGenerate(i);
    string tf_base = baseLinkTfNameGenerate(i);
    tag2base_link_transformStamped.header.stamp = ros::Time::now();
    tag2base_link_transformStamped.header.frame_id = tf_base;
    tag2base_link_transformStamped.child_frame_id = tf_tag;
    tag2base_link_transformStamped.transform.translation.x = 0;
    tag2base_link_transformStamped.transform.translation.y = 0;
    tag2base_link_transformStamped.transform.translation.z = 0;
    tag2base_link_transformStamped.transform.rotation.x = 0;
    tag2base_link_transformStamped.transform.rotation.y = 0;
    tag2base_link_transformStamped.transform.rotation.z = 0;
    tag2base_link_transformStamped.transform.rotation.w = 1;

    // publish
    tag2base_link_broadcaster.sendTransform(tag2base_link_transformStamped);
  }
}

int main(int argc, char **argv) {
  ros::init(argc, argv, "static_tf");

  odomPub OP;

  ros::spin();

  return 0;
}