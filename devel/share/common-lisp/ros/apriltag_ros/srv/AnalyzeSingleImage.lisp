; Auto-generated. Do not edit!


(cl:in-package apriltag_ros-srv)


;//! \htmlinclude AnalyzeSingleImage-request.msg.html

(cl:defclass <AnalyzeSingleImage-request> (roslisp-msg-protocol:ros-message)
  ((full_path_where_to_get_image
    :reader full_path_where_to_get_image
    :initarg :full_path_where_to_get_image
    :type cl:string
    :initform "")
   (full_path_where_to_save_image
    :reader full_path_where_to_save_image
    :initarg :full_path_where_to_save_image
    :type cl:string
    :initform "")
   (camera_info
    :reader camera_info
    :initarg :camera_info
    :type sensor_msgs-msg:CameraInfo
    :initform (cl:make-instance 'sensor_msgs-msg:CameraInfo)))
)

(cl:defclass AnalyzeSingleImage-request (<AnalyzeSingleImage-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <AnalyzeSingleImage-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'AnalyzeSingleImage-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name apriltag_ros-srv:<AnalyzeSingleImage-request> is deprecated: use apriltag_ros-srv:AnalyzeSingleImage-request instead.")))

(cl:ensure-generic-function 'full_path_where_to_get_image-val :lambda-list '(m))
(cl:defmethod full_path_where_to_get_image-val ((m <AnalyzeSingleImage-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader apriltag_ros-srv:full_path_where_to_get_image-val is deprecated.  Use apriltag_ros-srv:full_path_where_to_get_image instead.")
  (full_path_where_to_get_image m))

(cl:ensure-generic-function 'full_path_where_to_save_image-val :lambda-list '(m))
(cl:defmethod full_path_where_to_save_image-val ((m <AnalyzeSingleImage-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader apriltag_ros-srv:full_path_where_to_save_image-val is deprecated.  Use apriltag_ros-srv:full_path_where_to_save_image instead.")
  (full_path_where_to_save_image m))

(cl:ensure-generic-function 'camera_info-val :lambda-list '(m))
(cl:defmethod camera_info-val ((m <AnalyzeSingleImage-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader apriltag_ros-srv:camera_info-val is deprecated.  Use apriltag_ros-srv:camera_info instead.")
  (camera_info m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <AnalyzeSingleImage-request>) ostream)
  "Serializes a message object of type '<AnalyzeSingleImage-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'full_path_where_to_get_image))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'full_path_where_to_get_image))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'full_path_where_to_save_image))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'full_path_where_to_save_image))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'camera_info) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <AnalyzeSingleImage-request>) istream)
  "Deserializes a message object of type '<AnalyzeSingleImage-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'full_path_where_to_get_image) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'full_path_where_to_get_image) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'full_path_where_to_save_image) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'full_path_where_to_save_image) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'camera_info) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<AnalyzeSingleImage-request>)))
  "Returns string type for a service object of type '<AnalyzeSingleImage-request>"
  "apriltag_ros/AnalyzeSingleImageRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'AnalyzeSingleImage-request)))
  "Returns string type for a service object of type 'AnalyzeSingleImage-request"
  "apriltag_ros/AnalyzeSingleImageRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<AnalyzeSingleImage-request>)))
  "Returns md5sum for a message object of type '<AnalyzeSingleImage-request>"
  "d60d994450f73cbdba772751d78c9952")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'AnalyzeSingleImage-request)))
  "Returns md5sum for a message object of type 'AnalyzeSingleImage-request"
  "d60d994450f73cbdba772751d78c9952")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<AnalyzeSingleImage-request>)))
  "Returns full string definition for message of type '<AnalyzeSingleImage-request>"
  (cl:format cl:nil "# Service which takes in:~%#~%#   full_path_to_image : full path to a .jpg image~%#~%# and returns:~%#~%#                 pose : the pose of the tag in the camera frame~%#  tag_detection_image : an image with the detected tag's border highlighted and payload value printed~%~%string full_path_where_to_get_image~%string full_path_where_to_save_image~%sensor_msgs/CameraInfo camera_info~%~%================================================================================~%MSG: sensor_msgs/CameraInfo~%# This message defines meta information for a camera. It should be in a~%# camera namespace on topic \"camera_info\" and accompanied by up to five~%# image topics named:~%#~%#   image_raw - raw data from the camera driver, possibly Bayer encoded~%#   image            - monochrome, distorted~%#   image_color      - color, distorted~%#   image_rect       - monochrome, rectified~%#   image_rect_color - color, rectified~%#~%# The image_pipeline contains packages (image_proc, stereo_image_proc)~%# for producing the four processed image topics from image_raw and~%# camera_info. The meaning of the camera parameters are described in~%# detail at http://www.ros.org/wiki/image_pipeline/CameraInfo.~%#~%# The image_geometry package provides a user-friendly interface to~%# common operations using this meta information. If you want to, e.g.,~%# project a 3d point into image coordinates, we strongly recommend~%# using image_geometry.~%#~%# If the camera is uncalibrated, the matrices D, K, R, P should be left~%# zeroed out. In particular, clients may assume that K[0] == 0.0~%# indicates an uncalibrated camera.~%~%#######################################################################~%#                     Image acquisition info                          #~%#######################################################################~%~%# Time of image acquisition, camera coordinate frame ID~%Header header    # Header timestamp should be acquisition time of image~%                 # Header frame_id should be optical frame of camera~%                 # origin of frame should be optical center of camera~%                 # +x should point to the right in the image~%                 # +y should point down in the image~%                 # +z should point into the plane of the image~%~%~%#######################################################################~%#                      Calibration Parameters                         #~%#######################################################################~%# These are fixed during camera calibration. Their values will be the #~%# same in all messages until the camera is recalibrated. Note that    #~%# self-calibrating systems may \"recalibrate\" frequently.              #~%#                                                                     #~%# The internal parameters can be used to warp a raw (distorted) image #~%# to:                                                                 #~%#   1. An undistorted image (requires D and K)                        #~%#   2. A rectified image (requires D, K, R)                           #~%# The projection matrix P projects 3D points into the rectified image.#~%#######################################################################~%~%# The image dimensions with which the camera was calibrated. Normally~%# this will be the full camera resolution in pixels.~%uint32 height~%uint32 width~%~%# The distortion model used. Supported models are listed in~%# sensor_msgs/distortion_models.h. For most cameras, \"plumb_bob\" - a~%# simple model of radial and tangential distortion - is sufficient.~%string distortion_model~%~%# The distortion parameters, size depending on the distortion model.~%# For \"plumb_bob\", the 5 parameters are: (k1, k2, t1, t2, k3).~%float64[] D~%~%# Intrinsic camera matrix for the raw (distorted) images.~%#     [fx  0 cx]~%# K = [ 0 fy cy]~%#     [ 0  0  1]~%# Projects 3D points in the camera coordinate frame to 2D pixel~%# coordinates using the focal lengths (fx, fy) and principal point~%# (cx, cy).~%float64[9]  K # 3x3 row-major matrix~%~%# Rectification matrix (stereo cameras only)~%# A rotation matrix aligning the camera coordinate system to the ideal~%# stereo image plane so that epipolar lines in both stereo images are~%# parallel.~%float64[9]  R # 3x3 row-major matrix~%~%# Projection/camera matrix~%#     [fx'  0  cx' Tx]~%# P = [ 0  fy' cy' Ty]~%#     [ 0   0   1   0]~%# By convention, this matrix specifies the intrinsic (camera) matrix~%#  of the processed (rectified) image. That is, the left 3x3 portion~%#  is the normal camera intrinsic matrix for the rectified image.~%# It projects 3D points in the camera coordinate frame to 2D pixel~%#  coordinates using the focal lengths (fx', fy') and principal point~%#  (cx', cy') - these may differ from the values in K.~%# For monocular cameras, Tx = Ty = 0. Normally, monocular cameras will~%#  also have R = the identity and P[1:3,1:3] = K.~%# For a stereo pair, the fourth column [Tx Ty 0]' is related to the~%#  position of the optical center of the second camera in the first~%#  camera's frame. We assume Tz = 0 so both cameras are in the same~%#  stereo image plane. The first camera always has Tx = Ty = 0. For~%#  the right (second) camera of a horizontal stereo pair, Ty = 0 and~%#  Tx = -fx' * B, where B is the baseline between the cameras.~%# Given a 3D point [X Y Z]', the projection (x, y) of the point onto~%#  the rectified image is given by:~%#  [u v w]' = P * [X Y Z 1]'~%#         x = u / w~%#         y = v / w~%#  This holds for both images of a stereo pair.~%float64[12] P # 3x4 row-major matrix~%~%~%#######################################################################~%#                      Operational Parameters                         #~%#######################################################################~%# These define the image region actually captured by the camera       #~%# driver. Although they affect the geometry of the output image, they #~%# may be changed freely without recalibrating the camera.             #~%#######################################################################~%~%# Binning refers here to any camera setting which combines rectangular~%#  neighborhoods of pixels into larger \"super-pixels.\" It reduces the~%#  resolution of the output image to~%#  (width / binning_x) x (height / binning_y).~%# The default values binning_x = binning_y = 0 is considered the same~%#  as binning_x = binning_y = 1 (no subsampling).~%uint32 binning_x~%uint32 binning_y~%~%# Region of interest (subwindow of full camera resolution), given in~%#  full resolution (unbinned) image coordinates. A particular ROI~%#  always denotes the same window of pixels on the camera sensor,~%#  regardless of binning settings.~%# The default setting of roi (all values 0) is considered the same as~%#  full resolution (roi.width = width, roi.height = height).~%RegionOfInterest roi~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: sensor_msgs/RegionOfInterest~%# This message is used to specify a region of interest within an image.~%#~%# When used to specify the ROI setting of the camera when the image was~%# taken, the height and width fields should either match the height and~%# width fields for the associated image; or height = width = 0~%# indicates that the full resolution image was captured.~%~%uint32 x_offset  # Leftmost pixel of the ROI~%                 # (0 if the ROI includes the left edge of the image)~%uint32 y_offset  # Topmost pixel of the ROI~%                 # (0 if the ROI includes the top edge of the image)~%uint32 height    # Height of ROI~%uint32 width     # Width of ROI~%~%# True if a distinct rectified ROI should be calculated from the \"raw\"~%# ROI in this message. Typically this should be False if the full image~%# is captured (ROI not used), and True if a subwindow is captured (ROI~%# used).~%bool do_rectify~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'AnalyzeSingleImage-request)))
  "Returns full string definition for message of type 'AnalyzeSingleImage-request"
  (cl:format cl:nil "# Service which takes in:~%#~%#   full_path_to_image : full path to a .jpg image~%#~%# and returns:~%#~%#                 pose : the pose of the tag in the camera frame~%#  tag_detection_image : an image with the detected tag's border highlighted and payload value printed~%~%string full_path_where_to_get_image~%string full_path_where_to_save_image~%sensor_msgs/CameraInfo camera_info~%~%================================================================================~%MSG: sensor_msgs/CameraInfo~%# This message defines meta information for a camera. It should be in a~%# camera namespace on topic \"camera_info\" and accompanied by up to five~%# image topics named:~%#~%#   image_raw - raw data from the camera driver, possibly Bayer encoded~%#   image            - monochrome, distorted~%#   image_color      - color, distorted~%#   image_rect       - monochrome, rectified~%#   image_rect_color - color, rectified~%#~%# The image_pipeline contains packages (image_proc, stereo_image_proc)~%# for producing the four processed image topics from image_raw and~%# camera_info. The meaning of the camera parameters are described in~%# detail at http://www.ros.org/wiki/image_pipeline/CameraInfo.~%#~%# The image_geometry package provides a user-friendly interface to~%# common operations using this meta information. If you want to, e.g.,~%# project a 3d point into image coordinates, we strongly recommend~%# using image_geometry.~%#~%# If the camera is uncalibrated, the matrices D, K, R, P should be left~%# zeroed out. In particular, clients may assume that K[0] == 0.0~%# indicates an uncalibrated camera.~%~%#######################################################################~%#                     Image acquisition info                          #~%#######################################################################~%~%# Time of image acquisition, camera coordinate frame ID~%Header header    # Header timestamp should be acquisition time of image~%                 # Header frame_id should be optical frame of camera~%                 # origin of frame should be optical center of camera~%                 # +x should point to the right in the image~%                 # +y should point down in the image~%                 # +z should point into the plane of the image~%~%~%#######################################################################~%#                      Calibration Parameters                         #~%#######################################################################~%# These are fixed during camera calibration. Their values will be the #~%# same in all messages until the camera is recalibrated. Note that    #~%# self-calibrating systems may \"recalibrate\" frequently.              #~%#                                                                     #~%# The internal parameters can be used to warp a raw (distorted) image #~%# to:                                                                 #~%#   1. An undistorted image (requires D and K)                        #~%#   2. A rectified image (requires D, K, R)                           #~%# The projection matrix P projects 3D points into the rectified image.#~%#######################################################################~%~%# The image dimensions with which the camera was calibrated. Normally~%# this will be the full camera resolution in pixels.~%uint32 height~%uint32 width~%~%# The distortion model used. Supported models are listed in~%# sensor_msgs/distortion_models.h. For most cameras, \"plumb_bob\" - a~%# simple model of radial and tangential distortion - is sufficient.~%string distortion_model~%~%# The distortion parameters, size depending on the distortion model.~%# For \"plumb_bob\", the 5 parameters are: (k1, k2, t1, t2, k3).~%float64[] D~%~%# Intrinsic camera matrix for the raw (distorted) images.~%#     [fx  0 cx]~%# K = [ 0 fy cy]~%#     [ 0  0  1]~%# Projects 3D points in the camera coordinate frame to 2D pixel~%# coordinates using the focal lengths (fx, fy) and principal point~%# (cx, cy).~%float64[9]  K # 3x3 row-major matrix~%~%# Rectification matrix (stereo cameras only)~%# A rotation matrix aligning the camera coordinate system to the ideal~%# stereo image plane so that epipolar lines in both stereo images are~%# parallel.~%float64[9]  R # 3x3 row-major matrix~%~%# Projection/camera matrix~%#     [fx'  0  cx' Tx]~%# P = [ 0  fy' cy' Ty]~%#     [ 0   0   1   0]~%# By convention, this matrix specifies the intrinsic (camera) matrix~%#  of the processed (rectified) image. That is, the left 3x3 portion~%#  is the normal camera intrinsic matrix for the rectified image.~%# It projects 3D points in the camera coordinate frame to 2D pixel~%#  coordinates using the focal lengths (fx', fy') and principal point~%#  (cx', cy') - these may differ from the values in K.~%# For monocular cameras, Tx = Ty = 0. Normally, monocular cameras will~%#  also have R = the identity and P[1:3,1:3] = K.~%# For a stereo pair, the fourth column [Tx Ty 0]' is related to the~%#  position of the optical center of the second camera in the first~%#  camera's frame. We assume Tz = 0 so both cameras are in the same~%#  stereo image plane. The first camera always has Tx = Ty = 0. For~%#  the right (second) camera of a horizontal stereo pair, Ty = 0 and~%#  Tx = -fx' * B, where B is the baseline between the cameras.~%# Given a 3D point [X Y Z]', the projection (x, y) of the point onto~%#  the rectified image is given by:~%#  [u v w]' = P * [X Y Z 1]'~%#         x = u / w~%#         y = v / w~%#  This holds for both images of a stereo pair.~%float64[12] P # 3x4 row-major matrix~%~%~%#######################################################################~%#                      Operational Parameters                         #~%#######################################################################~%# These define the image region actually captured by the camera       #~%# driver. Although they affect the geometry of the output image, they #~%# may be changed freely without recalibrating the camera.             #~%#######################################################################~%~%# Binning refers here to any camera setting which combines rectangular~%#  neighborhoods of pixels into larger \"super-pixels.\" It reduces the~%#  resolution of the output image to~%#  (width / binning_x) x (height / binning_y).~%# The default values binning_x = binning_y = 0 is considered the same~%#  as binning_x = binning_y = 1 (no subsampling).~%uint32 binning_x~%uint32 binning_y~%~%# Region of interest (subwindow of full camera resolution), given in~%#  full resolution (unbinned) image coordinates. A particular ROI~%#  always denotes the same window of pixels on the camera sensor,~%#  regardless of binning settings.~%# The default setting of roi (all values 0) is considered the same as~%#  full resolution (roi.width = width, roi.height = height).~%RegionOfInterest roi~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: sensor_msgs/RegionOfInterest~%# This message is used to specify a region of interest within an image.~%#~%# When used to specify the ROI setting of the camera when the image was~%# taken, the height and width fields should either match the height and~%# width fields for the associated image; or height = width = 0~%# indicates that the full resolution image was captured.~%~%uint32 x_offset  # Leftmost pixel of the ROI~%                 # (0 if the ROI includes the left edge of the image)~%uint32 y_offset  # Topmost pixel of the ROI~%                 # (0 if the ROI includes the top edge of the image)~%uint32 height    # Height of ROI~%uint32 width     # Width of ROI~%~%# True if a distinct rectified ROI should be calculated from the \"raw\"~%# ROI in this message. Typically this should be False if the full image~%# is captured (ROI not used), and True if a subwindow is captured (ROI~%# used).~%bool do_rectify~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <AnalyzeSingleImage-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'full_path_where_to_get_image))
     4 (cl:length (cl:slot-value msg 'full_path_where_to_save_image))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'camera_info))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <AnalyzeSingleImage-request>))
  "Converts a ROS message object to a list"
  (cl:list 'AnalyzeSingleImage-request
    (cl:cons ':full_path_where_to_get_image (full_path_where_to_get_image msg))
    (cl:cons ':full_path_where_to_save_image (full_path_where_to_save_image msg))
    (cl:cons ':camera_info (camera_info msg))
))
;//! \htmlinclude AnalyzeSingleImage-response.msg.html

(cl:defclass <AnalyzeSingleImage-response> (roslisp-msg-protocol:ros-message)
  ((tag_detections
    :reader tag_detections
    :initarg :tag_detections
    :type apriltag_ros-msg:AprilTagDetectionArray
    :initform (cl:make-instance 'apriltag_ros-msg:AprilTagDetectionArray)))
)

(cl:defclass AnalyzeSingleImage-response (<AnalyzeSingleImage-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <AnalyzeSingleImage-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'AnalyzeSingleImage-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name apriltag_ros-srv:<AnalyzeSingleImage-response> is deprecated: use apriltag_ros-srv:AnalyzeSingleImage-response instead.")))

(cl:ensure-generic-function 'tag_detections-val :lambda-list '(m))
(cl:defmethod tag_detections-val ((m <AnalyzeSingleImage-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader apriltag_ros-srv:tag_detections-val is deprecated.  Use apriltag_ros-srv:tag_detections instead.")
  (tag_detections m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <AnalyzeSingleImage-response>) ostream)
  "Serializes a message object of type '<AnalyzeSingleImage-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'tag_detections) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <AnalyzeSingleImage-response>) istream)
  "Deserializes a message object of type '<AnalyzeSingleImage-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'tag_detections) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<AnalyzeSingleImage-response>)))
  "Returns string type for a service object of type '<AnalyzeSingleImage-response>"
  "apriltag_ros/AnalyzeSingleImageResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'AnalyzeSingleImage-response)))
  "Returns string type for a service object of type 'AnalyzeSingleImage-response"
  "apriltag_ros/AnalyzeSingleImageResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<AnalyzeSingleImage-response>)))
  "Returns md5sum for a message object of type '<AnalyzeSingleImage-response>"
  "d60d994450f73cbdba772751d78c9952")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'AnalyzeSingleImage-response)))
  "Returns md5sum for a message object of type 'AnalyzeSingleImage-response"
  "d60d994450f73cbdba772751d78c9952")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<AnalyzeSingleImage-response>)))
  "Returns full string definition for message of type '<AnalyzeSingleImage-response>"
  (cl:format cl:nil "apriltag_ros/AprilTagDetectionArray tag_detections~%~%================================================================================~%MSG: apriltag_ros/AprilTagDetectionArray~%std_msgs/Header header~%AprilTagDetection[] detections~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: apriltag_ros/AprilTagDetection~%# Tag ID(s). If a standalone tag, this is a vector of size 1. If a tag bundle,~%# this is a vector containing the IDs of each tag in the bundle.~%int32[] id~%~%# Tag size(s). If a standalone tag, this is a vector of size 1. If a tag bundle,~%# this is a vector containing the sizes of each tag in the bundle, in the same~%# order as the IDs above.~%float64[] size~%~%# Pose in the camera frame, obtained from homography transform. If a standalone~%# tag, the homography is from the four tag corners. If a tag bundle, the~%# homography is from at least the four corners of one member tag and at most the~%# four corners of all member tags.~%geometry_msgs/PoseWithCovarianceStamped pose~%================================================================================~%MSG: geometry_msgs/PoseWithCovarianceStamped~%# This expresses an estimated pose with a reference coordinate frame and timestamp~%~%Header header~%PoseWithCovariance pose~%~%================================================================================~%MSG: geometry_msgs/PoseWithCovariance~%# This represents a pose in free space with uncertainty.~%~%Pose pose~%~%# Row-major representation of the 6x6 covariance matrix~%# The orientation parameters use a fixed-axis representation.~%# In order, the parameters are:~%# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)~%float64[36] covariance~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'AnalyzeSingleImage-response)))
  "Returns full string definition for message of type 'AnalyzeSingleImage-response"
  (cl:format cl:nil "apriltag_ros/AprilTagDetectionArray tag_detections~%~%================================================================================~%MSG: apriltag_ros/AprilTagDetectionArray~%std_msgs/Header header~%AprilTagDetection[] detections~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: apriltag_ros/AprilTagDetection~%# Tag ID(s). If a standalone tag, this is a vector of size 1. If a tag bundle,~%# this is a vector containing the IDs of each tag in the bundle.~%int32[] id~%~%# Tag size(s). If a standalone tag, this is a vector of size 1. If a tag bundle,~%# this is a vector containing the sizes of each tag in the bundle, in the same~%# order as the IDs above.~%float64[] size~%~%# Pose in the camera frame, obtained from homography transform. If a standalone~%# tag, the homography is from the four tag corners. If a tag bundle, the~%# homography is from at least the four corners of one member tag and at most the~%# four corners of all member tags.~%geometry_msgs/PoseWithCovarianceStamped pose~%================================================================================~%MSG: geometry_msgs/PoseWithCovarianceStamped~%# This expresses an estimated pose with a reference coordinate frame and timestamp~%~%Header header~%PoseWithCovariance pose~%~%================================================================================~%MSG: geometry_msgs/PoseWithCovariance~%# This represents a pose in free space with uncertainty.~%~%Pose pose~%~%# Row-major representation of the 6x6 covariance matrix~%# The orientation parameters use a fixed-axis representation.~%# In order, the parameters are:~%# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)~%float64[36] covariance~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <AnalyzeSingleImage-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'tag_detections))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <AnalyzeSingleImage-response>))
  "Converts a ROS message object to a list"
  (cl:list 'AnalyzeSingleImage-response
    (cl:cons ':tag_detections (tag_detections msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'AnalyzeSingleImage)))
  'AnalyzeSingleImage-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'AnalyzeSingleImage)))
  'AnalyzeSingleImage-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'AnalyzeSingleImage)))
  "Returns string type for a service object of type '<AnalyzeSingleImage>"
  "apriltag_ros/AnalyzeSingleImage")