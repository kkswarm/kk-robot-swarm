#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "c6_pfc_rl";

// For Block c6_pfc_rl/Subsystem/Car Pose Listener/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c6_pfc_rl_nav_msgs_Odometry> Sub_c6_pfc_rl_3061;

// For Block c6_pfc_rl/Subsystem/Car Pose Listener/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c6_pfc_rl_geometry_msgs_Twist> Sub_c6_pfc_rl_3062;

// For Block c6_pfc_rl/Subsystem/Car Pose Listener1/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c6_pfc_rl_nav_msgs_Odometry> Sub_c6_pfc_rl_3105;

// For Block c6_pfc_rl/Subsystem/Car Pose Listener1/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c6_pfc_rl_geometry_msgs_Twist> Sub_c6_pfc_rl_3106;

// For Block c6_pfc_rl/Subsystem/Car Pose Listener2/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c6_pfc_rl_nav_msgs_Odometry> Sub_c6_pfc_rl_3149;

// For Block c6_pfc_rl/Subsystem/Car Pose Listener2/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c6_pfc_rl_geometry_msgs_Twist> Sub_c6_pfc_rl_3150;

// For Block c6_pfc_rl/Subsystem/Car Pose Listener3/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c6_pfc_rl_nav_msgs_Odometry> Sub_c6_pfc_rl_3193;

// For Block c6_pfc_rl/Subsystem/Car Pose Listener3/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c6_pfc_rl_geometry_msgs_Twist> Sub_c6_pfc_rl_3194;

// For Block c6_pfc_rl/Subsystem/Car Pose Listener4/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c6_pfc_rl_nav_msgs_Odometry> Sub_c6_pfc_rl_3237;

// For Block c6_pfc_rl/Subsystem/Car Pose Listener4/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c6_pfc_rl_geometry_msgs_Twist> Sub_c6_pfc_rl_3238;

// For Block c6_pfc_rl/Subsystem/Car Pose Listener5/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c6_pfc_rl_nav_msgs_Odometry> Sub_c6_pfc_rl_3281;

// For Block c6_pfc_rl/Subsystem/Car Pose Listener5/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_c6_pfc_rl_geometry_msgs_Twist> Sub_c6_pfc_rl_3282;

// For Block c6_pfc_rl/Subsystem/Command Velocity Publisher/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c6_pfc_rl_geometry_msgs_Twist> Pub_c6_pfc_rl_3329;

// For Block c6_pfc_rl/Subsystem/Command Velocity Publisher1/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c6_pfc_rl_geometry_msgs_Twist> Pub_c6_pfc_rl_3335;

// For Block c6_pfc_rl/Subsystem/Command Velocity Publisher2/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c6_pfc_rl_geometry_msgs_Twist> Pub_c6_pfc_rl_3341;

// For Block c6_pfc_rl/Subsystem/Command Velocity Publisher3/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c6_pfc_rl_geometry_msgs_Twist> Pub_c6_pfc_rl_3347;

// For Block c6_pfc_rl/Subsystem/Command Velocity Publisher4/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c6_pfc_rl_geometry_msgs_Twist> Pub_c6_pfc_rl_3353;

// For Block c6_pfc_rl/Subsystem/Command Velocity Publisher5/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c6_pfc_rl_geometry_msgs_Twist> Pub_c6_pfc_rl_3359;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

