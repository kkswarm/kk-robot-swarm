//
// File: c6_formation.h
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
#ifndef RTW_HEADER_c6_formation_h_
#define RTW_HEADER_c6_formation_h_
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "c6_formation_types.h"
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

// Block signals for system '<S18>/Median Filter'
struct B_MedianFilter_c6_formation_T {
  real_T MedianFilter;                 // '<S18>/Median Filter'
  real_T vprev;
  real_T p;
  real_T ind2;
};

// Block states (default storage) for system '<S18>/Median Filter'
struct DW_MedianFilter_c6_formation_T {
  dsp_MedianFilter_c6_formation_T obj; // '<S18>/Median Filter'
  boolean_T objisempty;                // '<S18>/Median Filter'
};

// Block signals for system '<S18>/sensor2vCar'
struct B_sensor2vCar_c6_formation_T {
  real_T aSinInput;
  real_T q;
};

// Block states (default storage) for system '<S18>/sensor2vCar'
struct DW_sensor2vCar_c6_formation_T {
  real_T x0;                           // '<S18>/sensor2vCar'
  real_T y0;                           // '<S18>/sensor2vCar'
  real_T yaw0;                         // '<S18>/sensor2vCar'
  real_T yaw1;                         // '<S18>/sensor2vCar'
  real_T x0_init;                      // '<S18>/sensor2vCar'
  real_T y0_init;                      // '<S18>/sensor2vCar'
  real_T yaw0_init;                    // '<S18>/sensor2vCar'
  real_T fStart;                       // '<S18>/sensor2vCar'
};

// Block states (default storage) for system '<S18>/sensor2vCar4'
struct DW_sensor2vCar4_c6_formation_T {
  real_T v0;                           // '<S18>/sensor2vCar4'
  real_T w0;                           // '<S18>/sensor2vCar4'
};

// Block signals for system '<S84>/Vector Field Histogram'
struct B_VectorFieldHistogram_c6_for_T {
  boolean_T nearIdx_data[49680];
  boolean_T validWeights_data[4500];
  real_T kalpha[540];
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
  real_T sectorSizes_data[91];
  real_T narrowDirs_data[91];
  real_T angles_data_m[91];
  real_T angles_data_c[91];
  real_T theta1_data[91];
  real_T b_y1_data[91];
  int32_T foundSectors_data[181];
  int32_T tmp_data_k[181];
  int32_T ub_data[180];
  real_T lowerVec_data[75];
  real_T higherVec_data[75];
  real_T lh_data[75];
  real_T kalphaVec_data[75];
  real_T lk_data[75];
  real_T kh_data[75];
  int16_T vb_data[276];
  boolean_T freeDirs_data[276];
  boolean_T pos_data[276];
  boolean_T b_data_c[276];
  real_T validScan_InternalRanges_data[25];
  real_T validScan_InternalAngles_data[25];
  real_T DYj_data[25];
  real_T distR_data[25];
  real_T distL_data[25];
  real_T g_data[25];
  real_T weightedRanges_data[25];
  real_T sinOfEnlargement_data[25];
  real_T higherAng_data[25];
  real_T lowerAng_data[25];
  real_T varargin_2_data[25];
  real_T obj_InternalRanges_data[25];
  real_T objOut_InternalAngles_data[25];
  real_T y_data_b[25];
  uint8_T b_data_p[180];
  uint8_T c_data[180];
  boolean_T d[180];
  boolean_T obj_data[180];
  int8_T ob_data[91];
  int8_T tb_data[91];
  boolean_T blockedR_data[25];
  boolean_T blockedL_data[25];
  boolean_T validRangeLimitIndices_data[25];
  boolean_T validAngleLimitIndices_data[25];
  boolean_T tmp_data_c[25];
  boolean_T tmp_data_f[25];
  boolean_T tmp_data_g[25];
  boolean_T tmp_data_g1[25];
  boolean_T objOut_InternalRanges_tmp_data[25];
  boolean_T y_data_m[25];
  d_cell_wrap_c6_formation_T d_n;
  real_T obj[2];
  real_T obj_p[2];
  real_T parsedAngleLimits[2];
  real_T VectorFieldHistogram;         // '<S84>/Vector Field Histogram'
  real_T target;
  real_T phiR_data;
  real_T phiL_data;
  real_T obj_d;
  real_T cVal;
  real_T totalWeight;
  real_T q;
  real_T obj_g;
  real_T varargin_2;
  real_T varargin_2_l;
  real_T objOut_InternalAngles;
  real_T theta1;
  real_T c_data_tmp;
  real_T c_data_tmp_d;
  int32_T sectors_size[2];
  int32_T candidateDirections_size[2];
  int32_T tmp_size[2];
  int32_T angles_size[2];
  int32_T angles_size_l[2];
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
  int32_T tmp_size_j[2];
  int32_T theta1_size[2];
  int32_T b_k;
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
  int32_T sz_idx_1;
  int32_T candidateDirs_size;
  int32_T ob_size_idx_1;
  int32_T nx_l;
  int32_T ntilerows;
  int32_T ibmat;
  int32_T low_i;
  int32_T loop_ub;
};

// Block states (default storage) for system '<S84>/Vector Field Histogram'
struct DW_VectorFieldHistogram_c6_fo_T {
  nav_slalgs_internal_VectorFie_T obj; // '<S84>/Vector Field Histogram'
  boolean_T objisempty;                // '<S84>/Vector Field Histogram'
};

// Block signals for system '<S91>/MATLAB Function'
struct B_MATLABFunction_c6_formation_T {
  real_T y;
};

// Block signals for system '<S82>/MATLAB Function'
struct B_MATLABFunction_c6_formati_m_T {
  real_T intsectionPts[50];
  real_T b_x[50];
  real_T x[25];
  real_T poseX[18];
  occupancyMap_c6_formation_T map;
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
  int8_T b_data[25];
  boolean_T c[25];
  real_T vPose[3];
  emxArray_boolean_T_c6_formati_T f_data;
  emxArray_boolean_T_c6_formati_T f_data_m;
  emxArray_boolean_T_c6_formati_T f_data_c;
  emxArray_boolean_T_c6_formati_T originIdx;
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
  real_T halfEdge;
  real_T b_y;
  real_T scale;
  real_T absxk;
  real_T t;
  real_T pos_tmp;
  real_T resolution_tmp_tmp;
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
  real_T resolution;
  real_T ndbl_p;
  real_T apnd_c;
  real_T cdiff;
  real_T u0_f;
  real_T u1;
  real_T xlimit_idx_0;
  real_T ylimit_idx_0;
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
  cell_wrap_20_c6_formation_T reshapes[2];
  cell_wrap_20_c6_formation_T b_reshapes[2];
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
  int32_T loop_ub_g;
  int32_T grid;
  int32_T linePos_size;
  int32_T d_size_idx_0;
  int32_T end;
  int32_T xIncSign;
  int32_T b_xIncSign;
  int32_T loop_ub_m;
  int32_T f_size;
  int32_T v_size;
  int32_T i_n;
  int32_T endPtX_size_idx_0;
  int32_T endPtY_size_idx_0;
  int32_T xStart_size_idx_0;
  int32_T nxin;
  int32_T nxout;
  int32_T k0;
  int32_T b_k;
  int32_T newNumel;
  int32_T i_p;
  int32_T nx_l;
  int32_T nm1d2_j;
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
  int32_T i_d;
  int32_T e_k;
  int32_T f_k;
  int32_T h_k;
  int32_T loop_ub_gu;
  int32_T val;
  int32_T npages_idx_0;
  int32_T newNumel_l;
  int32_T i_dh;
  int32_T nx_d;
  int32_T exponent;
  int32_T loop_ub_l;
  int32_T loop_ub_o;
  int32_T i2;
  int32_T originIdx_b;
  int32_T mapStart;
  int32_T loop_ub_n;
  int32_T i3;
  int32_T newNumel_b;
  int32_T i_l;
  int32_T e_k_h;
  int32_T i4;
  int32_T newline_size;
  int32_T tmp_size;
  int32_T c_size_idx_0;
  int32_T acoef;
  int32_T k_b;
  int32_T i_da;
  int32_T newNumel_e;
  int32_T i_b;
  int32_T newNumel_j;
  int32_T i_f;
  int32_T newNumel_a;
  int32_T i_j;
  int32_T newNumel_jz;
  int32_T i_o;
  int32_T newNumel_n;
  int32_T i_i;
  int32_T newNumel_o;
  int32_T i_nv;
  int32_T nx_m;
  int32_T b_k_c;
  uint32_T gridSize_idx_0;
  uint32_T gridSize_idx_1;
  uint32_T siz_idx_0;
  int8_T d_data[2];
  int8_T e_data[2];
  int8_T ii_data[2];
  boolean_T j[2];
  boolean_T l_m[2];
  boolean_T x_m[2];
  boolean_T par[2];
  int8_T c_data[2];
  int16_T b_b;
  int16_T u1_j;
  int8_T csz_idx_0;
  boolean_T isMat;
  boolean_T lowFPE_idx_0;
  boolean_T isObstacleFree;
  boolean_T y_h;
  boolean_T par_c;
  boolean_T b;
};

