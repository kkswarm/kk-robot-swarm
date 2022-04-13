// Auto-generated. Do not edit!

// (in-package apriltag_ros.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let sensor_msgs = _finder('sensor_msgs');

//-----------------------------------------------------------

let AprilTagDetectionArray = require('../msg/AprilTagDetectionArray.js');

//-----------------------------------------------------------

class AnalyzeSingleImageRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.full_path_where_to_get_image = null;
      this.full_path_where_to_save_image = null;
      this.camera_info = null;
    }
    else {
      if (initObj.hasOwnProperty('full_path_where_to_get_image')) {
        this.full_path_where_to_get_image = initObj.full_path_where_to_get_image
      }
      else {
        this.full_path_where_to_get_image = '';
      }
      if (initObj.hasOwnProperty('full_path_where_to_save_image')) {
        this.full_path_where_to_save_image = initObj.full_path_where_to_save_image
      }
      else {
        this.full_path_where_to_save_image = '';
      }
      if (initObj.hasOwnProperty('camera_info')) {
        this.camera_info = initObj.camera_info
      }
      else {
        this.camera_info = new sensor_msgs.msg.CameraInfo();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type AnalyzeSingleImageRequest
    // Serialize message field [full_path_where_to_get_image]
    bufferOffset = _serializer.string(obj.full_path_where_to_get_image, buffer, bufferOffset);
    // Serialize message field [full_path_where_to_save_image]
    bufferOffset = _serializer.string(obj.full_path_where_to_save_image, buffer, bufferOffset);
    // Serialize message field [camera_info]
    bufferOffset = sensor_msgs.msg.CameraInfo.serialize(obj.camera_info, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type AnalyzeSingleImageRequest
    let len;
    let data = new AnalyzeSingleImageRequest(null);
    // Deserialize message field [full_path_where_to_get_image]
    data.full_path_where_to_get_image = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [full_path_where_to_save_image]
    data.full_path_where_to_save_image = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [camera_info]
    data.camera_info = sensor_msgs.msg.CameraInfo.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.full_path_where_to_get_image.length;
    length += object.full_path_where_to_save_image.length;
    length += sensor_msgs.msg.CameraInfo.getMessageSize(object.camera_info);
    return length + 8;
  }

  static datatype() {
    // Returns string type for a service object
    return 'apriltag_ros/AnalyzeSingleImageRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'ce260db7e8fcb58cbea397e93c5438a4';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Service which takes in:
    #
    #   full_path_to_image : full path to a .jpg image
    #
    # and returns:
    #
    #                 pose : the pose of the tag in the camera frame
    #  tag_detection_image : an image with the detected tag's border highlighted and payload value printed
    
    string full_path_where_to_get_image
    string full_path_where_to_save_image
    sensor_msgs/CameraInfo camera_info
    
    ================================================================================
    MSG: sensor_msgs/CameraInfo
    # This message defines meta information for a camera. It should be in a
    # camera namespace on topic "camera_info" and accompanied by up to five
    # image topics named:
    #
    #   image_raw - raw data from the camera driver, possibly Bayer encoded
    #   image            - monochrome, distorted
    #   image_color      - color, distorted
    #   image_rect       - monochrome, rectified
    #   image_rect_color - color, rectified
    #
    # The image_pipeline contains packages (image_proc, stereo_image_proc)
    # for producing the four processed image topics from image_raw and
    # camera_info. The meaning of the camera parameters are described in
    # detail at http://www.ros.org/wiki/image_pipeline/CameraInfo.
    #
    # The image_geometry package provides a user-friendly interface to
    # common operations using this meta information. If you want to, e.g.,
    # project a 3d point into image coordinates, we strongly recommend
    # using image_geometry.
    #
    # If the camera is uncalibrated, the matrices D, K, R, P should be left
    # zeroed out. In particular, clients may assume that K[0] == 0.0
    # indicates an uncalibrated camera.
    
    #######################################################################
    #                     Image acquisition info                          #
    #######################################################################
    
    # Time of image acquisition, camera coordinate frame ID
    Header header    # Header timestamp should be acquisition time of image
                     # Header frame_id should be optical frame of camera
                     # origin of frame should be optical center of camera
                     # +x should point to the right in the image
                     # +y should point down in the image
                     # +z should point into the plane of the image
    
    
    #######################################################################
    #                      Calibration Parameters                         #
    #######################################################################
    # These are fixed during camera calibration. Their values will be the #
    # same in all messages until the camera is recalibrated. Note that    #
    # self-calibrating systems may "recalibrate" frequently.              #
    #                                                                     #
    # The internal parameters can be used to warp a raw (distorted) image #
    # to:                                                                 #
    #   1. An undistorted image (requires D and K)                        #
    #   2. A rectified image (requires D, K, R)                           #
    # The projection matrix P projects 3D points into the rectified image.#
    #######################################################################
    
    # The image dimensions with which the camera was calibrated. Normally
    # this will be the full camera resolution in pixels.
    uint32 height
    uint32 width
    
    # The distortion model used. Supported models are listed in
    # sensor_msgs/distortion_models.h. For most cameras, "plumb_bob" - a
    # simple model of radial and tangential distortion - is sufficient.
    string distortion_model
    
    # The distortion parameters, size depending on the distortion model.
    # For "plumb_bob", the 5 parameters are: (k1, k2, t1, t2, k3).
    float64[] D
    
    # Intrinsic camera matrix for the raw (distorted) images.
    #     [fx  0 cx]
    # K = [ 0 fy cy]
    #     [ 0  0  1]
    # Projects 3D points in the camera coordinate frame to 2D pixel
    # coordinates using the focal lengths (fx, fy) and principal point
    # (cx, cy).
    float64[9]  K # 3x3 row-major matrix
    
    # Rectification matrix (stereo cameras only)
    # A rotation matrix aligning the camera coordinate system to the ideal
    # stereo image plane so that epipolar lines in both stereo images are
    # parallel.
    float64[9]  R # 3x3 row-major matrix
    
    # Projection/camera matrix
    #     [fx'  0  cx' Tx]
    # P = [ 0  fy' cy' Ty]
    #     [ 0   0   1   0]
    # By convention, this matrix specifies the intrinsic (camera) matrix
    #  of the processed (rectified) image. That is, the left 3x3 portion
    #  is the normal camera intrinsic matrix for the rectified image.
    # It projects 3D points in the camera coordinate frame to 2D pixel
    #  coordinates using the focal lengths (fx', fy') and principal point
    #  (cx', cy') - these may differ from the values in K.
    # For monocular cameras, Tx = Ty = 0. Normally, monocular cameras will
    #  also have R = the identity and P[1:3,1:3] = K.
    # For a stereo pair, the fourth column [Tx Ty 0]' is related to the
    #  position of the optical center of the second camera in the first
    #  camera's frame. We assume Tz = 0 so both cameras are in the same
    #  stereo image plane. The first camera always has Tx = Ty = 0. For
    #  the right (second) camera of a horizontal stereo pair, Ty = 0 and
    #  Tx = -fx' * B, where B is the baseline between the cameras.
    # Given a 3D point [X Y Z]', the projection (x, y) of the point onto
    #  the rectified image is given by:
    #  [u v w]' = P * [X Y Z 1]'
    #         x = u / w
    #         y = v / w
    #  This holds for both images of a stereo pair.
    float64[12] P # 3x4 row-major matrix
    
    
    #######################################################################
    #                      Operational Parameters                         #
    #######################################################################
    # These define the image region actually captured by the camera       #
    # driver. Although they affect the geometry of the output image, they #
    # may be changed freely without recalibrating the camera.             #
    #######################################################################
    
    # Binning refers here to any camera setting which combines rectangular
    #  neighborhoods of pixels into larger "super-pixels." It reduces the
    #  resolution of the output image to
    #  (width / binning_x) x (height / binning_y).
    # The default values binning_x = binning_y = 0 is considered the same
    #  as binning_x = binning_y = 1 (no subsampling).
    uint32 binning_x
    uint32 binning_y
    
    # Region of interest (subwindow of full camera resolution), given in
    #  full resolution (unbinned) image coordinates. A particular ROI
    #  always denotes the same window of pixels on the camera sensor,
    #  regardless of binning settings.
    # The default setting of roi (all values 0) is considered the same as
    #  full resolution (roi.width = width, roi.height = height).
    RegionOfInterest roi
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    ================================================================================
    MSG: sensor_msgs/RegionOfInterest
    # This message is used to specify a region of interest within an image.
    #
    # When used to specify the ROI setting of the camera when the image was
    # taken, the height and width fields should either match the height and
    # width fields for the associated image; or height = width = 0
    # indicates that the full resolution image was captured.
    
    uint32 x_offset  # Leftmost pixel of the ROI
                     # (0 if the ROI includes the left edge of the image)
    uint32 y_offset  # Topmost pixel of the ROI
                     # (0 if the ROI includes the top edge of the image)
    uint32 height    # Height of ROI
    uint32 width     # Width of ROI
    
    # True if a distinct rectified ROI should be calculated from the "raw"
    # ROI in this message. Typically this should be False if the full image
    # is captured (ROI not used), and True if a subwindow is captured (ROI
    # used).
    bool do_rectify
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new AnalyzeSingleImageRequest(null);
    if (msg.full_path_where_to_get_image !== undefined) {
      resolved.full_path_where_to_get_image = msg.full_path_where_to_get_image;
    }
    else {
      resolved.full_path_where_to_get_image = ''
    }

    if (msg.full_path_where_to_save_image !== undefined) {
      resolved.full_path_where_to_save_image = msg.full_path_where_to_save_image;
    }
    else {
      resolved.full_path_where_to_save_image = ''
    }

    if (msg.camera_info !== undefined) {
      resolved.camera_info = sensor_msgs.msg.CameraInfo.Resolve(msg.camera_info)
    }
    else {
      resolved.camera_info = new sensor_msgs.msg.CameraInfo()
    }

    return resolved;
    }
};

class AnalyzeSingleImageResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.tag_detections = null;
    }
    else {
      if (initObj.hasOwnProperty('tag_detections')) {
        this.tag_detections = initObj.tag_detections
      }
      else {
        this.tag_detections = new AprilTagDetectionArray();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type AnalyzeSingleImageResponse
    // Serialize message field [tag_detections]
    bufferOffset = AprilTagDetectionArray.serialize(obj.tag_detections, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type AnalyzeSingleImageResponse
    let len;
    let data = new AnalyzeSingleImageResponse(null);
    // Deserialize message field [tag_detections]
    data.tag_detections = AprilTagDetectionArray.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += AprilTagDetectionArray.getMessageSize(object.tag_detections);
    return length;
  }

  static datatype() {
    // Returns string type for a service object
    return 'apriltag_ros/AnalyzeSingleImageResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '252b618af4df2baf843a5edd035f3c2c';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    apriltag_ros/AprilTagDetectionArray tag_detections
    
    ================================================================================
    MSG: apriltag_ros/AprilTagDetectionArray
    std_msgs/Header header
    AprilTagDetection[] detections
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    ================================================================================
    MSG: apriltag_ros/AprilTagDetection
    # Tag ID(s). If a standalone tag, this is a vector of size 1. If a tag bundle,
    # this is a vector containing the IDs of each tag in the bundle.
    int32[] id
    
    # Tag size(s). If a standalone tag, this is a vector of size 1. If a tag bundle,
    # this is a vector containing the sizes of each tag in the bundle, in the same
    # order as the IDs above.
    float64[] size
    
    # Pose in the camera frame, obtained from homography transform. If a standalone
    # tag, the homography is from the four tag corners. If a tag bundle, the
    # homography is from at least the four corners of one member tag and at most the
    # four corners of all member tags.
    geometry_msgs/PoseWithCovarianceStamped pose
    ================================================================================
    MSG: geometry_msgs/PoseWithCovarianceStamped
    # This expresses an estimated pose with a reference coordinate frame and timestamp
    
    Header header
    PoseWithCovariance pose
    
    ================================================================================
    MSG: geometry_msgs/PoseWithCovariance
    # This represents a pose in free space with uncertainty.
    
    Pose pose
    
    # Row-major representation of the 6x6 covariance matrix
    # The orientation parameters use a fixed-axis representation.
    # In order, the parameters are:
    # (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
    float64[36] covariance
    
    ================================================================================
    MSG: geometry_msgs/Pose
    # A representation of pose in free space, composed of position and orientation. 
    Point position
    Quaternion orientation
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    ================================================================================
    MSG: geometry_msgs/Quaternion
    # This represents an orientation in free space in quaternion form.
    
    float64 x
    float64 y
    float64 z
    float64 w
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new AnalyzeSingleImageResponse(null);
    if (msg.tag_detections !== undefined) {
      resolved.tag_detections = AprilTagDetectionArray.Resolve(msg.tag_detections)
    }
    else {
      resolved.tag_detections = new AprilTagDetectionArray()
    }

    return resolved;
    }
};

module.exports = {
  Request: AnalyzeSingleImageRequest,
  Response: AnalyzeSingleImageResponse,
  md5sum() { return 'd60d994450f73cbdba772751d78c9952'; },
  datatype() { return 'apriltag_ros/AnalyzeSingleImage'; }
};
