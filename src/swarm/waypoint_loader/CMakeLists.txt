cmake_minimum_required(VERSION 3.0.2)
project(waypoint_loader)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  nav_msgs
  rospy
  std_msgs
  styx_msgs
)
catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES waypoint_loader
#  CATKIN_DEPENDS geometry_msgs nav_msgs rospy std_msgs styx_msgs
#  DEPENDS system_lib
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

catkin_install_python(PROGRAMS
  nodes/waypoint_loader.py
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}  #依赖项，必备
)

#安装rospy相关的一些文件，比如launch文件、param文件等
install(DIRECTORY launch 
	DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)