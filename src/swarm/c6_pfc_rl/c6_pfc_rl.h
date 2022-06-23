//
// File: c6_pfc_rl.h
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
#ifndef RTW_HEADER_c6_pfc_rl_h_
#define RTW_HEADER_c6_pfc_rl_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "c6_pfc_rl_types.h"
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

// Block signals for system '<S17>/Median Filter'
struct B_MedianFilter_c6_pfc_rl_T {
  real_T MedianFilter;                 // '<S17>/Median Filter'
  real_T vprev;
  real_T p;
  real_T ind2;
};

// Block states (default storage) for system '<S17>/Median Filter'
struct DW_MedianFilter_c6_pfc_rl_T {
  dsp_MedianFilter_c6_pfc_rl_T obj;    // '<S17>/Median Filter'
  boolean_T objisempty;                // '<S17>/Median Filter'
};

// Block signals for system '<S17>/sensor2vCar'
struct B_sensor2vCar_c6_pfc_rl_T {
  real_T aSinInput;
  real_T q;
};

// Block states (default storage) for system '<S17>/sensor2vCar'
struct DW_sensor2vCar_c6_pfc_rl_T {
  real_T x0;                           // '<S17>/sensor2vCar'
  real_T y0;                           // '<S17>/sensor2vCar'
  real_T yaw0;                         // '<S17>/sensor2vCar'
  real_T yaw1;                         // '<S17>/sensor2vCar'
  real_T x0_init;                      // '<S17>/sensor2vCar'
  real_T y0_init;                      // '<S17>/sensor2vCar'
  real_T yaw0_init;                    // '<S17>/sensor2vCar'
  real_T fStart;                       // '<S17>/sensor2vCar'
};

// Block states (default storage) for system '<S17>/sensor2vCar4'
struct DW_sensor2vCar4_c6_pfc_rl_T {
  real_T v0;                           // '<S17>/sensor2vCar4'
  real_T w0;                           // '<S17>/sensor2vCar4'
};

// Block states (default storage) for system '<S75>/Signal Process'
struct DW_SignalProcess_c6_pfc_rl_T {
  real_T sim_step;                     // '<S75>/Signal Process'
  real_T yaw_delta;                    // '<S75>/Signal Process'
  real_T lateral_rel_dist;             // '<S75>/Signal Process'
};