// Block signals (default storage)
struct B_c6_formation_T {
  SL_Bus_c6_formation_nav_msgs_Odometry In1;// '<S59>/In1'
  SL_Bus_c6_formation_nav_msgs_Odometry In1_h;// '<S51>/In1'
  SL_Bus_c6_formation_nav_msgs_Odometry In1_n;// '<S43>/In1'
  SL_Bus_c6_formation_nav_msgs_Odometry In1_p;// '<S35>/In1'
  SL_Bus_c6_formation_nav_msgs_Odometry In1_ne;// '<S27>/In1'
  SL_Bus_c6_formation_nav_msgs_Odometry In1_o;// '<S19>/In1'
  SL_Bus_c6_formation_nav_msgs_Odometry b_varargout_2;
  real_T wpCircle_data[51];
  real_T wpCircle_data_m[48];
  real_T wpCircle_data_c[45];
  real_T wpCircle_data_k[42];
  real_T ranges[25];                   // '<S82>/MATLAB Function6'
  real_T ranges_j[25];                 // '<S82>/MATLAB Function5'
  real_T ranges_m[25];                 // '<S82>/MATLAB Function4'
  real_T ranges_c[25];                 // '<S82>/MATLAB Function3'
  real_T ranges_ci[25];                // '<S82>/MATLAB Function2'
  real_T ranges_b[25];                 // '<S82>/MATLAB Function'
  real_T Reshape1[18];                 // '<S82>/Reshape1'
  SL_Bus_c6_formation_geometry_msgs_Twist In1_l;// '<S60>/In1'
  SL_Bus_c6_formation_geometry_msgs_Twist In1_pl;// '<S52>/In1'
  SL_Bus_c6_formation_geometry_msgs_Twist In1_e;// '<S44>/In1'
  SL_Bus_c6_formation_geometry_msgs_Twist In1_g;// '<S36>/In1'
  SL_Bus_c6_formation_geometry_msgs_Twist In1_nu;// '<S28>/In1'
  SL_Bus_c6_formation_geometry_msgs_Twist In1_ge;// '<S20>/In1'
  real_T wp[18];                       // '<Root>/Chart'
  SL_Bus_c6_formation_geometry_msgs_Twist BusAssignment1;// '<S10>/Bus Assignment1' 
  char_T b_zeroDelimTopic[18];
  char_T b_zeroDelimTopic_c[17];
  real_T fb[2];
  char_T b_zeroDelimTopic_b[14];
  real_T x_e;                          // '<S18>/sensor2vCar'
  real_T y_d;                          // '<S18>/sensor2vCar'
  real_T yaw_n;                        // '<S18>/sensor2vCar'
  real_T W_h;                          // '<S18>/sensor2vCar4'
  real_T flag_o;                       // '<S26>/sensor2vCar'
  real_T yaw_init_a;                   // '<S18>/sensor2vCar'
  real_T flag;                         // '<S18>/sensor2vCar'
  real_T yaw_i;                        // '<S26>/sensor2vCar'
  real_T W_k;                          // '<S26>/sensor2vCar4'
  real_T yaw_h;                        // '<S34>/sensor2vCar'
  real_T W;                            // '<S34>/sensor2vCar4'
  real_T y_c;                          // '<S42>/sensor2vCar'
  real_T yaw_j;                        // '<S42>/sensor2vCar'
  real_T W_n;                          // '<S42>/sensor2vCar4'
  real_T awsinpsi;                     // '<S61>/a w sin(psi)'
  real_T ucospsi;                      // '<S61>/u cos(psi)'
  real_T awcospsi;                     // '<S61>/a w cos(psi)'
  real_T usinpsi;                      // '<S61>/u sin(psi)'
  real_T awsinpsi_j;                   // '<S53>/a w sin(psi)'
  real_T ucospsi_i;                    // '<S53>/u cos(psi)'
  real_T awcospsi_b;                   // '<S53>/a w cos(psi)'
  real_T usinpsi_l;                    // '<S53>/u sin(psi)'
  real_T awsinpsi_c;                   // '<S45>/a w sin(psi)'
  real_T ucospsi_i2;                   // '<S45>/u cos(psi)'
  real_T awcospsi_k;                   // '<S45>/a w cos(psi)'
  real_T usinpsi_c;                    // '<S45>/u sin(psi)'
  real_T awsinpsi_n;                   // '<S37>/a w sin(psi)'
  real_T ucospsi_d;                    // '<S37>/u cos(psi)'
  real_T awcospsi_bj;                  // '<S37>/a w cos(psi)'
  real_T usinpsi_j;                    // '<S37>/u sin(psi)'
  real_T awsinpsi_i;                   // '<S29>/a w sin(psi)'
  real_T ucospsi_m;                    // '<S29>/u cos(psi)'
  real_T awcospsi_e;                   // '<S29>/a w cos(psi)'
  real_T usinpsi_p;                    // '<S29>/u sin(psi)'
  real_T sintheta;                     // '<S21>/sin(theta)'
  real_T DiscreteTimeIntegrator2_m;    // '<S61>/Discrete-Time Integrator2'
  real_T Sum1_j;                       // '<S58>/Sum1'
  real_T Sum_l;                        // '<S58>/Sum'
  real_T DiscreteTimeIntegrator2_e;    // '<S53>/Discrete-Time Integrator2'
  real_T Sum1_g;                       // '<S50>/Sum1'
  real_T Sum_c;                        // '<S50>/Sum'
  real_T DiscreteTimeIntegrator2_f;    // '<S45>/Discrete-Time Integrator2'
  real_T Sum1_k;                       // '<S42>/Sum1'
  real_T Sum_d;                        // '<S42>/Sum'
  real_T DiscreteTimeIntegrator2_l;    // '<S37>/Discrete-Time Integrator2'
  real_T Sum1_o;                       // '<S34>/Sum1'
  real_T Sum_f;                        // '<S34>/Sum'
  real_T DiscreteTimeIntegrator2_o;    // '<S29>/Discrete-Time Integrator2'
  real_T Sum1_i;                       // '<S26>/Sum1'
  real_T Sum_o;                        // '<S26>/Sum'
  real_T DiscreteTimeIntegrator2;      // '<S21>/Discrete-Time Integrator2'
  real_T Sum1;                         // '<S18>/Sum1'
  real_T Sum;                          // '<S18>/Sum'
  real_T scale;
  real_T absxk;
  real_T t;
  real_T thetaWrap;
  real_T q;
  int8_T flag_p[6];
  int32_T b;
  int32_T c;
  int32_T i;
  int32_T loop_ub;
  int32_T wpCircle_tmp;
  int32_T wpCircle_data_tmp;
  boolean_T b_varargout_1;
  boolean_T rEQ0;
  B_MATLABFunction_c6_formati_m_T sf_MATLABFunction6;// '<S82>/MATLAB Function6' 
  B_MATLABFunction_c6_formati_m_T sf_MATLABFunction5;// '<S82>/MATLAB Function5' 
  B_MATLABFunction_c6_formati_m_T sf_MATLABFunction4;// '<S82>/MATLAB Function4' 
  B_MATLABFunction_c6_formati_m_T sf_MATLABFunction3;// '<S82>/MATLAB Function3' 
  B_MATLABFunction_c6_formati_m_T sf_MATLABFunction2;// '<S82>/MATLAB Function2' 
  B_MATLABFunction_c6_formati_m_T sf_MATLABFunction_aq;// '<S82>/MATLAB Function' 
  B_MATLABFunction_c6_formation_T sf_MATLABFunction_a;// '<S141>/MATLAB Function' 
  B_VectorFieldHistogram_c6_for_T VectorFieldHistogram_pnaev;// '<S84>/Vector Field Histogram' 
  B_MATLABFunction_c6_formation_T sf_MATLABFunction_i;// '<S131>/MATLAB Function' 
  B_VectorFieldHistogram_c6_for_T VectorFieldHistogram_pnae;// '<S84>/Vector Field Histogram' 
  B_MATLABFunction_c6_formation_T sf_MATLABFunction_j;// '<S121>/MATLAB Function' 
  B_VectorFieldHistogram_c6_for_T VectorFieldHistogram_pna;// '<S84>/Vector Field Histogram' 
  B_MATLABFunction_c6_formation_T sf_MATLABFunction_m;// '<S111>/MATLAB Function' 
  B_VectorFieldHistogram_c6_for_T VectorFieldHistogram_pn;// '<S84>/Vector Field Histogram' 
  B_MATLABFunction_c6_formation_T sf_MATLABFunction_b;// '<S101>/MATLAB Function' 
  B_VectorFieldHistogram_c6_for_T VectorFieldHistogram_p;// '<S84>/Vector Field Histogram' 
  B_MATLABFunction_c6_formation_T sf_MATLABFunction;// '<S91>/MATLAB Function'
  B_VectorFieldHistogram_c6_for_T VectorFieldHistogram;// '<S84>/Vector Field Histogram' 
  B_sensor2vCar_c6_formation_T sf_sensor2vCar_d;// '<S58>/sensor2vCar'
  B_MedianFilter_c6_formation_T MedianFilter2_pnaev;// '<S18>/Median Filter'
  B_MedianFilter_c6_formation_T MedianFilter1_pnaev;// '<S18>/Median Filter'
  B_MedianFilter_c6_formation_T MedianFilter_pnaev;// '<S18>/Median Filter'
  B_sensor2vCar_c6_formation_T sf_sensor2vCar_i;// '<S50>/sensor2vCar'
  B_MedianFilter_c6_formation_T MedianFilter2_pnae;// '<S18>/Median Filter'
  B_MedianFilter_c6_formation_T MedianFilter1_pnae;// '<S18>/Median Filter'
  B_MedianFilter_c6_formation_T MedianFilter_pnae;// '<S18>/Median Filter'
  B_sensor2vCar_c6_formation_T sf_sensor2vCar_c;// '<S42>/sensor2vCar'
  B_MedianFilter_c6_formation_T MedianFilter2_pna;// '<S18>/Median Filter'
  B_MedianFilter_c6_formation_T MedianFilter1_pna;// '<S18>/Median Filter'
  B_MedianFilter_c6_formation_T MedianFilter_pna;// '<S18>/Median Filter'
  B_sensor2vCar_c6_formation_T sf_sensor2vCar_j;// '<S34>/sensor2vCar'
  B_MedianFilter_c6_formation_T MedianFilter2_pn;// '<S18>/Median Filter'
  B_MedianFilter_c6_formation_T MedianFilter1_pn;// '<S18>/Median Filter'
  B_MedianFilter_c6_formation_T MedianFilter_pn;// '<S18>/Median Filter'
  B_sensor2vCar_c6_formation_T sf_sensor2vCar_f;// '<S26>/sensor2vCar'
  B_MedianFilter_c6_formation_T MedianFilter2_p;// '<S18>/Median Filter'
  B_MedianFilter_c6_formation_T MedianFilter1_p;// '<S18>/Median Filter'
  B_MedianFilter_c6_formation_T MedianFilter_p;// '<S18>/Median Filter'
  B_sensor2vCar_c6_formation_T sf_sensor2vCar;// '<S18>/sensor2vCar'
  B_MedianFilter_c6_formation_T MedianFilter2;// '<S18>/Median Filter'
  B_MedianFilter_c6_formation_T MedianFilter1;// '<S18>/Median Filter'
  B_MedianFilter_c6_formation_T MedianFilter;// '<S18>/Median Filter'
};

