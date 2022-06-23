#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "c6_formation_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block c6_formation/Subsystem/Car Pose Listener/Subscribe
extern SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c6_formation_nav_msgs_Odometry> Sub_c6_formation_2819;

// For Block c6_formation/Subsystem/Car Pose Listener/Subscribe1
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c6_formation_geometry_msgs_Twist> Sub_c6_formation_3052;

// For Block c6_formation/Subsystem/Car Pose Listener1/Subscribe
extern SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c6_formation_nav_msgs_Odometry> Sub_c6_formation_2824;

// For Block c6_formation/Subsystem/Car Pose Listener1/Subscribe1
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c6_formation_geometry_msgs_Twist> Sub_c6_formation_3138;

// For Block c6_formation/Subsystem/Car Pose Listener2/Subscribe
extern SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c6_formation_nav_msgs_Odometry> Sub_c6_formation_2829;

// For Block c6_formation/Subsystem/Car Pose Listener2/Subscribe1
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c6_formation_geometry_msgs_Twist> Sub_c6_formation_3139;

// For Block c6_formation/Subsystem/Car Pose Listener3/Subscribe
extern SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c6_formation_nav_msgs_Odometry> Sub_c6_formation_2834;

// For Block c6_formation/Subsystem/Car Pose Listener3/Subscribe1
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c6_formation_geometry_msgs_Twist> Sub_c6_formation_3180;

// For Block c6_formation/Subsystem/Car Pose Listener4/Subscribe
extern SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c6_formation_nav_msgs_Odometry> Sub_c6_formation_2839;

// For Block c6_formation/Subsystem/Car Pose Listener4/Subscribe1
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c6_formation_geometry_msgs_Twist> Sub_c6_formation_3221;

// For Block c6_formation/Subsystem/Car Pose Listener5/Subscribe
extern SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c6_formation_nav_msgs_Odometry> Sub_c6_formation_2844;

// For Block c6_formation/Subsystem/Car Pose Listener5/Subscribe1
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c6_formation_geometry_msgs_Twist> Sub_c6_formation_3262;

// For Block c6_formation/Subsystem/Command Velocity Publisher/Publish2
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c6_formation_geometry_msgs_Twist> Pub_c6_formation_2852;

// For Block c6_formation/Subsystem/Command Velocity Publisher1/Publish2
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c6_formation_geometry_msgs_Twist> Pub_c6_formation_2858;

// For Block c6_formation/Subsystem/Command Velocity Publisher2/Publish2
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c6_formation_geometry_msgs_Twist> Pub_c6_formation_2864;

// For Block c6_formation/Subsystem/Command Velocity Publisher3/Publish2
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c6_formation_geometry_msgs_Twist> Pub_c6_formation_2870;

// For Block c6_formation/Subsystem/Command Velocity Publisher4/Publish2
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c6_formation_geometry_msgs_Twist> Pub_c6_formation_2876;

// For Block c6_formation/Subsystem/Command Velocity Publisher5/Publish2
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c6_formation_geometry_msgs_Twist> Pub_c6_formation_2882;

void slros_node_init(int argc, char** argv);

#endif