// Block signals (default storage)
struct B_c6_pfc_rl_T {
  real32_T fv[400];
  real32_T fv1[400];
  real32_T fv2[400];
  real32_T fv3[400];
  real32_T fv4[400];
  real32_T fv5[300];
  real32_T fv6[300];
  real32_T fv7[300];
  real32_T fv8[300];
  real32_T fv9[300];
  SL_Bus_c6_pfc_rl_nav_msgs_Odometry In1;// '<S58>/In1'
  SL_Bus_c6_pfc_rl_nav_msgs_Odometry In1_f;// '<S50>/In1'
  SL_Bus_c6_pfc_rl_nav_msgs_Odometry In1_k;// '<S42>/In1'
  SL_Bus_c6_pfc_rl_nav_msgs_Odometry In1_o;// '<S34>/In1'
  SL_Bus_c6_pfc_rl_nav_msgs_Odometry In1_i;// '<S26>/In1'
  SL_Bus_c6_pfc_rl_nav_msgs_Odometry In1_n;// '<S18>/In1'
  SL_Bus_c6_pfc_rl_nav_msgs_Odometry b_varargout_2;
  real_T observation[9];               // '<S79>/Signal Process'
  real_T observation_n[9];             // '<S75>/Signal Process'
  real_T observation_f[9];             // '<S76>/Signal Process'
  real_T observation_j[9];             // '<S77>/Signal Process'
  real_T observation_e[9];             // '<S78>/Signal Process'
  SL_Bus_c6_pfc_rl_geometry_msgs_Twist In1_p;// '<S59>/In1'
  SL_Bus_c6_pfc_rl_geometry_msgs_Twist In1_g;// '<S51>/In1'
  SL_Bus_c6_pfc_rl_geometry_msgs_Twist In1_l;// '<S43>/In1'
  SL_Bus_c6_pfc_rl_geometry_msgs_Twist In1_kh;// '<S35>/In1'
  SL_Bus_c6_pfc_rl_geometry_msgs_Twist In1_m;// '<S27>/In1'
  SL_Bus_c6_pfc_rl_geometry_msgs_Twist In1_ps;// '<S19>/In1'
  SL_Bus_c6_pfc_rl_geometry_msgs_Twist BusAssignment1;// '<S9>/Bus Assignment1'
  real32_T varargin_1[9];
  real_T pre_q_data[4];
  real_T next_q_data[4];
  real_T x4[4];
  real_T pre_q_data_m[4];
  char_T b_zeroDelimTopic[18];
  char_T b_zeroDelimTopic_c[17];
  real_T waypoints_data[2];
  char_T b_zeroDelimTopic_k[14];
  real_T b_mag;
  real_T ridx_data;
  real_T x_ch;                         // '<S17>/sensor2vCar'
  real_T y_c;                          // '<S17>/sensor2vCar'
  real_T yaw_o;                        // '<S17>/sensor2vCar'
  real_T W_o;                          // '<S17>/sensor2vCar4'
  real_T flag_i;                       // '<S25>/sensor2vCar'
  real_T yaw_init_o;                   // '<S17>/sensor2vCar'
  real_T flag;                         // '<S17>/sensor2vCar'
  real_T yaw_c;                        // '<S25>/sensor2vCar'
  real_T W_n;                          // '<S25>/sensor2vCar4'
  real_T y_i;                          // '<S33>/sensor2vCar'
  real_T yaw_l;                        // '<S33>/sensor2vCar'
  real_T W_g;                          // '<S33>/sensor2vCar4'
  real_T yaw_g;                        // '<S41>/sensor2vCar'
  real_T yaw_init_b;                   // '<S49>/sensor2vCar'
  real_T yaw;                          // '<S57>/sensor2vCar'
  real_T V;                            // '<S17>/sensor2vCar4'
  real_T usinpsi;                      // '<S60>/u sin(psi)'
  real_T awsinpsi_o;                   // '<S52>/a w sin(psi)'
  real_T ucospsi_h;                    // '<S52>/u cos(psi)'
  real_T awcospsi_b;                   // '<S52>/a w cos(psi)'
  real_T usinpsi_c;                    // '<S52>/u sin(psi)'
  real_T awsinpsi_e;                   // '<S44>/a w sin(psi)'
  real_T ucospsi_b;                    // '<S44>/u cos(psi)'
  real_T awcospsi_j;                   // '<S44>/a w cos(psi)'
  real_T usinpsi_l;                    // '<S44>/u sin(psi)'
  real_T awsinpsi_j;                   // '<S36>/a w sin(psi)'
  real_T ucospsi_m;                    // '<S36>/u cos(psi)'
  real_T awcospsi_i;                   // '<S36>/a w cos(psi)'
  real_T usinpsi_j;                    // '<S36>/u sin(psi)'
  real_T awsinpsi_h;                   // '<S28>/a w sin(psi)'
  real_T ucospsi_o;                    // '<S28>/u cos(psi)'
  real_T awcospsi_jj;                  // '<S28>/a w cos(psi)'
  real_T usinpsi_k;                    // '<S28>/u sin(psi)'
  real_T sz_idx_1;
  real_T DiscreteTimeIntegrator2;      // '<S20>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator2_b;    // '<S28>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator2_n;    // '<S36>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator2_e;    // '<S44>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator2_d;    // '<S52>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator2_k;    // '<S60>/Discrete-Time Integrator2'
  real_T Sum;                          // '<S17>/Sum'
  real_T Sum1;                         // '<S17>/Sum1'
  real_T Sum_c;                        // '<S25>/Sum'
  real_T Sum1_a;                       // '<S25>/Sum1'
  real_T Sum_n;                        // '<S33>/Sum'
  real_T Sum1_b;                       // '<S33>/Sum1'
  real_T Sum_c2;                       // '<S41>/Sum'
  real_T Sum1_bt;                      // '<S41>/Sum1'
  real_T Sum_e;                        // '<S49>/Sum'
  real_T Sum1_e;                       // '<S49>/Sum1'
  real_T Sum_h;                        // '<S57>/Sum'
  real_T Sum1_ap;                      // '<S57>/Sum1'
  real_T d;
  real_T d1;
  real_T absx;
  real_T b_absx;
  real32_T action1[2];
  int32_T pre_q_size[2];
  int32_T next_q_size[2];
  int32_T c_size[2];
  int8_T perm[4];
  real32_T u1;
  real32_T u1_c;
  int32_T ia_data;
  int32_T idx;
  int32_T jj;
  int32_T loop_ub;
  int32_T ia_size;
  int32_T ib_size;
  int32_T i;
  int32_T idxRow;
  int32_T idxRow_b;
  int32_T i1;
  int32_T n;
  int32_T ib;
  int32_T k;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T x4_tmp;
  int32_T i2_p;
  int32_T i3_c;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_0_1;
  int32_T stride_1_1;
  int32_T loop_ub_f;
  int32_T loop_ub_g;
  int32_T pre_q_size_idx_0;
  int32_T pre_q_size_idx_1;
  int32_T nc;
  int32_T nia;
  int32_T iafirst;
  int32_T ialast;
  int32_T iblast;
  int32_T b_iblast;
  int32_T exponent;
  int32_T b_exponent;
  int32_T idxRow_g;
  int32_T i4_m;
  int32_T u0;
  int32_T u1_n;
  B_sensor2vCar_c6_pfc_rl_T sf_sensor2vCar_k3;// '<S57>/sensor2vCar'
  B_MedianFilter_c6_pfc_rl_T MedianFilter2_pnaev;// '<S17>/Median Filter'
  B_MedianFilter_c6_pfc_rl_T MedianFilter1_pnaev;// '<S17>/Median Filter'
  B_MedianFilter_c6_pfc_rl_T MedianFilter_pnaev;// '<S17>/Median Filter'
  B_sensor2vCar_c6_pfc_rl_T sf_sensor2vCar_c;// '<S49>/sensor2vCar'
  B_MedianFilter_c6_pfc_rl_T MedianFilter2_pnae;// '<S17>/Median Filter'
  B_MedianFilter_c6_pfc_rl_T MedianFilter1_pnae;// '<S17>/Median Filter'
  B_MedianFilter_c6_pfc_rl_T MedianFilter_pnae;// '<S17>/Median Filter'
  B_sensor2vCar_c6_pfc_rl_T sf_sensor2vCar_d;// '<S41>/sensor2vCar'
  B_MedianFilter_c6_pfc_rl_T MedianFilter2_pna;// '<S17>/Median Filter'
  B_MedianFilter_c6_pfc_rl_T MedianFilter1_pna;// '<S17>/Median Filter'
  B_MedianFilter_c6_pfc_rl_T MedianFilter_pna;// '<S17>/Median Filter'
  B_sensor2vCar_c6_pfc_rl_T sf_sensor2vCar_b;// '<S33>/sensor2vCar'
  B_MedianFilter_c6_pfc_rl_T MedianFilter2_pn;// '<S17>/Median Filter'
  B_MedianFilter_c6_pfc_rl_T MedianFilter1_pn;// '<S17>/Median Filter'
  B_MedianFilter_c6_pfc_rl_T MedianFilter_pn;// '<S17>/Median Filter'
  B_sensor2vCar_c6_pfc_rl_T sf_sensor2vCar_k;// '<S25>/sensor2vCar'
  B_MedianFilter_c6_pfc_rl_T MedianFilter2_p;// '<S17>/Median Filter'
  B_MedianFilter_c6_pfc_rl_T MedianFilter1_p;// '<S17>/Median Filter'
  B_MedianFilter_c6_pfc_rl_T MedianFilter_p;// '<S17>/Median Filter'
  B_sensor2vCar_c6_pfc_rl_T sf_sensor2vCar;// '<S17>/sensor2vCar'
  B_MedianFilter_c6_pfc_rl_T MedianFilter2;// '<S17>/Median Filter'
  B_MedianFilter_c6_pfc_rl_T MedianFilter1;// '<S17>/Median Filter'
  B_MedianFilter_c6_pfc_rl_T MedianFilter;// '<S17>/Median Filter'
};

