#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "c1_PP_s_heart";

// For Block c1_PP_s_heart/Subsystem/Car Pose Listener/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c1_PP_s_heart_nav_msgs_Odometry> Sub_c1_PP_s_heart_506;

// For Block c1_PP_s_heart/Subsystem/Command Velocity Publisher/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c1_PP_s_heart_geometry_msgs_Twist> Pub_c1_PP_s_heart_515;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

