//
// File: c10_wp_snake.h
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
#ifndef RTW_HEADER_c10_wp_snake_h_
#define RTW_HEADER_c10_wp_snake_h_
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "c10_wp_snake_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rt_defines.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals for system '<S28>/Median Filter'
struct B_MedianFilter_c10_wp_snake_T {
  real_T MedianFilter;                 // '<S28>/Median Filter'
  real_T vprev;
  real_T p;
};

// Block states (default storage) for system '<S28>/Median Filter'
struct DW_MedianFilter_c10_wp_snake_T {
  dsp_MedianFilter_c10_wp_snake_T obj; // '<S28>/Median Filter'
  boolean_T objisempty;                // '<S28>/Median Filter'
};

// Block signals for system '<S28>/sensor2vCar'
struct B_sensor2vCar_c10_wp_snake_T {
  real_T aSinInput;
  real_T matrix_idx_0;
};

// Block states (default storage) for system '<S28>/sensor2vCar'
struct DW_sensor2vCar_c10_wp_snake_T {
  real_T x0;                           // '<S28>/sensor2vCar'
  real_T y0;                           // '<S28>/sensor2vCar'
  real_T yaw0;                         // '<S28>/sensor2vCar'
  real_T yaw1;                         // '<S28>/sensor2vCar'
  real_T x0_init;                      // '<S28>/sensor2vCar'
  real_T y0_init;                      // '<S28>/sensor2vCar'
  real_T yaw0_init;                    // '<S28>/sensor2vCar'
  real_T fStart;                       // '<S28>/sensor2vCar'
};

// Block states (default storage) for system '<S28>/sensor2vCar4'
struct DW_sensor2vCar4_c10_wp_snake_T {
  real_T v0;                           // '<S28>/sensor2vCar4'
  real_T w0;                           // '<S28>/sensor2vCar4'
};

// Block signals for system '<S141>/Vector Field Histogram'
struct B_VectorFieldHistogram_c10_wp_T {
  real_T candToSectDiff_data[49680];
  real_T x_data[49680];
  boolean_T nearIdx_data[49680];
  real_T kalpha[540];
  boolean_T validWeights_data[3600];
  real_T candidateDirs_data[276];
  real_T candidateDirections_data[276];
  real_T cDiff_data[276];
  real_T b_data[276];
  real_T delta_data[276];
  real_T targetDir_data[276];
  real_T prevDir_data[276];
  real_T y_data[276];
  real_T theta_data[276];
  real_T tmp_data[276];
  real_T sectors_data[182];
  real_T angles_data[182];
  real_T changes[181];
  real_T obj[180];
  real_T obstacleDensity[180];
  real_T b_x[180];
  real_T y[180];
  real_T sectorSizes_data[91];
  real_T narrowDirs_data[91];
  real_T angles_data_m[91];
  real_T angles_data_c[91];
  real_T theta1_data[91];
  real_T b_y1_data[91];
  int32_T foundSectors_data[181];
  int32_T tmp_data_k[181];
  int32_T ub_data[180];
  int16_T vb_data[276];
  real_T lowerVec_data[60];
  real_T higherVec_data[60];
  real_T lh_data[60];
  real_T kalphaVec_data[60];
  real_T lk_data[60];
  real_T kh_data[60];
  boolean_T freeDirs_data[276];
  boolean_T pos_data[276];
  boolean_T b_data_c[276];
  uint8_T b_data_b[180];
  uint8_T c_data[180];
  boolean_T d[180];
  boolean_T p[180];
  boolean_T r[180];
  boolean_T obj_data[180];
  real_T u0[20];
  real_T u1[20];
  real_T validScan_InternalRanges_data[20];
  real_T validScan_InternalAngles_data[20];
  real_T DYj_data[20];
  real_T distR_data[20];
  real_T distL_data[20];
  real_T g_data[20];
  real_T weightedRanges_data[20];
  real_T sinOfEnlargement_data[20];
  real_T higherAng_data[20];
  real_T lowerAng_data[20];
  real_T varargin_2_data[20];
  real_T obj_InternalRanges_data[20];
  real_T objOut_InternalAngles_data[20];
  real_T y_data_p[20];
  int8_T ob_data[91];
  int8_T tb_data[91];
  boolean_T blockedR_data[20];
  boolean_T blockedL_data[20];
  boolean_T validRangeLimitIndices_data[20];
  boolean_T validAngleLimitIndices_data[20];
  boolean_T tmp_data_c[20];
  boolean_T tmp_data_f[20];
  boolean_T tmp_data_g[20];
  boolean_T tmp_data_g1[20];
  boolean_T objOut_InternalRanges_tmp_data[20];
  boolean_T y_data_m[20];
  d_cell_wrap_c10_wp_snake_T d_n;
  real_T obj_p[2];
  real_T obj_l[2];
  real_T parsedAngleLimits[2];
  real_T VectorFieldHistogram;         // '<S141>/Vector Field Histogram'
  real_T target;
  real_T DYr;
  real_T DYl;
  real_T phiR_data;
  real_T phiL_data;
  real_T validScan_InternalRanges;
  real_T cVal;
  real_T b;
  real_T tdWeight;
  real_T cdWeight;
  real_T pdWeight;
  real_T totalWeight;
  real_T q;
  real_T constA;
  real_T varargin_2;
  real_T varargin_2_g;
  real_T objOut_InternalAngles;
  real_T theta1;
  real_T c_data_tmp;
  real_T c_data_tmp_l;
  int32_T sectors_size[2];
  int32_T candToSectDiff_size[2];
  int32_T candidateDirections_size[2];
  int32_T tmp_size[2];
  int32_T angles_size[2];
  int32_T angles_size_j[2];
  int32_T obj_size[2];
  int32_T b_size[2];
  int32_T delta_size[2];
  int32_T targetDir_size[2];
  int32_T prevDir_size[2];
  int32_T lowerVec_size[2];
  int32_T lh_size[2];
  int32_T kalphaVec_size[2];
  int32_T lk_size[2];
  int32_T kh_size[2];
  int32_T tmp_size_d[2];
  int32_T theta1_size[2];
  int32_T i;
  int32_T nx;
  int32_T k;
  int32_T validScan_InternalRanges_size;
  int32_T validScan_InternalAngles_size;
  int32_T DYj_size;
  int32_T ii_data_idx_0;
  int32_T b_size_idx_1;
  int32_T distR_size_idx_0;
  int32_T nx_tmp;
  int32_T end;
  int32_T nx_d;
  int32_T ntilerows;
  int32_T ibmat;
  int32_T low_i;
  int32_T loop_ub;
};

// Block states (default storage) for system '<S141>/Vector Field Histogram'
struct DW_VectorFieldHistogram_c10_w_T {
  nav_slalgs_internal_VectorFie_T obj; // '<S141>/Vector Field Histogram'
  boolean_T objisempty;                // '<S141>/Vector Field Histogram'
};

// Block signals for system '<S142>/ Extract Goal'
struct B_ExtractGoal_c10_wp_snake_T {
  real_T x4[4];
  real_T c_data[2];
  real_T ridx_data;
  real_T rtu_Waypoints;
  real_T rtu_Waypoints_m;
  real_T d;
  real_T absx;
  int32_T ridx_size[2];
  int32_T c_size[2];
};

// Block signals for system '<S142>/Pure Pursuit'
struct B_PurePursuit_c10_wp_snake_T {
  real_T waypoints_data[2];
  real_T lookaheadStartPt[2];
  real_T PurePursuit_o1;               // '<S142>/Pure Pursuit'
  real_T PurePursuit_o2;               // '<S142>/Pure Pursuit'
  real_T PurePursuit_o3;               // '<S142>/Pure Pursuit'
};

// Block states (default storage) for system '<S142>/Pure Pursuit'
struct DW_PurePursuit_c10_wp_snake_T {
  nav_slalgs_internal_PurePursu_T obj; // '<S142>/Pure Pursuit'
  boolean_T objisempty;                // '<S142>/Pure Pursuit'
};

// Block signals for system '<S140>/MATLAB Function1'
struct B_MATLABFunction1_c10_wp_snak_T {
  real_T intsectionPts[40];
  real_T b_x[40];
  real_T poseX[30];
  real_T x[20];
  occupancyMap_c10_wp_snake_T map;
  real_T supportLines[8];
  real_T supportLines_data[8];
  real_T newline_data[8];
  real_T line[4];
  real_T ints[4];
  real_T b_x_data[4];
  real_T endPtX_data[4];
  real_T endPtY_data[4];
  real_T xStart_data[4];
  real_T yStart_data[4];
  real_T a[4];
  real_T vPose[3];
  int8_T b_data[20];
  boolean_T c[20];
  emxArray_boolean_T_c10_wp_sna_T f_data;
  emxArray_boolean_T_c10_wp_sna_T f_data_m;
  emxArray_boolean_T_c10_wp_sna_T f_data_c;
  emxArray_boolean_T_c10_wp_sna_T originIdx;
  real_T botLeftIdx[2];
  real_T a_k[2];
  real_T gridLocationInWorld[2];
  real_T pos[2];
  real_T inds_data[2];
  real_T linePos_data[2];
  real_T p2[2];
  real_T dv[2];
  real_T b_denom_data[2];
  real_T newline_data_c[2];
  real_T tmp_data[2];
  real_T ndbl;
  real_T apnd;
  real_T u0;
  real_T theta;
  real_T resolution;
  real_T halfEdge;
  real_T b_y;
  real_T scale;
  real_T absxk;
  real_T t;
  real_T gridSize_idx_0;
  real_T pos_tmp;
  real_T maxCells;
  real_T x0;
  real_T b_y0;
  real_T x_b;
  real_T y;
  real_T x1;
  real_T b_y1;
  real_T iter;
  real_T dtx;
  real_T l;
  real_T dty;
  real_T dx;
  real_T b_dx;
  real_T b_x_tmp;
  real_T c_x_tmp;
  real_T dtx_tmp;
  real_T d;
  real_T resolution_p;
  real_T ndbl_c;
  real_T apnd_f;
  real_T cdiff;
  real_T u0_g;
  real_T u1;
  real_T p_idx_0;
  real_T p_idx_1;
  real_T res;
  real_T locWorld_idx_0;
  real_T locWorld_idx_1;
  real_T xlimit_idx_1;
  real_T ylimit_idx_1;
  real_T b_obj;
  real_T line1;
  real_T dy;
  real_T denom;
  real_T dx_idx_0;
  real_T dy_idx_0;
  real_T dx_idx_1;
  real_T denom_idx_0;
  real_T newline_data_tmp;
  int32_T b_ints_size[2];
  int32_T supportLines_size[2];
  cell_wrap_20_c10_wp_snake_T reshapes[2];
  cell_wrap_20_c10_wp_snake_T b_reshapes[2];
  boolean_T f_data_g[4];
  boolean_T g_data[4];
  int8_T h_data[4];
  int8_T k_data[4];
  int8_T m_data[4];
  int8_T q_data[4];
  int32_T nm1d2;
  int32_T nx;
  int32_T loop_ub;
  int32_T d_size_idx_1;
  int32_T c_data_tmp;
  int32_T e_i;
  int32_T idx;
  int32_T i;
  int32_T loop_ub_m;
  int32_T grid;
  int32_T linePos_size;
  int32_T d_size_idx_0;
  int32_T end;
  int32_T xIncSign;
  int32_T b_xIncSign;
  int32_T v_data;
  int32_T loop_ub_n;
  int32_T f_size;
  int32_T v_size;
  int32_T i_p;
  int32_T endPtX_size_idx_0;
  int32_T endPtY_size_idx_0;
  int32_T xStart_size_idx_0;
  int32_T nxin;
  int32_T nxout;
  int32_T k0;
  int32_T b_k;
  int32_T newNumel;
  int32_T i_l;
  int32_T nx_j;
  int32_T nm1d2_d;
  int32_T k;
  int32_T b_j;
  int32_T trueCount;
  int32_T inflatedGrid;
  int32_T se;
  int32_T csz_idx_1;
  int32_T i1;
  int32_T resolution_tmp;
  int32_T pagesize;
  int32_T pageroot;
  int32_T i_g;
  int32_T e_k;
  int32_T f_k;
  int32_T h_k;
  int32_T loop_ub_l;
  int32_T val;
  int32_T val_d;
  int32_T npages_idx_0;
  int32_T newNumel_d;
  int32_T i_lx;
  int32_T nx_o;
  int32_T exponent;
  int32_T loop_ub_b;
  int32_T loop_ub_nu;
  int32_T i2;
  int32_T originIdx_b;
  int32_T mapStart;
  int32_T loop_ub_ln;
  int32_T i3;
  int32_T newNumel_h;
  int32_T i_b;
  int32_T e_k_d;
  int32_T i4;
  int32_T newline_size;
  int32_T tmp_size;
  int32_T c_size_idx_0;
  int32_T acoef;
  int32_T k_e;
  int32_T i_bj;
  int32_T newNumel_j;
  int32_T i_f;
  int32_T newNumel_a;
  int32_T i_j;
  int32_T newNumel_jz;
  int32_T i_o;
  int32_T newNumel_n;
  int32_T i_i;
  int32_T newNumel_o;
  int32_T i_n;
  int32_T newNumel_m;
  int32_T i_c;
  int32_T nx_m;
  int32_T b_k_m;
  uint32_T gridSize_idx_0_j;
  uint32_T gridSize_idx_1;
  uint32_T siz_idx_0;
  int8_T d_data[2];
  int8_T e_data[2];
  int8_T ii_data[2];
  boolean_T j[2];
  boolean_T l_h[2];
  boolean_T x_c[2];
  boolean_T par[2];
  int8_T c_data[2];
  int16_T b_b;
  int16_T u1_c;
  int8_T csz_idx_0;
  boolean_T isMat;
  boolean_T lowFPE_idx_0;
  boolean_T isObstacleFree;
  boolean_T y_p;
  boolean_T par_p;
  boolean_T b;
};