// Block states (default storage) for system '<Root>'
struct DW_c6_pfc_rl_T {
  nav_slalgs_internal_PurePursu_T obj; // '<S96>/Pure Pursuit'
  ros_slroscpp_internal_block_S_T obj_j;// '<S56>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_k;// '<S55>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_i;// '<S48>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_d;// '<S47>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_b;// '<S40>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_p;// '<S39>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_dg;// '<S32>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_m;// '<S31>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_l;// '<S24>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_c;// '<S23>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_pi;// '<S16>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_lk;// '<S15>/SourceBlock'
  ros_slroscpp_internal_block_P_T obj_d1;// '<S74>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_e;// '<S72>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_a;// '<S70>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_bh;// '<S68>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_dr;// '<S66>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_o;// '<S64>/SinkBlock'
  real_T DiscreteTimeIntegrator_DSTATE;// '<S20>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTATE;// '<S20>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTATE;// '<S20>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator_DSTATE_g;// '<S28>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTAT_m;// '<S28>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTAT_a;// '<S28>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator_DSTATE_n;// '<S36>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTAT_f;// '<S36>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTAT_p;// '<S36>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator_DSTATE_c;// '<S44>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTAT_a;// '<S44>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTA_a5;// '<S44>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator_DSTATE_m;// '<S52>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTAT_n;// '<S52>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTAT_h;// '<S52>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator_DSTATE_l;// '<S60>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTA_aa;// '<S60>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTAT_k;// '<S60>/Discrete-Time Integrator2'
  real_T Memory2_PreviousInput;        // '<S2>/Memory2'
  real_T Memory1_PreviousInput;        // '<S2>/Memory1'
  real_T Memory4_PreviousInput;        // '<S2>/Memory4'
  real_T Memory6_PreviousInput;        // '<S2>/Memory6'
  real_T Memory8_PreviousInput;        // '<S2>/Memory8'
  real_T Memory10_PreviousInput;       // '<S2>/Memory10'
  real_T Waypoints[8];                 // '<S2>/MATLAB Function4'
  real_T idx;                          // '<S2>/MATLAB Function4'
  c_coder_ctarget_DeepLearningN_T policy;// '<S2>/MATLAB Function1'
  c_coder_ctarget_DeepLearningN_T policy_c;// '<S2>/MATLAB Function2'
  c_coder_ctarget_DeepLearningN_T policy_n;// '<S2>/MATLAB Function3'
  c_coder_ctarget_DeepLearningN_T policy_cr;// '<S2>/MATLAB Function5'
  c_coder_ctarget_DeepLearningN_T policy_e;// '<S2>/MATLAB Function6'
  int8_T DiscreteTimeIntegrator_PrevRese;// '<S20>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevRes;// '<S20>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevRes;// '<S20>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator_PrevRe_e;// '<S28>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevR_p;// '<S28>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevR_a;// '<S28>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator_PrevRe_n;// '<S36>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevR_c;// '<S36>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevR_f;// '<S36>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator_PrevRe_i;// '<S44>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevR_e;// '<S44>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevR_m;// '<S44>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator_PrevR_i4;// '<S52>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevR_j;// '<S52>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevR_h;// '<S52>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator_PrevRe_o;// '<S60>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevR_b;// '<S60>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevR_j;// '<S60>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_LOAD;// '<S20>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_LO_a;// '<S28>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_LO_p;// '<S36>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_LO_l;// '<S44>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_LO_f;// '<S52>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_L_ad;// '<S60>/Discrete-Time Integrator2'
  boolean_T policy_not_empty;          // '<S2>/MATLAB Function6'
  boolean_T policy_not_empty_k;        // '<S2>/MATLAB Function5'
  boolean_T policy_not_empty_p;        // '<S2>/MATLAB Function3'
  boolean_T policy_not_empty_c;        // '<S2>/MATLAB Function2'
  boolean_T policy_not_empty_f;        // '<S2>/MATLAB Function1'
  DW_SignalProcess_c6_pfc_rl_T sf_SignalProcess_n;// '<S79>/Signal Process'
  DW_SignalProcess_c6_pfc_rl_T sf_SignalProcess_fw;// '<S78>/Signal Process'
  DW_SignalProcess_c6_pfc_rl_T sf_SignalProcess_f;// '<S77>/Signal Process'
  DW_SignalProcess_c6_pfc_rl_T sf_SignalProcess_i;// '<S76>/Signal Process'
  DW_SignalProcess_c6_pfc_rl_T sf_SignalProcess;// '<S75>/Signal Process'
  DW_sensor2vCar4_c6_pfc_rl_T sf_sensor2vCar4_g;// '<S57>/sensor2vCar4'
  DW_sensor2vCar_c6_pfc_rl_T sf_sensor2vCar_k3;// '<S57>/sensor2vCar'
  DW_MedianFilter_c6_pfc_rl_T MedianFilter2_pnaev;// '<S17>/Median Filter'
  DW_MedianFilter_c6_pfc_rl_T MedianFilter1_pnaev;// '<S17>/Median Filter'
  DW_MedianFilter_c6_pfc_rl_T MedianFilter_pnaev;// '<S17>/Median Filter'
  DW_sensor2vCar4_c6_pfc_rl_T sf_sensor2vCar4_f;// '<S49>/sensor2vCar4'
  DW_sensor2vCar_c6_pfc_rl_T sf_sensor2vCar_c;// '<S49>/sensor2vCar'
  DW_MedianFilter_c6_pfc_rl_T MedianFilter2_pnae;// '<S17>/Median Filter'
  DW_MedianFilter_c6_pfc_rl_T MedianFilter1_pnae;// '<S17>/Median Filter'
  DW_MedianFilter_c6_pfc_rl_T MedianFilter_pnae;// '<S17>/Median Filter'
  DW_sensor2vCar4_c6_pfc_rl_T sf_sensor2vCar4_c;// '<S41>/sensor2vCar4'
  DW_sensor2vCar_c6_pfc_rl_T sf_sensor2vCar_d;// '<S41>/sensor2vCar'
  DW_MedianFilter_c6_pfc_rl_T MedianFilter2_pna;// '<S17>/Median Filter'
  DW_MedianFilter_c6_pfc_rl_T MedianFilter1_pna;// '<S17>/Median Filter'
  DW_MedianFilter_c6_pfc_rl_T MedianFilter_pna;// '<S17>/Median Filter'
  DW_sensor2vCar4_c6_pfc_rl_T sf_sensor2vCar4_n;// '<S33>/sensor2vCar4'
  DW_sensor2vCar_c6_pfc_rl_T sf_sensor2vCar_b;// '<S33>/sensor2vCar'
  DW_MedianFilter_c6_pfc_rl_T MedianFilter2_pn;// '<S17>/Median Filter'
  DW_MedianFilter_c6_pfc_rl_T MedianFilter1_pn;// '<S17>/Median Filter'
  DW_MedianFilter_c6_pfc_rl_T MedianFilter_pn;// '<S17>/Median Filter'
  DW_sensor2vCar4_c6_pfc_rl_T sf_sensor2vCar4_e;// '<S25>/sensor2vCar4'
  DW_sensor2vCar_c6_pfc_rl_T sf_sensor2vCar_k;// '<S25>/sensor2vCar'
  DW_MedianFilter_c6_pfc_rl_T MedianFilter2_p;// '<S17>/Median Filter'
  DW_MedianFilter_c6_pfc_rl_T MedianFilter1_p;// '<S17>/Median Filter'
  DW_MedianFilter_c6_pfc_rl_T MedianFilter_p;// '<S17>/Median Filter'
  DW_sensor2vCar4_c6_pfc_rl_T sf_sensor2vCar4;// '<S17>/sensor2vCar4'
  DW_sensor2vCar_c6_pfc_rl_T sf_sensor2vCar;// '<S17>/sensor2vCar'
  DW_MedianFilter_c6_pfc_rl_T MedianFilter2;// '<S17>/Median Filter'
  DW_MedianFilter_c6_pfc_rl_T MedianFilter1;// '<S17>/Median Filter'
  DW_MedianFilter_c6_pfc_rl_T MedianFilter;// '<S17>/Median Filter'
};

