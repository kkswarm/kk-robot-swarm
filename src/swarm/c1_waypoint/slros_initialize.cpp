#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "c1_waypoint";

// For Block c1_waypoint/Subsystem/Car Pose Listener/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c1_waypoint_nav_msgs_Odometry> Sub_c1_waypoint_330;

// For Block c1_waypoint/Subsystem/Command Velocity Publisher/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c1_waypoint_geometry_msgs_Twist> Pub_c1_waypoint_339;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