// Block signals (default storage)
struct B_c10_wp_snake_T {
  SL_Bus_c10_wp_snake_nav_msgs_Odometry In1;// '<S101>/In1'
  SL_Bus_c10_wp_snake_nav_msgs_Odometry In1_e;// '<S93>/In1'
  SL_Bus_c10_wp_snake_nav_msgs_Odometry In1_f;// '<S85>/In1'
  SL_Bus_c10_wp_snake_nav_msgs_Odometry In1_p;// '<S77>/In1'
  SL_Bus_c10_wp_snake_nav_msgs_Odometry In1_n;// '<S69>/In1'
  SL_Bus_c10_wp_snake_nav_msgs_Odometry In1_l;// '<S61>/In1'
  SL_Bus_c10_wp_snake_nav_msgs_Odometry In1_m;// '<S53>/In1'
  SL_Bus_c10_wp_snake_nav_msgs_Odometry In1_p3;// '<S45>/In1'
  SL_Bus_c10_wp_snake_nav_msgs_Odometry In1_d;// '<S37>/In1'
  SL_Bus_c10_wp_snake_nav_msgs_Odometry In1_pu;// '<S29>/In1'
  SL_Bus_c10_wp_snake_nav_msgs_Odometry b_varargout_2;
  real_T poses[30];                    // '<S2>/waypoint1'
  real_T wp_target[20];                // '<S2>/waypoint'
  real_T ranges[20];                   // '<S140>/MATLAB Function9'
  real_T num_increase_out[10];         // '<S2>/waypoint'
  SL_Bus_c10_wp_snake_geometry_msgs_Twist In1_ea;// '<S102>/In1'
  SL_Bus_c10_wp_snake_geometry_msgs_Twist In1_j;// '<S94>/In1'
  SL_Bus_c10_wp_snake_geometry_msgs_Twist In1_i;// '<S86>/In1'
  SL_Bus_c10_wp_snake_geometry_msgs_Twist In1_k;// '<S78>/In1'
  SL_Bus_c10_wp_snake_geometry_msgs_Twist In1_l2;// '<S70>/In1'
  SL_Bus_c10_wp_snake_geometry_msgs_Twist In1_ls;// '<S62>/In1'
  SL_Bus_c10_wp_snake_geometry_msgs_Twist In1_e2;// '<S54>/In1'
  SL_Bus_c10_wp_snake_geometry_msgs_Twist In1_jh;// '<S46>/In1'
  SL_Bus_c10_wp_snake_geometry_msgs_Twist In1_p5;// '<S38>/In1'
  SL_Bus_c10_wp_snake_geometry_msgs_Twist In1_o;// '<S30>/In1'
  SL_Bus_c10_wp_snake_geometry_msgs_Twist BusAssignment1;// '<S15>/Bus Assignment1' 
  real_T TmpSignalConversi_jhh02f3oe[3];
  real_T TmpSignalConversio_jhh02f3o[3];
  real_T TmpSignalConversion_jhh02f3[3];
  real_T TmpSignalConversionA_jhh02f[3];
  real_T TmpSignalConversionAt_jhh02[3];
  real_T TmpSignalConversionAtP_jhh0[3];
  real_T TmpSignalConversionAtPu_jhh[3];
  real_T TmpSignalConversionAtPur_jh[3];
  real_T TmpSignalConversionAtPure_j[3];
  real_T TmpSignalConversionAtPurePu[3];
  char_T b_zeroDelimTopic[19];
  char_T b_zeroDelimTopic_m[18];
  char_T b_zeroDelimTopic_c[17];
  real_T X[2];
  real_T w10[2];                       // '<S3>/MATLAB Function'
  real_T w9[2];                        // '<S3>/MATLAB Function'
  real_T w8[2];                        // '<S3>/MATLAB Function'
  real_T w7[2];                        // '<S3>/MATLAB Function'
  real_T w6[2];                        // '<S3>/MATLAB Function'
  real_T w5[2];                        // '<S3>/MATLAB Function'
  real_T w4[2];                        // '<S3>/MATLAB Function'
  real_T w3[2];                        // '<S3>/MATLAB Function'
  real_T w2[2];                        // '<S3>/MATLAB Function'
  real_T w1[2];                        // '<S3>/MATLAB Function'
  char_T b_zeroDelimTopic_k[15];
  char_T b_zeroDelimTopic_cx[14];
  char_T b_zeroDelimTopic_b[12];
  real_T x_i2;                         // '<S28>/sensor2vCar'
  real_T y_o;                          // '<S28>/sensor2vCar'
  real_T yaw_or;                       // '<S28>/sensor2vCar'
  real_T W;                            // '<S28>/sensor2vCar4'
  real_T flag_d;                       // '<S36>/sensor2vCar'
  real_T yaw_init_kp;                  // '<S28>/sensor2vCar'
  real_T flag;                         // '<S28>/sensor2vCar'
  real_T yaw_o;                        // '<S36>/sensor2vCar'
  real_T W_n;                          // '<S36>/sensor2vCar4'
  real_T yaw_e;                        // '<S44>/sensor2vCar'
  real_T W_mz;                         // '<S44>/sensor2vCar4'
  real_T yaw_h;                        // '<S52>/sensor2vCar'
  real_T W_m;                          // '<S52>/sensor2vCar4'
  real_T yaw_bz;                       // '<S60>/sensor2vCar'
  real_T W_av;                         // '<S60>/sensor2vCar4'
  real_T W_ae;                         // '<S68>/sensor2vCar4'
  real_T W_ce;                         // '<S76>/sensor2vCar4'
  real_T W_c;                          // '<S84>/sensor2vCar4'
  real_T W_a;                          // '<S92>/sensor2vCar4'
  real_T W_e;                          // '<S100>/sensor2vCar4'
  real_T Gain9;                        // '<S1>/Gain9'
  real_T Add1;                         // '<S150>/Add1'
  real_T awsinpsi;                     // '<S31>/a w sin(psi)'
  real_T Saturation9;                  // '<S3>/Saturation9'
  real_T ucospsi;                      // '<S31>/u cos(psi)'
  real_T usinpsi;                      // '<S31>/u sin(psi)'
  real_T awcospsi;                     // '<S31>/a w cos(psi)'
  real_T awsinpsi_g;                   // '<S39>/a w sin(psi)'
  real_T ucospsi_o;                    // '<S39>/u cos(psi)'
  real_T usinpsi_a;                    // '<S39>/u sin(psi)'
  real_T awcospsi_g;                   // '<S39>/a w cos(psi)'
  real_T awsinpsi_l;                   // '<S47>/a w sin(psi)'
  real_T ucospsi_e;                    // '<S47>/u cos(psi)'
  real_T usinpsi_b;                    // '<S47>/u sin(psi)'
  real_T awcospsi_l;                   // '<S47>/a w cos(psi)'
  real_T awsinpsi_a;                   // '<S55>/a w sin(psi)'
  real_T ucospsi_eq;                   // '<S55>/u cos(psi)'
  real_T usinpsi_d;                    // '<S55>/u sin(psi)'
  real_T awcospsi_d;                   // '<S55>/a w cos(psi)'
  real_T awsinpsi_d;                   // '<S63>/a w sin(psi)'
  real_T ucospsi_p;                    // '<S63>/u cos(psi)'
  real_T usinpsi_c;                    // '<S63>/u sin(psi)'
  real_T awcospsi_f;                   // '<S63>/a w cos(psi)'
  real_T awsinpsi_lj;                  // '<S71>/a w sin(psi)'
  real_T ucospsi_a;                    // '<S71>/u cos(psi)'
  real_T usinpsi_p;                    // '<S71>/u sin(psi)'
  real_T awcospsi_n;                   // '<S71>/a w cos(psi)'
  real_T awsinpsi_n;                   // '<S79>/a w sin(psi)'
  real_T ucospsi_m;                    // '<S79>/u cos(psi)'
  real_T usinpsi_g;                    // '<S79>/u sin(psi)'
  real_T awcospsi_c;                   // '<S79>/a w cos(psi)'
  real_T awsinpsi_lb;                  // '<S87>/a w sin(psi)'
  real_T ucospsi_b;                    // '<S87>/u cos(psi)'
  real_T usinpsi_o;                    // '<S87>/u sin(psi)'
  real_T awcospsi_k;                   // '<S87>/a w cos(psi)'
  real_T awsinpsi_ac;                  // '<S95>/a w sin(psi)'
  real_T ucospsi_mw;                   // '<S95>/u cos(psi)'
  real_T usinpsi_a3;                   // '<S95>/u sin(psi)'
  real_T awcospsi_p;                   // '<S95>/a w cos(psi)'
  real_T awsinpsi_h;                   // '<S103>/a w sin(psi)'
  real_T ucospsi_g;                    // '<S103>/u cos(psi)'
  real_T usinpsi_i;                    // '<S103>/u sin(psi)'
  real_T awcospsi_f0;                  // '<S103>/a w cos(psi)'
  real_T DiscreteTimeIntegrator2_j;    // '<S103>/Discrete-Time Integrator2'
  real_T Sum1_la;                      // '<S100>/Sum1'
  real_T Sum_j;                        // '<S100>/Sum'
  real_T DiscreteTimeIntegrator2_m;    // '<S95>/Discrete-Time Integrator2'
  real_T Sum1_i;                       // '<S92>/Sum1'
  real_T Sum_fu;                       // '<S92>/Sum'
  real_T DiscreteTimeIntegrator2_i;    // '<S87>/Discrete-Time Integrator2'
  real_T Sum1_e;                       // '<S84>/Sum1'
  real_T Sum_k;                        // '<S84>/Sum'
  real_T DiscreteTimeIntegrator2_p2;   // '<S79>/Discrete-Time Integrator2'
  real_T Sum1_lf;                      // '<S76>/Sum1'
  real_T Sum_c;                        // '<S76>/Sum'
  real_T DiscreteTimeIntegrator2_d;    // '<S71>/Discrete-Time Integrator2'
  real_T Sum1_d;                       // '<S68>/Sum1'
  real_T Sum_d;                        // '<S68>/Sum'
  real_T DiscreteTimeIntegrator2_g;    // '<S63>/Discrete-Time Integrator2'
  real_T Sum1_l;                       // '<S60>/Sum1'
  real_T Sum_m;                        // '<S60>/Sum'
  real_T DiscreteTimeIntegrator2_f;    // '<S55>/Discrete-Time Integrator2'
  real_T Sum1_k;                       // '<S52>/Sum1'
  real_T Sum_f;                        // '<S52>/Sum'
  real_T DiscreteTimeIntegrator2_c;    // '<S47>/Discrete-Time Integrator2'
  real_T Sum1_g;                       // '<S44>/Sum1'
  real_T Sum_o;                        // '<S44>/Sum'
  real_T DiscreteTimeIntegrator2_p;    // '<S39>/Discrete-Time Integrator2'
  real_T Sum1_m;                       // '<S36>/Sum1'
  real_T Sum_p;                        // '<S36>/Sum'
  real_T DiscreteTimeIntegrator2;      // '<S31>/Discrete-Time Integrator2'
  real_T Sum1;                         // '<S28>/Sum1'
  real_T Sum;                          // '<S28>/Sum'
  real_T u1;
  SL_Bus_c10_wp_snake_std_msgs_Float64 BusAssignment1_b;// '<S1>/Bus Assignment1' 
  int32_T i;
  int32_T i_p;
  boolean_T nanflag;
  boolean_T b_nanflag;
  boolean_T RelationalOperator;        // '<S142>/Relational Operator'
  boolean_T RelationalOperator_i;      // '<S170>/Relational Operator'
  boolean_T RelationalOperator_a;      // '<S177>/Relational Operator'
  boolean_T RelationalOperator_l;      // '<S184>/Relational Operator'
  boolean_T RelationalOperator_e;      // '<S191>/Relational Operator'
  boolean_T RelationalOperator_h;      // '<S198>/Relational Operator'
  boolean_T RelationalOperator_a2;     // '<S205>/Relational Operator'
  boolean_T RelationalOperator_hc;     // '<S149>/Relational Operator'
  B_MATLABFunction1_c10_wp_snak_T sf_MATLABFunction9;// '<S140>/MATLAB Function9' 
  B_MATLABFunction1_c10_wp_snak_T sf_MATLABFunction8;// '<S140>/MATLAB Function8' 
  B_MATLABFunction1_c10_wp_snak_T sf_MATLABFunction7;// '<S140>/MATLAB Function7' 
  B_MATLABFunction1_c10_wp_snak_T sf_MATLABFunction6;// '<S140>/MATLAB Function6' 
  B_MATLABFunction1_c10_wp_snak_T sf_MATLABFunction5;// '<S140>/MATLAB Function5' 
  B_MATLABFunction1_c10_wp_snak_T sf_MATLABFunction4;// '<S140>/MATLAB Function4' 
  B_MATLABFunction1_c10_wp_snak_T sf_MATLABFunction3;// '<S140>/MATLAB Function3' 
  B_MATLABFunction1_c10_wp_snak_T sf_MATLABFunction2;// '<S140>/MATLAB Function2' 
  B_MATLABFunction1_c10_wp_snak_T sf_MATLABFunction10;// '<S140>/MATLAB Function10' 
  B_MATLABFunction1_c10_wp_snak_T sf_MATLABFunction1_k;// '<S140>/MATLAB Function1' 
  B_PurePursuit_c10_wp_snake_T PurePursuit_pnaevvfpg;// '<S142>/Pure Pursuit'
  B_ExtractGoal_c10_wp_snake_T sf_ExtractGoal_p;// '<S205>/ Extract Goal'
  B_VectorFieldHistogram_c10_wp_T VectorFieldHistogram_pnaevvfpg;// '<S141>/Vector Field Histogram' 
  B_PurePursuit_c10_wp_snake_T PurePursuit_pnaevvfp;// '<S142>/Pure Pursuit'
  B_ExtractGoal_c10_wp_snake_T sf_ExtractGoal_j;// '<S198>/ Extract Goal'
  B_VectorFieldHistogram_c10_wp_T VectorFieldHistogram_pnaevvfp;// '<S141>/Vector Field Histogram' 
  B_PurePursuit_c10_wp_snake_T PurePursuit_pnaevvf;// '<S142>/Pure Pursuit'
  B_ExtractGoal_c10_wp_snake_T sf_ExtractGoal_n;// '<S191>/ Extract Goal'
  B_VectorFieldHistogram_c10_wp_T VectorFieldHistogram_pnaevvf;// '<S141>/Vector Field Histogram' 
  B_PurePursuit_c10_wp_snake_T PurePursuit_pnaevv;// '<S142>/Pure Pursuit'
  B_ExtractGoal_c10_wp_snake_T sf_ExtractGoal_g;// '<S184>/ Extract Goal'
  B_VectorFieldHistogram_c10_wp_T VectorFieldHistogram_pnaevv;// '<S141>/Vector Field Histogram' 
  B_PurePursuit_c10_wp_snake_T PurePursuit_pnaev;// '<S142>/Pure Pursuit'
  B_ExtractGoal_c10_wp_snake_T sf_ExtractGoal_dz;// '<S177>/ Extract Goal'
  B_VectorFieldHistogram_c10_wp_T VectorFieldHistogram_pnaev;// '<S141>/Vector Field Histogram' 
  B_PurePursuit_c10_wp_snake_T PurePursuit_pnae;// '<S142>/Pure Pursuit'
  B_ExtractGoal_c10_wp_snake_T sf_ExtractGoal_e;// '<S170>/ Extract Goal'
  B_VectorFieldHistogram_c10_wp_T VectorFieldHistogram_pnae;// '<S141>/Vector Field Histogram' 
  B_PurePursuit_c10_wp_snake_T PurePursuit_pna;// '<S142>/Pure Pursuit'
  B_ExtractGoal_c10_wp_snake_T sf_ExtractGoal_o;// '<S163>/ Extract Goal'
  B_VectorFieldHistogram_c10_wp_T VectorFieldHistogram_pna;// '<S141>/Vector Field Histogram' 
  B_PurePursuit_c10_wp_snake_T PurePursuit_pn;// '<S142>/Pure Pursuit'
  B_ExtractGoal_c10_wp_snake_T sf_ExtractGoal_l;// '<S156>/ Extract Goal'
  B_VectorFieldHistogram_c10_wp_T VectorFieldHistogram_pn;// '<S141>/Vector Field Histogram' 
  B_PurePursuit_c10_wp_snake_T PurePursuit_p;// '<S142>/Pure Pursuit'
  B_ExtractGoal_c10_wp_snake_T sf_ExtractGoal_d;// '<S149>/ Extract Goal'
  B_VectorFieldHistogram_c10_wp_T VectorFieldHistogram_p;// '<S141>/Vector Field Histogram' 
  B_PurePursuit_c10_wp_snake_T PurePursuit;// '<S142>/Pure Pursuit'
  B_ExtractGoal_c10_wp_snake_T sf_ExtractGoal;// '<S142>/ Extract Goal'
  B_VectorFieldHistogram_c10_wp_T VectorFieldHistogram;// '<S141>/Vector Field Histogram' 
  B_sensor2vCar_c10_wp_snake_T sf_sensor2vCar_a;// '<S100>/sensor2vCar'
  B_MedianFilter_c10_wp_snake_T MedianFilter2_pnaevvfpg;// '<S28>/Median Filter' 
  B_MedianFilter_c10_wp_snake_T MedianFilter1_pnaevvfpg;// '<S28>/Median Filter' 
  B_MedianFilter_c10_wp_snake_T MedianFilter_pnaevvfpg;// '<S28>/Median Filter'
  B_sensor2vCar_c10_wp_snake_T sf_sensor2vCar_b;// '<S92>/sensor2vCar'
  B_MedianFilter_c10_wp_snake_T MedianFilter2_pnaevvfp;// '<S28>/Median Filter'
  B_MedianFilter_c10_wp_snake_T MedianFilter1_pnaevvfp;// '<S28>/Median Filter'
  B_MedianFilter_c10_wp_snake_T MedianFilter_pnaevvfp;// '<S28>/Median Filter'
  B_sensor2vCar_c10_wp_snake_T sf_sensor2vCar_g;// '<S84>/sensor2vCar'
  B_MedianFilter_c10_wp_snake_T MedianFilter2_pnaevvf;// '<S28>/Median Filter'
  B_MedianFilter_c10_wp_snake_T MedianFilter1_pnaevvf;// '<S28>/Median Filter'
  B_MedianFilter_c10_wp_snake_T MedianFilter_pnaevvf;// '<S28>/Median Filter'
  B_sensor2vCar_c10_wp_snake_T sf_sensor2vCar_o;// '<S76>/sensor2vCar'
  B_MedianFilter_c10_wp_snake_T MedianFilter2_pnaevv;// '<S28>/Median Filter'
  B_MedianFilter_c10_wp_snake_T MedianFilter1_pnaevv;// '<S28>/Median Filter'
  B_MedianFilter_c10_wp_snake_T MedianFilter_pnaevv;// '<S28>/Median Filter'
  B_sensor2vCar_c10_wp_snake_T sf_sensor2vCar_je;// '<S68>/sensor2vCar'
  B_MedianFilter_c10_wp_snake_T MedianFilter2_pnaev;// '<S28>/Median Filter'
  B_MedianFilter_c10_wp_snake_T MedianFilter1_pnaev;// '<S28>/Median Filter'
  B_MedianFilter_c10_wp_snake_T MedianFilter_pnaev;// '<S28>/Median Filter'
  B_sensor2vCar_c10_wp_snake_T sf_sensor2vCar_m;// '<S60>/sensor2vCar'
  B_MedianFilter_c10_wp_snake_T MedianFilter2_pnae;// '<S28>/Median Filter'
  B_MedianFilter_c10_wp_snake_T MedianFilter1_pnae;// '<S28>/Median Filter'
  B_MedianFilter_c10_wp_snake_T MedianFilter_pnae;// '<S28>/Median Filter'
  B_sensor2vCar_c10_wp_snake_T sf_sensor2vCar_n;// '<S52>/sensor2vCar'
  B_MedianFilter_c10_wp_snake_T MedianFilter2_pna;// '<S28>/Median Filter'
  B_MedianFilter_c10_wp_snake_T MedianFilter1_pna;// '<S28>/Median Filter'
  B_MedianFilter_c10_wp_snake_T MedianFilter_pna;// '<S28>/Median Filter'
  B_sensor2vCar_c10_wp_snake_T sf_sensor2vCar_p;// '<S44>/sensor2vCar'
  B_MedianFilter_c10_wp_snake_T MedianFilter2_pn;// '<S28>/Median Filter'
  B_MedianFilter_c10_wp_snake_T MedianFilter1_pn;// '<S28>/Median Filter'
  B_MedianFilter_c10_wp_snake_T MedianFilter_pn;// '<S28>/Median Filter'
  B_sensor2vCar_c10_wp_snake_T sf_sensor2vCar_j;// '<S36>/sensor2vCar'
  B_MedianFilter_c10_wp_snake_T MedianFilter2_p;// '<S28>/Median Filter'
  B_MedianFilter_c10_wp_snake_T MedianFilter1_p;// '<S28>/Median Filter'
  B_MedianFilter_c10_wp_snake_T MedianFilter_p;// '<S28>/Median Filter'
  B_sensor2vCar_c10_wp_snake_T sf_sensor2vCar;// '<S28>/sensor2vCar'
  B_MedianFilter_c10_wp_snake_T MedianFilter2;// '<S28>/Median Filter'
  B_MedianFilter_c10_wp_snake_T MedianFilter1;// '<S28>/Median Filter'
  B_MedianFilter_c10_wp_snake_T MedianFilter;// '<S28>/Median Filter'
};