// Parameters (default storage)
struct P_c6_pfc_rl_T_ {
  real_T desired_lookahead_robot_1;    // Variable: desired_lookahead_robot_1
                                          //  Referenced by: '<S96>/Pure Pursuit'

  real_T desired_v_robot_1;            // Variable: desired_v_robot_1
                                          //  Referenced by: '<S96>/Pure Pursuit'

  real_T desired_w_robot_1;            // Variable: desired_w_robot_1
                                          //  Referenced by: '<S96>/Pure Pursuit'

  real_T ks;                           // Variable: ks
                                          //  Referenced by:
                                          //    '<S1>/Gain'
                                          //    '<S1>/Gain1'
                                          //    '<S1>/Gain2'
                                          //    '<S1>/Gain3'
                                          //    '<S1>/Gain4'
                                          //    '<S1>/Gain5'

  real_T GainSvlider_gain;             // Mask Parameter: GainSvlider_gain
                                          //  Referenced by: '<S80>/Slider Gain'

  real_T GainSvlider1_gain;            // Mask Parameter: GainSvlider1_gain
                                          //  Referenced by: '<S81>/Slider Gain'

  SL_Bus_c6_pfc_rl_nav_msgs_Odometry Out1_Y0;// Computed Parameter: Out1_Y0
                                                //  Referenced by: '<S18>/Out1'

