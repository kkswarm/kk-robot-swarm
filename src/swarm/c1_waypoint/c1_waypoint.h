//
// File: c1_waypoint.h
//
// Code generated for Simulink model 'c1_waypoint'.
//
// Model version                  : 4.12
// Simulink Coder version         : 9.6 (R2021b) 14-May-2021
// C/C++ source code generated on : Sat Apr  2 17:22:39 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_c1_waypoint_h_
#define RTW_HEADER_c1_waypoint_h_
#include <math.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "c1_waypoint_types.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_c1_waypoint_T {
  SL_Bus_c1_waypoint_nav_msgs_Odometry In1;// '<S7>/In1'
  SL_Bus_c1_waypoint_nav_msgs_Odometry b_varargout_2;
  SL_Bus_c1_waypoint_geometry_msgs_Twist BusAssignment1;// '<S4>/Bus Assignment1' 
  real_T TmpSignalConversionAtSFunctionI[3];
  real_T v;                            // '<S2>/Waypoint Tracking Logic'
  real_T w;                            // '<S2>/Waypoint Tracking Logic'
  real_T aSinInput;
  real_T angle;
  real_T y_idx_1;
  real_T y_idx_2;
  real_T x_data_idx_0;
  real_T d_data_idx_0;
};

// Block states (default storage) for system '<Root>'
struct DW_c1_waypoint_T {
  ros_slroscpp_internal_block_S_T obj; // '<S6>/SourceBlock'
  ros_slroscpp_internal_block_P_T obj_m;// '<S9>/SinkBlock'
  real_T range;                        // '<S2>/Waypoint Tracking Logic'
  real_T idx;                          // '<S2>/Waypoint Tracking Logic'
  real_T numPts;                       // '<S2>/Waypoint Tracking Logic'
  real_T goalPoint[2];                 // '<S2>/Waypoint Tracking Logic'
  uint8_T is_active_c1_c1_waypoint;    // '<S2>/Waypoint Tracking Logic'
  uint8_T is_c1_c1_waypoint;           // '<S2>/Waypoint Tracking Logic'
};

// Parameters (default storage)
struct P_c1_waypoint_T_ {
  real_T WAY_P[64];                    // Variable: WAY_P
                                          //  Referenced by: '<S2>/Constant2'

  real_T ks;                           // Variable: ks
                                          //  Referenced by: '<S1>/Gain'

  SL_Bus_c1_waypoint_nav_msgs_Odometry Out1_Y0;// Computed Parameter: Out1_Y0
                                                  //  Referenced by: '<S7>/Out1'

  SL_Bus_c1_waypoint_nav_msgs_Odometry Constant_Value;// Computed Parameter: Constant_Value
                                                         //  Referenced by: '<S6>/Constant'

  SL_Bus_c1_waypoint_geometry_msgs_Twist Constant_Value_c;// Computed Parameter: Constant_Value_c
                                                             //  Referenced by: '<S8>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_c1_waypoint_T {
  const char_T * volatile errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_c1_waypoint_T c1_waypoint_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_c1_waypoint_T c1_waypoint_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_c1_waypoint_T c1_waypoint_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void c1_waypoint_initialize(void);
  extern void c1_waypoint_step(void);
  extern void c1_waypoint_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_c1_waypoint_T *const c1_waypoint_M;

#ifdef __cplusplus

}
#endif

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
//  '<Root>' : 'c1_waypoint'
//  '<S1>'   : 'c1_waypoint/Subsystem'
//  '<S2>'   : 'c1_waypoint/controller'
//  '<S3>'   : 'c1_waypoint/Subsystem/Car Pose Listener'
//  '<S4>'   : 'c1_waypoint/Subsystem/Command Velocity Publisher'
//  '<S5>'   : 'c1_waypoint/Subsystem/Car Pose Listener/Conversion'
//  '<S6>'   : 'c1_waypoint/Subsystem/Car Pose Listener/Subscribe'
//  '<S7>'   : 'c1_waypoint/Subsystem/Car Pose Listener/Subscribe/Enabled Subsystem'
//  '<S8>'   : 'c1_waypoint/Subsystem/Command Velocity Publisher/Blank Message'
//  '<S9>'   : 'c1_waypoint/Subsystem/Command Velocity Publisher/Publish2'
//  '<S10>'  : 'c1_waypoint/controller/Waypoint Tracking Logic'

#endif                                 // RTW_HEADER_c1_waypoint_h_

//
// File trailer for generated code.
//
// [EOF]
//
