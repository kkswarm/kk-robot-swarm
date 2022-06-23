cmake_minimum_required(VERSION 3.0.2)
project(tcp_communication)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11 -march=native -O3)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  geometry_msgs
  message_generation
  kkswarm_msgs
)

## System dependencies are found with CMake's conventions
find_package(Boost REQUIRED COMPONENTS)
find_package(OpenCV REQUIRED)
message(STATUS "version: ${OpenCV_VERSION}")

catkin_package(
  INCLUDE_DIRS include
  CATKIN_DEPENDS 
  roscpp
  geometry_msgs
  message_runtime
  kkswarm_msgs

)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_executable(tcpDriverNode src/tcpDriverNode.cpp)

add_dependencies(tcpDriverNode 
                 ${${PROJECT_NAME}_EXPORTED_TARGETS}
                 ${catkin_EXPORTED_TARGETS}
)

target_link_libraries(tcpDriverNode -lpthread 
                      ${catkin_LIBS} 
                      ${catkin_LIBRARIES} )