//
// File: c1_waypoint.cpp
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
#include "c1_waypoint.h"
#include "c1_waypoint_private.h"

// Named constants for Chart: '<S2>/Waypoint Tracking Logic'
const uint8_T c1_waypoint_IN_FollowWaypoints = 1U;
const uint8_T c1_waypoint_IN_ReachedGoal = 2U;

// Block signals (default storage)
B_c1_waypoint_T c1_waypoint_B;

// Block states (default storage)
DW_c1_waypoint_T c1_waypoint_DW;

// Real-time model
RT_MODEL_c1_waypoint_T c1_waypoint_M_ = RT_MODEL_c1_waypoint_T();
RT_MODEL_c1_waypoint_T *const c1_waypoint_M = &c1_waypoint_M_;

// Forward declaration for local functions
static void c1_waypoint_trackGoal(const real_T goal[2], const real_T
  TmpSignalConversionAtSFunctionI[3], real_T *ang, real_T *dist);
real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    int32_T u0_0;
    int32_T u1_0;
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2(static_cast<real_T>(u0_0), static_cast<real_T>(u1_0));
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

// Function for Chart: '<S2>/Waypoint Tracking Logic'
static void c1_waypoint_trackGoal(const real_T goal[2], const real_T
  TmpSignalConversionAtSFunctionI[3], real_T *ang, real_T *dist)
{
  real_T posDiff_idx_0;
  real_T posDiff_idx_1;
  posDiff_idx_0 = goal[0] - TmpSignalConversionAtSFunctionI[0];
  posDiff_idx_1 = goal[1] - TmpSignalConversionAtSFunctionI[1];
  *ang = rt_atan2d_snf(posDiff_idx_1, posDiff_idx_0) -
    TmpSignalConversionAtSFunctionI[2];
  if (fabs(*ang) > 3.1415926535897931) {
    real_T thetaWrap;
    if (rtIsNaN(*ang + 3.1415926535897931)) {
      thetaWrap = (rtNaN);
    } else if (rtIsInf(*ang + 3.1415926535897931)) {
      thetaWrap = (rtNaN);
    } else if (*ang + 3.1415926535897931 == 0.0) {
      thetaWrap = 0.0;
    } else {
      boolean_T rEQ0;
      thetaWrap = fmod(*ang + 3.1415926535897931, 6.2831853071795862);
      rEQ0 = (thetaWrap == 0.0);
      if (!rEQ0) {
        real_T q;
        q = fabs((*ang + 3.1415926535897931) / 6.2831853071795862);
        rEQ0 = !(fabs(q - floor(q + 0.5)) > 2.2204460492503131E-16 * q);
      }

      if (rEQ0) {
        thetaWrap = 0.0;
      } else if (*ang + 3.1415926535897931 < 0.0) {
        thetaWrap += 6.2831853071795862;
      }
    }

    if ((thetaWrap == 0.0) && (*ang + 3.1415926535897931 > 0.0)) {
      thetaWrap = 6.2831853071795862;
    }

    *ang = thetaWrap - 3.1415926535897931;
  }

  *dist = sqrt(posDiff_idx_0 * posDiff_idx_0 + posDiff_idx_1 * posDiff_idx_1);
}

