//
// File: c6_goto_target_types.h
//
// Code generated for Simulink model 'c6_goto_target'.
//
// Model version                  : 4.23
// Simulink Coder version         : 9.6 (R2021b) 14-May-2021
// C/C++ source code generated on : Fri Jun 17 10:09:26 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_c6_goto_target_types_h_
#define RTW_HEADER_c6_goto_target_types_h_
#include "rtwtypes.h"

// Model Code Variants
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_std_msgs_Float64_
#define DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_std_msgs_Float64_

// MsgType=std_msgs/Float64
struct SL_Bus_c6_goto_target_std_msgs_Float64
{
  real_T Data;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_ros_time_Time_

// MsgType=ros_time/Time
struct SL_Bus_c6_goto_target_ros_time_Time
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

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_std_msgs_Header_

// MsgType=std_msgs/Header
struct SL_Bus_c6_goto_target_std_msgs_Header
{
  uint32_T Seq;

  // MsgType=ros_time/Time
  SL_Bus_c6_goto_target_ros_time_Time Stamp;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_geometry_msgs_Point_
#define DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_geometry_msgs_Point_

// MsgType=geometry_msgs/Point
struct SL_Bus_c6_goto_target_geometry_msgs_Point
{
  real_T X;
  real_T Y;
  real_T Z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_geometry_msgs_Quaternion_
#define DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_geometry_msgs_Quaternion_

// MsgType=geometry_msgs/Quaternion
struct SL_Bus_c6_goto_target_geometry_msgs_Quaternion
{
  real_T X;
  real_T Y;
  real_T Z;
  real_T W;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_geometry_msgs_Pose_
#define DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_geometry_msgs_Pose_

// MsgType=geometry_msgs/Pose
struct SL_Bus_c6_goto_target_geometry_msgs_Pose
{
  // MsgType=geometry_msgs/Point
  SL_Bus_c6_goto_target_geometry_msgs_Point Position;

  // MsgType=geometry_msgs/Quaternion
  SL_Bus_c6_goto_target_geometry_msgs_Quaternion Orientation;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_geometry_msgs_PoseWithCovariance_
#define DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_geometry_msgs_PoseWithCovariance_

// MsgType=geometry_msgs/PoseWithCovariance
struct SL_Bus_c6_goto_target_geometry_msgs_PoseWithCovariance
{
  // MsgType=geometry_msgs/Pose
  SL_Bus_c6_goto_target_geometry_msgs_Pose Pose;
  real_T Covariance[36];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_geometry_msgs_Vector3_

// MsgType=geometry_msgs/Vector3
struct SL_Bus_c6_goto_target_geometry_msgs_Vector3
{
  real_T X;
  real_T Y;
  real_T Z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_geometry_msgs_Twist_

// MsgType=geometry_msgs/Twist
struct SL_Bus_c6_goto_target_geometry_msgs_Twist
{
  // MsgType=geometry_msgs/Vector3
  SL_Bus_c6_goto_target_geometry_msgs_Vector3 Linear;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_c6_goto_target_geometry_msgs_Vector3 Angular;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_geometry_msgs_TwistWithCovariance_
#define DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_geometry_msgs_TwistWithCovariance_

// MsgType=geometry_msgs/TwistWithCovariance
struct SL_Bus_c6_goto_target_geometry_msgs_TwistWithCovariance
{
  // MsgType=geometry_msgs/Twist
  SL_Bus_c6_goto_target_geometry_msgs_Twist Twist;
  real_T Covariance[36];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_nav_msgs_Odometry_
#define DEFINED_TYPEDEF_FOR_SL_Bus_c6_goto_target_nav_msgs_Odometry_

// MsgType=nav_msgs/Odometry
struct SL_Bus_c6_goto_target_nav_msgs_Odometry
{
  // MsgType=std_msgs/Header
  SL_Bus_c6_goto_target_std_msgs_Header Header;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=ChildFrameId_SL_Info:TruncateAction=warn 
  uint8_T ChildFrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=ChildFrameId
  SL_Bus_ROSVariableLengthArrayInfo ChildFrameId_SL_Info;

  // MsgType=geometry_msgs/PoseWithCovariance
  SL_Bus_c6_goto_target_geometry_msgs_PoseWithCovariance Pose;

