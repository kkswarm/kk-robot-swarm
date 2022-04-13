; Auto-generated. Do not edit!


(cl:in-package apriltag_ros-msg)


;//! \htmlinclude AprilTagDetectionArray.msg.html

(cl:defclass <AprilTagDetectionArray> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (detections
    :reader detections
    :initarg :detections
    :type (cl:vector apriltag_ros-msg:AprilTagDetection)
   :initform (cl:make-array 0 :element-type 'apriltag_ros-msg:AprilTagDetection :initial-element (cl:make-instance 'apriltag_ros-msg:AprilTagDetection))))
)

(cl:defclass AprilTagDetectionArray (<AprilTagDetectionArray>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <AprilTagDetectionArray>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'AprilTagDetectionArray)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name apriltag_ros-msg:<AprilTagDetectionArray> is deprecated: use apriltag_ros-msg:AprilTagDetectionArray instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <AprilTagDetectionArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader apriltag_ros-msg:header-val is deprecated.  Use apriltag_ros-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'detections-val :lambda-list '(m))
(cl:defmethod detections-val ((m <AprilTagDetectionArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader apriltag_ros-msg:detections-val is deprecated.  Use apriltag_ros-msg:detections instead.")
  (detections m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <AprilTagDetectionArray>) ostream)
  "Serializes a message object of type '<AprilTagDetectionArray>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'detections))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'detections))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <AprilTagDetectionArray>) istream)
  "Deserializes a message object of type '<AprilTagDetectionArray>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'detections) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'detections)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'apriltag_ros-msg:AprilTagDetection))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<AprilTagDetectionArray>)))
  "Returns string type for a message object of type '<AprilTagDetectionArray>"
  "apriltag_ros/AprilTagDetectionArray")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'AprilTagDetectionArray)))
  "Returns string type for a message object of type 'AprilTagDetectionArray"
  "apriltag_ros/AprilTagDetectionArray")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<AprilTagDetectionArray>)))
  "Returns md5sum for a message object of type '<AprilTagDetectionArray>"
  "2b6c03434883a5c9897c13b5594dbd91")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'AprilTagDetectionArray)))
  "Returns md5sum for a message object of type 'AprilTagDetectionArray"
  "2b6c03434883a5c9897c13b5594dbd91")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<AprilTagDetectionArray>)))
  "Returns full string definition for message of type '<AprilTagDetectionArray>"
  (cl:format cl:nil "std_msgs/Header header~%AprilTagDetection[] detections~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: apriltag_ros/AprilTagDetection~%# Tag ID(s). If a standalone tag, this is a vector of size 1. If a tag bundle,~%# this is a vector containing the IDs of each tag in the bundle.~%int32[] id~%~%# Tag size(s). If a standalone tag, this is a vector of size 1. If a tag bundle,~%# this is a vector containing the sizes of each tag in the bundle, in the same~%# order as the IDs above.~%float64[] size~%~%# Pose in the camera frame, obtained from homography transform. If a standalone~%# tag, the homography is from the four tag corners. If a tag bundle, the~%# homography is from at least the four corners of one member tag and at most the~%# four corners of all member tags.~%geometry_msgs/PoseWithCovarianceStamped pose~%================================================================================~%MSG: geometry_msgs/PoseWithCovarianceStamped~%# This expresses an estimated pose with a reference coordinate frame and timestamp~%~%Header header~%PoseWithCovariance pose~%~%================================================================================~%MSG: geometry_msgs/PoseWithCovariance~%# This represents a pose in free space with uncertainty.~%~%Pose pose~%~%# Row-major representation of the 6x6 covariance matrix~%# The orientation parameters use a fixed-axis representation.~%# In order, the parameters are:~%# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)~%float64[36] covariance~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'AprilTagDetectionArray)))
  "Returns full string definition for message of type 'AprilTagDetectionArray"
  (cl:format cl:nil "std_msgs/Header header~%AprilTagDetection[] detections~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: apriltag_ros/AprilTagDetection~%# Tag ID(s). If a standalone tag, this is a vector of size 1. If a tag bundle,~%# this is a vector containing the IDs of each tag in the bundle.~%int32[] id~%~%# Tag size(s). If a standalone tag, this is a vector of size 1. If a tag bundle,~%# this is a vector containing the sizes of each tag in the bundle, in the same~%# order as the IDs above.~%float64[] size~%~%# Pose in the camera frame, obtained from homography transform. If a standalone~%# tag, the homography is from the four tag corners. If a tag bundle, the~%# homography is from at least the four corners of one member tag and at most the~%# four corners of all member tags.~%geometry_msgs/PoseWithCovarianceStamped pose~%================================================================================~%MSG: geometry_msgs/PoseWithCovarianceStamped~%# This expresses an estimated pose with a reference coordinate frame and timestamp~%~%Header header~%PoseWithCovariance pose~%~%================================================================================~%MSG: geometry_msgs/PoseWithCovariance~%# This represents a pose in free space with uncertainty.~%~%Pose pose~%~%# Row-major representation of the 6x6 covariance matrix~%# The orientation parameters use a fixed-axis representation.~%# In order, the parameters are:~%# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)~%float64[36] covariance~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <AprilTagDetectionArray>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'detections) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <AprilTagDetectionArray>))
  "Converts a ROS message object to a list"
  (cl:list 'AprilTagDetectionArray
    (cl:cons ':header (header msg))
    (cl:cons ':detections (detections msg))
))
