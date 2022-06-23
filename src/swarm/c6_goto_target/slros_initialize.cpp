#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "c6_goto_target";

// For Block c6_goto_target/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_c6_goto_target_std_msgs_Float64> Sub_c6_goto_target_972;

// For Block c6_goto_target/Subsystem/Car Pose Listener/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c6_goto_target_nav_msgs_Odometry> Sub_c6_goto_target_987;

// For Block c6_goto_target/Subsystem/Car Pose Listener1/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c6_goto_target_nav_msgs_Odometry> Sub_c6_goto_target_994;

// For Block c6_goto_target/Subsystem/Car Pose Listener2/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c6_goto_target_nav_msgs_Odometry> Sub_c6_goto_target_1001;

// For Block c6_goto_target/Subsystem/Car Pose Listener3/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c6_goto_target_nav_msgs_Odometry> Sub_c6_goto_target_1008;

// For Block c6_goto_target/Subsystem/Car Pose Listener4/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c6_goto_target_nav_msgs_Odometry> Sub_c6_goto_target_1015;

// For Block c6_goto_target/Subsystem/Car Pose Listener5/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c6_goto_target_nav_msgs_Odometry> Sub_c6_goto_target_1022;

// For Block c6_goto_target/Subsystem/Command Velocity Publisher/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c6_goto_target_geometry_msgs_Twist> Pub_c6_goto_target_1031;

// For Block c6_goto_target/Subsystem/Command Velocity Publisher1/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c6_goto_target_geometry_msgs_Twist> Pub_c6_goto_target_1038;

// For Block c6_goto_target/Subsystem/Command Velocity Publisher2/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c6_goto_target_geometry_msgs_Twist> Pub_c6_goto_target_1045;

// For Block c6_goto_target/Subsystem/Command Velocity Publisher3/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c6_goto_target_geometry_msgs_Twist> Pub_c6_goto_target_1052;

// For Block c6_goto_target/Subsystem/Command Velocity Publisher4/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c6_goto_target_geometry_msgs_Twist> Pub_c6_goto_target_1059;

// For Block c6_goto_target/Subsystem/Command Velocity Publisher5/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c6_goto_target_geometry_msgs_Twist> Pub_c6_goto_target_1066;

// For Block c6_goto_target/Subsystem/Publish2
SimulinkPublisher<std_msgs::Float64, SL_Bus_c6_goto_target_std_msgs_Float64> Pub_c6_goto_target_1079;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

