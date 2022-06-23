#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "c10_wp_snake";

// For Block c10_wp_snake/Subsystem/Car Pose Listener/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c10_wp_snake_nav_msgs_Odometry> Sub_c10_wp_snake_6712;

// For Block c10_wp_snake/Subsystem/Car Pose Listener/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c10_wp_snake_geometry_msgs_Twist> Sub_c10_wp_snake_6713;

// For Block c10_wp_snake/Subsystem/Car Pose Listener1/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c10_wp_snake_nav_msgs_Odometry> Sub_c10_wp_snake_6756;

// For Block c10_wp_snake/Subsystem/Car Pose Listener1/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c10_wp_snake_geometry_msgs_Twist> Sub_c10_wp_snake_6757;

// For Block c10_wp_snake/Subsystem/Car Pose Listener2/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c10_wp_snake_nav_msgs_Odometry> Sub_c10_wp_snake_6800;

// For Block c10_wp_snake/Subsystem/Car Pose Listener2/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c10_wp_snake_geometry_msgs_Twist> Sub_c10_wp_snake_6801;

// For Block c10_wp_snake/Subsystem/Car Pose Listener3/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c10_wp_snake_nav_msgs_Odometry> Sub_c10_wp_snake_6844;

// For Block c10_wp_snake/Subsystem/Car Pose Listener3/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c10_wp_snake_geometry_msgs_Twist> Sub_c10_wp_snake_6845;

// For Block c10_wp_snake/Subsystem/Car Pose Listener4/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c10_wp_snake_nav_msgs_Odometry> Sub_c10_wp_snake_6888;

// For Block c10_wp_snake/Subsystem/Car Pose Listener4/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c10_wp_snake_geometry_msgs_Twist> Sub_c10_wp_snake_6889;

// For Block c10_wp_snake/Subsystem/Car Pose Listener5/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c10_wp_snake_nav_msgs_Odometry> Sub_c10_wp_snake_6932;

// For Block c10_wp_snake/Subsystem/Car Pose Listener5/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c10_wp_snake_geometry_msgs_Twist> Sub_c10_wp_snake_6933;

// For Block c10_wp_snake/Subsystem/Car Pose Listener6/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c10_wp_snake_nav_msgs_Odometry> Sub_c10_wp_snake_7012;

// For Block c10_wp_snake/Subsystem/Car Pose Listener6/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c10_wp_snake_geometry_msgs_Twist> Sub_c10_wp_snake_7013;

// For Block c10_wp_snake/Subsystem/Car Pose Listener7/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c10_wp_snake_nav_msgs_Odometry> Sub_c10_wp_snake_7062;

// For Block c10_wp_snake/Subsystem/Car Pose Listener7/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c10_wp_snake_geometry_msgs_Twist> Sub_c10_wp_snake_7063;

// For Block c10_wp_snake/Subsystem/Car Pose Listener8/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c10_wp_snake_nav_msgs_Odometry> Sub_c10_wp_snake_7112;

// For Block c10_wp_snake/Subsystem/Car Pose Listener8/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c10_wp_snake_geometry_msgs_Twist> Sub_c10_wp_snake_7113;

// For Block c10_wp_snake/Subsystem/Car Pose Listener9/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c10_wp_snake_nav_msgs_Odometry> Sub_c10_wp_snake_7162;

// For Block c10_wp_snake/Subsystem/Car Pose Listener9/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c10_wp_snake_geometry_msgs_Twist> Sub_c10_wp_snake_7163;

// For Block c10_wp_snake/Subsystem/Command Velocity Publisher/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c10_wp_snake_geometry_msgs_Twist> Pub_c10_wp_snake_6980;

// For Block c10_wp_snake/Subsystem/Command Velocity Publisher1/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c10_wp_snake_geometry_msgs_Twist> Pub_c10_wp_snake_6986;

// For Block c10_wp_snake/Subsystem/Command Velocity Publisher2/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c10_wp_snake_geometry_msgs_Twist> Pub_c10_wp_snake_6992;

// For Block c10_wp_snake/Subsystem/Command Velocity Publisher3/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c10_wp_snake_geometry_msgs_Twist> Pub_c10_wp_snake_6998;

// For Block c10_wp_snake/Subsystem/Command Velocity Publisher4/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c10_wp_snake_geometry_msgs_Twist> Pub_c10_wp_snake_7004;

// For Block c10_wp_snake/Subsystem/Command Velocity Publisher5/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c10_wp_snake_geometry_msgs_Twist> Pub_c10_wp_snake_7010;

// For Block c10_wp_snake/Subsystem/Command Velocity Publisher6/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c10_wp_snake_geometry_msgs_Twist> Pub_c10_wp_snake_7060;

// For Block c10_wp_snake/Subsystem/Command Velocity Publisher7/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c10_wp_snake_geometry_msgs_Twist> Pub_c10_wp_snake_7110;

// For Block c10_wp_snake/Subsystem/Command Velocity Publisher8/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c10_wp_snake_geometry_msgs_Twist> Pub_c10_wp_snake_7160;

// For Block c10_wp_snake/Subsystem/Command Velocity Publisher9/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c10_wp_snake_geometry_msgs_Twist> Pub_c10_wp_snake_7210;

// For Block c10_wp_snake/Subsystem/Publish2
SimulinkPublisher<std_msgs::Float64, SL_Bus_c10_wp_snake_std_msgs_Float64> Pub_c10_wp_snake_5793;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