// Block states (default storage) for system '<Root>'
struct DW_c6_formation_T {
  ros_slroscpp_internal_block_S_T obj; // '<S57>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_f;// '<S56>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_d;// '<S49>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_b;// '<S48>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_p;// '<S41>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_e;// '<S40>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_b4;// '<S33>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_o;// '<S32>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_ey;// '<S25>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_h;// '<S24>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_os;// '<S17>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_fw;// '<S16>/SourceBlock'
  ros_slroscpp_internal_block_P_T obj_n;// '<S75>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_c;// '<S73>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_oz;// '<S71>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_i;// '<S69>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_is;// '<S67>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_cd;// '<S65>/SinkBlock'
  real_T DiscreteTimeIntegrator_DSTATE;// '<S21>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTATE;// '<S21>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTATE;// '<S21>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator_DSTATE_f;// '<S29>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTAT_m;// '<S29>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTAT_c;// '<S29>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator_DSTATE_g;// '<S37>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTAT_l;// '<S37>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTAT_g;// '<S37>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator_DSTATE_n;// '<S45>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTAT_k;// '<S45>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTAT_p;// '<S45>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator_DSTATE_e;// '<S53>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTAT_g;// '<S53>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTAT_h;// '<S53>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator_DSTATE_o;// '<S61>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTAT_b;// '<S61>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTAT_m;// '<S61>/Discrete-Time Integrator2'
  real_T state;                        // '<Root>/Chart'
  real_T idx;                          // '<Root>/Chart'
  real_T inum;                         // '<Root>/Chart'
  real_T istart;                       // '<Root>/Chart'
  real_T inum_n;                       // '<Root>/Chart'
  real_T iflag;                        // '<Root>/Chart'
  real_T st;                           // '<Root>/Chart'
  int8_T DiscreteTimeIntegrator_PrevRese;// '<S21>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevRes;// '<S21>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevRes;// '<S21>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator_PrevRe_p;// '<S29>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevR_a;// '<S29>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevR_e;// '<S29>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator_PrevRe_g;// '<S37>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevR_c;// '<S37>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevR_c;// '<S37>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator_PrevRe_b;// '<S45>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevR_h;// '<S45>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevR_h;// '<S45>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator_PrevR_ps;// '<S53>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_Prev_a1;// '<S53>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_Prev_em;// '<S53>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator_PrevRe_a;// '<S61>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevR_l;// '<S61>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevR_m;// '<S61>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_LOAD;// '<S21>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_LO_h;// '<S29>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_L_hi;// '<S37>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_LO_m;// '<S45>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_LO_p;// '<S53>/Discrete-Time Integrator2'
  uint8_T DiscreteTimeIntegrator2_IC_LO_a;// '<S61>/Discrete-Time Integrator2'
  uint8_T is_active_c39_c6_formation;  // '<Root>/Chart'
  uint8_T is_c39_c6_formation;         // '<Root>/Chart'
  uint8_T is_DuiXingBianHuan;          // '<Root>/Chart'
  boolean_T objisempty;                // '<S75>/SinkBlock'
  boolean_T objisempty_n;              // '<S73>/SinkBlock'
  boolean_T objisempty_d;              // '<S71>/SinkBlock'
  boolean_T objisempty_p;              // '<S69>/SinkBlock'
  boolean_T objisempty_i;              // '<S67>/SinkBlock'
  boolean_T objisempty_l;              // '<S65>/SinkBlock'
  boolean_T objisempty_a;              // '<S57>/SourceBlock'
  boolean_T objisempty_f;              // '<S56>/SourceBlock'
  boolean_T objisempty_g;              // '<S49>/SourceBlock'
  boolean_T objisempty_e;              // '<S48>/SourceBlock'
  boolean_T objisempty_m;              // '<S41>/SourceBlock'
  boolean_T objisempty_ie;             // '<S40>/SourceBlock'
  boolean_T objisempty_go;             // '<S33>/SourceBlock'
  boolean_T objisempty_la;             // '<S32>/SourceBlock'
  boolean_T objisempty_ns;             // '<S25>/SourceBlock'
  boolean_T objisempty_k;              // '<S24>/SourceBlock'
  boolean_T objisempty_d4;             // '<S17>/SourceBlock'
  boolean_T objisempty_f1;             // '<S16>/SourceBlock'
  DW_VectorFieldHistogram_c6_fo_T VectorFieldHistogram_pnaev;// '<S84>/Vector Field Histogram' 
  DW_VectorFieldHistogram_c6_fo_T VectorFieldHistogram_pnae;// '<S84>/Vector Field Histogram' 
  DW_VectorFieldHistogram_c6_fo_T VectorFieldHistogram_pna;// '<S84>/Vector Field Histogram' 
  DW_VectorFieldHistogram_c6_fo_T VectorFieldHistogram_pn;// '<S84>/Vector Field Histogram' 
  DW_VectorFieldHistogram_c6_fo_T VectorFieldHistogram_p;// '<S84>/Vector Field Histogram' 
  DW_VectorFieldHistogram_c6_fo_T VectorFieldHistogram;// '<S84>/Vector Field Histogram' 
  DW_sensor2vCar4_c6_formation_T sf_sensor2vCar4_d5;// '<S58>/sensor2vCar4'
  DW_sensor2vCar_c6_formation_T sf_sensor2vCar_d;// '<S58>/sensor2vCar'
  DW_MedianFilter_c6_formation_T MedianFilter2_pnaev;// '<S18>/Median Filter'
  DW_MedianFilter_c6_formation_T MedianFilter1_pnaev;// '<S18>/Median Filter'
  DW_MedianFilter_c6_formation_T MedianFilter_pnaev;// '<S18>/Median Filter'
  DW_sensor2vCar4_c6_formation_T sf_sensor2vCar4_i;// '<S50>/sensor2vCar4'
  DW_sensor2vCar_c6_formation_T sf_sensor2vCar_i;// '<S50>/sensor2vCar'
  DW_MedianFilter_c6_formation_T MedianFilter2_pnae;// '<S18>/Median Filter'
  DW_MedianFilter_c6_formation_T MedianFilter1_pnae;// '<S18>/Median Filter'
  DW_MedianFilter_c6_formation_T MedianFilter_pnae;// '<S18>/Median Filter'
  DW_sensor2vCar4_c6_formation_T sf_sensor2vCar4_a;// '<S42>/sensor2vCar4'
  DW_sensor2vCar_c6_formation_T sf_sensor2vCar_c;// '<S42>/sensor2vCar'
  DW_MedianFilter_c6_formation_T MedianFilter2_pna;// '<S18>/Median Filter'
  DW_MedianFilter_c6_formation_T MedianFilter1_pna;// '<S18>/Median Filter'
  DW_MedianFilter_c6_formation_T MedianFilter_pna;// '<S18>/Median Filter'
  DW_sensor2vCar4_c6_formation_T sf_sensor2vCar4_d;// '<S34>/sensor2vCar4'
  DW_sensor2vCar_c6_formation_T sf_sensor2vCar_j;// '<S34>/sensor2vCar'
  DW_MedianFilter_c6_formation_T MedianFilter2_pn;// '<S18>/Median Filter'
  DW_MedianFilter_c6_formation_T MedianFilter1_pn;// '<S18>/Median Filter'
  DW_MedianFilter_c6_formation_T MedianFilter_pn;// '<S18>/Median Filter'
  DW_sensor2vCar4_c6_formation_T sf_sensor2vCar4_l;// '<S26>/sensor2vCar4'
  DW_sensor2vCar_c6_formation_T sf_sensor2vCar_f;// '<S26>/sensor2vCar'
  DW_MedianFilter_c6_formation_T MedianFilter2_p;// '<S18>/Median Filter'
  DW_MedianFilter_c6_formation_T MedianFilter1_p;// '<S18>/Median Filter'
  DW_MedianFilter_c6_formation_T MedianFilter_p;// '<S18>/Median Filter'
  DW_sensor2vCar4_c6_formation_T sf_sensor2vCar4;// '<S18>/sensor2vCar4'
  DW_sensor2vCar_c6_formation_T sf_sensor2vCar;// '<S18>/sensor2vCar'
  DW_MedianFilter_c6_formation_T MedianFilter2;// '<S18>/Median Filter'
  DW_MedianFilter_c6_formation_T MedianFilter1;// '<S18>/Median Filter'
  DW_MedianFilter_c6_formation_T MedianFilter;// '<S18>/Median Filter'
};