  SL_Bus_c6_pfc_rl_nav_msgs_Odometry Constant_Value;// Computed Parameter: Constant_Value
                                                       //  Referenced by: '<S15>/Constant'

  SL_Bus_c6_pfc_rl_nav_msgs_Odometry Out1_Y0_p;// Computed Parameter: Out1_Y0_p
                                                  //  Referenced by: '<S26>/Out1'

  SL_Bus_c6_pfc_rl_nav_msgs_Odometry Constant_Value_b;// Computed Parameter: Constant_Value_b
                                                         //  Referenced by: '<S23>/Constant'

  SL_Bus_c6_pfc_rl_nav_msgs_Odometry Out1_Y0_c;// Computed Parameter: Out1_Y0_c
                                                  //  Referenced by: '<S34>/Out1'

  SL_Bus_c6_pfc_rl_nav_msgs_Odometry Constant_Value_bi;// Computed Parameter: Constant_Value_bi
                                                          //  Referenced by: '<S31>/Constant'

  SL_Bus_c6_pfc_rl_nav_msgs_Odometry Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                                  //  Referenced by: '<S42>/Out1'

  SL_Bus_c6_pfc_rl_nav_msgs_Odometry Constant_Value_c;// Computed Parameter: Constant_Value_c
                                                         //  Referenced by: '<S39>/Constant'

  SL_Bus_c6_pfc_rl_nav_msgs_Odometry Out1_Y0_ps;// Computed Parameter: Out1_Y0_ps
                                                   //  Referenced by: '<S50>/Out1'

  SL_Bus_c6_pfc_rl_nav_msgs_Odometry Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                         //  Referenced by: '<S47>/Constant'

  SL_Bus_c6_pfc_rl_nav_msgs_Odometry Out1_Y0_pq;// Computed Parameter: Out1_Y0_pq
                                                   //  Referenced by: '<S58>/Out1'

  SL_Bus_c6_pfc_rl_nav_msgs_Odometry Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                         //  Referenced by: '<S55>/Constant'

  SL_Bus_c6_pfc_rl_geometry_msgs_Twist Out1_Y0_pz;// Computed Parameter: Out1_Y0_pz
                                                     //  Referenced by: '<S19>/Out1'

  SL_Bus_c6_pfc_rl_geometry_msgs_Twist Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                           //  Referenced by: '<S16>/Constant'

  SL_Bus_c6_pfc_rl_geometry_msgs_Twist Out1_Y0_g;// Computed Parameter: Out1_Y0_g
                                                    //  Referenced by: '<S27>/Out1'

  SL_Bus_c6_pfc_rl_geometry_msgs_Twist Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                           //  Referenced by: '<S24>/Constant'

  SL_Bus_c6_pfc_rl_geometry_msgs_Twist Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                                    //  Referenced by: '<S35>/Out1'

  SL_Bus_c6_pfc_rl_geometry_msgs_Twist Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                           //  Referenced by: '<S32>/Constant'

  SL_Bus_c6_pfc_rl_geometry_msgs_Twist Out1_Y0_cg;// Computed Parameter: Out1_Y0_cg
                                                     //  Referenced by: '<S43>/Out1'

  SL_Bus_c6_pfc_rl_geometry_msgs_Twist Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                           //  Referenced by: '<S40>/Constant'

  SL_Bus_c6_pfc_rl_geometry_msgs_Twist Out1_Y0_b;// Computed Parameter: Out1_Y0_b
                                                    //  Referenced by: '<S51>/Out1'

  SL_Bus_c6_pfc_rl_geometry_msgs_Twist Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                           //  Referenced by: '<S48>/Constant'

  SL_Bus_c6_pfc_rl_geometry_msgs_Twist Out1_Y0_pi;// Computed Parameter: Out1_Y0_pi
                                                     //  Referenced by: '<S59>/Out1'

  SL_Bus_c6_pfc_rl_geometry_msgs_Twist Constant_Value_hi;// Computed Parameter: Constant_Value_hi
                                                            //  Referenced by: '<S56>/Constant'

  SL_Bus_c6_pfc_rl_geometry_msgs_Twist Constant_Value_ox;// Computed Parameter: Constant_Value_ox
                                                            //  Referenced by: '<S63>/Constant'

  SL_Bus_c6_pfc_rl_geometry_msgs_Twist Constant_Value_hn;// Computed Parameter: Constant_Value_hn
                                                            //  Referenced by: '<S65>/Constant'

  SL_Bus_c6_pfc_rl_geometry_msgs_Twist Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                           //  Referenced by: '<S67>/Constant'

  SL_Bus_c6_pfc_rl_geometry_msgs_Twist Constant_Value_by;// Computed Parameter: Constant_Value_by
                                                            //  Referenced by: '<S69>/Constant'

  SL_Bus_c6_pfc_rl_geometry_msgs_Twist Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                           //  Referenced by: '<S71>/Constant'

  SL_Bus_c6_pfc_rl_geometry_msgs_Twist Constant_Value_cu;// Computed Parameter: Constant_Value_cu
                                                            //  Referenced by: '<S73>/Constant'

  real_T MaxAngularVelocity_Value;     // Expression: 1
                                          //  Referenced by: '<S98>/MaxAngularVelocity'

  real_T DiscreteTimeIntegrator_gainval;
                           // Computed Parameter: DiscreteTimeIntegrator_gainval
                              //  Referenced by: '<S20>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC;    // Expression: 0
                                          //  Referenced by: '<S20>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainval
                             //  Referenced by: '<S20>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC;   // Expression: 0
                                          //  Referenced by: '<S20>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainval
                             //  Referenced by: '<S20>/Discrete-Time Integrator2'

