#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "c1_soft_border0516";

// For Block c1_soft_border0516/Subsystem/Car Pose Listener/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c1_soft_border0516_nav_msgs_Odometry> Sub_c1_soft_border0516_781;

// For Block c1_soft_border0516/Subsystem/Command Velocity Publisher/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c1_soft_border0516_geometry_msgs_Twist> Pub_c1_soft_border0516_790;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

