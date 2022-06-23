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
#  INCLUDE_DIRS include
#  LIBRARIES camtoros
#  CATKIN_DEPENDS cv_bridge image_transport roscpp sensor_msgs std_msgs
#  DEPENDS system_lib
)


include_directories(
  ${catkin_INCLUDE_DIRS}
  ${PROJECT_SOURCE_DIR}/include
  "/home/amov/amov_ws/src/camtoros/include/"
  "/opt/MVS/include/"
)

link_directories(
  ${PROJECT_SOURCE_DIR}/libs
  "/opt/MVS/lib/64/"
)

set(THIRD_PARTY_LIBS
    ${OpenCV_LIBS}
  	MvCameraControl
)


add_executable(camtoros src/camtoros.cpp)
target_link_libraries(camtoros ${catkin_LIBRARIES} ${THIRD_PARTY_LIBS} GlobalVisionROSLibrary)

add_subdirectory(init)