// Parameters for system: '<S84>/Recovery'
struct P_Recovery_c6_formation_T_ {
  real_T Gain_Gain;                    // Expression: -1
                                          //  Referenced by: '<S88>/Gain'

  real_T Constant1_Value;              // Expression: -pi/2
                                          //  Referenced by: '<S88>/Constant1'

};

// Parameters for system: '<S84>/Path Following'
struct P_PathFollowing_c6_formation_T_ {
  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S87>/Constant'

  real_T Gain_Gain;                    // Expression: 0.2
                                          //  Referenced by: '<S87>/Gain'

  real_T MaxAngularVelocity_Value;     // Expression: 1
                                          //  Referenced by: '<S87>/MaxAngularVelocity'

};

// Parameters for system: '<S84>/Vector Field Histogram'
struct P_VectorFieldHistogram_c6_for_T_ {
  real_T VectorFieldHistogram_TargetDire;// Expression: 50
                                            //  Referenced by: '<S84>/Vector Field Histogram'

  real_T VectorFieldHistogram_CurrentDir;// Expression: 20
                                            //  Referenced by: '<S84>/Vector Field Histogram'

  real_T VectorFieldHistogram_PreviousDi;// Expression: 20
                                            //  Referenced by: '<S84>/Vector Field Histogram'

};

// Parameters (default storage)
struct P_c6_formation_T_ {
  real_T ks;                           // Variable: ks
                                          //  Referenced by:
                                          //    '<S2>/Gain'
                                          //    '<S2>/Gain1'
                                          //    '<S2>/Gain2'
                                          //    '<S2>/Gain3'
                                          //    '<S2>/Gain4'
                                          //    '<S2>/Gain5'

  real_T maxRange;                     // Variable: maxRange
                                          //  Referenced by:
                                          //    '<S82>/MATLAB Function'
                                          //    '<S82>/MATLAB Function2'
                                          //    '<S82>/MATLAB Function3'
                                          //    '<S82>/MATLAB Function4'
                                          //    '<S82>/MATLAB Function5'
                                          //    '<S82>/MATLAB Function6'

  real_T minimumTurningRadius;         // Variable: minimumTurningRadius
                                          //  Referenced by:

  real_T rangeDis[2];                  // Variable: rangeDis
                                          //  Referenced by:

  real_T recovery_w;                   // Variable: recovery_w
                                          //  Referenced by:
                                          //    '<S84>/Recovery'
                                          //    '<S94>/Recovery'
                                          //    '<S104>/Recovery'
                                          //    '<S114>/Recovery'
                                          //    '<S124>/Recovery'
                                          //    '<S134>/Recovery'

  real_T robotRadius;                  // Variable: robotRadius
                                          //  Referenced by:
                                          //    '<S82>/MATLAB Function'
                                          //    '<S82>/MATLAB Function2'
                                          //    '<S82>/MATLAB Function3'
                                          //    '<S82>/MATLAB Function4'
                                          //    '<S82>/MATLAB Function5'
                                          //    '<S82>/MATLAB Function6'

  real_T safetyDis;                    // Variable: safetyDis
                                          //  Referenced by:

  real_T scanAngles[25];               // Variable: scanAngles
                                          //  Referenced by:
                                          //    '<S76>/Constant7'
                                          //    '<S77>/Constant7'
                                          //    '<S78>/Constant7'
                                          //    '<S79>/Constant7'
                                          //    '<S80>/Constant7'
                                          //    '<S81>/Constant7'
                                          //    '<S82>/MATLAB Function'
                                          //    '<S82>/MATLAB Function2'
                                          //    '<S82>/MATLAB Function3'
                                          //    '<S82>/MATLAB Function4'
                                          //    '<S82>/MATLAB Function5'
                                          //    '<S82>/MATLAB Function6'

  real_T thresholds[2];                // Variable: thresholds
                                          //  Referenced by:

  real_T KinematiccController_Vmax; // Mask Parameter: KinematiccController_Vmax
                                       //  Referenced by: '<S91>/vel limit'

  real_T KinematiccController_Vmax_k;
                                  // Mask Parameter: KinematiccController_Vmax_k
                                     //  Referenced by: '<S101>/vel limit'

  real_T KinematiccController_Vmax_e;
                                  // Mask Parameter: KinematiccController_Vmax_e
                                     //  Referenced by: '<S111>/vel limit'

  real_T KinematiccController_Vmax_g;
                                  // Mask Parameter: KinematiccController_Vmax_g
                                     //  Referenced by: '<S121>/vel limit'

  real_T KinematiccController_Vmax_a;
                                  // Mask Parameter: KinematiccController_Vmax_a
                                     //  Referenced by: '<S131>/vel limit'

  real_T KinematiccController_Vmax_o;
                                  // Mask Parameter: KinematiccController_Vmax_o
                                     //  Referenced by: '<S141>/vel limit'

