//
// File: c1_soft_border0516.cpp
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
#include "c1_soft_border0516.h"
#include "c1_soft_border0516_private.h"

// Block signals (default storage)
B_c1_soft_border0516_T c1_soft_border0516_B;

// Block states (default storage)
DW_c1_soft_border0516_T c1_soft_border0516_DW;

// Real-time model
RT_MODEL_c1_soft_border0516_T c1_soft_border0516_M_ =
  RT_MODEL_c1_soft_border0516_T();
RT_MODEL_c1_soft_border0516_T *const c1_soft_border0516_M =
  &c1_soft_border0516_M_;

// Forward declaration for local functions
static real_T c1_soft_border0516_rand(void);
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

// Function for MATLAB Function: '<S2>/MATLAB Function'
static real_T c1_soft_border0516_rand(void)
{
  real_T r;
  uint32_T u[2];
  switch (c1_soft_border0516_DW.method) {
   case 4U:
    {
      int32_T k;
      uint32_T mti;
      uint32_T y;
      k = static_cast<int32_T>(c1_soft_border0516_DW.state / 127773U);
      mti = (c1_soft_border0516_DW.state - k * 127773U) * 16807U;
      y = 2836U * k;
      if (mti < y) {
        c1_soft_border0516_DW.state = ~(y - mti) & 2147483647U;
      } else {
        c1_soft_border0516_DW.state = mti - y;
      }

      r = static_cast<real_T>(c1_soft_border0516_DW.state) *
        4.6566128752457969E-10;
    }
    break;

   case 5U:
    {
      uint32_T mti;
      uint32_T y;
      mti = 69069U * c1_soft_border0516_DW.state_e[0] + 1234567U;
      y = c1_soft_border0516_DW.state_e[1] << 13 ^
        c1_soft_border0516_DW.state_e[1];
      y ^= y >> 17;
      y ^= y << 5;
      c1_soft_border0516_DW.state_e[0] = mti;
      c1_soft_border0516_DW.state_e[1] = y;
      r = static_cast<real_T>(mti + y) * 2.328306436538696E-10;
    }
    break;

   default:
    {
      // ========================= COPYRIGHT NOTICE ============================ 
      //  This is a uniform (0,1) pseudorandom number generator based on:        
      //                                                                         
      //  A C-program for MT19937, with initialization improved 2002/1/26.       
      //  Coded by Takuji Nishimura and Makoto Matsumoto.                        
      //                                                                         
      //  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      
      //  All rights reserved.                                                   
      //                                                                         
      //  Redistribution and use in source and binary forms, with or without     
      //  modification, are permitted provided that the following conditions     
      //  are met:                                                               
      //                                                                         
      //    1. Redistributions of source code must retain the above copyright    
      //       notice, this list of conditions and the following disclaimer.     
      //                                                                         
      //    2. Redistributions in binary form must reproduce the above copyright 
      //       notice, this list of conditions and the following disclaimer      
      //       in the documentation and/or other materials provided with the     
      //       distribution.                                                     
      //                                                                         
      //    3. The names of its contributors may not be used to endorse or       
      //       promote products derived from this software without specific      
      //       prior written permission.                                         
      //                                                                         
      //  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    
      //  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      
      //  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  
      //  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  
      //  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  
      //  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       
      //  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  
      //  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  
      //  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    
      //  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
      //  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  
      //                                                                         
      // =============================   END   ================================= 
      int32_T exitg1;
      do {
        int32_T k;
        uint32_T mti;
        exitg1 = 0;
        for (k = 0; k < 2; k++) {
          uint32_T y;
          mti = c1_soft_border0516_DW.state_l[624] + 1U;
          if (c1_soft_border0516_DW.state_l[624] + 1U >= 625U) {
            int32_T kk;
            for (kk = 0; kk < 227; kk++) {
              mti = (c1_soft_border0516_DW.state_l[kk + 1] & 2147483647U) |
                (c1_soft_border0516_DW.state_l[kk] & 2147483648U);
              if ((mti & 1U) == 0U) {
                mti >>= 1U;
              } else {
                mti = mti >> 1U ^ 2567483615U;
              }

              c1_soft_border0516_DW.state_l[kk] =
                c1_soft_border0516_DW.state_l[kk + 397] ^ mti;
            }

            for (kk = 0; kk < 396; kk++) {
              mti = (c1_soft_border0516_DW.state_l[kk + 227] & 2147483648U) |
                (c1_soft_border0516_DW.state_l[kk + 228] & 2147483647U);
              if ((mti & 1U) == 0U) {
                mti >>= 1U;
              } else {
                mti = mti >> 1U ^ 2567483615U;
              }

              c1_soft_border0516_DW.state_l[kk + 227] =
                c1_soft_border0516_DW.state_l[kk] ^ mti;
            }

            mti = (c1_soft_border0516_DW.state_l[623] & 2147483648U) |
              (c1_soft_border0516_DW.state_l[0] & 2147483647U);
            if ((mti & 1U) == 0U) {
              mti >>= 1U;
            } else {
              mti = mti >> 1U ^ 2567483615U;
            }

            c1_soft_border0516_DW.state_l[623] = c1_soft_border0516_DW.state_l
              [396] ^ mti;
            mti = 1U;
          }

          y = c1_soft_border0516_DW.state_l[static_cast<int32_T>(mti) - 1];
          c1_soft_border0516_DW.state_l[624] = mti;
          y ^= y >> 11U;
          y ^= y << 7U & 2636928640U;
          y ^= y << 15U & 4022730752U;
          u[k] = y >> 18U ^ y;
        }

        r = (static_cast<real_T>(u[0] >> 5U) * 6.7108864E+7 + static_cast<real_T>
             (u[1] >> 6U)) * 1.1102230246251565E-16;
        if (r == 0.0) {
          boolean_T b_isvalid;
          b_isvalid = ((c1_soft_border0516_DW.state_l[624] >= 1U) &&
                       (c1_soft_border0516_DW.state_l[624] < 625U));
          if (b_isvalid) {
            boolean_T exitg2;
            b_isvalid = false;
            k = 1;
            exitg2 = false;
            while ((!exitg2) && (k < 625)) {
              if (c1_soft_border0516_DW.state_l[k - 1] == 0U) {
                k++;
              } else {
                b_isvalid = true;
                exitg2 = true;
              }
            }
          }

          if (!b_isvalid) {
            mti = 5489U;
            c1_soft_border0516_DW.state_l[0] = 5489U;
            for (k = 0; k < 623; k++) {
              mti = ((mti >> 30U ^ mti) * 1812433253U + k) + 1U;
              c1_soft_border0516_DW.state_l[k + 1] = mti;
            }

            c1_soft_border0516_DW.state_l[624] = 624U;
          }
        } else {
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    break;
  }

  return r;
}

// Model step function
void c1_soft_border0516_step(void)
{
  real_T eul_idx_0;
  real_T new_yaw;
  real_T y_idx_2;
  int32_T current_flag;
  int32_T k;
  boolean_T b_varargout_1;
  boolean_T mask1;
  boolean_T mask2;

  // Outputs for Atomic SubSystem: '<S3>/Subscribe'
  // MATLABSystem: '<S6>/SourceBlock' incorporates:
  //   Inport: '<S7>/In1'

  b_varargout_1 = Sub_c1_soft_border0516_781.getLatestMessage
    (&c1_soft_border0516_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S7>/Enable'

  if (b_varargout_1) {
    c1_soft_border0516_B.In1 = c1_soft_border0516_B.b_varargout_2;
  }

  // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S3>/Subscribe'

  // MATLAB Function: '<S3>/Conversion'
  eul_idx_0 = 1.0 / sqrt(((c1_soft_border0516_B.In1.Pose.Pose.Orientation.W *
    c1_soft_border0516_B.In1.Pose.Pose.Orientation.W +
    c1_soft_border0516_B.In1.Pose.Pose.Orientation.X *
    c1_soft_border0516_B.In1.Pose.Pose.Orientation.X) +
    c1_soft_border0516_B.In1.Pose.Pose.Orientation.Y *
    c1_soft_border0516_B.In1.Pose.Pose.Orientation.Y) +
    c1_soft_border0516_B.In1.Pose.Pose.Orientation.Z *
    c1_soft_border0516_B.In1.Pose.Pose.Orientation.Z);
  c1_soft_border0516_B.yaw = c1_soft_border0516_B.In1.Pose.Pose.Orientation.W *
    eul_idx_0;
  new_yaw = c1_soft_border0516_B.In1.Pose.Pose.Orientation.X * eul_idx_0;
  y_idx_2 = c1_soft_border0516_B.In1.Pose.Pose.Orientation.Y * eul_idx_0;
  eul_idx_0 *= c1_soft_border0516_B.In1.Pose.Pose.Orientation.Z;
  c1_soft_border0516_B.aSinInput = (new_yaw * eul_idx_0 -
    c1_soft_border0516_B.yaw * y_idx_2) * -2.0;
  mask1 = (c1_soft_border0516_B.aSinInput >= 0.99999999999999778);
  mask2 = (c1_soft_border0516_B.aSinInput <= -0.99999999999999778);
  if (c1_soft_border0516_B.aSinInput >= 0.99999999999999778) {
    c1_soft_border0516_B.aSinInput = 1.0;
  }

  if (mask2) {
    c1_soft_border0516_B.aSinInput = -1.0;
  }

  eul_idx_0 = rt_atan2d_snf((new_yaw * y_idx_2 + c1_soft_border0516_B.yaw *
    eul_idx_0) * 2.0, ((c1_soft_border0516_B.yaw * c1_soft_border0516_B.yaw +
                        new_yaw * new_yaw) - y_idx_2 * y_idx_2) - eul_idx_0 *
    eul_idx_0);
  current_flag = 0;
  if (mask1 || mask2) {
    current_flag = 1;
  }

  if (0 <= current_flag - 1) {
    c1_soft_border0516_B.vx = c1_soft_border0516_B.aSinInput;
  }

  k = 0;
  while (k <= current_flag - 1) {
    if (c1_soft_border0516_B.vx < 0.0) {
      c1_soft_border0516_B.vx = -1.0;
    } else if (c1_soft_border0516_B.vx > 0.0) {
      c1_soft_border0516_B.vx = 1.0;
    } else if (c1_soft_border0516_B.vx == 0.0) {
      c1_soft_border0516_B.vx = 0.0;
    } else {
      c1_soft_border0516_B.vx = (rtNaN);
    }

    k = 1;
  }

  k = 0;
  if (mask1 || mask2) {
    k = 1;
  }

  if (0 <= static_cast<int8_T>(k) - 1) {
    c1_soft_border0516_B.vy = rt_atan2d_snf(new_yaw, c1_soft_border0516_B.yaw);
  }

  if (0 <= current_flag - 1) {
    eul_idx_0 = -c1_soft_border0516_B.vx * 2.0 * c1_soft_border0516_B.vy;
  }

  // MATLAB Function: '<S2>/MATLAB Function' incorporates:
  //   Constant: '<S2>/border_dist'
  //   Constant: '<S2>/border_paras_paras'
  //   Constant: '<S2>/linear_vel'
  //   DataStoreWrite: '<S2>/Data Store Write'
  //   DataStoreWrite: '<S2>/Data Store Write1'
  //   MATLAB Function: '<S3>/Conversion'
  //   SignalConversion generated from: '<S10>/ SFunction '

  c1_soft_border0516_B.yaw = (eul_idx_0 - floor(eul_idx_0 / 6.2831852) * 2.0 *
    3.1415926) + 6.2831852;
  if (c1_soft_border0516_B.yaw >= 6.2831852) {
    c1_soft_border0516_B.yaw -= 6.2831852;
  }

  current_flag = 0;
  new_yaw = c1_soft_border0516_P.border_paras_paras_Value[1] -
    c1_soft_border0516_P.border_dist_Value;
  if (c1_soft_border0516_B.In1.Pose.Pose.Position.X >= new_yaw) {
    current_flag = 1;
  }

  y_idx_2 = c1_soft_border0516_P.border_paras_paras_Value[0] +
    c1_soft_border0516_P.border_dist_Value;
  if (c1_soft_border0516_B.In1.Pose.Pose.Position.X <= y_idx_2) {
    current_flag = 2;
  }

  eul_idx_0 = c1_soft_border0516_P.border_paras_paras_Value[3] -
    c1_soft_border0516_P.border_dist_Value;
  if (c1_soft_border0516_B.In1.Pose.Pose.Position.Y >= eul_idx_0) {
    current_flag = 3;
  }

  c1_soft_border0516_B.aSinInput =
    c1_soft_border0516_P.border_paras_paras_Value[2] +
    c1_soft_border0516_P.border_dist_Value;
  if (c1_soft_border0516_B.In1.Pose.Pose.Position.Y <=
      c1_soft_border0516_B.aSinInput) {
    current_flag = 4;
  }

  if (current_flag == 0) {
    c1_soft_border0516_rand();
    c1_soft_border0516_B.yaw = 0.0;
    c1_soft_border0516_DW.avoid_vel[0] = 0.0;
    c1_soft_border0516_DW.avoid_vel[1] = 0.0;
  } else {
    if ((c1_soft_border0516_DW.border_flag > 0.0) &&
        (c1_soft_border0516_DW.border_flag != current_flag)) {
      c1_soft_border0516_DW.avoid_vel[0] = 0.0;
      c1_soft_border0516_DW.avoid_vel[1] = 0.0;
    }

    if ((c1_soft_border0516_DW.avoid_vel[0] == 0.0) &&
        (c1_soft_border0516_DW.avoid_vel[1] == 0.0)) {
      c1_soft_border0516_B.vx = c1_soft_border0516_P.linear_vel_Value * cos
        (c1_soft_border0516_B.yaw);
      c1_soft_border0516_B.vy = c1_soft_border0516_P.linear_vel_Value * sin
        (c1_soft_border0516_B.yaw);
      if ((c1_soft_border0516_B.In1.Pose.Pose.Position.X >= new_yaw) &&
          (c1_soft_border0516_B.vx >= 0.0)) {
        c1_soft_border0516_B.vx = -c1_soft_border0516_B.vx;
      }

      if ((c1_soft_border0516_B.In1.Pose.Pose.Position.X <= y_idx_2) &&
          (c1_soft_border0516_B.vx < 0.0)) {
        c1_soft_border0516_B.vx = -c1_soft_border0516_B.vx;
      }

      if ((c1_soft_border0516_B.In1.Pose.Pose.Position.Y >= eul_idx_0) &&
          (c1_soft_border0516_B.vy >= 0.0)) {
        c1_soft_border0516_B.vy = -c1_soft_border0516_B.vy;
      }

      if ((c1_soft_border0516_B.In1.Pose.Pose.Position.Y <=
           c1_soft_border0516_B.aSinInput) && (c1_soft_border0516_B.vy < 0.0)) {
        c1_soft_border0516_B.vy = -c1_soft_border0516_B.vy;
      }

      c1_soft_border0516_DW.avoid_vel[0] = c1_soft_border0516_B.vx;
      c1_soft_border0516_DW.avoid_vel[1] = c1_soft_border0516_B.vy;
    }

    new_yaw = rt_atan2d_snf(c1_soft_border0516_DW.avoid_vel[1],
      c1_soft_border0516_DW.avoid_vel[0]) * 180.0 / 3.1415926;
    if (new_yaw < 0.0) {
      new_yaw += 360.0;
    }

    c1_soft_border0516_B.yaw = new_yaw - c1_soft_border0516_B.yaw * 180.0 /
      3.1415926;
    if (c1_soft_border0516_B.yaw > 180.0) {
      c1_soft_border0516_B.yaw -= 360.0;
    }

    if (c1_soft_border0516_B.yaw < -180.0) {
      c1_soft_border0516_B.yaw += 360.0;
    }

    c1_soft_border0516_B.yaw = -c1_soft_border0516_B.yaw * 3.1415926 / 180.0;
    if (c1_soft_border0516_B.yaw > 2.0) {
      c1_soft_border0516_B.yaw = 2.0;
    }

    if (c1_soft_border0516_B.yaw < -2.0) {
      c1_soft_border0516_B.yaw = -2.0;
    }
  }

  c1_soft_border0516_DW.border_flag = current_flag;

  // Outputs for Enabled SubSystem: '<S1>/Command Velocity Publisher' incorporates:
  //   EnablePort: '<S4>/Enable'

  // Outputs for Atomic SubSystem: '<S3>/Subscribe'
  // MATLABSystem: '<S6>/SourceBlock'
  if (b_varargout_1) {
    // BusAssignment: '<S4>/Bus Assignment1' incorporates:
    //   Constant: '<S8>/Constant'
    //   Gain: '<Root>/Gain'
    //   Gain: '<S1>/Gain'
    //   MATLAB Function: '<S2>/MATLAB Function'

    c1_soft_border0516_B.BusAssignment1 = c1_soft_border0516_P.Constant_Value_g;
    c1_soft_border0516_B.BusAssignment1.Linear.X =
      c1_soft_border0516_P.linear_vel_Value;
    c1_soft_border0516_B.BusAssignment1.Angular.Z =
      c1_soft_border0516_P.Gain_Gain * c1_soft_border0516_B.yaw *
      c1_soft_border0516_P.ks;

    // Outputs for Atomic SubSystem: '<S4>/Publish2'
    // MATLABSystem: '<S9>/SinkBlock'
    Pub_c1_soft_border0516_790.publish(&c1_soft_border0516_B.BusAssignment1);

    // End of Outputs for SubSystem: '<S4>/Publish2'
  }

  // End of Outputs for SubSystem: '<S3>/Subscribe'
  // End of Outputs for SubSystem: '<S1>/Command Velocity Publisher'
}

// Model initialize function
void c1_soft_border0516_initialize(void)
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

    static const uint32_T tmp_0[625] = { 5489U, 1301868182U, 2938499221U,
      2950281878U, 1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U,
      219885934U, 2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U,
      3418470598U, 951210697U, 3693558366U, 2923482051U, 1793174584U,
      2982310801U, 1586906132U, 1951078751U, 1808158765U, 1733897588U,
      431328322U, 4202539044U, 530658942U, 1714810322U, 3025256284U, 3342585396U,
      1937033938U, 2640572511U, 1654299090U, 3692403553U, 4233871309U,
      3497650794U, 862629010U, 2943236032U, 2426458545U, 1603307207U,
      1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U, 761573964U,
      3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U, 3295982469U,
      1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U,
      699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U,
      1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U,
      3570962471U, 4287636090U, 4087307012U, 3603343627U, 202242161U,
      2995682783U, 1620962684U, 3704723357U, 371613603U, 2814834333U,
      2111005706U, 624778151U, 2094172212U, 4284947003U, 1211977835U, 991917094U,
      1570449747U, 2962370480U, 1259410321U, 170182696U, 146300961U, 2836829791U,
      619452428U, 2723670296U, 1881399711U, 1161269684U, 1675188680U,
      4132175277U, 780088327U, 3409462821U, 1036518241U, 1834958505U,
      3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U, 1924681712U,
      3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U,
      3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U,
      2339662006U, 501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U,
      3393774360U, 1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U,
      819755096U, 2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U,
      1029741190U, 2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U,
      2701024045U, 4117700889U, 759495121U, 3332270341U, 2313004527U,
      2277067795U, 4131855432U, 2722057515U, 1264804546U, 3848622725U,
      2211267957U, 4100593547U, 959123777U, 2130745407U, 3194437393U, 486673947U,
      1377371204U, 17472727U, 352317554U, 3955548058U, 159652094U, 1232063192U,
      3835177280U, 49423123U, 3083993636U, 733092U, 2120519771U, 2573409834U,
      1112952433U, 3239502554U, 761045320U, 1087580692U, 2540165110U, 641058802U,
      1792435497U, 2261799288U, 1579184083U, 627146892U, 2165744623U,
      2200142389U, 2167590760U, 2381418376U, 1793358889U, 3081659520U,
      1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U,
      3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U,
      3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U,
      354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U,
      1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U,
      1684529556U, 1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U,
      171579916U, 3878728600U, 2475806724U, 2030324028U, 3331164912U,
      1708711359U, 1970023127U, 2859691344U, 2588476477U, 2748146879U,
      136111222U, 2967685492U, 909517429U, 2835297809U, 3206906216U, 3186870716U,
      341264097U, 2542035121U, 3353277068U, 548223577U, 3170936588U, 1678403446U,
      297435620U, 2337555430U, 466603495U, 1132321815U, 1208589219U, 696392160U,
      894244439U, 2562678859U, 470224582U, 3306867480U, 201364898U, 2075966438U,
      1767227936U, 2929737987U, 3674877796U, 2654196643U, 3692734598U,
      3528895099U, 2796780123U, 3048728353U, 842329300U, 191554730U, 2922459673U,
      3489020079U, 3979110629U, 1022523848U, 2202932467U, 3583655201U,
      3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U, 396426791U,
      3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U,
      3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U,
      2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U,
      1521001832U, 3605886097U, 2802786495U, 2728923319U, 3996284304U,
      903417639U, 1171249804U, 1020374987U, 2824535874U, 423621996U, 1988534473U,
      2493544470U, 1008604435U, 1756003503U, 1488867287U, 1386808992U,
      732088248U, 1780630732U, 2482101014U, 976561178U, 1543448953U, 2602866064U,
      2021139923U, 1952599828U, 2360242564U, 2117959962U, 2753061860U,
      2388623612U, 4138193781U, 2962920654U, 2284970429U, 766920861U,
      3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U,
      3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U,
      686850534U, 1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U,
      4195430425U, 607905174U, 3902331779U, 2454067926U, 1708133115U,
      1170874362U, 2008609376U, 3260320415U, 2211196135U, 433538229U,
      2728786374U, 2189520818U, 262554063U, 1182318347U, 3710237267U,
      1221022450U, 715966018U, 2417068910U, 2591870721U, 2870691989U,
      3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U,
      4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U,
      1123218514U, 551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U,
      422862282U, 3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U,
      1324564878U, 1928816105U, 1786535431U, 2878099422U, 3290185549U,
      539474248U, 1657512683U, 552370646U, 1671741683U, 3655312128U, 1552739510U,
      2605208763U, 1441755014U, 181878989U, 3124053868U, 1447103986U,
      3183906156U, 1728556020U, 3502241336U, 3055466967U, 1013272474U,
      818402132U, 1715099063U, 2900113506U, 397254517U, 4194863039U, 1009068739U,
      232864647U, 2540223708U, 2608288560U, 2415367765U, 478404847U, 3455100648U,
      3182600021U, 2115988978U, 434269567U, 4117179324U, 3461774077U, 887256537U,
      3545801025U, 286388911U, 3451742129U, 1981164769U, 786667016U, 3310123729U,
      3097811076U, 2224235657U, 2959658883U, 3370969234U, 2514770915U,
      3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U,
      4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U,
      1477814055U, 4043852216U, 1876372354U, 3133294443U, 3871104810U,
      3177020907U, 2074304428U, 3479393793U, 759562891U, 164128153U, 1839069216U,
      2114162633U, 3989947309U, 3611054956U, 1333547922U, 835429831U, 494987340U,
      171987910U, 1252001001U, 370809172U, 3508925425U, 2535703112U, 1276855041U,
      1922855120U, 835673414U, 3030664304U, 613287117U, 171219893U, 3423096126U,
      3376881639U, 2287770315U, 1658692645U, 1262815245U, 3957234326U,
      1168096164U, 2968737525U, 2655813712U, 2132313144U, 3976047964U,
      326516571U, 353088456U, 3679188938U, 3205649712U, 2654036126U, 1249024881U,
      880166166U, 691800469U, 2229503665U, 1673458056U, 4032208375U, 1851778863U,
      2563757330U, 376742205U, 1794655231U, 340247333U, 1505873033U, 396524441U,
      879666767U, 3335579166U, 3260764261U, 3335999539U, 506221798U, 4214658741U,
      975887814U, 2080536343U, 3360539560U, 571586418U, 138896374U, 4234352651U,
      2737620262U, 3928362291U, 1516365296U, 38056726U, 3599462320U, 3585007266U,
      3850961033U, 471667319U, 1536883193U, 2310166751U, 1861637689U,
      2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U,
      2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U,
      643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U,
      3285177704U, 1948416081U, 1311525291U, 1183517742U, 1739192232U,
      3979815115U, 2567840007U, 4116821529U, 213304419U, 4125718577U,
      1473064925U, 2442436592U, 1893310111U, 4195361916U, 3747569474U,
      828465101U, 2991227658U, 750582866U, 1205170309U, 1409813056U, 678418130U,
      1171531016U, 3821236156U, 354504587U, 4202874632U, 3882511497U,
      1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U, 3725758099U,
      831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U, 3358210805U,
      4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U, 190157081U,
      3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U,
      2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U,
      453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U,
      3541393095U, 4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U,
      1795580598U, 2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U,
      705213300U, 363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U,
      2199989172U, 1987356470U, 4026755612U, 2147252133U, 270400031U,
      1367820199U, 2369854699U, 2844269403U, 79981964U, 624U };

    static const char_T tmp_1[16] = { '/', 'r', 'o', 'b', 'o', 't', '_', '1',
      '/', 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    // Start for DataStoreMemory: '<S2>/在此修改航路点初始值，默认为[0.0]'
    c1_soft_border0516_DW.avoid_vel[0] = c1_soft_border0516_P.u0_InitialValue[0];
    c1_soft_border0516_DW.avoid_vel[1] = c1_soft_border0516_P.u0_InitialValue[1];

    // Start for DataStoreMemory: '<S2>/在此修改航路点初始值，默认为[0.0]1'
    c1_soft_border0516_DW.border_flag = c1_soft_border0516_P.u01_InitialValue;

    // SystemInitialize for Atomic SubSystem: '<S3>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S7>/Out1' incorporates:
    //   Inport: '<S7>/In1'

    c1_soft_border0516_B.In1 = c1_soft_border0516_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem'

    // Start for MATLABSystem: '<S6>/SourceBlock'
    c1_soft_border0516_DW.obj.matlabCodegenIsDeleted = false;
    c1_soft_border0516_DW.obj.isInitialized = 1;
    for (i = 0; i < 13; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[13] = '\x00';
    Sub_c1_soft_border0516_781.createSubscriber(&b_zeroDelimTopic[0], 51);
    c1_soft_border0516_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S3>/Subscribe'

    // SystemInitialize for MATLAB Function: '<S2>/MATLAB Function'
    memcpy(&c1_soft_border0516_DW.state_l[0], &tmp_0[0], 625U * sizeof(uint32_T));
    c1_soft_border0516_DW.method = 7U;
    c1_soft_border0516_DW.state = 1144108930U;
    c1_soft_border0516_DW.state_e[0] = 362436069U;
    c1_soft_border0516_DW.state_e[1] = 521288629U;

    // SystemInitialize for Enabled SubSystem: '<S1>/Command Velocity Publisher' 
    // SystemInitialize for Atomic SubSystem: '<S4>/Publish2'
    // Start for MATLABSystem: '<S9>/SinkBlock'
    c1_soft_border0516_DW.obj_p.matlabCodegenIsDeleted = false;
    c1_soft_border0516_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      b_zeroDelimTopic_0[i] = tmp_1[i];
    }

    b_zeroDelimTopic_0[16] = '\x00';
    Pub_c1_soft_border0516_790.createPublisher(&b_zeroDelimTopic_0[0], 105);
    c1_soft_border0516_DW.obj_p.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S4>/Publish2'
    // End of SystemInitialize for SubSystem: '<S1>/Command Velocity Publisher'
  }
}

// Model terminate function
void c1_soft_border0516_terminate(void)
{
  // Terminate for Atomic SubSystem: '<S3>/Subscribe'
  // Terminate for MATLABSystem: '<S6>/SourceBlock'
  if (!c1_soft_border0516_DW.obj.matlabCodegenIsDeleted) {
    c1_soft_border0516_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S6>/SourceBlock'
  // End of Terminate for SubSystem: '<S3>/Subscribe'

  // Terminate for Enabled SubSystem: '<S1>/Command Velocity Publisher'
  // Terminate for Atomic SubSystem: '<S4>/Publish2'
  // Terminate for MATLABSystem: '<S9>/SinkBlock'
  if (!c1_soft_border0516_DW.obj_p.matlabCodegenIsDeleted) {
    c1_soft_border0516_DW.obj_p.matlabCodegenIsDeleted = true;
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
