# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "apriltag_ros: 2 messages, 1 services")

set(MSG_I_FLAGS "-Iapriltag_ros:/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg;-Igeometry_msgs:/opt/ros/melodic/share/geometry_msgs/cmake/../msg;-Isensor_msgs:/opt/ros/melodic/share/sensor_msgs/cmake/../msg;-Istd_msgs:/opt/ros/melodic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(apriltag_ros_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetectionArray.msg" NAME_WE)
add_custom_target(_apriltag_ros_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "apriltag_ros" "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetectionArray.msg" "geometry_msgs/PoseWithCovarianceStamped:apriltag_ros/AprilTagDetection:geometry_msgs/Pose:geometry_msgs/PoseWithCovariance:std_msgs/Header:geometry_msgs/Quaternion:geometry_msgs/Point"
)

get_filename_component(_filename "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg" NAME_WE)
add_custom_target(_apriltag_ros_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "apriltag_ros" "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg" "geometry_msgs/PoseWithCovarianceStamped:geometry_msgs/Pose:geometry_msgs/PoseWithCovariance:std_msgs/Header:geometry_msgs/Quaternion:geometry_msgs/Point"
)

get_filename_component(_filename "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/srv/AnalyzeSingleImage.srv" NAME_WE)
add_custom_target(_apriltag_ros_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "apriltag_ros" "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/srv/AnalyzeSingleImage.srv" "apriltag_ros/AprilTagDetectionArray:geometry_msgs/Pose:geometry_msgs/PoseWithCovariance:apriltag_ros/AprilTagDetection:sensor_msgs/CameraInfo:geometry_msgs/PoseWithCovarianceStamped:sensor_msgs/RegionOfInterest:std_msgs/Header:geometry_msgs/Quaternion:geometry_msgs/Point"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(apriltag_ros
  "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetectionArray.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/apriltag_ros
)
_generate_msg_cpp(apriltag_ros
  "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/apriltag_ros
)

### Generating Services
_generate_srv_cpp(apriltag_ros
  "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/srv/AnalyzeSingleImage.srv"
  "${MSG_I_FLAGS}"
  "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetectionArray.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg;/opt/ros/melodic/share/sensor_msgs/cmake/../msg/CameraInfo.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/opt/ros/melodic/share/sensor_msgs/cmake/../msg/RegionOfInterest.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/apriltag_ros
)

### Generating Module File
_generate_module_cpp(apriltag_ros
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/apriltag_ros
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(apriltag_ros_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(apriltag_ros_generate_messages apriltag_ros_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetectionArray.msg" NAME_WE)
add_dependencies(apriltag_ros_generate_messages_cpp _apriltag_ros_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg" NAME_WE)
add_dependencies(apriltag_ros_generate_messages_cpp _apriltag_ros_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/srv/AnalyzeSingleImage.srv" NAME_WE)
add_dependencies(apriltag_ros_generate_messages_cpp _apriltag_ros_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(apriltag_ros_gencpp)
add_dependencies(apriltag_ros_gencpp apriltag_ros_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS apriltag_ros_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(apriltag_ros
  "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetectionArray.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/apriltag_ros
)
_generate_msg_eus(apriltag_ros
  "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/apriltag_ros
)

### Generating Services
_generate_srv_eus(apriltag_ros
  "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/srv/AnalyzeSingleImage.srv"
  "${MSG_I_FLAGS}"
  "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetectionArray.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg;/opt/ros/melodic/share/sensor_msgs/cmake/../msg/CameraInfo.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/opt/ros/melodic/share/sensor_msgs/cmake/../msg/RegionOfInterest.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/apriltag_ros
)

### Generating Module File
_generate_module_eus(apriltag_ros
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/apriltag_ros
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(apriltag_ros_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(apriltag_ros_generate_messages apriltag_ros_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetectionArray.msg" NAME_WE)
add_dependencies(apriltag_ros_generate_messages_eus _apriltag_ros_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg" NAME_WE)
add_dependencies(apriltag_ros_generate_messages_eus _apriltag_ros_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/srv/AnalyzeSingleImage.srv" NAME_WE)
add_dependencies(apriltag_ros_generate_messages_eus _apriltag_ros_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(apriltag_ros_geneus)
add_dependencies(apriltag_ros_geneus apriltag_ros_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS apriltag_ros_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(apriltag_ros
  "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetectionArray.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/apriltag_ros
)
_generate_msg_lisp(apriltag_ros
  "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/apriltag_ros
)

### Generating Services
_generate_srv_lisp(apriltag_ros
  "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/srv/AnalyzeSingleImage.srv"
  "${MSG_I_FLAGS}"
  "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetectionArray.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg;/opt/ros/melodic/share/sensor_msgs/cmake/../msg/CameraInfo.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/opt/ros/melodic/share/sensor_msgs/cmake/../msg/RegionOfInterest.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/apriltag_ros
)

### Generating Module File
_generate_module_lisp(apriltag_ros
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/apriltag_ros
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(apriltag_ros_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(apriltag_ros_generate_messages apriltag_ros_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetectionArray.msg" NAME_WE)
add_dependencies(apriltag_ros_generate_messages_lisp _apriltag_ros_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg" NAME_WE)
add_dependencies(apriltag_ros_generate_messages_lisp _apriltag_ros_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/srv/AnalyzeSingleImage.srv" NAME_WE)
add_dependencies(apriltag_ros_generate_messages_lisp _apriltag_ros_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(apriltag_ros_genlisp)
add_dependencies(apriltag_ros_genlisp apriltag_ros_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS apriltag_ros_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(apriltag_ros
  "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetectionArray.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/apriltag_ros
)
_generate_msg_nodejs(apriltag_ros
  "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/apriltag_ros
)

### Generating Services
_generate_srv_nodejs(apriltag_ros
  "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/srv/AnalyzeSingleImage.srv"
  "${MSG_I_FLAGS}"
  "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetectionArray.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg;/opt/ros/melodic/share/sensor_msgs/cmake/../msg/CameraInfo.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/opt/ros/melodic/share/sensor_msgs/cmake/../msg/RegionOfInterest.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/apriltag_ros
)

### Generating Module File
_generate_module_nodejs(apriltag_ros
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/apriltag_ros
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(apriltag_ros_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(apriltag_ros_generate_messages apriltag_ros_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetectionArray.msg" NAME_WE)
add_dependencies(apriltag_ros_generate_messages_nodejs _apriltag_ros_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg" NAME_WE)
add_dependencies(apriltag_ros_generate_messages_nodejs _apriltag_ros_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/srv/AnalyzeSingleImage.srv" NAME_WE)
add_dependencies(apriltag_ros_generate_messages_nodejs _apriltag_ros_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(apriltag_ros_gennodejs)
add_dependencies(apriltag_ros_gennodejs apriltag_ros_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS apriltag_ros_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(apriltag_ros
  "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetectionArray.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/apriltag_ros
)
_generate_msg_py(apriltag_ros
  "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/apriltag_ros
)

### Generating Services
_generate_srv_py(apriltag_ros
  "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/srv/AnalyzeSingleImage.srv"
  "${MSG_I_FLAGS}"
  "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetectionArray.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg;/opt/ros/melodic/share/sensor_msgs/cmake/../msg/CameraInfo.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/opt/ros/melodic/share/sensor_msgs/cmake/../msg/RegionOfInterest.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/apriltag_ros
)

### Generating Module File
_generate_module_py(apriltag_ros
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/apriltag_ros
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(apriltag_ros_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(apriltag_ros_generate_messages apriltag_ros_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetectionArray.msg" NAME_WE)
add_dependencies(apriltag_ros_generate_messages_py _apriltag_ros_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/msg/AprilTagDetection.msg" NAME_WE)
add_dependencies(apriltag_ros_generate_messages_py _apriltag_ros_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/loren/kk-robot-swarm/src/apriltag_ros/apriltag_ros/srv/AnalyzeSingleImage.srv" NAME_WE)
add_dependencies(apriltag_ros_generate_messages_py _apriltag_ros_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(apriltag_ros_genpy)
add_dependencies(apriltag_ros_genpy apriltag_ros_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS apriltag_ros_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/apriltag_ros)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/apriltag_ros
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(apriltag_ros_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET sensor_msgs_generate_messages_cpp)
  add_dependencies(apriltag_ros_generate_messages_cpp sensor_msgs_generate_messages_cpp)
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(apriltag_ros_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/apriltag_ros)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/apriltag_ros
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(apriltag_ros_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()
if(TARGET sensor_msgs_generate_messages_eus)
  add_dependencies(apriltag_ros_generate_messages_eus sensor_msgs_generate_messages_eus)
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(apriltag_ros_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/apriltag_ros)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/apriltag_ros
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(apriltag_ros_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()
if(TARGET sensor_msgs_generate_messages_lisp)
  add_dependencies(apriltag_ros_generate_messages_lisp sensor_msgs_generate_messages_lisp)
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(apriltag_ros_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/apriltag_ros)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/apriltag_ros
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(apriltag_ros_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()
if(TARGET sensor_msgs_generate_messages_nodejs)
  add_dependencies(apriltag_ros_generate_messages_nodejs sensor_msgs_generate_messages_nodejs)
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(apriltag_ros_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/apriltag_ros)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/apriltag_ros\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/apriltag_ros
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(apriltag_ros_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET sensor_msgs_generate_messages_py)
  add_dependencies(apriltag_ros_generate_messages_py sensor_msgs_generate_messages_py)
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(apriltag_ros_generate_messages_py std_msgs_generate_messages_py)
endif()
