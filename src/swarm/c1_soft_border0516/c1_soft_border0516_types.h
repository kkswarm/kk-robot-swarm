//
// File: c1_soft_border0516_types.h
//
// Code generated for Simulink model 'c1_soft_border0516'.
//
// Model version                  : 4.20
// Simulink Coder version         : 9.6 (R2021b) 14-May-2021
// C/C++ source code generated on : Mon May 16 17:05:17 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_c1_soft_border0516_types_h_
#define RTW_HEADER_c1_soft_border0516_types_h_
#include "rtwtypes.h"

// Model Code Variants
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_c1_soft_border0516_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_c1_soft_border0516_ros_time_Time_

// MsgType=ros_time/Time
struct SL_Bus_c1_soft_border0516_ros_time_Time
{
  real_T Sec;
  real_T Nsec;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

struct SL_Bus_ROSVariableLengthArrayInfo
{
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_c1_soft_border0516_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_c1_soft_border0516_std_msgs_Header_

// MsgType=std_msgs/Header
struct SL_Bus_c1_soft_border0516_std_msgs_Header
{
  uint32_T Seq;

  // MsgType=ros_time/Time
  SL_Bus_c1_soft_border0516_ros_time_Time Stamp;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_c1_soft_border0516_geometry_msgs_Point_
#define DEFINED_TYPEDEF_FOR_SL_Bus_c1_soft_border0516_geometry_msgs_Point_

// MsgType=geometry_msgs/Point
struct SL_Bus_c1_soft_border0516_geometry_msgs_Point
{
  real_T X;
  real_T Y;
  real_T Z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_c1_soft_border0516_geometry_msgs_Quaternion_
#define DEFINED_TYPEDEF_FOR_SL_Bus_c1_soft_border0516_geometry_msgs_Quaternion_

// MsgType=geometry_msgs/Quaternion
struct SL_Bus_c1_soft_border0516_geometry_msgs_Quaternion
{
  real_T X;
  real_T Y;
  real_T Z;
  real_T W;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_c1_soft_border0516_geometry_msgs_Pose_
#define DEFINED_TYPEDEF_FOR_SL_Bus_c1_soft_border0516_geometry_msgs_Pose_

// MsgType=geometry_msgs/Pose
struct SL_Bus_c1_soft_border0516_geometry_msgs_Pose
{
  // MsgType=geometry_msgs/Point
  SL_Bus_c1_soft_border0516_geometry_msgs_Point Position;

  // MsgType=geometry_msgs/Quaternion
  SL_Bus_c1_soft_border0516_geometry_msgs_Quaternion Orientation;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_c1_soft_border0516_geometry_msgs_PoseWithCovariance_
#define DEFINED_TYPEDEF_FOR_SL_Bus_c1_soft_border0516_geometry_msgs_PoseWithCovariance_

// MsgType=geometry_msgs/PoseWithCovariance
struct SL_Bus_c1_soft_border0516_geometry_msgs_PoseWithCovariance
{
  // MsgType=geometry_msgs/Pose
  SL_Bus_c1_soft_border0516_geometry_msgs_Pose Pose;
  real_T Covariance[36];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_c1_soft_border0516_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_c1_soft_border0516_geometry_msgs_Vector3_

// MsgType=geometry_msgs/Vector3
struct SL_Bus_c1_soft_border0516_geometry_msgs_Vector3
{
  real_T X;
  real_T Y;
  real_T Z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_c1_soft_border0516_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_c1_soft_border0516_geometry_msgs_Twist_

// MsgType=geometry_msgs/Twist
struct SL_Bus_c1_soft_border0516_geometry_msgs_Twist
{
  // MsgType=geometry_msgs/Vector3
  SL_Bus_c1_soft_border0516_geometry_msgs_Vector3 Linear;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_c1_soft_border0516_geometry_msgs_Vector3 Angular;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_c1_soft_border0516_geometry_msgs_TwistWithCovariance_
#define DEFINED_TYPEDEF_FOR_SL_Bus_c1_soft_border0516_geometry_msgs_TwistWithCovariance_

// MsgType=geometry_msgs/TwistWithCovariance
struct SL_Bus_c1_soft_border0516_geometry_msgs_TwistWithCovariance
{
  // MsgType=geometry_msgs/Twist
  SL_Bus_c1_soft_border0516_geometry_msgs_Twist Twist;
  real_T Covariance[36];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_c1_soft_border0516_nav_msgs_Odometry_
#define DEFINED_TYPEDEF_FOR_SL_Bus_c1_soft_border0516_nav_msgs_Odometry_

// MsgType=nav_msgs/Odometry
struct SL_Bus_c1_soft_border0516_nav_msgs_Odometry
{
  // MsgType=std_msgs/Header
  SL_Bus_c1_soft_border0516_std_msgs_Header Header;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=ChildFrameId_SL_Info:TruncateAction=warn 
  uint8_T ChildFrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=ChildFrameId
  SL_Bus_ROSVariableLengthArrayInfo ChildFrameId_SL_Info;

  // MsgType=geometry_msgs/PoseWithCovariance
  SL_Bus_c1_soft_border0516_geometry_msgs_PoseWithCovariance Pose;

  // MsgType=geometry_msgs/TwistWithCovariance
  SL_Bus_c1_soft_border0516_geometry_msgs_TwistWithCovariance Twist;
};

#endif

#ifndef struct_ros_slroscpp_internal_block_S_T
#define struct_ros_slroscpp_internal_block_S_T

struct ros_slroscpp_internal_block_S_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slroscpp_internal_block_S_T

#ifndef struct_ros_slroscpp_internal_block_P_T
#define struct_ros_slroscpp_internal_block_P_T

struct ros_slroscpp_internal_block_P_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slroscpp_internal_block_P_T

// Parameters (default storage)
typedef struct P_c1_soft_border0516_T_ P_c1_soft_border0516_T;

// Forward declaration for rtModel
typedef struct tag_RTM_c1_soft_border0516_T RT_MODEL_c1_soft_border0516_T;

#endif                                // RTW_HEADER_c1_soft_border0516_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
