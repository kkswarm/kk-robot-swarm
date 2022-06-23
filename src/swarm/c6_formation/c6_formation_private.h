//
// File: c6_formation_private.h
//
// Code generated for Simulink model 'c6_formation'.
//
// Model version                  : 4.22
// Simulink Coder version         : 9.6 (R2021b) 14-May-2021
// C/C++ source code generated on : Fri Jun 17 14:53:15 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_c6_formation_private_h_
#define RTW_HEADER_c6_formation_private_h_
#include "rtwtypes.h"
#include "c6_formation.h"

extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern real_T rt_roundd_snf(real_T u);
extern int32_T div_s32(int32_T numerator, int32_T denominator);
extern int32_T div_s32_sat(int32_T numerator, int32_T denominator);
extern int32_T div_s32_floor(int32_T numerator, int32_T denominator);
extern void c6_formation_MedianFilter_Init(DW_MedianFilter_c6_formation_T
  *localDW);
extern void c6_formation_MedianFilter(real_T rtu_0,
  B_MedianFilter_c6_formation_T *localB, DW_MedianFilter_c6_formation_T *localDW);
extern void c6_formation_sensor2vCar(boolean_T rtu_poseNew, const
  SL_Bus_c6_formation_nav_msgs_Odometry *rtu_poseMsg, real_T *rty_x, real_T
  *rty_y, real_T *rty_yaw, real_T *rty_x_init, real_T *rty_y_init, real_T
  *rty_yaw_init, real_T *rty_flag, B_sensor2vCar_c6_formation_T *localB,
  DW_sensor2vCar_c6_formation_T *localDW);
extern void c6_formation_sensor2vCar4(boolean_T rtu_VW_New, const
  SL_Bus_c6_formation_geometry_msgs_Twist *rtu_VW_Msg, real_T *rty_V, real_T
  *rty_W, DW_sensor2vCar4_c6_formation_T *localDW);
extern void c6_formation_Recovery(real_T rtu_LinearVelocity, real_T
  rtu_AngularVelocity, real_T *rty_dV, real_T *rty_dW, real_T rtp_recovery_w,
  P_Recovery_c6_formation_T *localP);
extern void c6_formation_PathFollowing(real_T rtu_SteeringDirection, real_T
  rtu_V, real_T rtu_AngularVelocity, real_T *rty_dV, real_T *rty_dW,
  P_PathFollowing_c6_formation_T *localP);
extern void c6_fo_VectorFieldHistogram_Init(const real_T rtp_rangeDis[2], const
  real_T rtp_thresholds[2], real_T rtp_vehicleRadius, real_T rtp_safetyDis,
  real_T rtp_minimumTurningRadius, B_VectorFieldHistogram_c6_for_T *localB,
  DW_VectorFieldHistogram_c6_fo_T *localDW, P_VectorFieldHistogram_c6_for_T
  *localP);
extern void c6_formati_VectorFieldHistogram(const real_T rtu_0[25], const real_T
  rtu_1[25], real_T rtu_2, const real_T rtp_rangeDis[2], const real_T
  rtp_thresholds[2], real_T rtp_vehicleRadius, real_T rtp_safetyDis, real_T
  rtp_minimumTurningRadius, B_VectorFieldHistogram_c6_for_T *localB,
  DW_VectorFieldHistogram_c6_fo_T *localDW, P_VectorFieldHistogram_c6_for_T
  *localP);
extern void c6_formation_MATLABFunction(real_T rtu_psi, real_T rtu_psid, real_T
  rtu_x, real_T rtu_xd, real_T rtu_y, real_T rtu_yd, real_T *rty_dw, real_T
  *rty_targetdir, B_MATLABFunction_c6_formation_T *localB);
extern void c6_formation_MATLABFunction_a(const real_T rtu_poses[18], real_T
  rtu_idx, real_T rty_ranges[25], B_MATLABFunction_c6_formati_m_T *localB);
extern void c6_formation_MedianFilter_Term(DW_MedianFilter_c6_formation_T
  *localDW);

#endif                                 // RTW_HEADER_c6_formation_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
