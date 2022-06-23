#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "c1_PP_s_heart_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block c1_PP_s_heart/Subsystem/Car Pose Listener/Subscribe
extern SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_c1_PP_s_heart_nav_msgs_Odometry> Sub_c1_PP_s_heart_506;

// For Block c1_PP_s_heart/Subsystem/Command Velocity Publisher/Publish2
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_c1_PP_s_heart_geometry_msgs_Twist> Pub_c1_PP_s_heart_515;

void slros_node_init(int argc, char** argv);

#endif