  real_T DiscreteTimeIntegrator_gainva_n;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_n
                             //  Referenced by: '<S28>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_d;  // Expression: 0
                                          //  Referenced by: '<S28>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gainv_c;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainv_c
                             //  Referenced by: '<S28>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC_f; // Expression: 0
                                          //  Referenced by: '<S28>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gainv_o;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainv_o
                             //  Referenced by: '<S28>/Discrete-Time Integrator2'

  real_T Memory2_InitialCondition;     // Expression: 0.2
                                          //  Referenced by: '<S2>/Memory2'

  real_T Memory1_InitialCondition;     // Expression: 0.2
                                          //  Referenced by: '<S2>/Memory1'

  real_T Memory3_InitialCondition;     // Expression: 0
                                          //  Referenced by: '<S2>/Memory3'

  real_T Delay_InitialCondition;       // Expression: 0
                                          //  Referenced by: '<S79>/Delay'

  real_T DiscreteTimeIntegrator_gainva_f;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_f
                             //  Referenced by: '<S36>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_j;  // Expression: 0
                                          //  Referenced by: '<S36>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gainv_a;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainv_a
                             //  Referenced by: '<S36>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC_j; // Expression: 0
                                          //  Referenced by: '<S36>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gainv_f;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainv_f
                             //  Referenced by: '<S36>/Discrete-Time Integrator2'

  real_T Memory4_InitialCondition;     // Expression: 0.2
                                          //  Referenced by: '<S2>/Memory4'

  real_T Memory5_InitialCondition;     // Expression: 0
                                          //  Referenced by: '<S2>/Memory5'

  real_T Delay_InitialCondition_p;     // Expression: 0
                                          //  Referenced by: '<S75>/Delay'

  real_T DiscreteTimeIntegrator_gainva_a;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_a
                             //  Referenced by: '<S44>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_f;  // Expression: 0
                                          //  Referenced by: '<S44>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gainv_m;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainv_m
                             //  Referenced by: '<S44>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC_n; // Expression: 0
                                          //  Referenced by: '<S44>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gainv_k;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainv_k
                             //  Referenced by: '<S44>/Discrete-Time Integrator2'

  real_T Memory6_InitialCondition;     // Expression: 0.2
                                          //  Referenced by: '<S2>/Memory6'

  real_T Memory7_InitialCondition;     // Expression: 0
                                          //  Referenced by: '<S2>/Memory7'

  real_T Delay_InitialCondition_c;     // Expression: 0
                                          //  Referenced by: '<S76>/Delay'

  real_T DiscreteTimeIntegrator_gainva_k;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_k
                             //  Referenced by: '<S52>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_g;  // Expression: 0
                                          //  Referenced by: '<S52>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gainv_g;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainv_g
                             //  Referenced by: '<S52>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC_i; // Expression: 0
                                          //  Referenced by: '<S52>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gain_f4;
                          // Computed Parameter: DiscreteTimeIntegrator2_gain_f4
                             //  Referenced by: '<S52>/Discrete-Time Integrator2'

  real_T Memory8_InitialCondition;     // Expression: 0.2
                                          //  Referenced by: '<S2>/Memory8'

  real_T Memory9_InitialCondition;     // Expression: 0
                                          //  Referenced by: '<S2>/Memory9'

  real_T Delay_InitialCondition_k;     // Expression: 0
                                          //  Referenced by: '<S77>/Delay'

  real_T DiscreteTimeIntegrator_gainv_kv;
                          // Computed Parameter: DiscreteTimeIntegrator_gainv_kv
                             //  Referenced by: '<S60>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_gy; // Expression: 0
                                          //  Referenced by: '<S60>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gain_au;
                          // Computed Parameter: DiscreteTimeIntegrator1_gain_au
                             //  Referenced by: '<S60>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC_h; // Expression: 0
                                          //  Referenced by: '<S60>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gainv_e;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainv_e
                             //  Referenced by: '<S60>/Discrete-Time Integrator2'

  real_T Memory10_InitialCondition;    // Expression: 0.2
                                          //  Referenced by: '<S2>/Memory10'

  real_T Memory11_InitialCondition;    // Expression: 0
                                          //  Referenced by: '<S2>/Memory11'

  real_T Delay_InitialCondition_o;     // Expression: 0
                                          //  Referenced by: '<S78>/Delay'

  real_T u_Value;                      // Expression: 0
                                          //  Referenced by: '<S88>/0'

  real_T u_Value_g;                    // Expression: 0
                                          //  Referenced by: '<S88>/1'

  real_T Saturation_UpperSat;          // Expression: 0.5
                                          //  Referenced by: '<S2>/Saturation'

  real_T Saturation_LowerSat;          // Expression: 0.1
                                          //  Referenced by: '<S2>/Saturation'

  real_T Gain2_Gain;                   // Expression: -1.0
                                          //  Referenced by: '<S2>/Gain2'

  real_T Saturation2_UpperSat;         // Expression: 0.5
                                          //  Referenced by: '<S2>/Saturation2'

  real_T Saturation2_LowerSat;         // Expression: 0.1
                                          //  Referenced by: '<S2>/Saturation2'

  real_T Gain1_Gain;                   // Expression: -1.0
                                          //  Referenced by: '<S2>/Gain1'

  real_T Saturation4_UpperSat;         // Expression: 0.5
                                          //  Referenced by: '<S2>/Saturation4'

