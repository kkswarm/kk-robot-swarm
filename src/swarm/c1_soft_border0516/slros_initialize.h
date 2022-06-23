#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "c1_soft_border0516_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block c1_soft_border0516/Subsystem/Car Pose Listener/Subscribe
extern SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c1_soft_border0516_nav_msgs_Odometry> Sub_c1_soft_border0516_781;

// For Block c1_soft_border0516/Subsystem/Command Velocity Publisher/Publish2
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c1_soft_border0516_geometry_msgs_Twist> Pub_c1_soft_border0516_790;

void slros_node_init(int argc, char** argv);

#endif