// Block states (default storage) for system '<Root>'
struct DW_c10_wp_snake_T {
  ros_slroscpp_internal_block_S_T obj; // '<S99>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_a;// '<S98>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_h;// '<S91>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_k;// '<S90>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_g;// '<S83>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_j;// '<S82>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_o;// '<S75>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_au;// '<S74>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_m;// '<S67>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_go;// '<S66>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_ay;// '<S59>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_ky;// '<S58>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_ke;// '<S51>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_hb;// '<S50>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_g5;// '<S43>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_b;// '<S42>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_p;// '<S35>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_d;// '<S34>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_mq;// '<S27>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_e;// '<S26>/SourceBlock'
  ros_slroscpp_internal_block_P_T obj_o0;// '<S25>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_l;// '<S125>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_gof;// '<S123>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_f;// '<S121>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_gh;// '<S119>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_n;// '<S117>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_aq;// '<S115>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_ps;// '<S113>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_ow;// '<S111>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_ho;// '<S109>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_o2;// '<S107>/SinkBlock'
  real_T DiscreteTimeIntegrator_DSTATE;// '<S31>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTATE;// '<S31>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTATE;// '<S31>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator_DSTATE_o;// '<S39>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTAT_c;// '<S39>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTAT_l;// '<S39>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator_DSTATE_a;// '<S47>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTAT_e;// '<S47>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTAT_a;// '<S47>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator_DSTATE_p;// '<S55>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTAT_o;// '<S55>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTAT_g;// '<S55>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator_DSTATE_l;// '<S63>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTAT_k;// '<S63>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTAT_b;// '<S63>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator_DSTATE_g;// '<S71>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTA_c5;// '<S71>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTA_gq;// '<S71>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator_DSTATE_c;// '<S79>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTA_ko;// '<S79>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTAT_i;// '<S79>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator_DSTATE_m;// '<S87>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTA_oz;// '<S87>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTAT_n;// '<S87>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator_DSTAT_l1;// '<S95>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTA_k1;// '<S95>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTAT_j;// '<S95>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator_DSTAT_lp;// '<S103>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTAT_h;// '<S103>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTAT_d;// '<S103>/Discrete-Time Integrator2'
  real_T WP_now_increase_out[10];      // '<S2>/WP_now_increase_out'
  real_T WP_now_out[10];               // '<S2>/WP_now_increase_out1'
  int8_T DiscreteTimeIntegrator_PrevRese;// '<S31>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevRes;// '<S31>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevRes;// '<S31>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator_PrevRe_i;// '<S39>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevR_e;// '<S39>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevR_h;// '<S39>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator_PrevRe_l;// '<S47>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevR_h;// '<S47>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevR_i;// '<S47>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator_PrevRe_n;// '<S55>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevR_n;// '<S55>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevR_d;// '<S55>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator_PrevRe_g;// '<S63>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevR_m;// '<S63>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevR_o;// '<S63>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator_PrevRe_d;// '<S71>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevR_i;// '<S71>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevR_n;// '<S71>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator_PrevRe_e;// '<S79>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevR_f;// '<S79>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevR_g;// '<S79>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator_PrevR_e1;// '<S87>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_Prev_nj;// '<S87>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevR_k;// '<S87>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator_PrevR_e4;// '<S95>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevR_l;// '<S95>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevR_b;// '<S95>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator_PrevR_i1;// '<S103>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevR_j;// '<S103>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevR_a;// '<S103>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_LOAD;// '<S31>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_LO_m;// '<S39>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_LO_l;// '<S47>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_LO_n;// '<S55>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_LO_j;// '<S63>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_LO_d;// '<S71>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_LO_h;// '<S79>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_LO_e;// '<S87>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_L_mg;// '<S95>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_L_ne;// '<S103>/Discrete-Time Integrator2'
  boolean_T objisempty;                // '<S25>/SinkBlock'
  boolean_T objisempty_b;              // '<S125>/SinkBlock'
  boolean_T objisempty_f;              // '<S123>/SinkBlock'
  boolean_T objisempty_n;              // '<S121>/SinkBlock'
  boolean_T objisempty_c;              // '<S119>/SinkBlock'
  boolean_T objisempty_d;              // '<S117>/SinkBlock'
  boolean_T objisempty_a;              // '<S115>/SinkBlock'
  boolean_T objisempty_g;              // '<S113>/SinkBlock'
  boolean_T objisempty_i;              // '<S111>/SinkBlock'
  boolean_T objisempty_e;              // '<S109>/SinkBlock'
  boolean_T objisempty_l;              // '<S107>/SinkBlock'
  boolean_T objisempty_p;              // '<S99>/SourceBlock'
  boolean_T objisempty_gh;             // '<S98>/SourceBlock'
  boolean_T objisempty_fv;             // '<S91>/SourceBlock'
  boolean_T objisempty_gt;             // '<S90>/SourceBlock'
  boolean_T objisempty_j;              // '<S83>/SourceBlock'
  boolean_T objisempty_nr;             // '<S82>/SourceBlock'
  boolean_T objisempty_ga;             // '<S75>/SourceBlock'
  boolean_T objisempty_do;             // '<S74>/SourceBlock'
  boolean_T objisempty_m;              // '<S67>/SourceBlock'
  boolean_T objisempty_gw;             // '<S66>/SourceBlock'
  boolean_T objisempty_jo;             // '<S59>/SourceBlock'
  boolean_T objisempty_fe;             // '<S58>/SourceBlock'
  boolean_T objisempty_gg;             // '<S51>/SourceBlock'
  boolean_T objisempty_dg;             // '<S50>/SourceBlock'
  boolean_T objisempty_pb;             // '<S43>/SourceBlock'
  boolean_T objisempty_gs;             // '<S42>/SourceBlock'
  boolean_T objisempty_a5;             // '<S35>/SourceBlock'
  boolean_T objisempty_nf;             // '<S34>/SourceBlock'
  boolean_T objisempty_bf;             // '<S27>/SourceBlock'
  boolean_T objisempty_bd;             // '<S26>/SourceBlock'
  DW_PurePursuit_c10_wp_snake_T PurePursuit_pnaevvfpg;// '<S142>/Pure Pursuit'
  DW_VectorFieldHistogram_c10_w_T VectorFieldHistogram_pnaevvfpg;// '<S141>/Vector Field Histogram' 
  DW_PurePursuit_c10_wp_snake_T PurePursuit_pnaevvfp;// '<S142>/Pure Pursuit'
  DW_VectorFieldHistogram_c10_w_T VectorFieldHistogram_pnaevvfp;// '<S141>/Vector Field Histogram' 
  DW_PurePursuit_c10_wp_snake_T PurePursuit_pnaevvf;// '<S142>/Pure Pursuit'
  DW_VectorFieldHistogram_c10_w_T VectorFieldHistogram_pnaevvf;// '<S141>/Vector Field Histogram' 
  DW_PurePursuit_c10_wp_snake_T PurePursuit_pnaevv;// '<S142>/Pure Pursuit'
  DW_VectorFieldHistogram_c10_w_T VectorFieldHistogram_pnaevv;// '<S141>/Vector Field Histogram' 
  DW_PurePursuit_c10_wp_snake_T PurePursuit_pnaev;// '<S142>/Pure Pursuit'
  DW_VectorFieldHistogram_c10_w_T VectorFieldHistogram_pnaev;// '<S141>/Vector Field Histogram' 
  DW_PurePursuit_c10_wp_snake_T PurePursuit_pnae;// '<S142>/Pure Pursuit'
  DW_VectorFieldHistogram_c10_w_T VectorFieldHistogram_pnae;// '<S141>/Vector Field Histogram' 
  DW_PurePursuit_c10_wp_snake_T PurePursuit_pna;// '<S142>/Pure Pursuit'
  DW_VectorFieldHistogram_c10_w_T VectorFieldHistogram_pna;// '<S141>/Vector Field Histogram' 
  DW_PurePursuit_c10_wp_snake_T PurePursuit_pn;// '<S142>/Pure Pursuit'
  DW_VectorFieldHistogram_c10_w_T VectorFieldHistogram_pn;// '<S141>/Vector Field Histogram' 
  DW_PurePursuit_c10_wp_snake_T PurePursuit_p;// '<S142>/Pure Pursuit'
  DW_VectorFieldHistogram_c10_w_T VectorFieldHistogram_p;// '<S141>/Vector Field Histogram' 
  DW_PurePursuit_c10_wp_snake_T PurePursuit;// '<S142>/Pure Pursuit'
  DW_VectorFieldHistogram_c10_w_T VectorFieldHistogram;// '<S141>/Vector Field Histogram' 
  DW_sensor2vCar4_c10_wp_snake_T sf_sensor2vCar4_ig;// '<S100>/sensor2vCar4'
  DW_sensor2vCar_c10_wp_snake_T sf_sensor2vCar_a;// '<S100>/sensor2vCar'
  DW_MedianFilter_c10_wp_snake_T MedianFilter2_pnaevvfpg;// '<S28>/Median Filter' 
  DW_MedianFilter_c10_wp_snake_T MedianFilter1_pnaevvfpg;// '<S28>/Median Filter' 
  DW_MedianFilter_c10_wp_snake_T MedianFilter_pnaevvfpg;// '<S28>/Median Filter' 
  DW_sensor2vCar4_c10_wp_snake_T sf_sensor2vCar4_g;// '<S92>/sensor2vCar4'
  DW_sensor2vCar_c10_wp_snake_T sf_sensor2vCar_b;// '<S92>/sensor2vCar'
  DW_MedianFilter_c10_wp_snake_T MedianFilter2_pnaevvfp;// '<S28>/Median Filter' 
  DW_MedianFilter_c10_wp_snake_T MedianFilter1_pnaevvfp;// '<S28>/Median Filter' 
  DW_MedianFilter_c10_wp_snake_T MedianFilter_pnaevvfp;// '<S28>/Median Filter'
  DW_sensor2vCar4_c10_wp_snake_T sf_sensor2vCar4_h;// '<S84>/sensor2vCar4'
  DW_sensor2vCar_c10_wp_snake_T sf_sensor2vCar_g;// '<S84>/sensor2vCar'
  DW_MedianFilter_c10_wp_snake_T MedianFilter2_pnaevvf;// '<S28>/Median Filter'
  DW_MedianFilter_c10_wp_snake_T MedianFilter1_pnaevvf;// '<S28>/Median Filter'
  DW_MedianFilter_c10_wp_snake_T MedianFilter_pnaevvf;// '<S28>/Median Filter'
  DW_sensor2vCar4_c10_wp_snake_T sf_sensor2vCar4_i1;// '<S76>/sensor2vCar4'
  DW_sensor2vCar_c10_wp_snake_T sf_sensor2vCar_o;// '<S76>/sensor2vCar'
  DW_MedianFilter_c10_wp_snake_T MedianFilter2_pnaevv;// '<S28>/Median Filter'
  DW_MedianFilter_c10_wp_snake_T MedianFilter1_pnaevv;// '<S28>/Median Filter'
  DW_MedianFilter_c10_wp_snake_T MedianFilter_pnaevv;// '<S28>/Median Filter'
  DW_sensor2vCar4_c10_wp_snake_T sf_sensor2vCar4_e4;// '<S68>/sensor2vCar4'
  DW_sensor2vCar_c10_wp_snake_T sf_sensor2vCar_je;// '<S68>/sensor2vCar'
  DW_MedianFilter_c10_wp_snake_T MedianFilter2_pnaev;// '<S28>/Median Filter'
  DW_MedianFilter_c10_wp_snake_T MedianFilter1_pnaev;// '<S28>/Median Filter'
  DW_MedianFilter_c10_wp_snake_T MedianFilter_pnaev;// '<S28>/Median Filter'
  DW_sensor2vCar4_c10_wp_snake_T sf_sensor2vCar4_e;// '<S60>/sensor2vCar4'
  DW_sensor2vCar_c10_wp_snake_T sf_sensor2vCar_m;// '<S60>/sensor2vCar'
  DW_MedianFilter_c10_wp_snake_T MedianFilter2_pnae;// '<S28>/Median Filter'
  DW_MedianFilter_c10_wp_snake_T MedianFilter1_pnae;// '<S28>/Median Filter'
  DW_MedianFilter_c10_wp_snake_T MedianFilter_pnae;// '<S28>/Median Filter'
  DW_sensor2vCar4_c10_wp_snake_T sf_sensor2vCar4_m;// '<S52>/sensor2vCar4'
  DW_sensor2vCar_c10_wp_snake_T sf_sensor2vCar_n;// '<S52>/sensor2vCar'
  DW_MedianFilter_c10_wp_snake_T MedianFilter2_pna;// '<S28>/Median Filter'
  DW_MedianFilter_c10_wp_snake_T MedianFilter1_pna;// '<S28>/Median Filter'
  DW_MedianFilter_c10_wp_snake_T MedianFilter_pna;// '<S28>/Median Filter'
  DW_sensor2vCar4_c10_wp_snake_T sf_sensor2vCar4_o;// '<S44>/sensor2vCar4'
  DW_sensor2vCar_c10_wp_snake_T sf_sensor2vCar_p;// '<S44>/sensor2vCar'
  DW_MedianFilter_c10_wp_snake_T MedianFilter2_pn;// '<S28>/Median Filter'
  DW_MedianFilter_c10_wp_snake_T MedianFilter1_pn;// '<S28>/Median Filter'
  DW_MedianFilter_c10_wp_snake_T MedianFilter_pn;// '<S28>/Median Filter'
  DW_sensor2vCar4_c10_wp_snake_T sf_sensor2vCar4_i;// '<S36>/sensor2vCar4'
  DW_sensor2vCar_c10_wp_snake_T sf_sensor2vCar_j;// '<S36>/sensor2vCar'
  DW_MedianFilter_c10_wp_snake_T MedianFilter2_p;// '<S28>/Median Filter'
  DW_MedianFilter_c10_wp_snake_T MedianFilter1_p;// '<S28>/Median Filter'
  DW_MedianFilter_c10_wp_snake_T MedianFilter_p;// '<S28>/Median Filter'
  DW_sensor2vCar4_c10_wp_snake_T sf_sensor2vCar4;// '<S28>/sensor2vCar4'
  DW_sensor2vCar_c10_wp_snake_T sf_sensor2vCar;// '<S28>/sensor2vCar'
  DW_MedianFilter_c10_wp_snake_T MedianFilter2;// '<S28>/Median Filter'
  DW_MedianFilter_c10_wp_snake_T MedianFilter1;// '<S28>/Median Filter'
  DW_MedianFilter_c10_wp_snake_T MedianFilter;// '<S28>/Median Filter'
};

