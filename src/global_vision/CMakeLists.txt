cmake_minimum_required(VERSION 3.0.2)
project(global_vision)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11 -march=native -O3)


find_package(catkin REQUIRED COMPONENTS
  roscpp
  geometry_msgs
  tf
  nav_msgs
  std_msgs
  message_generation
  kkswarm_msgs
)

## System dependencies are found with CMake's conventions
find_package(Boost REQUIRED COMPONENTS system)
find_package(OpenCV REQUIRED)
message(STATUS "version: ${OpenCV_VERSION}")

catkin_package(
  INCLUDE_DIRS include
  CATKIN_DEPENDS 
  roscpp
  geometry_msgs
  tf
  nav_msgs
  std_msgs
  message_runtime
  kkswarm_msgs
)


include_directories(
  include
  ${catkin_INCLUDE_DIRS}
  ${OpenCV_INCLUDE_DIRS}
)

set(THIRD_PARTY_LIBS
    ${OpenCV_LIBS}
    ${catkin_LIBS}
  	#MvCameraControl
)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(odometryPub src/odomPub.cpp)

add_dependencies(odometryPub 
                 ${${PROJECT_NAME}_EXPORTED_TARGETS} 
                 ${catkin_EXPORTED_TARGETS}
)

target_link_libraries(odometryPub 
                      ${OpenCV_LIBS} 
                      ${catkin_LIBS} 
                      ${catkin_LIBRARIES}
)

add_executable(stop src/stop.cpp)
target_link_libraries(stop ${catkin_LIBRARIES})


add_executable(static_tf src/static_tf.cpp)
add_dependencies(static_tf
                 ${${PROJECT_NAME}_EXPORTED_TARGETS} 
                 ${catkin_EXPORTED_TARGETS}
)

target_link_libraries(static_tf 
                      ${OpenCV_LIBS} 
                      ${catkin_LIBS} 
                      ${catkin_LIBRARIES}
)