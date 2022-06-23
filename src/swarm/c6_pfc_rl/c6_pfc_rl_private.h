//
// File: c6_pfc_rl_private.h
//
// Code generated for Simulink model 'c6_pfc_rl'.
//
// Model version                  : 4.77
// Simulink Coder version         : 9.6 (R2021b) 14-May-2021
// C/C++ source code generated on : Fri Jun 17 10:36:54 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_c6_pfc_rl_private_h_
#define RTW_HEADER_c6_pfc_rl_private_h_
#include "rtwtypes.h"
#include "c6_pfc_rl.h"

extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern void c6_pfc_rl_MedianFilter_Init(DW_MedianFilter_c6_pfc_rl_T *localDW);
extern void c6_pfc_rl_MedianFilter(real_T rtu_0, B_MedianFilter_c6_pfc_rl_T
  *localB, DW_MedianFilter_c6_pfc_rl_T *localDW);
extern void c6_pfc_rl_sensor2vCar(boolean_T rtu_poseNew, const
  SL_Bus_c6_pfc_rl_nav_msgs_Odometry *rtu_poseMsg, real_T *rty_x, real_T *rty_y,
  real_T *rty_yaw, real_T *rty_x_init, real_T *rty_y_init, real_T *rty_yaw_init,
  real_T *rty_flag, B_sensor2vCar_c6_pfc_rl_T *localB,
  DW_sensor2vCar_c6_pfc_rl_T *localDW);
extern void c6_pfc_rl_sensor2vCar4(boolean_T rtu_VW_New, const
  SL_Bus_c6_pfc_rl_geometry_msgs_Twist *rtu_VW_Msg, real_T *rty_V, real_T *rty_W,
  DW_sensor2vCar4_c6_pfc_rl_T *localDW);
extern void c6_pfc_rl_SignalProcess(real_T rtu_pose1, real_T rtu_pose1_c, real_T
  rtu_pose1_p, real_T rtu_pose2, real_T rtu_pose2_n, real_T rtu_pose2_h, real_T
  rtu_leader_linear_vel, real_T rtu_ego_linear_vel, real_T rty_observation[9],
  real_T *rty_obs_flag, DW_SignalProcess_c6_pfc_rl_T *localDW);
extern void c6_pfc_rl_MedianFilter_Term(DW_MedianFilter_c6_pfc_rl_T *localDW);

#endif                                 // RTW_HEADER_c6_pfc_rl_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