// Parameters for system: '<S141>/Recovery'
struct P_Recovery_c10_wp_snake_T_ {
  real_T Gain_Gain;                    // Expression: -1
                                          //  Referenced by: '<S145>/Gain'

};

// Parameters for system: '<S141>/Path Following'
struct P_PathFollowing_c10_wp_snake_T_ {
  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S144>/Constant'

  real_T MaxAngularVelocity_Value;     // Expression: 1
                                          //  Referenced by: '<S144>/MaxAngularVelocity'

};

// Parameters for system: '<S141>/Vector Field Histogram'
struct P_VectorFieldHistogram_c10_wp_T_ {
  real_T VectorFieldHistogram_TargetDire;// Expression: 5
                                            //  Referenced by: '<S141>/Vector Field Histogram'

  real_T VectorFieldHistogram_CurrentDir;// Expression: 2
                                            //  Referenced by: '<S141>/Vector Field Histogram'

  real_T VectorFieldHistogram_PreviousDi;// Expression: 2
                                            //  Referenced by: '<S141>/Vector Field Histogram'

};

// Parameters (default storage)
struct P_c10_wp_snake_T_ {
  real_T GoalRadius;                   // Variable: GoalRadius
                                          //  Referenced by:
                                          //    '<S142>/GoalRadius'
                                          //    '<S149>/GoalRadius'
                                          //    '<S156>/GoalRadius'
                                          //    '<S163>/GoalRadius'
                                          //    '<S170>/GoalRadius'
                                          //    '<S177>/GoalRadius'
                                          //    '<S184>/GoalRadius'
                                          //    '<S191>/GoalRadius'
                                          //    '<S198>/GoalRadius'
                                          //    '<S205>/GoalRadius'

  real_T WP_init[10];                  // Variable: WP_init
                                          //  Referenced by:
                                          //    '<S2>/WP_now_increase_out'
                                          //    '<S2>/WP_now_increase_out1'

  real_T WP_order_num;                 // Variable: WP_order_num
                                          //  Referenced by: '<S2>/Constant2'

