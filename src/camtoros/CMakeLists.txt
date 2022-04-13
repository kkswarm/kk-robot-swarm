cmake_minimum_required(VERSION 3.0.2)
project(camtoros)

find_package(catkin REQUIRED COMPONENTS
  cv_bridge
  image_transport
  roscpp
  sensor_msgs
  std_msgs
  OpenCV REQUIRED
  camera_info_manager
  tf
  geometry_msgs
)

catkin_package(
   INCLUDE_DIRS include
#  LIBRARIES camtoros
#  CATKIN_DEPENDS cv_bridge image_transport roscpp sensor_msgs std_msgs
)


include_directories(
  ${catkin_INCLUDE_DIRS}
  ${PROJECT_SOURCE_DIR}/include
  "/opt/MVS/include/"
)

# 海康相机驱动库
link_directories(
  ${PROJECT_SOURCE_DIR}/libs
  "/opt/MVS/lib/64/"
)

set(THIRD_PARTY_LIBS
    ${OpenCV_LIBS}
  	MvCameraControl
)

add_executable(camtoros src/camtoros.cpp)
target_link_libraries(camtoros 
                      ${catkin_LIBRARIES} 
                      ${THIRD_PARTY_LIBS} 
                      GlobalVisionROSLibrary
)

add_subdirectory(init)