  real_T KinematiccController_Wmax; // Mask Parameter: KinematiccController_Wmax
                                       //  Referenced by: '<S91>/w limit'

  real_T KinematiccController_Wmax_c;
                                  // Mask Parameter: KinematiccController_Wmax_c
                                     //  Referenced by: '<S101>/w limit'

  real_T KinematiccController_Wmax_l;
                                  // Mask Parameter: KinematiccController_Wmax_l
                                     //  Referenced by: '<S111>/w limit'

  real_T KinematiccController_Wmax_c4;
                                 // Mask Parameter: KinematiccController_Wmax_c4
                                    //  Referenced by: '<S121>/w limit'

  real_T KinematiccController_Wmax_b;
                                  // Mask Parameter: KinematiccController_Wmax_b
                                     //  Referenced by: '<S131>/w limit'

  real_T KinematiccController_Wmax_a;
                                  // Mask Parameter: KinematiccController_Wmax_a
                                     //  Referenced by: '<S141>/w limit'

  real_T KinematiccController_kw;     // Mask Parameter: KinematiccController_kw
                                         //  Referenced by: '<S91>/1//a'

  real_T KinematiccController_kw_e; // Mask Parameter: KinematiccController_kw_e
                                       //  Referenced by: '<S101>/1//a'

  real_T KinematiccController_kw_f; // Mask Parameter: KinematiccController_kw_f
                                       //  Referenced by: '<S111>/1//a'

  real_T KinematiccController_kw_k; // Mask Parameter: KinematiccController_kw_k
                                       //  Referenced by: '<S121>/1//a'

  real_T KinematiccController_kw_m; // Mask Parameter: KinematiccController_kw_m
                                       //  Referenced by: '<S131>/1//a'

  real_T KinematiccController_kw_c; // Mask Parameter: KinematiccController_kw_c
                                       //  Referenced by: '<S141>/1//a'

  real_T KinematiccController_kx;     // Mask Parameter: KinematiccController_kx
                                         //  Referenced by: '<S91>/kx'

  real_T KinematiccController_kx_k; // Mask Parameter: KinematiccController_kx_k
                                       //  Referenced by: '<S101>/kx'

  real_T KinematiccController_kx_h; // Mask Parameter: KinematiccController_kx_h
                                       //  Referenced by: '<S111>/kx'

  real_T KinematiccController_kx_hn;
                                   // Mask Parameter: KinematiccController_kx_hn
                                      //  Referenced by: '<S121>/kx'

  real_T KinematiccController_kx_e; // Mask Parameter: KinematiccController_kx_e
                                       //  Referenced by: '<S131>/kx'

  real_T KinematiccController_kx_p; // Mask Parameter: KinematiccController_kx_p
                                       //  Referenced by: '<S141>/kx'

  real_T KinematiccController_ky;     // Mask Parameter: KinematiccController_ky
                                         //  Referenced by: '<S91>/ky'

  real_T KinematiccController_ky_f; // Mask Parameter: KinematiccController_ky_f
                                       //  Referenced by: '<S101>/ky'

  real_T KinematiccController_ky_fb;
                                   // Mask Parameter: KinematiccController_ky_fb
                                      //  Referenced by: '<S111>/ky'

  real_T KinematiccController_ky_o; // Mask Parameter: KinematiccController_ky_o
                                       //  Referenced by: '<S121>/ky'

  real_T KinematiccController_ky_n; // Mask Parameter: KinematiccController_ky_n
                                       //  Referenced by: '<S131>/ky'

  real_T KinematiccController_ky_od;
                                   // Mask Parameter: KinematiccController_ky_od
                                      //  Referenced by: '<S141>/ky'

  real_T KinematiccController_lw;     // Mask Parameter: KinematiccController_lw
                                         //  Referenced by: '<S91>/1//a2'

  real_T KinematiccController_lw_h; // Mask Parameter: KinematiccController_lw_h
                                       //  Referenced by: '<S101>/1//a2'

  real_T KinematiccController_lw_p; // Mask Parameter: KinematiccController_lw_p
                                       //  Referenced by: '<S111>/1//a2'

  real_T KinematiccController_lw_a; // Mask Parameter: KinematiccController_lw_a
                                       //  Referenced by: '<S121>/1//a2'

  real_T KinematiccController_lw_d; // Mask Parameter: KinematiccController_lw_d
                                       //  Referenced by: '<S131>/1//a2'

  real_T KinematiccController_lw_hy;
                                   // Mask Parameter: KinematiccController_lw_hy
                                      //  Referenced by: '<S141>/1//a2'

  real_T KinematiccController_lx;     // Mask Parameter: KinematiccController_lx
                                         //  Referenced by:
                                         //    '<S91>/kx'
                                         //    '<S91>/lx'

  real_T KinematiccController_lx_l; // Mask Parameter: KinematiccController_lx_l
                                       //  Referenced by:
                                       //    '<S101>/kx'
                                       //    '<S101>/lx'

  real_T KinematiccController_lx_p; // Mask Parameter: KinematiccController_lx_p
                                       //  Referenced by:
                                       //    '<S111>/kx'
                                       //    '<S111>/lx'

  real_T KinematiccController_lx_j; // Mask Parameter: KinematiccController_lx_j
                                       //  Referenced by:
                                       //    '<S121>/kx'
                                       //    '<S121>/lx'

  real_T KinematiccController_lx_g; // Mask Parameter: KinematiccController_lx_g
                                       //  Referenced by:
                                       //    '<S131>/kx'
                                       //    '<S131>/lx'

  real_T KinematiccController_lx_o; // Mask Parameter: KinematiccController_lx_o
                                       //  Referenced by:
                                       //    '<S141>/kx'
                                       //    '<S141>/lx'

  real_T KinematiccController_ly;     // Mask Parameter: KinematiccController_ly
                                         //  Referenced by:
                                         //    '<S91>/ky'
                                         //    '<S91>/ly'

  real_T KinematiccController_ly_n; // Mask Parameter: KinematiccController_ly_n
                                       //  Referenced by:
                                       //    '<S101>/ky'
                                       //    '<S101>/ly'

  real_T KinematiccController_ly_e; // Mask Parameter: KinematiccController_ly_e
                                       //  Referenced by:
                                       //    '<S111>/ky'
                                       //    '<S111>/ly'

  real_T KinematiccController_ly_eu;
                                   // Mask Parameter: KinematiccController_ly_eu
                                      //  Referenced by:
                                      //    '<S121>/ky'
                                      //    '<S121>/ly'

  real_T KinematiccController_ly_a; // Mask Parameter: KinematiccController_ly_a
                                       //  Referenced by:
                                       //    '<S131>/ky'
                                       //    '<S131>/ly'

  real_T KinematiccController_ly_nx;
                                   // Mask Parameter: KinematiccController_ly_nx
                                      //  Referenced by:
                                      //    '<S141>/ky'
                                      //    '<S141>/ly'

  SL_Bus_c6_formation_nav_msgs_Odometry Out1_Y0;// Computed Parameter: Out1_Y0
                                                   //  Referenced by: '<S19>/Out1'

  SL_Bus_c6_formation_nav_msgs_Odometry Constant_Value;// Computed Parameter: Constant_Value
                                                          //  Referenced by: '<S16>/Constant'

  SL_Bus_c6_formation_nav_msgs_Odometry Out1_Y0_p;// Computed Parameter: Out1_Y0_p
                                                     //  Referenced by: '<S27>/Out1'

  SL_Bus_c6_formation_nav_msgs_Odometry Constant_Value_n;// Computed Parameter: Constant_Value_n
                                                            //  Referenced by: '<S24>/Constant'

  SL_Bus_c6_formation_nav_msgs_Odometry Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                                     //  Referenced by: '<S35>/Out1'

  SL_Bus_c6_formation_nav_msgs_Odometry Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                            //  Referenced by: '<S32>/Constant'

  SL_Bus_c6_formation_nav_msgs_Odometry Out1_Y0_g;// Computed Parameter: Out1_Y0_g
                                                     //  Referenced by: '<S43>/Out1'

  SL_Bus_c6_formation_nav_msgs_Odometry Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                            //  Referenced by: '<S40>/Constant'

  SL_Bus_c6_formation_nav_msgs_Odometry Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                                     //  Referenced by: '<S51>/Out1'

  SL_Bus_c6_formation_nav_msgs_Odometry Constant_Value_n3;// Computed Parameter: Constant_Value_n3
                                                             //  Referenced by: '<S48>/Constant'