  real_T desired_lookahead;            // Variable: desired_lookahead
                                          //  Referenced by:
                                          //    '<S142>/Pure Pursuit'
                                          //    '<S149>/Pure Pursuit'
                                          //    '<S156>/Pure Pursuit'
                                          //    '<S163>/Pure Pursuit'
                                          //    '<S170>/Pure Pursuit'
                                          //    '<S177>/Pure Pursuit'
                                          //    '<S184>/Pure Pursuit'
                                          //    '<S191>/Pure Pursuit'
                                          //    '<S198>/Pure Pursuit'
                                          //    '<S205>/Pure Pursuit'

  real_T desired_v;                    // Variable: desired_v
                                          //  Referenced by:
                                          //    '<S142>/Pure Pursuit'
                                          //    '<S149>/Pure Pursuit'
                                          //    '<S156>/Pure Pursuit'
                                          //    '<S163>/Pure Pursuit'
                                          //    '<S170>/Pure Pursuit'
                                          //    '<S177>/Pure Pursuit'
                                          //    '<S184>/Pure Pursuit'
                                          //    '<S191>/Pure Pursuit'
                                          //    '<S198>/Pure Pursuit'
                                          //    '<S205>/Pure Pursuit'

  real_T desired_w;                    // Variable: desired_w
                                          //  Referenced by:
                                          //    '<S142>/Pure Pursuit'
                                          //    '<S149>/Pure Pursuit'
                                          //    '<S156>/Pure Pursuit'
                                          //    '<S163>/Pure Pursuit'
                                          //    '<S170>/Pure Pursuit'
                                          //    '<S177>/Pure Pursuit'
                                          //    '<S184>/Pure Pursuit'
                                          //    '<S191>/Pure Pursuit'
                                          //    '<S198>/Pure Pursuit'
                                          //    '<S205>/Pure Pursuit'

  real_T ks;                           // Variable: ks
                                          //  Referenced by:
                                          //    '<S1>/Gain'
                                          //    '<S1>/Gain1'
                                          //    '<S1>/Gain2'
                                          //    '<S1>/Gain3'
                                          //    '<S1>/Gain4'
                                          //    '<S1>/Gain5'
                                          //    '<S1>/Gain6'
                                          //    '<S1>/Gain7'
                                          //    '<S1>/Gain8'
                                          //    '<S1>/Gain9'

  real_T maxRange;                     // Variable: maxRange
                                          //  Referenced by:
                                          //    '<S140>/MATLAB Function1'
                                          //    '<S140>/MATLAB Function10'
                                          //    '<S140>/MATLAB Function2'
                                          //    '<S140>/MATLAB Function3'
                                          //    '<S140>/MATLAB Function4'
                                          //    '<S140>/MATLAB Function5'
                                          //    '<S140>/MATLAB Function6'
                                          //    '<S140>/MATLAB Function7'
                                          //    '<S140>/MATLAB Function8'
                                          //    '<S140>/MATLAB Function9'

  real_T minimumTurningRadius;         // Variable: minimumTurningRadius
                                          //  Referenced by:
                                          //    '<S141>/Vector Field Histogram'
                                          //    '<S148>/Vector Field Histogram'
                                          //    '<S155>/Vector Field Histogram'
                                          //    '<S162>/Vector Field Histogram'
                                          //    '<S169>/Vector Field Histogram'
                                          //    '<S176>/Vector Field Histogram'
                                          //    '<S183>/Vector Field Histogram'
                                          //    '<S190>/Vector Field Histogram'
                                          //    '<S197>/Vector Field Histogram'
                                          //    '<S204>/Vector Field Histogram'

  real_T rangeDis[2];                  // Variable: rangeDis
                                          //  Referenced by:
                                          //    '<S141>/Vector Field Histogram'
                                          //    '<S148>/Vector Field Histogram'
                                          //    '<S155>/Vector Field Histogram'
                                          //    '<S162>/Vector Field Histogram'
                                          //    '<S169>/Vector Field Histogram'
                                          //    '<S176>/Vector Field Histogram'
                                          //    '<S183>/Vector Field Histogram'
                                          //    '<S190>/Vector Field Histogram'
                                          //    '<S197>/Vector Field Histogram'
                                          //    '<S204>/Vector Field Histogram'

  real_T recovery_w;                   // Variable: recovery_w
                                          //  Referenced by:
                                          //    '<S145>/Constant1'
                                          //    '<S152>/Constant1'
                                          //    '<S159>/Constant1'
                                          //    '<S166>/Constant1'
                                          //    '<S173>/Constant1'
                                          //    '<S180>/Constant1'
                                          //    '<S187>/Constant1'
                                          //    '<S194>/Constant1'
                                          //    '<S201>/Constant1'
                                          //    '<S208>/Constant1'

  real_T robotRadius;                  // Variable: robotRadius
                                          //  Referenced by:
                                          //    '<S140>/MATLAB Function1'
                                          //    '<S140>/MATLAB Function10'
                                          //    '<S140>/MATLAB Function2'
                                          //    '<S140>/MATLAB Function3'
                                          //    '<S140>/MATLAB Function4'
                                          //    '<S140>/MATLAB Function5'
                                          //    '<S140>/MATLAB Function6'
                                          //    '<S140>/MATLAB Function7'
                                          //    '<S140>/MATLAB Function8'
                                          //    '<S140>/MATLAB Function9'

  real_T safetyDis;                    // Variable: safetyDis
                                          //  Referenced by:
                                          //    '<S141>/Vector Field Histogram'
                                          //    '<S148>/Vector Field Histogram'
                                          //    '<S155>/Vector Field Histogram'
                                          //    '<S162>/Vector Field Histogram'
                                          //    '<S169>/Vector Field Histogram'
                                          //    '<S176>/Vector Field Histogram'
                                          //    '<S183>/Vector Field Histogram'
                                          //    '<S190>/Vector Field Histogram'
                                          //    '<S197>/Vector Field Histogram'
                                          //    '<S204>/Vector Field Histogram'

  real_T scanAngles[20];               // Variable: scanAngles
                                          //  Referenced by:
                                          //    '<S3>/Constant1'
                                          //    '<S3>/Constant10'
                                          //    '<S3>/Constant11'
                                          //    '<S3>/Constant12'
                                          //    '<S3>/Constant3'
                                          //    '<S3>/Constant4'
                                          //    '<S3>/Constant5'
                                          //    '<S3>/Constant7'
                                          //    '<S3>/Constant8'
                                          //    '<S3>/Constant9'
                                          //    '<S140>/MATLAB Function1'
                                          //    '<S140>/MATLAB Function10'
                                          //    '<S140>/MATLAB Function2'
                                          //    '<S140>/MATLAB Function3'
                                          //    '<S140>/MATLAB Function4'
                                          //    '<S140>/MATLAB Function5'
                                          //    '<S140>/MATLAB Function6'
                                          //    '<S140>/MATLAB Function7'
                                          //    '<S140>/MATLAB Function8'
                                          //    '<S140>/MATLAB Function9'

  real_T thresholds[2];                // Variable: thresholds
                                          //  Referenced by:
                                          //    '<S141>/Vector Field Histogram'
                                          //    '<S148>/Vector Field Histogram'
                                          //    '<S155>/Vector Field Histogram'
                                          //    '<S162>/Vector Field Histogram'
                                          //    '<S169>/Vector Field Histogram'
                                          //    '<S176>/Vector Field Histogram'
                                          //    '<S183>/Vector Field Histogram'
                                          //    '<S190>/Vector Field Histogram'
                                          //    '<S197>/Vector Field Histogram'
                                          //    '<S204>/Vector Field Histogram'

  real_T vehicleRadius;                // Variable: vehicleRadius
                                          //  Referenced by:
                                          //    '<S141>/Vector Field Histogram'
                                          //    '<S148>/Vector Field Histogram'
                                          //    '<S155>/Vector Field Histogram'
                                          //    '<S162>/Vector Field Histogram'
                                          //    '<S169>/Vector Field Histogram'
                                          //    '<S176>/Vector Field Histogram'
                                          //    '<S183>/Vector Field Histogram'
                                          //    '<S190>/Vector Field Histogram'
                                          //    '<S197>/Vector Field Histogram'
                                          //    '<S204>/Vector Field Histogram'

  real_T waypoints[168];               // Variable: waypoints
                                          //  Referenced by: '<S2>/Constant'

  SL_Bus_c10_wp_snake_nav_msgs_Odometry Out1_Y0;// Computed Parameter: Out1_Y0
                                                   //  Referenced by: '<S29>/Out1'

  SL_Bus_c10_wp_snake_nav_msgs_Odometry Constant_Value;// Computed Parameter: Constant_Value
                                                          //  Referenced by: '<S26>/Constant'

  SL_Bus_c10_wp_snake_nav_msgs_Odometry Out1_Y0_n;// Computed Parameter: Out1_Y0_n
                                                     //  Referenced by: '<S37>/Out1'

  SL_Bus_c10_wp_snake_nav_msgs_Odometry Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                            //  Referenced by: '<S34>/Constant'

  SL_Bus_c10_wp_snake_nav_msgs_Odometry Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                                     //  Referenced by: '<S45>/Out1'

  SL_Bus_c10_wp_snake_nav_msgs_Odometry Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                            //  Referenced by: '<S42>/Constant'

  SL_Bus_c10_wp_snake_nav_msgs_Odometry Out1_Y0_j;// Computed Parameter: Out1_Y0_j
                                                     //  Referenced by: '<S53>/Out1'

  SL_Bus_c10_wp_snake_nav_msgs_Odometry Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                            //  Referenced by: '<S50>/Constant'

  SL_Bus_c10_wp_snake_nav_msgs_Odometry Out1_Y0_i;// Computed Parameter: Out1_Y0_i
                                                     //  Referenced by: '<S61>/Out1'

  SL_Bus_c10_wp_snake_nav_msgs_Odometry Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                            //  Referenced by: '<S58>/Constant'

  SL_Bus_c10_wp_snake_nav_msgs_Odometry Out1_Y0_nz;// Computed Parameter: Out1_Y0_nz
                                                      //  Referenced by: '<S69>/Out1'

  SL_Bus_c10_wp_snake_nav_msgs_Odometry Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                            //  Referenced by: '<S66>/Constant'

  SL_Bus_c10_wp_snake_nav_msgs_Odometry Out1_Y0_p;// Computed Parameter: Out1_Y0_p
                                                     //  Referenced by: '<S77>/Out1'

  SL_Bus_c10_wp_snake_nav_msgs_Odometry Constant_Value_n;// Computed Parameter: Constant_Value_n
                                                            //  Referenced by: '<S74>/Constant'

  SL_Bus_c10_wp_snake_nav_msgs_Odometry Out1_Y0_g;// Computed Parameter: Out1_Y0_g
                                                     //  Referenced by: '<S85>/Out1'

  SL_Bus_c10_wp_snake_nav_msgs_Odometry Constant_Value_b;// Computed Parameter: Constant_Value_b
                                                            //  Referenced by: '<S82>/Constant'

  SL_Bus_c10_wp_snake_nav_msgs_Odometry Out1_Y0_d;// Computed Parameter: Out1_Y0_d
                                                     //  Referenced by: '<S93>/Out1'

  SL_Bus_c10_wp_snake_nav_msgs_Odometry Constant_Value_bp;// Computed Parameter: Constant_Value_bp
                                                             //  Referenced by: '<S90>/Constant'

  SL_Bus_c10_wp_snake_nav_msgs_Odometry Out1_Y0_m;// Computed Parameter: Out1_Y0_m
                                                     //  Referenced by: '<S101>/Out1'

