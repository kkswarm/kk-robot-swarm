//
// File: c1_PP_s_heart.h
//
// Code generated for Simulink model 'c1_PP_s_heart'.
//
// Model version                  : 4.15
// Simulink Coder version         : 9.6 (R2021b) 14-May-2021
// C/C++ source code generated on : Thu Apr 14 15:47:35 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_c1_PP_s_heart_h_
#define RTW_HEADER_c1_PP_s_heart_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "c1_PP_s_heart_types.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_c1_PP_s_heart_T {
  real_T waypoints_data[188];
  real_T z[188];                       // '<Root>/MATLAB Function1'
  real_T vwork_data[188];
  real_T b_x_data[188];
  SL_Bus_c1_PP_s_heart_nav_msgs_Odometry In1;// '<S8>/In1'
  SL_Bus_c1_PP_s_heart_nav_msgs_Odometry b_varargout_2;
  int32_T i_data[188];
  int32_T idx_data[188];
  int32_T iwork_data[188];
  real_T ridx_data[94];
  real_T dv[94];
  int32_T f_data[94];
  real_T x[26];
  real_T y[26];
  boolean_T b[188];
  int8_T f_data_m[94];
  SL_Bus_c1_PP_s_heart_geometry_msgs_Twist BusAssignment1;// '<S5>/Bus Assignment1' 
  real_T x4[4];
  real_T TmpSignalConversionAtPurePu[3];
  real_T lookaheadStartPt[2];
  real_T waypoints[2];
  real_T waypoints_c[2];
  real_T waypoints_k[2];
  real_T refPt[2];
  real_T refPt_c[2];
  real_T aSinInput;
  real_T minDistance;
  real_T dist;
  real_T lookaheadIdx;
  real_T lookaheadEndPt_idx_1;
  real_T x_data_idx_0;
  real_T d_data_idx_0;
  real_T eul_idx_0;
  real_T d;
  real_T d1;
  real_T bk;
  real_T b_ak;
  int32_T ridx_size[2];
  int32_T ii;
  int32_T idx;
  int32_T jj;
  int32_T ib_size;
  int32_T c_size;
  int32_T f_size;
  int32_T waypoints_size_idx_0;
  int32_T i;
  int32_T i1;
  int32_T dim;
};

// Block states (default storage) for system '<Root>'
struct DW_c1_PP_s_heart_T {
  nav_slalgs_internal_PurePursu_T obj; // '<S14>/Pure Pursuit'
  nav_slalgs_internal_PurePursu_T obj_a;// '<S3>/Pure Pursuit2'
  ros_slroscpp_internal_block_S_T obj_d;// '<S7>/SourceBlock'
  ros_slroscpp_internal_block_P_T obj_m;// '<S10>/SinkBlock'
};

// Parameters (default storage)
struct P_c1_PP_s_heart_T_ {
  real_T desired_lookahead;            // Variable: desired_lookahead
                                          //  Referenced by:
                                          //    '<S3>/Pure Pursuit2'
                                          //    '<S14>/Pure Pursuit'

  real_T desired_v;                    // Variable: desired_v
                                          //  Referenced by:
                                          //    '<S3>/Pure Pursuit2'
                                          //    '<S14>/Pure Pursuit'

  real_T desired_w;                    // Variable: desired_w
                                          //  Referenced by:
                                          //    '<S3>/Pure Pursuit2'
                                          //    '<S14>/Pure Pursuit'

  real_T ks;                           // Variable: ks
                                          //  Referenced by: '<S2>/Gain'

  SL_Bus_c1_PP_s_heart_nav_msgs_Odometry Out1_Y0;// Computed Parameter: Out1_Y0
                                                    //  Referenced by: '<S8>/Out1'

  SL_Bus_c1_PP_s_heart_nav_msgs_Odometry Constant_Value;// Computed Parameter: Constant_Value
                                                           //  Referenced by: '<S7>/Constant'

  SL_Bus_c1_PP_s_heart_geometry_msgs_Twist Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                               //  Referenced by: '<S9>/Constant'

  real_T MaxAngularVelocity_Value;     // Expression: 1
                                          //  Referenced by: '<S16>/MaxAngularVelocity'

  real_T vw1_Y0;                       // Computed Parameter: vw1_Y0
                                          //  Referenced by: '<S3>/vw1'

  real_T u_Value;                      // Expression: 0
                                          //  Referenced by: '<S12>/1'

  real_T u_Value_d;                    // Expression: 0
                                          //  Referenced by: '<S12>/0'

};

// Real-time Model Data Structure
struct tag_RTM_c1_PP_s_heart_T {
  const char_T * volatile errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_c1_PP_s_heart_T c1_PP_s_heart_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_c1_PP_s_heart_T c1_PP_s_heart_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_c1_PP_s_heart_T c1_PP_s_heart_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void c1_PP_s_heart_initialize(void);
  extern void c1_PP_s_heart_step(void);
  extern void c1_PP_s_heart_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_c1_PP_s_heart_T *const c1_PP_s_heart_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S11>/Slider Gain' : Unused code path elimination
//  Block '<S14>/Dot Product' : Unused code path elimination
//  Block '<S14>/GoalRadius' : Unused code path elimination
//  Block '<S14>/Relational Operator' : Unused code path elimination
//  Block '<S14>/Sqrt' : Unused code path elimination
//  Block '<S14>/Subtract' : Unused code path elimination
//  Block '<S12>/Constant1' : Unused code path elimination


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'c1_PP_s_heart'
//  '<S1>'   : 'c1_PP_s_heart/MATLAB Function1'
//  '<S2>'   : 'c1_PP_s_heart/Subsystem'
//  '<S3>'   : 'c1_PP_s_heart/controller1'
//  '<S4>'   : 'c1_PP_s_heart/Subsystem/Car Pose Listener'
//  '<S5>'   : 'c1_PP_s_heart/Subsystem/Command Velocity Publisher'
//  '<S6>'   : 'c1_PP_s_heart/Subsystem/Car Pose Listener/Conversion'
//  '<S7>'   : 'c1_PP_s_heart/Subsystem/Car Pose Listener/Subscribe'
//  '<S8>'   : 'c1_PP_s_heart/Subsystem/Car Pose Listener/Subscribe/Enabled Subsystem'
//  '<S9>'   : 'c1_PP_s_heart/Subsystem/Command Velocity Publisher/Blank Message'
//  '<S10>'  : 'c1_PP_s_heart/Subsystem/Command Velocity Publisher/Publish2'
//  '<S11>'  : 'c1_PP_s_heart/controller1/Gain (Slider)'
//  '<S12>'  : 'c1_PP_s_heart/controller1/Subsystem1'
//  '<S13>'  : 'c1_PP_s_heart/controller1/Subsystem1/Adjust Velocities to Avoid Obstacles'
//  '<S14>'  : 'c1_PP_s_heart/controller1/Subsystem1/Compute Velocity and Heading for Path following'
//  '<S15>'  : 'c1_PP_s_heart/controller1/Subsystem1/Outputs1'
//  '<S16>'  : 'c1_PP_s_heart/controller1/Subsystem1/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S17>'  : 'c1_PP_s_heart/controller1/Subsystem1/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S18>'  : 'c1_PP_s_heart/controller1/Subsystem1/Compute Velocity and Heading for Path following/ Extract Goal'

#endif                                 // RTW_HEADER_c1_PP_s_heart_h_

//
// File trailer for generated code.
//
// [EOF]
//
