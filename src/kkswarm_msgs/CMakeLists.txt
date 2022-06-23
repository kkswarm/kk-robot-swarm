cmake_minimum_required(VERSION 3.0.2)
project(kkswarm_msgs)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  nav_msgs
  roscpp
  sensor_msgs
  std_msgs
  message_generation
)

## Generate messages in the 'msg' folder
add_message_files(
  FILES
  kkSwarmState.msg
  kkSwarmPose.msg
)

generate_messages(
   DEPENDENCIES
   geometry_msgs 
   nav_msgs 
   sensor_msgs
   std_msgs
)

catkin_package(
CATKIN_DEPENDS geometry_msgs nav_msgs roscpp sensor_msgs std_msgs message_runtime
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)