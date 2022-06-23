//
// File: c6_goto_target_private.h
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
#ifndef RTW_HEADER_c6_goto_target_private_h_
#define RTW_HEADER_c6_goto_target_private_h_
#include "rtwtypes.h"
#include "c6_goto_target.h"

extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern real_T rt_roundd_snf(real_T u);
extern int32_T div_s32(int32_T numerator, int32_T denominator);
extern int32_T div_s32_sat(int32_T numerator, int32_T denominator);
extern void c6_goto_target_Conversion(real_T rtu_x, real_T rtu_y, real_T rtu_z,
  real_T rtu_w, real_T *rty_yaw, B_Conversion_c6_goto_target_T *localB);
extern void c6_goto_target_Recovery(real_T rtu_LinearVelocity, real_T
  rtu_AngularVelocity, real_T *rty_dV, real_T *rty_dW,
  P_Recovery_c6_goto_target_T *localP);
extern void c6_goto_target_PathFollowing(real_T rtu_SteeringDirection, real_T
  rtu_AngularVelocity, real_T *rty_dV, real_T *rty_dW,
  P_PathFollowing_c6_goto_targe_T *localP);
extern void c6_go_VectorFieldHistogram_Init(B_VectorFieldHistogram_c6_got_T
  *localB, DW_VectorFieldHistogram_c6_go_T *localDW,
  P_VectorFieldHistogram_c6_got_T *localP);
extern void c6_goto_ta_VectorFieldHistogram(const real_T rtu_0[20], const real_T
  rtu_1[20], real_T rtu_2, B_VectorFieldHistogram_c6_got_T *localB,
  DW_VectorFieldHistogram_c6_go_T *localDW, P_VectorFieldHistogram_c6_got_T
  *localP);
extern void c6_goto_target_ExtractGoal(const real_T rtu_Waypoints[2], real_T
  rty_Goal[2], B_ExtractGoal_c6_goto_target_T *localB);
extern void c6_goto_target_PurePursuit_Init(DW_PurePursuit_c6_goto_target_T
  *localDW);
extern void c6_goto_target_PurePursuit(const real_T rtu_0[3], const real_T
  rtu_1[2], B_PurePursuit_c6_goto_target_T *localB,
  DW_PurePursuit_c6_goto_target_T *localDW);
extern void c6_goto_target_MATLABFunction(const real_T rtu_poses[18], real_T
  rtu_idx, real_T rty_ranges[20], B_MATLABFunction_c6_goto_targ_T *localB);

#endif                                 // RTW_HEADER_c6_goto_target_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