// Model step function
void c1_waypoint_step(void)
{
  real_T eul_idx_0;
  int32_T k;
  int32_T trueCount;
  boolean_T b_varargout_1;
  boolean_T mask1;
  boolean_T mask2;

  // Outputs for Atomic SubSystem: '<S3>/Subscribe'
  // MATLABSystem: '<S6>/SourceBlock' incorporates:
  //   Inport: '<S7>/In1'

  b_varargout_1 = Sub_c1_waypoint_330.getLatestMessage
    (&c1_waypoint_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S7>/Enable'

  if (b_varargout_1) {
    c1_waypoint_B.In1 = c1_waypoint_B.b_varargout_2;
  }

  // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S3>/Subscribe'

  // MATLAB Function: '<S3>/Conversion'
  eul_idx_0 = 1.0 / sqrt(((c1_waypoint_B.In1.Pose.Pose.Orientation.W *
    c1_waypoint_B.In1.Pose.Pose.Orientation.W +
    c1_waypoint_B.In1.Pose.Pose.Orientation.X *
    c1_waypoint_B.In1.Pose.Pose.Orientation.X) +
    c1_waypoint_B.In1.Pose.Pose.Orientation.Y *
    c1_waypoint_B.In1.Pose.Pose.Orientation.Y) +
    c1_waypoint_B.In1.Pose.Pose.Orientation.Z *
    c1_waypoint_B.In1.Pose.Pose.Orientation.Z);
  c1_waypoint_B.angle = c1_waypoint_B.In1.Pose.Pose.Orientation.W * eul_idx_0;
  c1_waypoint_B.y_idx_1 = c1_waypoint_B.In1.Pose.Pose.Orientation.X * eul_idx_0;
  c1_waypoint_B.y_idx_2 = c1_waypoint_B.In1.Pose.Pose.Orientation.Y * eul_idx_0;
  eul_idx_0 *= c1_waypoint_B.In1.Pose.Pose.Orientation.Z;
  c1_waypoint_B.aSinInput = (c1_waypoint_B.y_idx_1 * eul_idx_0 -
    c1_waypoint_B.angle * c1_waypoint_B.y_idx_2) * -2.0;
  mask1 = (c1_waypoint_B.aSinInput >= 0.99999999999999778);
  mask2 = (c1_waypoint_B.aSinInput <= -0.99999999999999778);
  if (c1_waypoint_B.aSinInput >= 0.99999999999999778) {
    c1_waypoint_B.aSinInput = 1.0;
  }

  if (mask2) {
    c1_waypoint_B.aSinInput = -1.0;
  }

  eul_idx_0 = rt_atan2d_snf((c1_waypoint_B.y_idx_1 * c1_waypoint_B.y_idx_2 +
    c1_waypoint_B.angle * eul_idx_0) * 2.0, ((c1_waypoint_B.angle *
    c1_waypoint_B.angle + c1_waypoint_B.y_idx_1 * c1_waypoint_B.y_idx_1) -
    c1_waypoint_B.y_idx_2 * c1_waypoint_B.y_idx_2) - eul_idx_0 * eul_idx_0);
  trueCount = 0;
  if (mask1 || mask2) {
    trueCount = 1;
  }

  if (0 <= trueCount - 1) {
    c1_waypoint_B.x_data_idx_0 = c1_waypoint_B.aSinInput;
  }

  k = 0;
  while (k <= trueCount - 1) {
    if (c1_waypoint_B.x_data_idx_0 < 0.0) {
      c1_waypoint_B.x_data_idx_0 = -1.0;
    } else if (c1_waypoint_B.x_data_idx_0 > 0.0) {
      c1_waypoint_B.x_data_idx_0 = 1.0;
    } else if (c1_waypoint_B.x_data_idx_0 == 0.0) {
      c1_waypoint_B.x_data_idx_0 = 0.0;
    } else {
      c1_waypoint_B.x_data_idx_0 = (rtNaN);
    }

    k = 1;
  }

  k = 0;
  if (mask1 || mask2) {
    k = 1;
  }

  if (0 <= static_cast<int8_T>(k) - 1) {
    c1_waypoint_B.d_data_idx_0 = rt_atan2d_snf(c1_waypoint_B.y_idx_1,
      c1_waypoint_B.angle);
  }

  if (0 <= trueCount - 1) {
    eul_idx_0 = -c1_waypoint_B.x_data_idx_0 * 2.0 * c1_waypoint_B.d_data_idx_0;
  }

  // SignalConversion generated from: '<S10>/ SFunction ' incorporates:
  //   Chart: '<S2>/Waypoint Tracking Logic'
  //   MATLAB Function: '<S3>/Conversion'

  c1_waypoint_B.TmpSignalConversionAtSFunctionI[0] =
    c1_waypoint_B.In1.Pose.Pose.Position.X;
  c1_waypoint_B.TmpSignalConversionAtSFunctionI[1] =
    c1_waypoint_B.In1.Pose.Pose.Position.Y;
  c1_waypoint_B.TmpSignalConversionAtSFunctionI[2] = eul_idx_0;

  // Chart: '<S2>/Waypoint Tracking Logic' incorporates:
  //   Constant: '<S2>/Constant2'

  if (c1_waypoint_DW.is_active_c1_c1_waypoint == 0U) {
    c1_waypoint_DW.is_active_c1_c1_waypoint = 1U;
    c1_waypoint_B.v = 0.2;
    c1_waypoint_DW.idx = 1.0;
    c1_waypoint_DW.numPts = 32.0;
    c1_waypoint_DW.is_c1_c1_waypoint = c1_waypoint_IN_FollowWaypoints;
    c1_waypoint_DW.goalPoint[0] = c1_waypoint_P.WAY_P[static_cast<int32_T>
      (c1_waypoint_DW.idx) - 1];
    c1_waypoint_DW.goalPoint[1] = c1_waypoint_P.WAY_P[static_cast<int32_T>
      (c1_waypoint_DW.idx) + 31];
    c1_waypoint_trackGoal(c1_waypoint_DW.goalPoint,
                          c1_waypoint_B.TmpSignalConversionAtSFunctionI,
                          &c1_waypoint_B.angle, &c1_waypoint_DW.range);
    if (fabs(c1_waypoint_B.angle) > 0.1308996938995747) {
      c1_waypoint_B.w = 1.5 * c1_waypoint_B.angle;
    } else {
      c1_waypoint_B.w = 0.0;
    }
  } else if (c1_waypoint_DW.is_c1_c1_waypoint == 1) {
    if (c1_waypoint_DW.range < 0.2) {
      if (c1_waypoint_DW.idx == c1_waypoint_DW.numPts) {
        c1_waypoint_DW.is_c1_c1_waypoint = c1_waypoint_IN_ReachedGoal;
        c1_waypoint_B.v = 0.0;
        c1_waypoint_B.w = 0.5;
      } else {
        c1_waypoint_DW.idx++;
        c1_waypoint_DW.is_c1_c1_waypoint = c1_waypoint_IN_FollowWaypoints;
        c1_waypoint_DW.goalPoint[0] = c1_waypoint_P.WAY_P[static_cast<int32_T>
          (c1_waypoint_DW.idx) - 1];
        c1_waypoint_DW.goalPoint[1] = c1_waypoint_P.WAY_P[static_cast<int32_T>
          (c1_waypoint_DW.idx) + 31];
        c1_waypoint_trackGoal(c1_waypoint_DW.goalPoint,
                              c1_waypoint_B.TmpSignalConversionAtSFunctionI,
                              &c1_waypoint_B.angle, &c1_waypoint_DW.range);
        if (fabs(c1_waypoint_B.angle) > 0.1308996938995747) {
          c1_waypoint_B.w = 1.5 * c1_waypoint_B.angle;
        } else {
          c1_waypoint_B.w = 0.0;
        }
      }
    } else {
      c1_waypoint_trackGoal(c1_waypoint_DW.goalPoint,
                            c1_waypoint_B.TmpSignalConversionAtSFunctionI,
                            &c1_waypoint_B.angle, &c1_waypoint_DW.range);
      if (fabs(c1_waypoint_B.angle) > 0.1308996938995747) {
        c1_waypoint_B.w = 1.5 * c1_waypoint_B.angle;
      } else {
        c1_waypoint_B.w = 0.0;
      }
    }
  } else {
    // case IN_ReachedGoal:
  }

  // Outputs for Enabled SubSystem: '<S1>/Command Velocity Publisher' incorporates:
  //   EnablePort: '<S4>/Enable'

  // Outputs for Atomic SubSystem: '<S3>/Subscribe'
  // MATLABSystem: '<S6>/SourceBlock'
  if (b_varargout_1) {
    // BusAssignment: '<S4>/Bus Assignment1' incorporates:
    //   Constant: '<S8>/Constant'
    //   Gain: '<S1>/Gain'

    c1_waypoint_B.BusAssignment1 = c1_waypoint_P.Constant_Value_c;
    c1_waypoint_B.BusAssignment1.Linear.X = c1_waypoint_B.v;
    c1_waypoint_B.BusAssignment1.Angular.Z = c1_waypoint_P.ks * c1_waypoint_B.w;

    // Outputs for Atomic SubSystem: '<S4>/Publish2'
    // MATLABSystem: '<S9>/SinkBlock'
    Pub_c1_waypoint_339.publish(&c1_waypoint_B.BusAssignment1);

    // End of Outputs for SubSystem: '<S4>/Publish2'
  }

  // End of Outputs for SubSystem: '<S3>/Subscribe'
  // End of Outputs for SubSystem: '<S1>/Command Velocity Publisher'
}

// Model initialize function
void c1_waypoint_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    int32_T i;
    char_T b_zeroDelimTopic_0[17];
    char_T b_zeroDelimTopic[14];
    static const char_T tmp[13] = { '/', 'r', 'o', 'b', 'o', 't', '_', '1', '/',
      'p', 'o', 's', 'e' };

    static const char_T tmp_0[16] = { '/', 'r', 'o', 'b', 'o', 't', '_', '1',
      '/', 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    // SystemInitialize for Atomic SubSystem: '<S3>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S7>/Out1' incorporates:
    //   Inport: '<S7>/In1'

    c1_waypoint_B.In1 = c1_waypoint_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem'

    // Start for MATLABSystem: '<S6>/SourceBlock'
    c1_waypoint_DW.obj.matlabCodegenIsDeleted = false;
    c1_waypoint_DW.obj.isInitialized = 1;
    for (i = 0; i < 13; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[13] = '\x00';
    Sub_c1_waypoint_330.createSubscriber(&b_zeroDelimTopic[0], 51);
    c1_waypoint_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S3>/Subscribe'

    // SystemInitialize for Enabled SubSystem: '<S1>/Command Velocity Publisher' 
    // SystemInitialize for Atomic SubSystem: '<S4>/Publish2'
    // Start for MATLABSystem: '<S9>/SinkBlock'
    c1_waypoint_DW.obj_m.matlabCodegenIsDeleted = false;
    c1_waypoint_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      b_zeroDelimTopic_0[i] = tmp_0[i];
    }

    b_zeroDelimTopic_0[16] = '\x00';
    Pub_c1_waypoint_339.createPublisher(&b_zeroDelimTopic_0[0], 105);
    c1_waypoint_DW.obj_m.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S4>/Publish2'
    // End of SystemInitialize for SubSystem: '<S1>/Command Velocity Publisher'
  }
}

// Model terminate function
void c1_waypoint_terminate(void)
{
  // Terminate for Atomic SubSystem: '<S3>/Subscribe'
  // Terminate for MATLABSystem: '<S6>/SourceBlock'
  if (!c1_waypoint_DW.obj.matlabCodegenIsDeleted) {
    c1_waypoint_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S6>/SourceBlock'
  // End of Terminate for SubSystem: '<S3>/Subscribe'

  // Terminate for Enabled SubSystem: '<S1>/Command Velocity Publisher'
  // Terminate for Atomic SubSystem: '<S4>/Publish2'
  // Terminate for MATLABSystem: '<S9>/SinkBlock'
  if (!c1_waypoint_DW.obj_m.matlabCodegenIsDeleted) {
    c1_waypoint_DW.obj_m.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S9>/SinkBlock'
  // End of Terminate for SubSystem: '<S4>/Publish2'
  // End of Terminate for SubSystem: '<S1>/Command Velocity Publisher'
}

//
// File trailer for generated code.
//
// [EOF]
//