  real_T Saturation4_LowerSat;         // Expression: 0.1
                                          //  Referenced by: '<S2>/Saturation4'

  real_T Gain3_Gain;                   // Expression: -1.0
                                          //  Referenced by: '<S2>/Gain3'

  real_T Saturation6_UpperSat;         // Expression: 0.5
                                          //  Referenced by: '<S2>/Saturation6'

  real_T Saturation6_LowerSat;         // Expression: 0.1
                                          //  Referenced by: '<S2>/Saturation6'

  real_T Gain4_Gain;                   // Expression: -1.0
                                          //  Referenced by: '<S2>/Gain4'

  real_T Saturation8_UpperSat;         // Expression: 0.5
                                          //  Referenced by: '<S2>/Saturation8'

  real_T Saturation8_LowerSat;         // Expression: 0.1
                                          //  Referenced by: '<S2>/Saturation8'

  real_T Gain5_Gain;                   // Expression: -1.0
                                          //  Referenced by: '<S2>/Gain5'

  real_T Constant_Value_fb;            // Expression: 0
                                          //  Referenced by: '<S60>/Constant'

  real_T Constant_Value_fo;            // Expression: 0
                                          //  Referenced by: '<S52>/Constant'

  real_T Constant_Value_mj;            // Expression: 0
                                          //  Referenced by: '<S44>/Constant'

  real_T Constant_Value_dv;            // Expression: 0
                                          //  Referenced by: '<S36>/Constant'

  real_T Constant_Value_ca;            // Expression: 0
                                          //  Referenced by: '<S28>/Constant'