  SL_Bus_c10_wp_snake_nav_msgs_Odometry Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                            //  Referenced by: '<S98>/Constant'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Out1_Y0_l;// Computed Parameter: Out1_Y0_l
                                                       //  Referenced by: '<S30>/Out1'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                              //  Referenced by: '<S27>/Constant'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                       //  Referenced by: '<S38>/Out1'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Constant_Value_pf;// Computed Parameter: Constant_Value_pf
                                                               //  Referenced by: '<S35>/Constant'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Out1_Y0_b;// Computed Parameter: Out1_Y0_b
                                                       //  Referenced by: '<S46>/Out1'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                              //  Referenced by: '<S43>/Constant'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Out1_Y0_py;// Computed Parameter: Out1_Y0_py
                                                        //  Referenced by: '<S54>/Out1'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Constant_Value_pi;// Computed Parameter: Constant_Value_pi
                                                               //  Referenced by: '<S51>/Constant'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Out1_Y0_a;// Computed Parameter: Out1_Y0_a
                                                       //  Referenced by: '<S62>/Out1'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Constant_Value_j0;// Computed Parameter: Constant_Value_j0
                                                               //  Referenced by: '<S59>/Constant'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                                       //  Referenced by: '<S70>/Out1'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Constant_Value_da;// Computed Parameter: Constant_Value_da
                                                               //  Referenced by: '<S67>/Constant'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Out1_Y0_ld;// Computed Parameter: Out1_Y0_ld
                                                        //  Referenced by: '<S78>/Out1'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Constant_Value_ht;// Computed Parameter: Constant_Value_ht
                                                               //  Referenced by: '<S75>/Constant'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Out1_Y0_bc;// Computed Parameter: Out1_Y0_bc
                                                        //  Referenced by: '<S86>/Out1'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Constant_Value_hx;// Computed Parameter: Constant_Value_hx
                                                               //  Referenced by: '<S83>/Constant'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Out1_Y0_bk;// Computed Parameter: Out1_Y0_bk
                                                        //  Referenced by: '<S94>/Out1'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Constant_Value_jo;// Computed Parameter: Constant_Value_jo
                                                               //  Referenced by: '<S91>/Constant'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Out1_Y0_ei;// Computed Parameter: Out1_Y0_ei
                                                        //  Referenced by: '<S102>/Out1'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Constant_Value_c;// Computed Parameter: Constant_Value_c
                                                              //  Referenced by: '<S99>/Constant'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                              //  Referenced by: '<S106>/Constant'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                              //  Referenced by: '<S108>/Constant'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Constant_Value_og;// Computed Parameter: Constant_Value_og
                                                               //  Referenced by: '<S110>/Constant'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Constant_Value_hs;// Computed Parameter: Constant_Value_hs
                                                               //  Referenced by: '<S112>/Constant'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Constant_Value_ep;// Computed Parameter: Constant_Value_ep
                                                               //  Referenced by: '<S114>/Constant'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Constant_Value_nm;// Computed Parameter: Constant_Value_nm
                                                               //  Referenced by: '<S116>/Constant'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                              //  Referenced by: '<S118>/Constant'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Constant_Value_gg;// Computed Parameter: Constant_Value_gg
                                                               //  Referenced by: '<S120>/Constant'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Constant_Value_pa;// Computed Parameter: Constant_Value_pa
                                                               //  Referenced by: '<S122>/Constant'

  SL_Bus_c10_wp_snake_geometry_msgs_Twist Constant_Value_fu;// Computed Parameter: Constant_Value_fu
                                                               //  Referenced by: '<S124>/Constant'

  SL_Bus_c10_wp_snake_std_msgs_Float64 Constant_Value_cf;// Computed Parameter: Constant_Value_cf
                                                            //  Referenced by: '<S4>/Constant'

  real_T DiscreteTimeIntegrator_gainval;
                           // Computed Parameter: DiscreteTimeIntegrator_gainval
                              //  Referenced by: '<S31>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC;    // Expression: 0
                                          //  Referenced by: '<S31>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainval
                             //  Referenced by: '<S31>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC;   // Expression: 0
                                          //  Referenced by: '<S31>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainval
                             //  Referenced by: '<S31>/Discrete-Time Integrator2'

  real_T DiscreteTimeIntegrator_gainva_h;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_h
                             //  Referenced by: '<S39>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_g;  // Expression: 0
                                          //  Referenced by: '<S39>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gainv_f;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainv_f
                             //  Referenced by: '<S39>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC_c; // Expression: 0
                                          //  Referenced by: '<S39>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gainv_e;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainv_e
                             //  Referenced by: '<S39>/Discrete-Time Integrator2'

  real_T DiscreteTimeIntegrator_gainva_l;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_l
                             //  Referenced by: '<S47>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_l;  // Expression: 0
                                          //  Referenced by: '<S47>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gainv_g;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainv_g
                             //  Referenced by: '<S47>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC_j; // Expression: 0
                                          //  Referenced by: '<S47>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gainv_f;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainv_f
                             //  Referenced by: '<S47>/Discrete-Time Integrator2'

  real_T DiscreteTimeIntegrator_gainva_m;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_m
                             //  Referenced by: '<S55>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_g5; // Expression: 0
                                          //  Referenced by: '<S55>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gainv_m;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainv_m
                             //  Referenced by: '<S55>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC_h; // Expression: 0
                                          //  Referenced by: '<S55>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gainv_j;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainv_j
                             //  Referenced by: '<S55>/Discrete-Time Integrator2'

  real_T DiscreteTimeIntegrator_gainva_j;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_j
                             //  Referenced by: '<S63>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_d;  // Expression: 0
                                          //  Referenced by: '<S63>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gainv_o;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainv_o
                             //  Referenced by: '<S63>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC_o; // Expression: 0
                                          //  Referenced by: '<S63>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gainv_h;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainv_h
                             //  Referenced by: '<S63>/Discrete-Time Integrator2'

  real_T DiscreteTimeIntegrator_gainva_g;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_g
                             //  Referenced by: '<S71>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_o;  // Expression: 0
                                          //  Referenced by: '<S71>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gainv_n;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainv_n
                             //  Referenced by: '<S71>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC_cp;// Expression: 0
                                          //  Referenced by: '<S71>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gainv_p;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainv_p
                             //  Referenced by: '<S71>/Discrete-Time Integrator2'

  real_T DiscreteTimeIntegrator_gainv_mw;
                          // Computed Parameter: DiscreteTimeIntegrator_gainv_mw
                             //  Referenced by: '<S79>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_oq; // Expression: 0
                                          //  Referenced by: '<S79>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gainv_h;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainv_h
                             //  Referenced by: '<S79>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC_g; // Expression: 0
                                          //  Referenced by: '<S79>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gainv_o;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainv_o
                             //  Referenced by: '<S79>/Discrete-Time Integrator2'

  real_T DiscreteTimeIntegrator_gainva_f;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_f
                             //  Referenced by: '<S87>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_oa; // Expression: 0
                                          //  Referenced by: '<S87>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gain_gw;
                          // Computed Parameter: DiscreteTimeIntegrator1_gain_gw
                             //  Referenced by: '<S87>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC_a; // Expression: 0
                                          //  Referenced by: '<S87>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gain_og;
                          // Computed Parameter: DiscreteTimeIntegrator2_gain_og
                             //  Referenced by: '<S87>/Discrete-Time Integrator2'

  real_T DiscreteTimeIntegrator_gainv_j3;
                          // Computed Parameter: DiscreteTimeIntegrator_gainv_j3
                             //  Referenced by: '<S95>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_f;  // Expression: 0
                                          //  Referenced by: '<S95>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gainv_b;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainv_b
                             //  Referenced by: '<S95>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC_d; // Expression: 0
                                          //  Referenced by: '<S95>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gain_fl;
                          // Computed Parameter: DiscreteTimeIntegrator2_gain_fl
                             //  Referenced by: '<S95>/Discrete-Time Integrator2'

  real_T DiscreteTimeIntegrator_gainva_n;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_n
                             //  Referenced by: '<S103>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_b;  // Expression: 0
                                          //  Referenced by: '<S103>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gain_mi;
                          // Computed Parameter: DiscreteTimeIntegrator1_gain_mi
                             //  Referenced by: '<S103>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC_j3;// Expression: 0
                                          //  Referenced by: '<S103>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gain_hz;
                          // Computed Parameter: DiscreteTimeIntegrator2_gain_hz
                             //  Referenced by: '<S103>/Discrete-Time Integrator2'

  real_T Constant_Value_fw;            // Expression: 0
                                          //  Referenced by: '<S31>/Constant'

  real_T Constant_Value_ng;            // Expression: 0
                                          //  Referenced by: '<S39>/Constant'

  real_T Constant_Value_bv;            // Expression: 0
                                          //  Referenced by: '<S47>/Constant'

  real_T Constant_Value_h3;            // Expression: 0
                                          //  Referenced by: '<S55>/Constant'

  real_T Constant_Value_jx;            // Expression: 0
                                          //  Referenced by: '<S63>/Constant'

  real_T Constant_Value_bu;            // Expression: 0
                                          //  Referenced by: '<S71>/Constant'

  real_T Constant_Value_bv4;           // Expression: 0
                                          //  Referenced by: '<S79>/Constant'

  real_T Constant_Value_n0;            // Expression: 0
                                          //  Referenced by: '<S87>/Constant'

  real_T Constant_Value_bm;            // Expression: 0
                                          //  Referenced by: '<S95>/Constant'

  real_T Constant_Value_bc;            // Expression: 0
                                          //  Referenced by: '<S103>/Constant'

  real_T Constant_Value_a;             // Expression: 1
                                          //  Referenced by: '<S140>/Constant'

  real_T Saturation_UpperSat;          // Expression: 1
                                          //  Referenced by: '<S3>/Saturation'

  real_T Saturation_LowerSat;          // Expression: 0
                                          //  Referenced by: '<S3>/Saturation'

  real_T Gain_Gain;                    // Expression: 1.5
                                          //  Referenced by: '<S3>/Gain'

  real_T Constant1_Value;              // Expression: 2
                                          //  Referenced by: '<S140>/Constant1'

  real_T Saturation2_UpperSat;         // Expression: 1
                                          //  Referenced by: '<S3>/Saturation2'

  real_T Saturation2_LowerSat;         // Expression: 0
                                          //  Referenced by: '<S3>/Saturation2'

  real_T Constant2_Value;              // Expression: 3
                                          //  Referenced by: '<S140>/Constant2'

  real_T Saturation4_UpperSat;         // Expression: 1
                                          //  Referenced by: '<S3>/Saturation4'

  real_T Saturation4_LowerSat;         // Expression: 0
                                          //  Referenced by: '<S3>/Saturation4'

  real_T Constant4_Value;              // Expression: 4
                                          //  Referenced by: '<S140>/Constant4'

  real_T Saturation1_UpperSat;         // Expression: 1
                                          //  Referenced by: '<S3>/Saturation1'

  real_T Saturation1_LowerSat;         // Expression: 0
                                          //  Referenced by: '<S3>/Saturation1'

  real_T Constant5_Value;              // Expression: 5
                                          //  Referenced by: '<S140>/Constant5'

  real_T Saturation3_UpperSat;         // Expression: 1
                                          //  Referenced by: '<S3>/Saturation3'

  real_T Saturation3_LowerSat;         // Expression: 0
                                          //  Referenced by: '<S3>/Saturation3'

  real_T Constant6_Value;              // Expression: 6
                                          //  Referenced by: '<S140>/Constant6'

  real_T Saturation5_UpperSat;         // Expression: 1
                                          //  Referenced by: '<S3>/Saturation5'

  real_T Saturation5_LowerSat;         // Expression: 0
                                          //  Referenced by: '<S3>/Saturation5'

  real_T Constant3_Value;              // Expression: 7
                                          //  Referenced by: '<S140>/Constant3'

  real_T Saturation6_UpperSat;         // Expression: 1
                                          //  Referenced by: '<S3>/Saturation6'

  real_T Saturation6_LowerSat;         // Expression: 0
                                          //  Referenced by: '<S3>/Saturation6'

  real_T Constant7_Value;              // Expression: 8
                                          //  Referenced by: '<S140>/Constant7'

  real_T Saturation7_UpperSat;         // Expression: 1
                                          //  Referenced by: '<S3>/Saturation7'

  real_T Saturation7_LowerSat;         // Expression: 0
                                          //  Referenced by: '<S3>/Saturation7'

  real_T Constant8_Value;              // Expression: 9
                                          //  Referenced by: '<S140>/Constant8'

  real_T Saturation8_UpperSat;         // Expression: 1
                                          //  Referenced by: '<S3>/Saturation8'

  real_T Saturation8_LowerSat;         // Expression: 0
                                          //  Referenced by: '<S3>/Saturation8'

  real_T Constant9_Value;              // Expression: 10
                                          //  Referenced by: '<S140>/Constant9'

  real_T Saturation9_UpperSat;         // Expression: 1
                                          //  Referenced by: '<S3>/Saturation9'

  real_T Saturation9_LowerSat;         // Expression: 0
                                          //  Referenced by: '<S3>/Saturation9'

