//
// File: c10_wp_snake_private.h
//
// Code generated for Simulink model 'c10_wp_snake'.
//
// Model version                  : 4.40
// Simulink Coder version         : 9.6 (R2021b) 14-May-2021
// C/C++ source code generated on : Tue Jun 21 17:23:41 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_c10_wp_snake_private_h_
#define RTW_HEADER_c10_wp_snake_private_h_
#include "rtwtypes.h"
#include "c10_wp_snake.h"

extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern real_T rt_roundd_snf(real_T u);
extern int32_T div_s32(int32_T numerator, int32_T denominator);
extern int32_T div_s32_sat(int32_T numerator, int32_T denominator);
extern void c10_wp_snake_MedianFilter_Init(DW_MedianFilter_c10_wp_snake_T
  *localDW);
extern void c10_wp_snake_MedianFilter(real_T rtu_0,
  B_MedianFilter_c10_wp_snake_T *localB, DW_MedianFilter_c10_wp_snake_T *localDW);
extern void c10_wp_snake_sensor2vCar_Init(DW_sensor2vCar_c10_wp_snake_T *localDW);
extern void c10_wp_snake_sensor2vCar(boolean_T rtu_poseNew, const
  SL_Bus_c10_wp_snake_nav_msgs_Odometry *rtu_poseMsg, real_T *rty_x, real_T
  *rty_y, real_T *rty_yaw, real_T *rty_x_init, real_T *rty_y_init, real_T
  *rty_yaw_init, real_T *rty_flag, B_sensor2vCar_c10_wp_snake_T *localB,
  DW_sensor2vCar_c10_wp_snake_T *localDW);
extern void c10_wp_snake_sensor2vCar4(boolean_T rtu_VW_New, const
  SL_Bus_c10_wp_snake_geometry_msgs_Twist *rtu_VW_Msg, real_T *rty_V, real_T
  *rty_W, DW_sensor2vCar4_c10_wp_snake_T *localDW);
extern void c10_wp_snake_Recovery(real_T rtu_LinearVelocity, real_T
  rtu_AngularVelocity, real_T *rty_dV, real_T *rty_dW, P_Recovery_c10_wp_snake_T
  *localP);
extern void c10_wp_snake_PathFollowing(real_T rtu_SteeringDirection, real_T
  rtu_AngularVelocity, real_T *rty_dV, real_T *rty_dW,
  P_PathFollowing_c10_wp_snake_T *localP);
extern void c10_w_VectorFieldHistogram_Init(B_VectorFieldHistogram_c10_wp_T
  *localB, DW_VectorFieldHistogram_c10_w_T *localDW,
  P_VectorFieldHistogram_c10_wp_T *localP);
extern void c10_wp_sna_VectorFieldHistogram(const real_T rtu_0[20], const real_T
  rtu_1[20], real_T rtu_2, B_VectorFieldHistogram_c10_wp_T *localB,
  DW_VectorFieldHistogram_c10_w_T *localDW, P_VectorFieldHistogram_c10_wp_T
  *localP);
extern void c10_wp_snake_ExtractGoal(const real_T rtu_Waypoints[2], real_T
  rty_Goal[2], B_ExtractGoal_c10_wp_snake_T *localB);
extern void c10_wp_snake_PurePursuit_Init(DW_PurePursuit_c10_wp_snake_T *localDW);
extern void c10_wp_snake_PurePursuit(const real_T rtu_0[3], const real_T rtu_1[2],
  B_PurePursuit_c10_wp_snake_T *localB, DW_PurePursuit_c10_wp_snake_T *localDW);
extern void c10_wp_snake_MATLABFunction1(const real_T rtu_poses[30], real_T
  rtu_idx, real_T rty_ranges[20], B_MATLABFunction1_c10_wp_snak_T *localB);
extern void c10_wp_snake_MedianFilter_Term(DW_MedianFilter_c10_wp_snake_T
  *localDW);

#endif                                 // RTW_HEADER_c10_wp_snake_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