  SL_Bus_c6_formation_nav_msgs_Odometry Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                                     //  Referenced by: '<S59>/Out1'

  SL_Bus_c6_formation_nav_msgs_Odometry Constant_Value_c;// Computed Parameter: Constant_Value_c
                                                            //  Referenced by: '<S56>/Constant'

  SL_Bus_c6_formation_geometry_msgs_Twist Out1_Y0_f0;// Computed Parameter: Out1_Y0_f0
                                                        //  Referenced by: '<S20>/Out1'

  SL_Bus_c6_formation_geometry_msgs_Twist Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                              //  Referenced by: '<S17>/Constant'

  SL_Bus_c6_formation_geometry_msgs_Twist Out1_Y0_c;// Computed Parameter: Out1_Y0_c
                                                       //  Referenced by: '<S28>/Out1'

  SL_Bus_c6_formation_geometry_msgs_Twist Constant_Value_i3;// Computed Parameter: Constant_Value_i3
                                                               //  Referenced by: '<S25>/Constant'

  SL_Bus_c6_formation_geometry_msgs_Twist Out1_Y0_j;// Computed Parameter: Out1_Y0_j
                                                       //  Referenced by: '<S36>/Out1'

  SL_Bus_c6_formation_geometry_msgs_Twist Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                              //  Referenced by: '<S33>/Constant'

  SL_Bus_c6_formation_geometry_msgs_Twist Out1_Y0_pu;// Computed Parameter: Out1_Y0_pu
                                                        //  Referenced by: '<S44>/Out1'

  SL_Bus_c6_formation_geometry_msgs_Twist Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                              //  Referenced by: '<S41>/Constant'

  SL_Bus_c6_formation_geometry_msgs_Twist Out1_Y0_cc;// Computed Parameter: Out1_Y0_cc
                                                        //  Referenced by: '<S52>/Out1'

  SL_Bus_c6_formation_geometry_msgs_Twist Constant_Value_ps;// Computed Parameter: Constant_Value_ps
                                                               //  Referenced by: '<S49>/Constant'

  SL_Bus_c6_formation_geometry_msgs_Twist Out1_Y0_fr;// Computed Parameter: Out1_Y0_fr
                                                        //  Referenced by: '<S60>/Out1'

  SL_Bus_c6_formation_geometry_msgs_Twist Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                              //  Referenced by: '<S57>/Constant'

  SL_Bus_c6_formation_geometry_msgs_Twist Constant_Value_ci;// Computed Parameter: Constant_Value_ci
                                                               //  Referenced by: '<S64>/Constant'

  SL_Bus_c6_formation_geometry_msgs_Twist Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                              //  Referenced by: '<S66>/Constant'

  SL_Bus_c6_formation_geometry_msgs_Twist Constant_Value_ou;// Computed Parameter: Constant_Value_ou
                                                               //  Referenced by: '<S68>/Constant'

  SL_Bus_c6_formation_geometry_msgs_Twist Constant_Value_gk;// Computed Parameter: Constant_Value_gk
                                                               //  Referenced by: '<S70>/Constant'

  SL_Bus_c6_formation_geometry_msgs_Twist Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                              //  Referenced by: '<S72>/Constant'

  SL_Bus_c6_formation_geometry_msgs_Twist Constant_Value_b;// Computed Parameter: Constant_Value_b
                                                              //  Referenced by: '<S74>/Constant'

  real_T DiscreteTimeIntegrator_gainval;
                           // Computed Parameter: DiscreteTimeIntegrator_gainval
                              //  Referenced by: '<S21>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC;    // Expression: 0
                                          //  Referenced by: '<S21>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainval
                             //  Referenced by: '<S21>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC;   // Expression: 0
                                          //  Referenced by: '<S21>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainval
                             //  Referenced by: '<S21>/Discrete-Time Integrator2'

  real_T DiscreteTimeIntegrator_gainva_o;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_o
                             //  Referenced by: '<S29>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_e;  // Expression: 0
                                          //  Referenced by: '<S29>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gainv_k;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainv_k
                             //  Referenced by: '<S29>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC_f; // Expression: 0
                                          //  Referenced by: '<S29>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gainv_p;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainv_p
                             //  Referenced by: '<S29>/Discrete-Time Integrator2'

  real_T DiscreteTimeIntegrator_gainva_f;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_f
                             //  Referenced by: '<S37>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_i;  // Expression: 0
                                          //  Referenced by: '<S37>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gainv_l;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainv_l
                             //  Referenced by: '<S37>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC_i; // Expression: 0
                                          //  Referenced by: '<S37>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gain_pt;
                          // Computed Parameter: DiscreteTimeIntegrator2_gain_pt
                             //  Referenced by: '<S37>/Discrete-Time Integrator2'

  real_T DiscreteTimeIntegrator_gainva_g;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_g
                             //  Referenced by: '<S45>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_it; // Expression: 0
                                          //  Referenced by: '<S45>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gainv_p;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainv_p
                             //  Referenced by: '<S45>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC_m; // Expression: 0
                                          //  Referenced by: '<S45>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gainv_m;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainv_m
                             //  Referenced by: '<S45>/Discrete-Time Integrator2'

  real_T DiscreteTimeIntegrator_gainva_a;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_a
                             //  Referenced by: '<S53>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_h;  // Expression: 0
                                          //  Referenced by: '<S53>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gainv_a;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainv_a
                             //  Referenced by: '<S53>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC_e; // Expression: 0
                                          //  Referenced by: '<S53>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gainv_n;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainv_n
                             //  Referenced by: '<S53>/Discrete-Time Integrator2'

  real_T DiscreteTimeIntegrator_gainva_k;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_k
                             //  Referenced by: '<S61>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_g;  // Expression: 0
                                          //  Referenced by: '<S61>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gainv_o;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainv_o
                             //  Referenced by: '<S61>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC_l; // Expression: 0
                                          //  Referenced by: '<S61>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gainv_c;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainv_c
                             //  Referenced by: '<S61>/Discrete-Time Integrator2'

  real_T Constant_Value_eh;            // Expression: 1
                                          //  Referenced by: '<S82>/Constant'

  real_T Constant1_Value;              // Expression: 2
                                          //  Referenced by: '<S82>/Constant1'

  real_T Constant2_Value;              // Expression: 3
                                          //  Referenced by: '<S82>/Constant2'

  real_T Constant3_Value;              // Expression: 4
                                          //  Referenced by: '<S82>/Constant3'

  real_T Constant4_Value;              // Expression: 5
                                          //  Referenced by: '<S82>/Constant4'

  real_T Constant5_Value;              // Expression: 6
                                          //  Referenced by: '<S82>/Constant5'

  real_T Constant_Value_j3;            // Expression: 0
                                          //  Referenced by: '<S61>/Constant'

  real_T Constant_Value_bu;            // Expression: 0
                                          //  Referenced by: '<S53>/Constant'

  real_T Constant_Value_d;             // Expression: 0
                                          //  Referenced by: '<S45>/Constant'

  real_T Constant_Value_a;             // Expression: 0
                                          //  Referenced by: '<S37>/Constant'

  real_T Constant_Value_oy;            // Expression: 0
                                          //  Referenced by: '<S29>/Constant'

  real_T Constant_Value_mn;            // Expression: 0
                                          //  Referenced by: '<S21>/Constant'

  P_VectorFieldHistogram_c6_for_T VectorFieldHistogram_pnaev;// '<S84>/Vector Field Histogram' 
  P_PathFollowing_c6_formation_T PathFollowing_m;// '<S134>/Path Following'
  P_Recovery_c6_formation_T Recovery_n;// '<S134>/Recovery'
  P_VectorFieldHistogram_c6_for_T VectorFieldHistogram_pnae;// '<S84>/Vector Field Histogram' 
  P_PathFollowing_c6_formation_T PathFollowing_l;// '<S124>/Path Following'
  P_Recovery_c6_formation_T Recovery_g;// '<S124>/Recovery'
  P_VectorFieldHistogram_c6_for_T VectorFieldHistogram_pna;// '<S84>/Vector Field Histogram' 
  P_PathFollowing_c6_formation_T PathFollowing_hl;// '<S114>/Path Following'
  P_Recovery_c6_formation_T Recovery_f;// '<S114>/Recovery'
  P_VectorFieldHistogram_c6_for_T VectorFieldHistogram_pn;// '<S84>/Vector Field Histogram' 
  P_PathFollowing_c6_formation_T PathFollowing_h;// '<S104>/Path Following'
  P_Recovery_c6_formation_T Recovery_j;// '<S104>/Recovery'
  P_VectorFieldHistogram_c6_for_T VectorFieldHistogram_p;// '<S84>/Vector Field Histogram' 
  P_PathFollowing_c6_formation_T PathFollowing_i;// '<S94>/Path Following'
  P_Recovery_c6_formation_T Recovery_a;// '<S94>/Recovery'
  P_VectorFieldHistogram_c6_for_T VectorFieldHistogram;// '<S84>/Vector Field Histogram' 
  P_PathFollowing_c6_formation_T PathFollowing;// '<S84>/Path Following'
  P_Recovery_c6_formation_T Recovery;  // '<S84>/Recovery'
};