  // MsgType=geometry_msgs/TwistWithCovariance
  SL_Bus_c6_goto_target_geometry_msgs_TwistWithCovariance Twist;
};

#endif

#ifndef struct_cell_wrap_c6_goto_target_T
#define struct_cell_wrap_c6_goto_target_T

struct cell_wrap_c6_goto_target_T
{
  uint32_T f1[8];
};

#endif                                 // struct_cell_wrap_c6_goto_target_T

#ifndef struct_d_cell_wrap_c6_goto_target_T
#define struct_d_cell_wrap_c6_goto_target_T

struct d_cell_wrap_c6_goto_target_T
{
  real_T f1[2];
};

#endif                                 // struct_d_cell_wrap_c6_goto_target_T

#ifndef struct_nav_slalgs_internal_VectorFie_T
#define struct_nav_slalgs_internal_VectorFie_T

struct nav_slalgs_internal_VectorFie_T
{
  int32_T isInitialized;
  cell_wrap_c6_goto_target_T inputVarSize[3];
  real_T NarrowOpeningThreshold;
  real_T DistanceLimits[2];
  real_T RobotRadius;
  real_T SafetyDistance;
  real_T MinTurningRadius;
  real_T TargetDirectionWeight;
  real_T CurrentDirectionWeight;
  real_T PreviousDirectionWeight;
  real_T HistogramThresholds[2];
  real_T PolarObstacleDensity[180];
  boolean_T BinaryHistogram[180];
  boolean_T MaskedHistogram[180];
  real_T PreviousDirection;
  real_T AngularSectorMidPoints[180];
  real_T AngularDifference;
  real_T AngularSectorStartPoints[180];
  real_T AngularLimits[2];
};

#endif                                // struct_nav_slalgs_internal_VectorFie_T

#ifndef struct_emxArray_real_T_c6_goto_targe_T
#define struct_emxArray_real_T_c6_goto_targe_T

struct emxArray_real_T_c6_goto_targe_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                // struct_emxArray_real_T_c6_goto_targe_T

#ifndef struct_nav_slalgs_internal_PurePursu_T
#define struct_nav_slalgs_internal_PurePursu_T

struct nav_slalgs_internal_PurePursu_T
{
  int32_T isInitialized;
  cell_wrap_c6_goto_target_T inputVarSize[2];
  real_T MaxAngularVelocity;
  real_T LookaheadDistance;
  real_T DesiredLinearVelocity;
  real_T ProjectionPoint[2];
  real_T ProjectionLineIndex;
  real_T LookaheadPoint[2];
  real_T LastPose[3];
  real_T WaypointsInternal[2];
};

#endif                                // struct_nav_slalgs_internal_PurePursu_T

// Custom Type definition for MATLAB Function: '<S57>/MATLAB Function'
#ifndef struct_c_matlabshared_autonomous_int_T
#define struct_c_matlabshared_autonomous_int_T

struct c_matlabshared_autonomous_int_T
{
  real_T Resolution;
  real_T GridSize[2];
  real_T GridOriginInLocal[2];
  real_T LocalOriginInWorld[2];
  real_T Width;
  real_T Height;
};

#endif                                // struct_c_matlabshared_autonomous_int_T

#ifndef struct_d_matlabshared_autonomous_int_T
#define struct_d_matlabshared_autonomous_int_T

struct d_matlabshared_autonomous_int_T
{
  real_T Head[2];
  real_T Size[2];
};

#endif                                // struct_d_matlabshared_autonomous_int_T

#ifndef struct_emxArray_int16_T_c6_goto_targ_T
#define struct_emxArray_int16_T_c6_goto_targ_T

struct emxArray_int16_T_c6_goto_targ_T
{
  int16_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                // struct_emxArray_int16_T_c6_goto_targ_T

#ifndef struct_e_matlabshared_autonomous_int_T
#define struct_e_matlabshared_autonomous_int_T

struct e_matlabshared_autonomous_int_T
{
  d_matlabshared_autonomous_int_T *Index;
  emxArray_int16_T_c6_goto_targ_T *Buffer;
};

#endif                                // struct_e_matlabshared_autonomous_int_T

// Custom Type definition for MATLAB Function: '<S57>/MATLAB Function'
#ifndef struct_occupancyMap_c6_goto_target_T
#define struct_occupancyMap_c6_goto_target_T

struct occupancyMap_c6_goto_target_T
{
  c_matlabshared_autonomous_int_T SharedProperties;
  d_matlabshared_autonomous_int_T Index;
  e_matlabshared_autonomous_int_T Buffer;
  int16_T DefaultValueInternal;
  boolean_T HasParent;
  real_T DataSize[2];
  int16_T ProbSatIntLogodds[2];
};

#endif                                 // struct_occupancyMap_c6_goto_target_T

#ifndef struct_emxArray_int32_T_c6_goto_targ_T
#define struct_emxArray_int32_T_c6_goto_targ_T

struct emxArray_int32_T_c6_goto_targ_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                // struct_emxArray_int32_T_c6_goto_targ_T

#ifndef struct_emxArray_boolean_T_c6_goto_ta_T
#define struct_emxArray_boolean_T_c6_goto_ta_T

struct emxArray_boolean_T_c6_goto_ta_T
{
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                // struct_emxArray_boolean_T_c6_goto_ta_T

#ifndef struct_emxArray_real32_T_c6_goto_tar_T
#define struct_emxArray_real32_T_c6_goto_tar_T

struct emxArray_real32_T_c6_goto_tar_T
{
  real32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                // struct_emxArray_real32_T_c6_goto_tar_T

#ifndef struct_emxArray_int8_T_c6_goto_targe_T
#define struct_emxArray_int8_T_c6_goto_targe_T

struct emxArray_int8_T_c6_goto_targe_T
{
  int8_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                // struct_emxArray_int8_T_c6_goto_targe_T

#ifndef struct_cell_wrap_20_c6_goto_target_T
#define struct_cell_wrap_20_c6_goto_target_T

struct cell_wrap_20_c6_goto_target_T
{
  emxArray_real_T_c6_goto_targe_T *f1;
};

#endif                                 // struct_cell_wrap_20_c6_goto_target_T

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

// Parameters for system: '<S58>/Recovery'
typedef struct P_Recovery_c6_goto_target_T_ P_Recovery_c6_goto_target_T;

// Parameters for system: '<S58>/Path Following'
typedef struct P_PathFollowing_c6_goto_targe_T_ P_PathFollowing_c6_goto_targe_T;

// Parameters for system: '<S58>/Vector Field Histogram'
typedef struct P_VectorFieldHistogram_c6_got_T_ P_VectorFieldHistogram_c6_got_T;

// Parameters (default storage)
typedef struct P_c6_goto_target_T_ P_c6_goto_target_T;

// Forward declaration for rtModel
typedef struct tag_RTM_c6_goto_target_T RT_MODEL_c6_goto_target_T;

#endif                                 // RTW_HEADER_c6_goto_target_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
