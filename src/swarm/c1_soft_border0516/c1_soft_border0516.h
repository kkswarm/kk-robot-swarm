//
// File: c1_soft_border0516.h
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
#ifndef RTW_HEADER_c1_soft_border0516_h_
#define RTW_HEADER_c1_soft_border0516_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "c1_soft_border0516_types.h"
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
struct B_c1_soft_border0516_T {
  SL_Bus_c1_soft_border0516_nav_msgs_Odometry In1;// '<S7>/In1'
  SL_Bus_c1_soft_border0516_nav_msgs_Odometry b_varargout_2;
  SL_Bus_c1_soft_border0516_geometry_msgs_Twist BusAssignment1;// '<S4>/Bus Assignment1' 
  real_T aSinInput;
  real_T yaw;
  real_T vx;
  real_T vy;
};

// Block states (default storage) for system '<Root>'
struct DW_c1_soft_border0516_T {
  ros_slroscpp_internal_block_S_T obj; // '<S6>/SourceBlock'
  ros_slroscpp_internal_block_P_T obj_p;// '<S9>/SinkBlock'
  real_T avoid_vel[2];              // '<S2>/在此修改航路点初始值，默认为[0.0]'
  real_T border_flag;              // '<S2>/在此修改航路点初始值，默认为[0.0]1'
  uint32_T method;                     // '<S2>/MATLAB Function'
  uint32_T state;                      // '<S2>/MATLAB Function'
  uint32_T state_e[2];                 // '<S2>/MATLAB Function'
  uint32_T state_l[625];               // '<S2>/MATLAB Function'
};

// Parameters (default storage)
struct P_c1_soft_border0516_T_ {
  real_T ks;                           // Variable: ks
                                          //  Referenced by: '<S1>/Gain'

  SL_Bus_c1_soft_border0516_nav_msgs_Odometry Out1_Y0;// Computed Parameter: Out1_Y0
                                                         //  Referenced by: '<S7>/Out1'

  SL_Bus_c1_soft_border0516_nav_msgs_Odometry Constant_Value;// Computed Parameter: Constant_Value
                                                                //  Referenced by: '<S6>/Constant'

  SL_Bus_c1_soft_border0516_geometry_msgs_Twist Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                                    //  Referenced by: '<S8>/Constant'

  real_T border_paras_paras_Value[4];  // Expression:  [0, 2, 0, 2]
                                          //  Referenced by: '<S2>/border_paras_paras'

  real_T border_dist_Value;            // Expression:  [0.3]
                                          //  Referenced by: '<S2>/border_dist'

  real_T linear_vel_Value;             // Expression:  [0.2]
                                          //  Referenced by: '<S2>/linear_vel'

  real_T u0_InitialValue[2];           // Expression: [0.0,0.0]
                                          //  Referenced by: '<S2>/在此修改航路点初始值，默认为[0.0]'

  real_T u01_InitialValue;             // Expression: [0]
                                          //  Referenced by: '<S2>/在此修改航路点初始值，默认为[0.0]1'

  real_T Gain_Gain;                    // Expression: -1
                                          //  Referenced by: '<Root>/Gain'

};

// Real-time Model Data Structure
struct tag_RTM_c1_soft_border0516_T {
  const char_T * volatile errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_c1_soft_border0516_T c1_soft_border0516_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_c1_soft_border0516_T c1_soft_border0516_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_c1_soft_border0516_T c1_soft_border0516_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void c1_soft_border0516_initialize(void);
  extern void c1_soft_border0516_step(void);
  extern void c1_soft_border0516_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_c1_soft_border0516_T *const c1_soft_border0516_M;

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
//  '<Root>' : 'c1_soft_border0516'
//  '<S1>'   : 'c1_soft_border0516/Subsystem'
//  '<S2>'   : 'c1_soft_border0516/Subsystem2'
//  '<S3>'   : 'c1_soft_border0516/Subsystem/Car Pose Listener'
//  '<S4>'   : 'c1_soft_border0516/Subsystem/Command Velocity Publisher'
//  '<S5>'   : 'c1_soft_border0516/Subsystem/Car Pose Listener/Conversion'
//  '<S6>'   : 'c1_soft_border0516/Subsystem/Car Pose Listener/Subscribe'
//  '<S7>'   : 'c1_soft_border0516/Subsystem/Car Pose Listener/Subscribe/Enabled Subsystem'
//  '<S8>'   : 'c1_soft_border0516/Subsystem/Command Velocity Publisher/Blank Message'
//  '<S9>'   : 'c1_soft_border0516/Subsystem/Command Velocity Publisher/Publish2'
//  '<S10>'  : 'c1_soft_border0516/Subsystem2/MATLAB Function'

#endif                                 // RTW_HEADER_c1_soft_border0516_h_

//
// File trailer for generated code.
//
// [EOF]
//