// Real-time Model Data Structure
struct tag_RTM_c6_formation_T {
  const char_T * volatile errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_c6_formation_T c6_formation_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_c6_formation_T c6_formation_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_c6_formation_T c6_formation_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void c6_formation_initialize(void);
  extern void c6_formation_step(void);
  extern void c6_formation_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_c6_formation_T *const c6_formation_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S83>/Constant1' : Unused code path elimination
//  Block '<S93>/Constant1' : Unused code path elimination
//  Block '<S103>/Constant1' : Unused code path elimination
//  Block '<S113>/Constant1' : Unused code path elimination
//  Block '<S123>/Constant1' : Unused code path elimination
//  Block '<S133>/Constant1' : Unused code path elimination
//  Block '<Root>/Reshape' : Reshape block reduction


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
//  '<Root>' : 'c6_formation'
//  '<S1>'   : 'c6_formation/Chart'
//  '<S2>'   : 'c6_formation/Subsystem'
//  '<S3>'   : 'c6_formation/controller'
//  '<S4>'   : 'c6_formation/Subsystem/Car Pose Listener'
//  '<S5>'   : 'c6_formation/Subsystem/Car Pose Listener1'
//  '<S6>'   : 'c6_formation/Subsystem/Car Pose Listener2'
//  '<S7>'   : 'c6_formation/Subsystem/Car Pose Listener3'
//  '<S8>'   : 'c6_formation/Subsystem/Car Pose Listener4'
//  '<S9>'   : 'c6_formation/Subsystem/Car Pose Listener5'
//  '<S10>'  : 'c6_formation/Subsystem/Command Velocity Publisher'
//  '<S11>'  : 'c6_formation/Subsystem/Command Velocity Publisher1'
//  '<S12>'  : 'c6_formation/Subsystem/Command Velocity Publisher2'
//  '<S13>'  : 'c6_formation/Subsystem/Command Velocity Publisher3'
//  '<S14>'  : 'c6_formation/Subsystem/Command Velocity Publisher4'
//  '<S15>'  : 'c6_formation/Subsystem/Command Velocity Publisher5'
//  '<S16>'  : 'c6_formation/Subsystem/Car Pose Listener/Subscribe'
//  '<S17>'  : 'c6_formation/Subsystem/Car Pose Listener/Subscribe1'
//  '<S18>'  : 'c6_formation/Subsystem/Car Pose Listener/Subsystem'
//  '<S19>'  : 'c6_formation/Subsystem/Car Pose Listener/Subscribe/Enabled Subsystem'
//  '<S20>'  : 'c6_formation/Subsystem/Car Pose Listener/Subscribe1/Enabled Subsystem'
//  '<S21>'  : 'c6_formation/Subsystem/Car Pose Listener/Subsystem/DiffSteer Kinematics'
//  '<S22>'  : 'c6_formation/Subsystem/Car Pose Listener/Subsystem/sensor2vCar'
//  '<S23>'  : 'c6_formation/Subsystem/Car Pose Listener/Subsystem/sensor2vCar4'
//  '<S24>'  : 'c6_formation/Subsystem/Car Pose Listener1/Subscribe'
//  '<S25>'  : 'c6_formation/Subsystem/Car Pose Listener1/Subscribe1'
//  '<S26>'  : 'c6_formation/Subsystem/Car Pose Listener1/Subsystem'
//  '<S27>'  : 'c6_formation/Subsystem/Car Pose Listener1/Subscribe/Enabled Subsystem'
//  '<S28>'  : 'c6_formation/Subsystem/Car Pose Listener1/Subscribe1/Enabled Subsystem'
//  '<S29>'  : 'c6_formation/Subsystem/Car Pose Listener1/Subsystem/DiffSteer Kinematics'
//  '<S30>'  : 'c6_formation/Subsystem/Car Pose Listener1/Subsystem/sensor2vCar'
//  '<S31>'  : 'c6_formation/Subsystem/Car Pose Listener1/Subsystem/sensor2vCar4'
//  '<S32>'  : 'c6_formation/Subsystem/Car Pose Listener2/Subscribe'
//  '<S33>'  : 'c6_formation/Subsystem/Car Pose Listener2/Subscribe1'
//  '<S34>'  : 'c6_formation/Subsystem/Car Pose Listener2/Subsystem'
//  '<S35>'  : 'c6_formation/Subsystem/Car Pose Listener2/Subscribe/Enabled Subsystem'
//  '<S36>'  : 'c6_formation/Subsystem/Car Pose Listener2/Subscribe1/Enabled Subsystem'
//  '<S37>'  : 'c6_formation/Subsystem/Car Pose Listener2/Subsystem/DiffSteer Kinematics'
//  '<S38>'  : 'c6_formation/Subsystem/Car Pose Listener2/Subsystem/sensor2vCar'
//  '<S39>'  : 'c6_formation/Subsystem/Car Pose Listener2/Subsystem/sensor2vCar4'
//  '<S40>'  : 'c6_formation/Subsystem/Car Pose Listener3/Subscribe'
//  '<S41>'  : 'c6_formation/Subsystem/Car Pose Listener3/Subscribe1'
//  '<S42>'  : 'c6_formation/Subsystem/Car Pose Listener3/Subsystem'
//  '<S43>'  : 'c6_formation/Subsystem/Car Pose Listener3/Subscribe/Enabled Subsystem'
//  '<S44>'  : 'c6_formation/Subsystem/Car Pose Listener3/Subscribe1/Enabled Subsystem'
//  '<S45>'  : 'c6_formation/Subsystem/Car Pose Listener3/Subsystem/DiffSteer Kinematics'
//  '<S46>'  : 'c6_formation/Subsystem/Car Pose Listener3/Subsystem/sensor2vCar'
//  '<S47>'  : 'c6_formation/Subsystem/Car Pose Listener3/Subsystem/sensor2vCar4'
//  '<S48>'  : 'c6_formation/Subsystem/Car Pose Listener4/Subscribe'
//  '<S49>'  : 'c6_formation/Subsystem/Car Pose Listener4/Subscribe1'
//  '<S50>'  : 'c6_formation/Subsystem/Car Pose Listener4/Subsystem'
//  '<S51>'  : 'c6_formation/Subsystem/Car Pose Listener4/Subscribe/Enabled Subsystem'
//  '<S52>'  : 'c6_formation/Subsystem/Car Pose Listener4/Subscribe1/Enabled Subsystem'
//  '<S53>'  : 'c6_formation/Subsystem/Car Pose Listener4/Subsystem/DiffSteer Kinematics'
//  '<S54>'  : 'c6_formation/Subsystem/Car Pose Listener4/Subsystem/sensor2vCar'
//  '<S55>'  : 'c6_formation/Subsystem/Car Pose Listener4/Subsystem/sensor2vCar4'
//  '<S56>'  : 'c6_formation/Subsystem/Car Pose Listener5/Subscribe'
//  '<S57>'  : 'c6_formation/Subsystem/Car Pose Listener5/Subscribe1'
//  '<S58>'  : 'c6_formation/Subsystem/Car Pose Listener5/Subsystem'
//  '<S59>'  : 'c6_formation/Subsystem/Car Pose Listener5/Subscribe/Enabled Subsystem'
//  '<S60>'  : 'c6_formation/Subsystem/Car Pose Listener5/Subscribe1/Enabled Subsystem'
//  '<S61>'  : 'c6_formation/Subsystem/Car Pose Listener5/Subsystem/DiffSteer Kinematics'
//  '<S62>'  : 'c6_formation/Subsystem/Car Pose Listener5/Subsystem/sensor2vCar'
//  '<S63>'  : 'c6_formation/Subsystem/Car Pose Listener5/Subsystem/sensor2vCar4'
//  '<S64>'  : 'c6_formation/Subsystem/Command Velocity Publisher/Blank Message'
//  '<S65>'  : 'c6_formation/Subsystem/Command Velocity Publisher/Publish2'
//  '<S66>'  : 'c6_formation/Subsystem/Command Velocity Publisher1/Blank Message'
//  '<S67>'  : 'c6_formation/Subsystem/Command Velocity Publisher1/Publish2'
//  '<S68>'  : 'c6_formation/Subsystem/Command Velocity Publisher2/Blank Message'
//  '<S69>'  : 'c6_formation/Subsystem/Command Velocity Publisher2/Publish2'
//  '<S70>'  : 'c6_formation/Subsystem/Command Velocity Publisher3/Blank Message'
//  '<S71>'  : 'c6_formation/Subsystem/Command Velocity Publisher3/Publish2'
//  '<S72>'  : 'c6_formation/Subsystem/Command Velocity Publisher4/Blank Message'
//  '<S73>'  : 'c6_formation/Subsystem/Command Velocity Publisher4/Publish2'
//  '<S74>'  : 'c6_formation/Subsystem/Command Velocity Publisher5/Blank Message'
//  '<S75>'  : 'c6_formation/Subsystem/Command Velocity Publisher5/Publish2'
//  '<S76>'  : 'c6_formation/controller/Car1'
//  '<S77>'  : 'c6_formation/controller/Car2'
//  '<S78>'  : 'c6_formation/controller/Car3'
//  '<S79>'  : 'c6_formation/controller/Car4'
//  '<S80>'  : 'c6_formation/controller/Car5'
//  '<S81>'  : 'c6_formation/controller/Car6'
//  '<S82>'  : 'c6_formation/controller/controller1'
//  '<S83>'  : 'c6_formation/controller/Car1/ppCar'
//  '<S84>'  : 'c6_formation/controller/Car1/ppCar/Adjust Velocities to Avoid Obstacles'
//  '<S85>'  : 'c6_formation/controller/Car1/ppCar/Compute Velocity and Heading for Path following'
//  '<S86>'  : 'c6_formation/controller/Car1/ppCar/Outputs'
//  '<S87>'  : 'c6_formation/controller/Car1/ppCar/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S88>'  : 'c6_formation/controller/Car1/ppCar/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S89>'  : 'c6_formation/controller/Car1/ppCar/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S90>'  : 'c6_formation/controller/Car1/ppCar/Compute Velocity and Heading for Path following/Car1'
//  '<S91>'  : 'c6_formation/controller/Car1/ppCar/Compute Velocity and Heading for Path following/Car1/Kinematicc Controller'
//  '<S92>'  : 'c6_formation/controller/Car1/ppCar/Compute Velocity and Heading for Path following/Car1/Kinematicc Controller/MATLAB Function'
//  '<S93>'  : 'c6_formation/controller/Car2/ppCar'
//  '<S94>'  : 'c6_formation/controller/Car2/ppCar/Adjust Velocities to Avoid Obstacles'
//  '<S95>'  : 'c6_formation/controller/Car2/ppCar/Compute Velocity and Heading for Path following'
//  '<S96>'  : 'c6_formation/controller/Car2/ppCar/Outputs'
//  '<S97>'  : 'c6_formation/controller/Car2/ppCar/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S98>'  : 'c6_formation/controller/Car2/ppCar/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S99>'  : 'c6_formation/controller/Car2/ppCar/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S100>' : 'c6_formation/controller/Car2/ppCar/Compute Velocity and Heading for Path following/Car1'
//  '<S101>' : 'c6_formation/controller/Car2/ppCar/Compute Velocity and Heading for Path following/Car1/Kinematicc Controller'
//  '<S102>' : 'c6_formation/controller/Car2/ppCar/Compute Velocity and Heading for Path following/Car1/Kinematicc Controller/MATLAB Function'
//  '<S103>' : 'c6_formation/controller/Car3/ppCar'
//  '<S104>' : 'c6_formation/controller/Car3/ppCar/Adjust Velocities to Avoid Obstacles'
//  '<S105>' : 'c6_formation/controller/Car3/ppCar/Compute Velocity and Heading for Path following'
//  '<S106>' : 'c6_formation/controller/Car3/ppCar/Outputs'
//  '<S107>' : 'c6_formation/controller/Car3/ppCar/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S108>' : 'c6_formation/controller/Car3/ppCar/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S109>' : 'c6_formation/controller/Car3/ppCar/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S110>' : 'c6_formation/controller/Car3/ppCar/Compute Velocity and Heading for Path following/Car1'
//  '<S111>' : 'c6_formation/controller/Car3/ppCar/Compute Velocity and Heading for Path following/Car1/Kinematicc Controller'
//  '<S112>' : 'c6_formation/controller/Car3/ppCar/Compute Velocity and Heading for Path following/Car1/Kinematicc Controller/MATLAB Function'
//  '<S113>' : 'c6_formation/controller/Car4/ppCar'
//  '<S114>' : 'c6_formation/controller/Car4/ppCar/Adjust Velocities to Avoid Obstacles'
//  '<S115>' : 'c6_formation/controller/Car4/ppCar/Compute Velocity and Heading for Path following'
//  '<S116>' : 'c6_formation/controller/Car4/ppCar/Outputs'
//  '<S117>' : 'c6_formation/controller/Car4/ppCar/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S118>' : 'c6_formation/controller/Car4/ppCar/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S119>' : 'c6_formation/controller/Car4/ppCar/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S120>' : 'c6_formation/controller/Car4/ppCar/Compute Velocity and Heading for Path following/Car1'
//  '<S121>' : 'c6_formation/controller/Car4/ppCar/Compute Velocity and Heading for Path following/Car1/Kinematicc Controller'
//  '<S122>' : 'c6_formation/controller/Car4/ppCar/Compute Velocity and Heading for Path following/Car1/Kinematicc Controller/MATLAB Function'
//  '<S123>' : 'c6_formation/controller/Car5/ppCar'
//  '<S124>' : 'c6_formation/controller/Car5/ppCar/Adjust Velocities to Avoid Obstacles'
//  '<S125>' : 'c6_formation/controller/Car5/ppCar/Compute Velocity and Heading for Path following'
//  '<S126>' : 'c6_formation/controller/Car5/ppCar/Outputs'
//  '<S127>' : 'c6_formation/controller/Car5/ppCar/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S128>' : 'c6_formation/controller/Car5/ppCar/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S129>' : 'c6_formation/controller/Car5/ppCar/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S130>' : 'c6_formation/controller/Car5/ppCar/Compute Velocity and Heading for Path following/Car1'
//  '<S131>' : 'c6_formation/controller/Car5/ppCar/Compute Velocity and Heading for Path following/Car1/Kinematicc Controller'
//  '<S132>' : 'c6_formation/controller/Car5/ppCar/Compute Velocity and Heading for Path following/Car1/Kinematicc Controller/MATLAB Function'
//  '<S133>' : 'c6_formation/controller/Car6/ppCar'
//  '<S134>' : 'c6_formation/controller/Car6/ppCar/Adjust Velocities to Avoid Obstacles'
//  '<S135>' : 'c6_formation/controller/Car6/ppCar/Compute Velocity and Heading for Path following'
//  '<S136>' : 'c6_formation/controller/Car6/ppCar/Outputs'
//  '<S137>' : 'c6_formation/controller/Car6/ppCar/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S138>' : 'c6_formation/controller/Car6/ppCar/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S139>' : 'c6_formation/controller/Car6/ppCar/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S140>' : 'c6_formation/controller/Car6/ppCar/Compute Velocity and Heading for Path following/Car1'
//  '<S141>' : 'c6_formation/controller/Car6/ppCar/Compute Velocity and Heading for Path following/Car1/Kinematicc Controller'
//  '<S142>' : 'c6_formation/controller/Car6/ppCar/Compute Velocity and Heading for Path following/Car1/Kinematicc Controller/MATLAB Function'
//  '<S143>' : 'c6_formation/controller/controller1/MATLAB Function'
//  '<S144>' : 'c6_formation/controller/controller1/MATLAB Function2'
//  '<S145>' : 'c6_formation/controller/controller1/MATLAB Function3'
//  '<S146>' : 'c6_formation/controller/controller1/MATLAB Function4'
//  '<S147>' : 'c6_formation/controller/controller1/MATLAB Function5'
//  '<S148>' : 'c6_formation/controller/controller1/MATLAB Function6'

#endif                                 // RTW_HEADER_c6_formation_h_

//
// File trailer for generated code.
//
// [EOF]
//