  real_T Constant_Value_k;             // Expression: 0
                                          //  Referenced by: '<S20>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_c6_pfc_rl_T {
  const char_T * volatile errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_c6_pfc_rl_T c6_pfc_rl_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_c6_pfc_rl_T c6_pfc_rl_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_c6_pfc_rl_T c6_pfc_rl_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void c6_pfc_rl_initialize(void);
  extern void c6_pfc_rl_step(void);
  extern void c6_pfc_rl_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_c6_pfc_rl_T *const c6_pfc_rl_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S96>/Dot Product' : Unused code path elimination
//  Block '<S96>/GoalRadius' : Unused code path elimination
//  Block '<S96>/Relational Operator' : Unused code path elimination
//  Block '<S96>/Sqrt' : Unused code path elimination
//  Block '<S96>/Subtract' : Unused code path elimination
//  Block '<S88>/Constant1' : Unused code path elimination


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
//  '<Root>' : 'c6_pfc_rl'
//  '<S1>'   : 'c6_pfc_rl/Subsystem'
//  '<S2>'   : 'c6_pfc_rl/controller'
//  '<S3>'   : 'c6_pfc_rl/Subsystem/Car Pose Listener'
//  '<S4>'   : 'c6_pfc_rl/Subsystem/Car Pose Listener1'
//  '<S5>'   : 'c6_pfc_rl/Subsystem/Car Pose Listener2'
//  '<S6>'   : 'c6_pfc_rl/Subsystem/Car Pose Listener3'
//  '<S7>'   : 'c6_pfc_rl/Subsystem/Car Pose Listener4'
//  '<S8>'   : 'c6_pfc_rl/Subsystem/Car Pose Listener5'
//  '<S9>'   : 'c6_pfc_rl/Subsystem/Command Velocity Publisher'
//  '<S10>'  : 'c6_pfc_rl/Subsystem/Command Velocity Publisher1'
//  '<S11>'  : 'c6_pfc_rl/Subsystem/Command Velocity Publisher2'
//  '<S12>'  : 'c6_pfc_rl/Subsystem/Command Velocity Publisher3'
//  '<S13>'  : 'c6_pfc_rl/Subsystem/Command Velocity Publisher4'
//  '<S14>'  : 'c6_pfc_rl/Subsystem/Command Velocity Publisher5'
//  '<S15>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener/Subscribe'
//  '<S16>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener/Subscribe1'
//  '<S17>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener/Subsystem'
//  '<S18>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener/Subscribe/Enabled Subsystem'
//  '<S19>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener/Subscribe1/Enabled Subsystem'
//  '<S20>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener/Subsystem/DiffSteer Kinematics'
//  '<S21>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener/Subsystem/sensor2vCar'
//  '<S22>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener/Subsystem/sensor2vCar4'
//  '<S23>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener1/Subscribe'
//  '<S24>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener1/Subscribe1'
//  '<S25>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener1/Subsystem'
//  '<S26>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener1/Subscribe/Enabled Subsystem'
//  '<S27>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener1/Subscribe1/Enabled Subsystem'
//  '<S28>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener1/Subsystem/DiffSteer Kinematics'
//  '<S29>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener1/Subsystem/sensor2vCar'
//  '<S30>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener1/Subsystem/sensor2vCar4'
//  '<S31>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener2/Subscribe'
//  '<S32>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener2/Subscribe1'
//  '<S33>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener2/Subsystem'
//  '<S34>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener2/Subscribe/Enabled Subsystem'
//  '<S35>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener2/Subscribe1/Enabled Subsystem'
//  '<S36>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener2/Subsystem/DiffSteer Kinematics'
//  '<S37>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener2/Subsystem/sensor2vCar'
//  '<S38>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener2/Subsystem/sensor2vCar4'
//  '<S39>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener3/Subscribe'
//  '<S40>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener3/Subscribe1'
//  '<S41>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener3/Subsystem'
//  '<S42>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener3/Subscribe/Enabled Subsystem'
//  '<S43>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener3/Subscribe1/Enabled Subsystem'
//  '<S44>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener3/Subsystem/DiffSteer Kinematics'
//  '<S45>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener3/Subsystem/sensor2vCar'
//  '<S46>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener3/Subsystem/sensor2vCar4'
//  '<S47>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener4/Subscribe'
//  '<S48>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener4/Subscribe1'
//  '<S49>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener4/Subsystem'
//  '<S50>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener4/Subscribe/Enabled Subsystem'
//  '<S51>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener4/Subscribe1/Enabled Subsystem'
//  '<S52>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener4/Subsystem/DiffSteer Kinematics'
//  '<S53>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener4/Subsystem/sensor2vCar'
//  '<S54>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener4/Subsystem/sensor2vCar4'
//  '<S55>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener5/Subscribe'
//  '<S56>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener5/Subscribe1'
//  '<S57>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener5/Subsystem'
//  '<S58>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener5/Subscribe/Enabled Subsystem'
//  '<S59>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener5/Subscribe1/Enabled Subsystem'
//  '<S60>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener5/Subsystem/DiffSteer Kinematics'
//  '<S61>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener5/Subsystem/sensor2vCar'
//  '<S62>'  : 'c6_pfc_rl/Subsystem/Car Pose Listener5/Subsystem/sensor2vCar4'
//  '<S63>'  : 'c6_pfc_rl/Subsystem/Command Velocity Publisher/Blank Message'
//  '<S64>'  : 'c6_pfc_rl/Subsystem/Command Velocity Publisher/Publish2'
//  '<S65>'  : 'c6_pfc_rl/Subsystem/Command Velocity Publisher1/Blank Message'
//  '<S66>'  : 'c6_pfc_rl/Subsystem/Command Velocity Publisher1/Publish2'
//  '<S67>'  : 'c6_pfc_rl/Subsystem/Command Velocity Publisher2/Blank Message'
//  '<S68>'  : 'c6_pfc_rl/Subsystem/Command Velocity Publisher2/Publish2'
//  '<S69>'  : 'c6_pfc_rl/Subsystem/Command Velocity Publisher3/Blank Message'
//  '<S70>'  : 'c6_pfc_rl/Subsystem/Command Velocity Publisher3/Publish2'
//  '<S71>'  : 'c6_pfc_rl/Subsystem/Command Velocity Publisher4/Blank Message'
//  '<S72>'  : 'c6_pfc_rl/Subsystem/Command Velocity Publisher4/Publish2'
//  '<S73>'  : 'c6_pfc_rl/Subsystem/Command Velocity Publisher5/Blank Message'
//  '<S74>'  : 'c6_pfc_rl/Subsystem/Command Velocity Publisher5/Publish2'
//  '<S75>'  : 'c6_pfc_rl/controller/Ego Car Signal Process1'
//  '<S76>'  : 'c6_pfc_rl/controller/Ego Car Signal Process2'
//  '<S77>'  : 'c6_pfc_rl/controller/Ego Car Signal Process3'
//  '<S78>'  : 'c6_pfc_rl/controller/Ego Car Signal Process4'
//  '<S79>'  : 'c6_pfc_rl/controller/Ego Car Signal Process5'
//  '<S80>'  : 'c6_pfc_rl/controller/Gain (Svlider)'
//  '<S81>'  : 'c6_pfc_rl/controller/Gain (Svlider)1'
//  '<S82>'  : 'c6_pfc_rl/controller/MATLAB Function1'
//  '<S83>'  : 'c6_pfc_rl/controller/MATLAB Function2'
//  '<S84>'  : 'c6_pfc_rl/controller/MATLAB Function3'
//  '<S85>'  : 'c6_pfc_rl/controller/MATLAB Function4'
//  '<S86>'  : 'c6_pfc_rl/controller/MATLAB Function5'
//  '<S87>'  : 'c6_pfc_rl/controller/MATLAB Function6'
//  '<S88>'  : 'c6_pfc_rl/controller/Subsystem1'
//  '<S89>'  : 'c6_pfc_rl/controller/signal distribute'
//  '<S90>'  : 'c6_pfc_rl/controller/Ego Car Signal Process1/Signal Process'
//  '<S91>'  : 'c6_pfc_rl/controller/Ego Car Signal Process2/Signal Process'
//  '<S92>'  : 'c6_pfc_rl/controller/Ego Car Signal Process3/Signal Process'
//  '<S93>'  : 'c6_pfc_rl/controller/Ego Car Signal Process4/Signal Process'
//  '<S94>'  : 'c6_pfc_rl/controller/Ego Car Signal Process5/Signal Process'
//  '<S95>'  : 'c6_pfc_rl/controller/Subsystem1/Adjust Velocities to Avoid Obstacles'
//  '<S96>'  : 'c6_pfc_rl/controller/Subsystem1/Compute Velocity and Heading for Path following'
//  '<S97>'  : 'c6_pfc_rl/controller/Subsystem1/Outputs1'
//  '<S98>'  : 'c6_pfc_rl/controller/Subsystem1/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S99>'  : 'c6_pfc_rl/controller/Subsystem1/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S100>' : 'c6_pfc_rl/controller/Subsystem1/Compute Velocity and Heading for Path following/ Extract Goal'

#endif                                 // RTW_HEADER_c6_pfc_rl_h_

//
// File trailer for generated code.
//
// [EOF]
//