  P_VectorFieldHistogram_c10_wp_T VectorFieldHistogram_pnaevvfpg;// '<S141>/Vector Field Histogram' 
  P_PathFollowing_c10_wp_snake_T PathFollowing_o;// '<S204>/Path Following'
  P_Recovery_c10_wp_snake_T Recovery_kz;// '<S204>/Recovery'
  P_VectorFieldHistogram_c10_wp_T VectorFieldHistogram_pnaevvfp;// '<S141>/Vector Field Histogram' 
  P_PathFollowing_c10_wp_snake_T PathFollowing_j;// '<S197>/Path Following'
  P_Recovery_c10_wp_snake_T Recovery_c;// '<S197>/Recovery'
  P_VectorFieldHistogram_c10_wp_T VectorFieldHistogram_pnaevvf;// '<S141>/Vector Field Histogram' 
  P_PathFollowing_c10_wp_snake_T PathFollowing_b;// '<S190>/Path Following'
  P_Recovery_c10_wp_snake_T Recovery_f1;// '<S190>/Recovery'
  P_VectorFieldHistogram_c10_wp_T VectorFieldHistogram_pnaevv;// '<S141>/Vector Field Histogram' 
  P_PathFollowing_c10_wp_snake_T PathFollowing_m;// '<S183>/Path Following'
  P_Recovery_c10_wp_snake_T Recovery_f;// '<S183>/Recovery'
  P_VectorFieldHistogram_c10_wp_T VectorFieldHistogram_pnaev;// '<S141>/Vector Field Histogram' 
  P_PathFollowing_c10_wp_snake_T PathFollowing_a;// '<S176>/Path Following'
  P_Recovery_c10_wp_snake_T Recovery_a;// '<S176>/Recovery'
  P_VectorFieldHistogram_c10_wp_T VectorFieldHistogram_pnae;// '<S141>/Vector Field Histogram' 
  P_PathFollowing_c10_wp_snake_T PathFollowing_i;// '<S169>/Path Following'
  P_Recovery_c10_wp_snake_T Recovery_j;// '<S169>/Recovery'
  P_VectorFieldHistogram_c10_wp_T VectorFieldHistogram_pna;// '<S141>/Vector Field Histogram' 
  P_PathFollowing_c10_wp_snake_T PathFollowing_c;// '<S162>/Path Following'
  P_Recovery_c10_wp_snake_T Recovery_e;// '<S162>/Recovery'
  P_VectorFieldHistogram_c10_wp_T VectorFieldHistogram_pn;// '<S141>/Vector Field Histogram' 
  P_PathFollowing_c10_wp_snake_T PathFollowing_n;// '<S155>/Path Following'
  P_Recovery_c10_wp_snake_T Recovery_i;// '<S155>/Recovery'
  P_VectorFieldHistogram_c10_wp_T VectorFieldHistogram_p;// '<S141>/Vector Field Histogram' 
  P_PathFollowing_c10_wp_snake_T PathFollowing_h;// '<S148>/Path Following'
  P_Recovery_c10_wp_snake_T Recovery_k;// '<S148>/Recovery'
  P_VectorFieldHistogram_c10_wp_T VectorFieldHistogram;// '<S141>/Vector Field Histogram' 
  P_PathFollowing_c10_wp_snake_T PathFollowing;// '<S141>/Path Following'
  P_Recovery_c10_wp_snake_T Recovery;  // '<S141>/Recovery'
};

// Real-time Model Data Structure
struct tag_RTM_c10_wp_snake_T {
  const char_T * volatile errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_c10_wp_snake_T c10_wp_snake_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_c10_wp_snake_T c10_wp_snake_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_c10_wp_snake_T c10_wp_snake_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void c10_wp_snake_initialize(void);
  extern void c10_wp_snake_step(void);
  extern void c10_wp_snake_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_c10_wp_snake_T *const c10_wp_snake_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S13>/Display' : Unused code path elimination
//  Block '<S2>/Display1' : Unused code path elimination
//  Block '<S130>/Constant1' : Unused code path elimination
//  Block '<S131>/Constant1' : Unused code path elimination
//  Block '<S132>/Constant1' : Unused code path elimination
//  Block '<S133>/Constant1' : Unused code path elimination
//  Block '<S134>/Constant1' : Unused code path elimination
//  Block '<S135>/Constant1' : Unused code path elimination
//  Block '<S136>/Constant1' : Unused code path elimination
//  Block '<S137>/Constant1' : Unused code path elimination
//  Block '<S138>/Constant1' : Unused code path elimination
//  Block '<S139>/Constant1' : Unused code path elimination


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
//  '<Root>' : 'c10_wp_snake'
//  '<S1>'   : 'c10_wp_snake/Subsystem'
//  '<S2>'   : 'c10_wp_snake/Subsystem2'
//  '<S3>'   : 'c10_wp_snake/controller'
//  '<S4>'   : 'c10_wp_snake/Subsystem/Blank Message'
//  '<S5>'   : 'c10_wp_snake/Subsystem/Car Pose Listener'
//  '<S6>'   : 'c10_wp_snake/Subsystem/Car Pose Listener1'
//  '<S7>'   : 'c10_wp_snake/Subsystem/Car Pose Listener2'
//  '<S8>'   : 'c10_wp_snake/Subsystem/Car Pose Listener3'
//  '<S9>'   : 'c10_wp_snake/Subsystem/Car Pose Listener4'
//  '<S10>'  : 'c10_wp_snake/Subsystem/Car Pose Listener5'
//  '<S11>'  : 'c10_wp_snake/Subsystem/Car Pose Listener6'
//  '<S12>'  : 'c10_wp_snake/Subsystem/Car Pose Listener7'
//  '<S13>'  : 'c10_wp_snake/Subsystem/Car Pose Listener8'
//  '<S14>'  : 'c10_wp_snake/Subsystem/Car Pose Listener9'
//  '<S15>'  : 'c10_wp_snake/Subsystem/Command Velocity Publisher'
//  '<S16>'  : 'c10_wp_snake/Subsystem/Command Velocity Publisher1'
//  '<S17>'  : 'c10_wp_snake/Subsystem/Command Velocity Publisher2'
//  '<S18>'  : 'c10_wp_snake/Subsystem/Command Velocity Publisher3'
//  '<S19>'  : 'c10_wp_snake/Subsystem/Command Velocity Publisher4'
//  '<S20>'  : 'c10_wp_snake/Subsystem/Command Velocity Publisher5'
//  '<S21>'  : 'c10_wp_snake/Subsystem/Command Velocity Publisher6'
//  '<S22>'  : 'c10_wp_snake/Subsystem/Command Velocity Publisher7'
//  '<S23>'  : 'c10_wp_snake/Subsystem/Command Velocity Publisher8'
//  '<S24>'  : 'c10_wp_snake/Subsystem/Command Velocity Publisher9'
//  '<S25>'  : 'c10_wp_snake/Subsystem/Publish2'
//  '<S26>'  : 'c10_wp_snake/Subsystem/Car Pose Listener/Subscribe'
//  '<S27>'  : 'c10_wp_snake/Subsystem/Car Pose Listener/Subscribe1'
//  '<S28>'  : 'c10_wp_snake/Subsystem/Car Pose Listener/Subsystem'
//  '<S29>'  : 'c10_wp_snake/Subsystem/Car Pose Listener/Subscribe/Enabled Subsystem'
//  '<S30>'  : 'c10_wp_snake/Subsystem/Car Pose Listener/Subscribe1/Enabled Subsystem'
//  '<S31>'  : 'c10_wp_snake/Subsystem/Car Pose Listener/Subsystem/DiffSteer Kinematics'
//  '<S32>'  : 'c10_wp_snake/Subsystem/Car Pose Listener/Subsystem/sensor2vCar'
//  '<S33>'  : 'c10_wp_snake/Subsystem/Car Pose Listener/Subsystem/sensor2vCar4'
//  '<S34>'  : 'c10_wp_snake/Subsystem/Car Pose Listener1/Subscribe'
//  '<S35>'  : 'c10_wp_snake/Subsystem/Car Pose Listener1/Subscribe1'
//  '<S36>'  : 'c10_wp_snake/Subsystem/Car Pose Listener1/Subsystem'
//  '<S37>'  : 'c10_wp_snake/Subsystem/Car Pose Listener1/Subscribe/Enabled Subsystem'
//  '<S38>'  : 'c10_wp_snake/Subsystem/Car Pose Listener1/Subscribe1/Enabled Subsystem'
//  '<S39>'  : 'c10_wp_snake/Subsystem/Car Pose Listener1/Subsystem/DiffSteer Kinematics'
//  '<S40>'  : 'c10_wp_snake/Subsystem/Car Pose Listener1/Subsystem/sensor2vCar'
//  '<S41>'  : 'c10_wp_snake/Subsystem/Car Pose Listener1/Subsystem/sensor2vCar4'
//  '<S42>'  : 'c10_wp_snake/Subsystem/Car Pose Listener2/Subscribe'
//  '<S43>'  : 'c10_wp_snake/Subsystem/Car Pose Listener2/Subscribe1'
//  '<S44>'  : 'c10_wp_snake/Subsystem/Car Pose Listener2/Subsystem'
//  '<S45>'  : 'c10_wp_snake/Subsystem/Car Pose Listener2/Subscribe/Enabled Subsystem'
//  '<S46>'  : 'c10_wp_snake/Subsystem/Car Pose Listener2/Subscribe1/Enabled Subsystem'
//  '<S47>'  : 'c10_wp_snake/Subsystem/Car Pose Listener2/Subsystem/DiffSteer Kinematics'
//  '<S48>'  : 'c10_wp_snake/Subsystem/Car Pose Listener2/Subsystem/sensor2vCar'
//  '<S49>'  : 'c10_wp_snake/Subsystem/Car Pose Listener2/Subsystem/sensor2vCar4'
//  '<S50>'  : 'c10_wp_snake/Subsystem/Car Pose Listener3/Subscribe'
//  '<S51>'  : 'c10_wp_snake/Subsystem/Car Pose Listener3/Subscribe1'
//  '<S52>'  : 'c10_wp_snake/Subsystem/Car Pose Listener3/Subsystem'
//  '<S53>'  : 'c10_wp_snake/Subsystem/Car Pose Listener3/Subscribe/Enabled Subsystem'
//  '<S54>'  : 'c10_wp_snake/Subsystem/Car Pose Listener3/Subscribe1/Enabled Subsystem'
//  '<S55>'  : 'c10_wp_snake/Subsystem/Car Pose Listener3/Subsystem/DiffSteer Kinematics'
//  '<S56>'  : 'c10_wp_snake/Subsystem/Car Pose Listener3/Subsystem/sensor2vCar'
//  '<S57>'  : 'c10_wp_snake/Subsystem/Car Pose Listener3/Subsystem/sensor2vCar4'
//  '<S58>'  : 'c10_wp_snake/Subsystem/Car Pose Listener4/Subscribe'
//  '<S59>'  : 'c10_wp_snake/Subsystem/Car Pose Listener4/Subscribe1'
//  '<S60>'  : 'c10_wp_snake/Subsystem/Car Pose Listener4/Subsystem'
//  '<S61>'  : 'c10_wp_snake/Subsystem/Car Pose Listener4/Subscribe/Enabled Subsystem'
//  '<S62>'  : 'c10_wp_snake/Subsystem/Car Pose Listener4/Subscribe1/Enabled Subsystem'
//  '<S63>'  : 'c10_wp_snake/Subsystem/Car Pose Listener4/Subsystem/DiffSteer Kinematics'
//  '<S64>'  : 'c10_wp_snake/Subsystem/Car Pose Listener4/Subsystem/sensor2vCar'
//  '<S65>'  : 'c10_wp_snake/Subsystem/Car Pose Listener4/Subsystem/sensor2vCar4'
//  '<S66>'  : 'c10_wp_snake/Subsystem/Car Pose Listener5/Subscribe'
//  '<S67>'  : 'c10_wp_snake/Subsystem/Car Pose Listener5/Subscribe1'
//  '<S68>'  : 'c10_wp_snake/Subsystem/Car Pose Listener5/Subsystem'
//  '<S69>'  : 'c10_wp_snake/Subsystem/Car Pose Listener5/Subscribe/Enabled Subsystem'
//  '<S70>'  : 'c10_wp_snake/Subsystem/Car Pose Listener5/Subscribe1/Enabled Subsystem'
//  '<S71>'  : 'c10_wp_snake/Subsystem/Car Pose Listener5/Subsystem/DiffSteer Kinematics'
//  '<S72>'  : 'c10_wp_snake/Subsystem/Car Pose Listener5/Subsystem/sensor2vCar'
//  '<S73>'  : 'c10_wp_snake/Subsystem/Car Pose Listener5/Subsystem/sensor2vCar4'
//  '<S74>'  : 'c10_wp_snake/Subsystem/Car Pose Listener6/Subscribe'
//  '<S75>'  : 'c10_wp_snake/Subsystem/Car Pose Listener6/Subscribe1'
//  '<S76>'  : 'c10_wp_snake/Subsystem/Car Pose Listener6/Subsystem'
//  '<S77>'  : 'c10_wp_snake/Subsystem/Car Pose Listener6/Subscribe/Enabled Subsystem'
//  '<S78>'  : 'c10_wp_snake/Subsystem/Car Pose Listener6/Subscribe1/Enabled Subsystem'
//  '<S79>'  : 'c10_wp_snake/Subsystem/Car Pose Listener6/Subsystem/DiffSteer Kinematics'
//  '<S80>'  : 'c10_wp_snake/Subsystem/Car Pose Listener6/Subsystem/sensor2vCar'
//  '<S81>'  : 'c10_wp_snake/Subsystem/Car Pose Listener6/Subsystem/sensor2vCar4'
//  '<S82>'  : 'c10_wp_snake/Subsystem/Car Pose Listener7/Subscribe'
//  '<S83>'  : 'c10_wp_snake/Subsystem/Car Pose Listener7/Subscribe1'
//  '<S84>'  : 'c10_wp_snake/Subsystem/Car Pose Listener7/Subsystem'
//  '<S85>'  : 'c10_wp_snake/Subsystem/Car Pose Listener7/Subscribe/Enabled Subsystem'
//  '<S86>'  : 'c10_wp_snake/Subsystem/Car Pose Listener7/Subscribe1/Enabled Subsystem'
//  '<S87>'  : 'c10_wp_snake/Subsystem/Car Pose Listener7/Subsystem/DiffSteer Kinematics'
//  '<S88>'  : 'c10_wp_snake/Subsystem/Car Pose Listener7/Subsystem/sensor2vCar'
//  '<S89>'  : 'c10_wp_snake/Subsystem/Car Pose Listener7/Subsystem/sensor2vCar4'
//  '<S90>'  : 'c10_wp_snake/Subsystem/Car Pose Listener8/Subscribe'
//  '<S91>'  : 'c10_wp_snake/Subsystem/Car Pose Listener8/Subscribe1'
//  '<S92>'  : 'c10_wp_snake/Subsystem/Car Pose Listener8/Subsystem'
//  '<S93>'  : 'c10_wp_snake/Subsystem/Car Pose Listener8/Subscribe/Enabled Subsystem'
//  '<S94>'  : 'c10_wp_snake/Subsystem/Car Pose Listener8/Subscribe1/Enabled Subsystem'
//  '<S95>'  : 'c10_wp_snake/Subsystem/Car Pose Listener8/Subsystem/DiffSteer Kinematics'
//  '<S96>'  : 'c10_wp_snake/Subsystem/Car Pose Listener8/Subsystem/sensor2vCar'
//  '<S97>'  : 'c10_wp_snake/Subsystem/Car Pose Listener8/Subsystem/sensor2vCar4'
//  '<S98>'  : 'c10_wp_snake/Subsystem/Car Pose Listener9/Subscribe'
//  '<S99>'  : 'c10_wp_snake/Subsystem/Car Pose Listener9/Subscribe1'
//  '<S100>' : 'c10_wp_snake/Subsystem/Car Pose Listener9/Subsystem'
//  '<S101>' : 'c10_wp_snake/Subsystem/Car Pose Listener9/Subscribe/Enabled Subsystem'
//  '<S102>' : 'c10_wp_snake/Subsystem/Car Pose Listener9/Subscribe1/Enabled Subsystem'
//  '<S103>' : 'c10_wp_snake/Subsystem/Car Pose Listener9/Subsystem/DiffSteer Kinematics'
//  '<S104>' : 'c10_wp_snake/Subsystem/Car Pose Listener9/Subsystem/sensor2vCar'
//  '<S105>' : 'c10_wp_snake/Subsystem/Car Pose Listener9/Subsystem/sensor2vCar4'
//  '<S106>' : 'c10_wp_snake/Subsystem/Command Velocity Publisher/Blank Message'
//  '<S107>' : 'c10_wp_snake/Subsystem/Command Velocity Publisher/Publish2'
//  '<S108>' : 'c10_wp_snake/Subsystem/Command Velocity Publisher1/Blank Message'
//  '<S109>' : 'c10_wp_snake/Subsystem/Command Velocity Publisher1/Publish2'
//  '<S110>' : 'c10_wp_snake/Subsystem/Command Velocity Publisher2/Blank Message'
//  '<S111>' : 'c10_wp_snake/Subsystem/Command Velocity Publisher2/Publish2'
//  '<S112>' : 'c10_wp_snake/Subsystem/Command Velocity Publisher3/Blank Message'
//  '<S113>' : 'c10_wp_snake/Subsystem/Command Velocity Publisher3/Publish2'
//  '<S114>' : 'c10_wp_snake/Subsystem/Command Velocity Publisher4/Blank Message'
//  '<S115>' : 'c10_wp_snake/Subsystem/Command Velocity Publisher4/Publish2'
//  '<S116>' : 'c10_wp_snake/Subsystem/Command Velocity Publisher5/Blank Message'
//  '<S117>' : 'c10_wp_snake/Subsystem/Command Velocity Publisher5/Publish2'
//  '<S118>' : 'c10_wp_snake/Subsystem/Command Velocity Publisher6/Blank Message'
//  '<S119>' : 'c10_wp_snake/Subsystem/Command Velocity Publisher6/Publish2'
//  '<S120>' : 'c10_wp_snake/Subsystem/Command Velocity Publisher7/Blank Message'
//  '<S121>' : 'c10_wp_snake/Subsystem/Command Velocity Publisher7/Publish2'
//  '<S122>' : 'c10_wp_snake/Subsystem/Command Velocity Publisher8/Blank Message'
//  '<S123>' : 'c10_wp_snake/Subsystem/Command Velocity Publisher8/Publish2'
//  '<S124>' : 'c10_wp_snake/Subsystem/Command Velocity Publisher9/Blank Message'
//  '<S125>' : 'c10_wp_snake/Subsystem/Command Velocity Publisher9/Publish2'
//  '<S126>' : 'c10_wp_snake/Subsystem2/waypoint'
//  '<S127>' : 'c10_wp_snake/Subsystem2/waypoint1'
//  '<S128>' : 'c10_wp_snake/controller/MATLAB Function'
//  '<S129>' : 'c10_wp_snake/controller/MATLAB Function1'
//  '<S130>' : 'c10_wp_snake/controller/Subsystem1'
//  '<S131>' : 'c10_wp_snake/controller/Subsystem10'
//  '<S132>' : 'c10_wp_snake/controller/Subsystem2'
//  '<S133>' : 'c10_wp_snake/controller/Subsystem3'
//  '<S134>' : 'c10_wp_snake/controller/Subsystem4'
//  '<S135>' : 'c10_wp_snake/controller/Subsystem5'
//  '<S136>' : 'c10_wp_snake/controller/Subsystem6'
//  '<S137>' : 'c10_wp_snake/controller/Subsystem7'
//  '<S138>' : 'c10_wp_snake/controller/Subsystem8'
//  '<S139>' : 'c10_wp_snake/controller/Subsystem9'
//  '<S140>' : 'c10_wp_snake/controller/env'
//  '<S141>' : 'c10_wp_snake/controller/Subsystem1/Adjust Velocities to Avoid Obstacles'
//  '<S142>' : 'c10_wp_snake/controller/Subsystem1/Compute Velocity and Heading for Path following'
//  '<S143>' : 'c10_wp_snake/controller/Subsystem1/Outputs'
//  '<S144>' : 'c10_wp_snake/controller/Subsystem1/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S145>' : 'c10_wp_snake/controller/Subsystem1/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S146>' : 'c10_wp_snake/controller/Subsystem1/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S147>' : 'c10_wp_snake/controller/Subsystem1/Compute Velocity and Heading for Path following/ Extract Goal'
//  '<S148>' : 'c10_wp_snake/controller/Subsystem10/Adjust Velocities to Avoid Obstacles'
//  '<S149>' : 'c10_wp_snake/controller/Subsystem10/Compute Velocity and Heading for Path following'
//  '<S150>' : 'c10_wp_snake/controller/Subsystem10/Outputs'
//  '<S151>' : 'c10_wp_snake/controller/Subsystem10/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S152>' : 'c10_wp_snake/controller/Subsystem10/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S153>' : 'c10_wp_snake/controller/Subsystem10/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S154>' : 'c10_wp_snake/controller/Subsystem10/Compute Velocity and Heading for Path following/ Extract Goal'
//  '<S155>' : 'c10_wp_snake/controller/Subsystem2/Adjust Velocities to Avoid Obstacles'
//  '<S156>' : 'c10_wp_snake/controller/Subsystem2/Compute Velocity and Heading for Path following'
//  '<S157>' : 'c10_wp_snake/controller/Subsystem2/Outputs'
//  '<S158>' : 'c10_wp_snake/controller/Subsystem2/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S159>' : 'c10_wp_snake/controller/Subsystem2/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S160>' : 'c10_wp_snake/controller/Subsystem2/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S161>' : 'c10_wp_snake/controller/Subsystem2/Compute Velocity and Heading for Path following/ Extract Goal'
//  '<S162>' : 'c10_wp_snake/controller/Subsystem3/Adjust Velocities to Avoid Obstacles'
//  '<S163>' : 'c10_wp_snake/controller/Subsystem3/Compute Velocity and Heading for Path following'
//  '<S164>' : 'c10_wp_snake/controller/Subsystem3/Outputs'
//  '<S165>' : 'c10_wp_snake/controller/Subsystem3/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S166>' : 'c10_wp_snake/controller/Subsystem3/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S167>' : 'c10_wp_snake/controller/Subsystem3/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S168>' : 'c10_wp_snake/controller/Subsystem3/Compute Velocity and Heading for Path following/ Extract Goal'
//  '<S169>' : 'c10_wp_snake/controller/Subsystem4/Adjust Velocities to Avoid Obstacles'
//  '<S170>' : 'c10_wp_snake/controller/Subsystem4/Compute Velocity and Heading for Path following'
//  '<S171>' : 'c10_wp_snake/controller/Subsystem4/Outputs'
//  '<S172>' : 'c10_wp_snake/controller/Subsystem4/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S173>' : 'c10_wp_snake/controller/Subsystem4/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S174>' : 'c10_wp_snake/controller/Subsystem4/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S175>' : 'c10_wp_snake/controller/Subsystem4/Compute Velocity and Heading for Path following/ Extract Goal'
//  '<S176>' : 'c10_wp_snake/controller/Subsystem5/Adjust Velocities to Avoid Obstacles'
//  '<S177>' : 'c10_wp_snake/controller/Subsystem5/Compute Velocity and Heading for Path following'
//  '<S178>' : 'c10_wp_snake/controller/Subsystem5/Outputs'
//  '<S179>' : 'c10_wp_snake/controller/Subsystem5/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S180>' : 'c10_wp_snake/controller/Subsystem5/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S181>' : 'c10_wp_snake/controller/Subsystem5/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S182>' : 'c10_wp_snake/controller/Subsystem5/Compute Velocity and Heading for Path following/ Extract Goal'
//  '<S183>' : 'c10_wp_snake/controller/Subsystem6/Adjust Velocities to Avoid Obstacles'
//  '<S184>' : 'c10_wp_snake/controller/Subsystem6/Compute Velocity and Heading for Path following'
//  '<S185>' : 'c10_wp_snake/controller/Subsystem6/Outputs'
//  '<S186>' : 'c10_wp_snake/controller/Subsystem6/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S187>' : 'c10_wp_snake/controller/Subsystem6/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S188>' : 'c10_wp_snake/controller/Subsystem6/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S189>' : 'c10_wp_snake/controller/Subsystem6/Compute Velocity and Heading for Path following/ Extract Goal'
//  '<S190>' : 'c10_wp_snake/controller/Subsystem7/Adjust Velocities to Avoid Obstacles'
//  '<S191>' : 'c10_wp_snake/controller/Subsystem7/Compute Velocity and Heading for Path following'
//  '<S192>' : 'c10_wp_snake/controller/Subsystem7/Outputs'
//  '<S193>' : 'c10_wp_snake/controller/Subsystem7/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S194>' : 'c10_wp_snake/controller/Subsystem7/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S195>' : 'c10_wp_snake/controller/Subsystem7/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S196>' : 'c10_wp_snake/controller/Subsystem7/Compute Velocity and Heading for Path following/ Extract Goal'
//  '<S197>' : 'c10_wp_snake/controller/Subsystem8/Adjust Velocities to Avoid Obstacles'
//  '<S198>' : 'c10_wp_snake/controller/Subsystem8/Compute Velocity and Heading for Path following'
//  '<S199>' : 'c10_wp_snake/controller/Subsystem8/Outputs'
//  '<S200>' : 'c10_wp_snake/controller/Subsystem8/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S201>' : 'c10_wp_snake/controller/Subsystem8/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S202>' : 'c10_wp_snake/controller/Subsystem8/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S203>' : 'c10_wp_snake/controller/Subsystem8/Compute Velocity and Heading for Path following/ Extract Goal'
//  '<S204>' : 'c10_wp_snake/controller/Subsystem9/Adjust Velocities to Avoid Obstacles'
//  '<S205>' : 'c10_wp_snake/controller/Subsystem9/Compute Velocity and Heading for Path following'
//  '<S206>' : 'c10_wp_snake/controller/Subsystem9/Outputs'
//  '<S207>' : 'c10_wp_snake/controller/Subsystem9/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S208>' : 'c10_wp_snake/controller/Subsystem9/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S209>' : 'c10_wp_snake/controller/Subsystem9/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S210>' : 'c10_wp_snake/controller/Subsystem9/Compute Velocity and Heading for Path following/ Extract Goal'
//  '<S211>' : 'c10_wp_snake/controller/env/MATLAB Function1'
//  '<S212>' : 'c10_wp_snake/controller/env/MATLAB Function10'
//  '<S213>' : 'c10_wp_snake/controller/env/MATLAB Function2'
//  '<S214>' : 'c10_wp_snake/controller/env/MATLAB Function3'
//  '<S215>' : 'c10_wp_snake/controller/env/MATLAB Function4'
//  '<S216>' : 'c10_wp_snake/controller/env/MATLAB Function5'
//  '<S217>' : 'c10_wp_snake/controller/env/MATLAB Function6'
//  '<S218>' : 'c10_wp_snake/controller/env/MATLAB Function7'
//  '<S219>' : 'c10_wp_snake/controller/env/MATLAB Function8'
//  '<S220>' : 'c10_wp_snake/controller/env/MATLAB Function9'

#endif                                 // RTW_HEADER_c10_wp_snake_h_

//
// File trailer for generated code.
//
// [EOF]
//
