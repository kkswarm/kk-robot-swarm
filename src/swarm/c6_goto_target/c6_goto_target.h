//
// File: c6_goto_target.h
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
#ifndef RTW_HEADER_c6_goto_target_h_
#define RTW_HEADER_c6_goto_target_h_
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "c6_goto_target_types.h"
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

// Block signals for system '<S6>/Conversion'
struct B_Conversion_c6_goto_target_T {
  real_T aSinInput;
  real_T b_b;
};

// Block signals for system '<S58>/Vector Field Histogram'
struct B_VectorFieldHistogram_c6_got_T {
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
  boolean_T obj_data[180];
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
  d_cell_wrap_c6_goto_target_T d_n;
  real_T obj[2];
  real_T obj_p[2];
  real_T parsedAngleLimits[2];
  real_T VectorFieldHistogram;         // '<S58>/Vector Field Histogram'
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

// Block states (default storage) for system '<S58>/Vector Field Histogram'
struct DW_VectorFieldHistogram_c6_go_T {
  nav_slalgs_internal_VectorFie_T obj; // '<S58>/Vector Field Histogram'
  boolean_T objisempty;                // '<S58>/Vector Field Histogram'
};

// Block signals for system '<S59>/ Extract Goal'
struct B_ExtractGoal_c6_goto_target_T {
  real_T x4[4];
  real_T c_data[2];
  real_T ridx_data;
  real_T d;
  real_T absx;
  int32_T ridx_size[2];
  int32_T c_size[2];
};

// Block signals for system '<S59>/Pure Pursuit'
struct B_PurePursuit_c6_goto_target_T {
  real_T PurePursuit_o1;               // '<S59>/Pure Pursuit'
  real_T PurePursuit_o2;               // '<S59>/Pure Pursuit'
  real_T PurePursuit_o3;               // '<S59>/Pure Pursuit'
};

// Block states (default storage) for system '<S59>/Pure Pursuit'
struct DW_PurePursuit_c6_goto_target_T {
  nav_slalgs_internal_PurePursu_T obj; // '<S59>/Pure Pursuit'
  boolean_T objisempty;                // '<S59>/Pure Pursuit'
};

// Block signals for system '<S57>/MATLAB Function'
struct B_MATLABFunction_c6_goto_targ_T {
  real_T intsectionPts[40];
  real_T b_x[40];
  real_T x[20];
  real_T poseX[18];
  occupancyMap_c6_goto_target_T map;
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
  emxArray_boolean_T_c6_goto_ta_T f_data;
  emxArray_boolean_T_c6_goto_ta_T f_data_m;
  emxArray_boolean_T_c6_goto_ta_T f_data_c;
  emxArray_boolean_T_c6_goto_ta_T originIdx;
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
  cell_wrap_20_c6_goto_target_T reshapes[2];
  cell_wrap_20_c6_goto_target_T b_reshapes[2];
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
struct B_c6_goto_target_T {
  SL_Bus_c6_goto_target_nav_msgs_Odometry In1;// '<S36>/In1'
  SL_Bus_c6_goto_target_nav_msgs_Odometry In1_o;// '<S33>/In1'
  SL_Bus_c6_goto_target_nav_msgs_Odometry In1_b;// '<S30>/In1'
  SL_Bus_c6_goto_target_nav_msgs_Odometry In1_c;// '<S27>/In1'
  SL_Bus_c6_goto_target_nav_msgs_Odometry In1_n;// '<S24>/In1'
  SL_Bus_c6_goto_target_nav_msgs_Odometry In1_p;// '<S21>/In1'
  SL_Bus_c6_goto_target_nav_msgs_Odometry b_varargout_2;
  real_T ranges[20];                   // '<S57>/MATLAB Function6'
  real_T ranges_bs[20];                // '<S57>/MATLAB Function'
  real_T ranges_a[20];                 // '<S57>/MATLAB Function2'
  real_T ranges_b[20];                 // '<S57>/MATLAB Function3'
  real_T ranges_h[20];                 // '<S57>/MATLAB Function4'
  real_T ranges_c[20];                 // '<S57>/MATLAB Function5'
  real_T Reshape1[18];                 // '<S57>/Reshape1'
  SL_Bus_c6_goto_target_geometry_msgs_Twist BusAssignment1_gu;// '<S12>/Bus Assignment1' 
  real_T TmpSignalConversionAt_jhh02[3];
  real_T TmpSignalConversionAtPurePu[3];
  real_T TmpSignalConversionAtPur_jh[3];
  real_T TmpSignalConversionAtP_jhh0[3];
  real_T TmpSignalConversionAtPure_j[3];
  real_T TmpSignalConversionAtPu_jhh[3];
  char_T b_zeroDelimTopic[17];
  real_T Subtract_h[2];                // '<S94>/Subtract'
  real_T t6[2];                        // '<S3>/MATLAB Function'
  real_T t1[2];                        // '<S3>/MATLAB Function'
  real_T t2[2];                        // '<S3>/MATLAB Function'
  real_T t3[2];                        // '<S3>/MATLAB Function'
  real_T t4[2];                        // '<S3>/MATLAB Function'
  real_T t5[2];                        // '<S3>/MATLAB Function'
  char_T b_zeroDelimTopic_m[14];
  real_T Saturation3;                  // '<S3>/Saturation3'
  real_T Product1;                     // '<S88>/Product1'
  real_T Saturation1;                  // '<S3>/Saturation1'
  real_T Product1_e;                   // '<S81>/Product1'
  real_T Saturation4;                  // '<S3>/Saturation4'
  real_T Product1_g;                   // '<S74>/Product1'
  real_T Saturation2;                  // '<S3>/Saturation2'
  real_T Product1_i;                   // '<S67>/Product1'
  real_T Saturation;                   // '<S3>/Saturation'
  real_T Product1_f;                   // '<S60>/Product1'
  real_T Saturation5;                  // '<S3>/Saturation5'
  real_T Product1_ff;                  // '<S95>/Product1'
  real_T out;                          // '<S3>/MATLAB Function1'
  real_T Memory;                       // '<Root>/Memory'
  real_T yaw_c;                        // '<S6>/Conversion'
  real_T yaw_g;                        // '<S7>/Conversion'
  real_T yaw_b;                        // '<S8>/Conversion'
  real_T yaw_e;                        // '<S9>/Conversion'
  real_T yaw;                          // '<S10>/Conversion'
  real_T Product;                      // '<S95>/Product'
  real_T rtb_Subtract_h_c;
  real_T rtb_Subtract_h_k;
  real_T rtb_Subtract_k_idx_1;
  real_T rtb_Subtract_b_idx_0;
  real_T rtb_Subtract_b_idx_1;
  SL_Bus_c6_goto_target_std_msgs_Float64 In1_h;// '<S4>/In1'
  SL_Bus_c6_goto_target_std_msgs_Float64 BusAssignment1_iy;// '<S2>/Bus Assignment1' 
  boolean_T b_varargout_1;
  boolean_T b_varargout_1_c;
  boolean_T b_varargout_1_b;
  boolean_T b_varargout_1_p;
  boolean_T b_varargout_1_cv;
  boolean_T RelationalOperator;        // '<S94>/Relational Operator'
  boolean_T RelationalOperator_a;      // '<S59>/Relational Operator'
  boolean_T RelationalOperator_e;      // '<S66>/Relational Operator'
  boolean_T RelationalOperator_k;      // '<S73>/Relational Operator'
  boolean_T RelationalOperator_j;      // '<S80>/Relational Operator'
  boolean_T RelationalOperator_h;      // '<S87>/Relational Operator'
  B_MATLABFunction_c6_goto_targ_T sf_MATLABFunction6;// '<S57>/MATLAB Function6' 
  B_MATLABFunction_c6_goto_targ_T sf_MATLABFunction5;// '<S57>/MATLAB Function5' 
  B_MATLABFunction_c6_goto_targ_T sf_MATLABFunction4;// '<S57>/MATLAB Function4' 
  B_MATLABFunction_c6_goto_targ_T sf_MATLABFunction3;// '<S57>/MATLAB Function3' 
  B_MATLABFunction_c6_goto_targ_T sf_MATLABFunction2;// '<S57>/MATLAB Function2' 
  B_MATLABFunction_c6_goto_targ_T sf_MATLABFunction_j;// '<S57>/MATLAB Function' 
  B_PurePursuit_c6_goto_target_T PurePursuit_pnaev;// '<S59>/Pure Pursuit'
  B_ExtractGoal_c6_goto_target_T sf_ExtractGoal_pp;// '<S94>/ Extract Goal'
  B_VectorFieldHistogram_c6_got_T VectorFieldHistogram_pnaev;// '<S58>/Vector Field Histogram' 
  B_PurePursuit_c6_goto_target_T PurePursuit_pnae;// '<S59>/Pure Pursuit'
  B_ExtractGoal_c6_goto_target_T sf_ExtractGoal_pw;// '<S87>/ Extract Goal'
  B_VectorFieldHistogram_c6_got_T VectorFieldHistogram_pnae;// '<S58>/Vector Field Histogram' 
  B_PurePursuit_c6_goto_target_T PurePursuit_pna;// '<S59>/Pure Pursuit'
  B_ExtractGoal_c6_goto_target_T sf_ExtractGoal_p;// '<S80>/ Extract Goal'
  B_VectorFieldHistogram_c6_got_T VectorFieldHistogram_pna;// '<S58>/Vector Field Histogram' 
  B_PurePursuit_c6_goto_target_T PurePursuit_pn;// '<S59>/Pure Pursuit'
  B_ExtractGoal_c6_goto_target_T sf_ExtractGoal_c;// '<S73>/ Extract Goal'
  B_VectorFieldHistogram_c6_got_T VectorFieldHistogram_pn;// '<S58>/Vector Field Histogram' 
  B_PurePursuit_c6_goto_target_T PurePursuit_p;// '<S59>/Pure Pursuit'
  B_ExtractGoal_c6_goto_target_T sf_ExtractGoal_i;// '<S66>/ Extract Goal'
  B_VectorFieldHistogram_c6_got_T VectorFieldHistogram_p;// '<S58>/Vector Field Histogram' 
  B_PurePursuit_c6_goto_target_T PurePursuit;// '<S59>/Pure Pursuit'
  B_ExtractGoal_c6_goto_target_T sf_ExtractGoal;// '<S59>/ Extract Goal'
  B_VectorFieldHistogram_c6_got_T VectorFieldHistogram;// '<S58>/Vector Field Histogram' 
  B_Conversion_c6_goto_target_T sf_Conversion_f;// '<S11>/Conversion'
  B_Conversion_c6_goto_target_T sf_Conversion_l;// '<S10>/Conversion'
  B_Conversion_c6_goto_target_T sf_Conversion_c;// '<S9>/Conversion'
  B_Conversion_c6_goto_target_T sf_Conversion_h;// '<S8>/Conversion'
  B_Conversion_c6_goto_target_T sf_Conversion_g;// '<S7>/Conversion'
  B_Conversion_c6_goto_target_T sf_Conversion;// '<S6>/Conversion'
};

// Block states (default storage) for system '<Root>'
struct DW_c6_goto_target_T {
  ros_slroscpp_internal_block_S_T obj; // '<S35>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_j;// '<S32>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_e;// '<S29>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_a;// '<S26>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_i;// '<S23>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_d;// '<S20>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_b;// '<S1>/SourceBlock'
  ros_slroscpp_internal_block_P_T obj_h;// '<S18>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_g;// '<S48>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_a4;// '<S46>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_f;// '<S44>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_l;// '<S42>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_p;// '<S40>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_n;// '<S38>/SinkBlock'
  real_T Memory_PreviousInput;         // '<Root>/Memory'
  boolean_T objisempty;                // '<S18>/SinkBlock'
  boolean_T objisempty_a;              // '<S48>/SinkBlock'
  boolean_T objisempty_k;              // '<S46>/SinkBlock'
  boolean_T objisempty_b;              // '<S44>/SinkBlock'
  boolean_T objisempty_p;              // '<S42>/SinkBlock'
  boolean_T objisempty_pb;             // '<S40>/SinkBlock'
  boolean_T objisempty_bx;             // '<S38>/SinkBlock'
  boolean_T objisempty_j;              // '<S35>/SourceBlock'
  boolean_T objisempty_ao;             // '<S32>/SourceBlock'
  boolean_T objisempty_l;              // '<S29>/SourceBlock'
  boolean_T objisempty_lx;             // '<S26>/SourceBlock'
  boolean_T objisempty_c;              // '<S23>/SourceBlock'
  boolean_T objisempty_g;              // '<S20>/SourceBlock'
  boolean_T objisempty_jj;             // '<S1>/SourceBlock'
  DW_PurePursuit_c6_goto_target_T PurePursuit_pnaev;// '<S59>/Pure Pursuit'
  DW_VectorFieldHistogram_c6_go_T VectorFieldHistogram_pnaev;// '<S58>/Vector Field Histogram' 
  DW_PurePursuit_c6_goto_target_T PurePursuit_pnae;// '<S59>/Pure Pursuit'
  DW_VectorFieldHistogram_c6_go_T VectorFieldHistogram_pnae;// '<S58>/Vector Field Histogram' 
  DW_PurePursuit_c6_goto_target_T PurePursuit_pna;// '<S59>/Pure Pursuit'
  DW_VectorFieldHistogram_c6_go_T VectorFieldHistogram_pna;// '<S58>/Vector Field Histogram' 
  DW_PurePursuit_c6_goto_target_T PurePursuit_pn;// '<S59>/Pure Pursuit'
  DW_VectorFieldHistogram_c6_go_T VectorFieldHistogram_pn;// '<S58>/Vector Field Histogram' 
  DW_PurePursuit_c6_goto_target_T PurePursuit_p;// '<S59>/Pure Pursuit'
  DW_VectorFieldHistogram_c6_go_T VectorFieldHistogram_p;// '<S58>/Vector Field Histogram' 
  DW_PurePursuit_c6_goto_target_T PurePursuit;// '<S59>/Pure Pursuit'
  DW_VectorFieldHistogram_c6_go_T VectorFieldHistogram;// '<S58>/Vector Field Histogram' 
};

// Parameters for system: '<S58>/Recovery'
struct P_Recovery_c6_goto_target_T_ {
  real_T Gain_Gain;                    // Expression: -1
                                          //  Referenced by: '<S62>/Gain'

};

// Parameters for system: '<S58>/Path Following'
struct P_PathFollowing_c6_goto_targe_T_ {
  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S61>/Constant'

  real_T MaxAngularVelocity_Value;     // Expression: 1
                                          //  Referenced by: '<S61>/MaxAngularVelocity'

};

// Parameters for system: '<S58>/Vector Field Histogram'
struct P_VectorFieldHistogram_c6_got_T_ {
  real_T VectorFieldHistogram_DistanceLi[2];// Expression: [ 0.05, 3 ]
                                               //  Referenced by: '<S58>/Vector Field Histogram'

  real_T VectorFieldHistogram_HistogramT[2];// Expression: [ 3, 8 ]
                                               //  Referenced by: '<S58>/Vector Field Histogram'

  real_T VectorFieldHistogram_RobotRadiu;// Expression: 0.2
                                            //  Referenced by: '<S58>/Vector Field Histogram'

  real_T VectorFieldHistogram_SafetyDist;// Expression: 0.2
                                            //  Referenced by: '<S58>/Vector Field Histogram'

  real_T VectorFieldHistogram_MinTurning;// Expression: 0.2
                                            //  Referenced by: '<S58>/Vector Field Histogram'

  real_T VectorFieldHistogram_TargetDire;// Expression: 5
                                            //  Referenced by: '<S58>/Vector Field Histogram'

  real_T VectorFieldHistogram_CurrentDir;// Expression: 2
                                            //  Referenced by: '<S58>/Vector Field Histogram'

  real_T VectorFieldHistogram_PreviousDi;// Expression: 2
                                            //  Referenced by: '<S58>/Vector Field Histogram'

};

// Parameters (default storage)
struct P_c6_goto_target_T_ {
  real_T desired_lookahead;            // Variable: desired_lookahead
                                          //  Referenced by:
                                          //    '<S59>/Pure Pursuit'
                                          //    '<S66>/Pure Pursuit'
                                          //    '<S73>/Pure Pursuit'
                                          //    '<S80>/Pure Pursuit'
                                          //    '<S87>/Pure Pursuit'
                                          //    '<S94>/Pure Pursuit'

  real_T desired_v;                    // Variable: desired_v
                                          //  Referenced by:
                                          //    '<S59>/Pure Pursuit'
                                          //    '<S66>/Pure Pursuit'
                                          //    '<S73>/Pure Pursuit'
                                          //    '<S80>/Pure Pursuit'
                                          //    '<S87>/Pure Pursuit'
                                          //    '<S94>/Pure Pursuit'

  real_T desired_w;                    // Variable: desired_w
                                          //  Referenced by:
                                          //    '<S59>/Pure Pursuit'
                                          //    '<S66>/Pure Pursuit'
                                          //    '<S73>/Pure Pursuit'
                                          //    '<S80>/Pure Pursuit'
                                          //    '<S87>/Pure Pursuit'
                                          //    '<S94>/Pure Pursuit'

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
                                          //    '<S57>/MATLAB Function'
                                          //    '<S57>/MATLAB Function2'
                                          //    '<S57>/MATLAB Function3'
                                          //    '<S57>/MATLAB Function4'
                                          //    '<S57>/MATLAB Function5'
                                          //    '<S57>/MATLAB Function6'

  real_T recovery_w;                   // Variable: recovery_w
                                          //  Referenced by:
                                          //    '<S62>/Constant1'
                                          //    '<S69>/Constant1'
                                          //    '<S76>/Constant1'
                                          //    '<S83>/Constant1'
                                          //    '<S90>/Constant1'
                                          //    '<S97>/Constant1'

  real_T robotRadius;                  // Variable: robotRadius
                                          //  Referenced by:
                                          //    '<S57>/MATLAB Function'
                                          //    '<S57>/MATLAB Function2'
                                          //    '<S57>/MATLAB Function3'
                                          //    '<S57>/MATLAB Function4'
                                          //    '<S57>/MATLAB Function5'
                                          //    '<S57>/MATLAB Function6'

  real_T scanAngles[20];               // Variable: scanAngles
                                          //  Referenced by:
                                          //    '<S3>/Constant1'
                                          //    '<S3>/Constant3'
                                          //    '<S3>/Constant4'
                                          //    '<S3>/Constant5'
                                          //    '<S3>/Constant6'
                                          //    '<S3>/Constant7'
                                          //    '<S57>/MATLAB Function'
                                          //    '<S57>/MATLAB Function2'
                                          //    '<S57>/MATLAB Function3'
                                          //    '<S57>/MATLAB Function4'
                                          //    '<S57>/MATLAB Function5'
                                          //    '<S57>/MATLAB Function6'

  real_T wp1[16];                      // Variable: wp1
                                          //  Referenced by: '<S3>/Constant2'

  SL_Bus_c6_goto_target_nav_msgs_Odometry Out1_Y0;// Computed Parameter: Out1_Y0
                                                     //  Referenced by: '<S21>/Out1'

  SL_Bus_c6_goto_target_nav_msgs_Odometry Constant_Value;// Computed Parameter: Constant_Value
                                                            //  Referenced by: '<S20>/Constant'

  SL_Bus_c6_goto_target_nav_msgs_Odometry Out1_Y0_b;// Computed Parameter: Out1_Y0_b
                                                       //  Referenced by: '<S24>/Out1'

  SL_Bus_c6_goto_target_nav_msgs_Odometry Constant_Value_b;// Computed Parameter: Constant_Value_b
                                                              //  Referenced by: '<S23>/Constant'

  SL_Bus_c6_goto_target_nav_msgs_Odometry Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                                       //  Referenced by: '<S27>/Out1'

  SL_Bus_c6_goto_target_nav_msgs_Odometry Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                              //  Referenced by: '<S26>/Constant'

  SL_Bus_c6_goto_target_nav_msgs_Odometry Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                       //  Referenced by: '<S30>/Out1'

  SL_Bus_c6_goto_target_nav_msgs_Odometry Constant_Value_b1;// Computed Parameter: Constant_Value_b1
                                                               //  Referenced by: '<S29>/Constant'

  SL_Bus_c6_goto_target_nav_msgs_Odometry Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                                       //  Referenced by: '<S33>/Out1'

  SL_Bus_c6_goto_target_nav_msgs_Odometry Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                              //  Referenced by: '<S32>/Constant'

  SL_Bus_c6_goto_target_nav_msgs_Odometry Out1_Y0_j;// Computed Parameter: Out1_Y0_j
                                                       //  Referenced by: '<S36>/Out1'

  SL_Bus_c6_goto_target_nav_msgs_Odometry Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                              //  Referenced by: '<S35>/Constant'

  SL_Bus_c6_goto_target_geometry_msgs_Twist Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                                //  Referenced by: '<S37>/Constant'

  SL_Bus_c6_goto_target_geometry_msgs_Twist Constant_Value_fu;// Computed Parameter: Constant_Value_fu
                                                                 //  Referenced by: '<S39>/Constant'

  SL_Bus_c6_goto_target_geometry_msgs_Twist Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                                //  Referenced by: '<S41>/Constant'

  SL_Bus_c6_goto_target_geometry_msgs_Twist Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                                //  Referenced by: '<S43>/Constant'

  SL_Bus_c6_goto_target_geometry_msgs_Twist Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                                //  Referenced by: '<S45>/Constant'

  SL_Bus_c6_goto_target_geometry_msgs_Twist Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                                //  Referenced by: '<S47>/Constant'

  SL_Bus_c6_goto_target_std_msgs_Float64 Out1_Y0_p;// Computed Parameter: Out1_Y0_p
                                                      //  Referenced by: '<S4>/Out1'

  SL_Bus_c6_goto_target_std_msgs_Float64 Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                             //  Referenced by: '<S1>/Constant'

  SL_Bus_c6_goto_target_std_msgs_Float64 Constant_Value_m2;// Computed Parameter: Constant_Value_m2
                                                              //  Referenced by: '<S5>/Constant'

  real_T vw1_Y0;                       // Computed Parameter: vw1_Y0
                                          //  Referenced by: '<S3>/vw1'

  real_T vw2_Y0;                       // Computed Parameter: vw2_Y0
                                          //  Referenced by: '<S3>/vw2'

  real_T vw3_Y0;                       // Computed Parameter: vw3_Y0
                                          //  Referenced by: '<S3>/vw3'

  real_T vw4_Y0;                       // Computed Parameter: vw4_Y0
                                          //  Referenced by: '<S3>/vw4'

  real_T vw5_Y0;                       // Computed Parameter: vw5_Y0
                                          //  Referenced by: '<S3>/vw5'

  real_T vw6_Y0;                       // Computed Parameter: vw6_Y0
                                          //  Referenced by: '<S3>/vw6'

  real_T CloseToGoal_Y0;               // Computed Parameter: CloseToGoal_Y0
                                          //  Referenced by: '<S3>/CloseToGoal'

  real_T Constant_Value_mm;            // Expression: 1
                                          //  Referenced by: '<S57>/Constant'

  real_T Constant3_Value;              // Expression: 4
                                          //  Referenced by: '<S57>/Constant3'

  real_T Constant1_Value;              // Expression: 2
                                          //  Referenced by: '<S57>/Constant1'

  real_T Constant4_Value;              // Expression: 5
                                          //  Referenced by: '<S57>/Constant4'

  real_T Constant2_Value;              // Expression: 3
                                          //  Referenced by: '<S57>/Constant2'

  real_T Constant5_Value;              // Expression: 6
                                          //  Referenced by: '<S57>/Constant5'

  real_T GoalRadius_Value;             // Expression: 0.1
                                          //  Referenced by: '<S94>/GoalRadius'

  real_T GoalRadius_Value_i;           // Expression: 0.1
                                          //  Referenced by: '<S59>/GoalRadius'

  real_T GoalRadius_Value_f;           // Expression: 0.1
                                          //  Referenced by: '<S66>/GoalRadius'

  real_T GoalRadius_Value_d;           // Expression: 0.1
                                          //  Referenced by: '<S73>/GoalRadius'

  real_T GoalRadius_Value_l;           // Expression: 0.1
                                          //  Referenced by: '<S80>/GoalRadius'

  real_T GoalRadius_Value_p;           // Expression: 0.1
                                          //  Referenced by: '<S87>/GoalRadius'

  real_T Saturation3_UpperSat;         // Expression: 1
                                          //  Referenced by: '<S3>/Saturation3'

  real_T Saturation3_LowerSat;         // Expression: 0
                                          //  Referenced by: '<S3>/Saturation3'

  real_T Saturation1_UpperSat;         // Expression: 1
                                          //  Referenced by: '<S3>/Saturation1'

  real_T Saturation1_LowerSat;         // Expression: 0
                                          //  Referenced by: '<S3>/Saturation1'

  real_T Saturation4_UpperSat;         // Expression: 1
                                          //  Referenced by: '<S3>/Saturation4'

  real_T Saturation4_LowerSat;         // Expression: 0
                                          //  Referenced by: '<S3>/Saturation4'

  real_T Saturation2_UpperSat;         // Expression: 1
                                          //  Referenced by: '<S3>/Saturation2'

  real_T Saturation2_LowerSat;         // Expression: 0
                                          //  Referenced by: '<S3>/Saturation2'

  real_T Saturation_UpperSat;          // Expression: 1
                                          //  Referenced by: '<S3>/Saturation'

  real_T Saturation_LowerSat;          // Expression: 0
                                          //  Referenced by: '<S3>/Saturation'

  real_T Saturation5_UpperSat;         // Expression: 1
                                          //  Referenced by: '<S3>/Saturation5'

  real_T Saturation5_LowerSat;         // Expression: 0
                                          //  Referenced by: '<S3>/Saturation5'

  real_T Memory_InitialCondition;      // Expression: 123567
                                          //  Referenced by: '<Root>/Memory'

  P_VectorFieldHistogram_c6_got_T VectorFieldHistogram_pnaev;// '<S58>/Vector Field Histogram' 
  P_PathFollowing_c6_goto_targe_T PathFollowing_n;// '<S93>/Path Following'
  P_Recovery_c6_goto_target_T Recovery_m;// '<S93>/Recovery'
  P_VectorFieldHistogram_c6_got_T VectorFieldHistogram_pnae;// '<S58>/Vector Field Histogram' 
  P_PathFollowing_c6_goto_targe_T PathFollowing_h;// '<S86>/Path Following'
  P_Recovery_c6_goto_target_T Recovery_i;// '<S86>/Recovery'
  P_VectorFieldHistogram_c6_got_T VectorFieldHistogram_pna;// '<S58>/Vector Field Histogram' 
  P_PathFollowing_c6_goto_targe_T PathFollowing_f;// '<S79>/Path Following'
  P_Recovery_c6_goto_target_T Recovery_f;// '<S79>/Recovery'
  P_VectorFieldHistogram_c6_got_T VectorFieldHistogram_pn;// '<S58>/Vector Field Histogram' 
  P_PathFollowing_c6_goto_targe_T PathFollowing_l;// '<S72>/Path Following'
  P_Recovery_c6_goto_target_T Recovery_o;// '<S72>/Recovery'
  P_VectorFieldHistogram_c6_got_T VectorFieldHistogram_p;// '<S58>/Vector Field Histogram' 
  P_PathFollowing_c6_goto_targe_T PathFollowing_e;// '<S65>/Path Following'
  P_Recovery_c6_goto_target_T Recovery_k;// '<S65>/Recovery'
  P_VectorFieldHistogram_c6_got_T VectorFieldHistogram;// '<S58>/Vector Field Histogram' 
  P_PathFollowing_c6_goto_targe_T PathFollowing;// '<S58>/Path Following'
  P_Recovery_c6_goto_target_T Recovery;// '<S58>/Recovery'
};

// Real-time Model Data Structure
struct tag_RTM_c6_goto_target_T {
  const char_T * volatile errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_c6_goto_target_T c6_goto_target_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_c6_goto_target_T c6_goto_target_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_c6_goto_target_T c6_goto_target_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void c6_goto_target_initialize(void);
  extern void c6_goto_target_step(void);
  extern void c6_goto_target_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_c6_goto_target_T *const c6_goto_target_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S51>/Constant1' : Unused code path elimination
//  Block '<S53>/Constant1' : Unused code path elimination
//  Block '<S54>/Constant1' : Unused code path elimination


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
//  '<Root>' : 'c6_goto_target'
//  '<S1>'   : 'c6_goto_target/Subscribe'
//  '<S2>'   : 'c6_goto_target/Subsystem'
//  '<S3>'   : 'c6_goto_target/controller1'
//  '<S4>'   : 'c6_goto_target/Subscribe/Enabled Subsystem'
//  '<S5>'   : 'c6_goto_target/Subsystem/Blank Message'
//  '<S6>'   : 'c6_goto_target/Subsystem/Car Pose Listener'
//  '<S7>'   : 'c6_goto_target/Subsystem/Car Pose Listener1'
//  '<S8>'   : 'c6_goto_target/Subsystem/Car Pose Listener2'
//  '<S9>'   : 'c6_goto_target/Subsystem/Car Pose Listener3'
//  '<S10>'  : 'c6_goto_target/Subsystem/Car Pose Listener4'
//  '<S11>'  : 'c6_goto_target/Subsystem/Car Pose Listener5'
//  '<S12>'  : 'c6_goto_target/Subsystem/Command Velocity Publisher'
//  '<S13>'  : 'c6_goto_target/Subsystem/Command Velocity Publisher1'
//  '<S14>'  : 'c6_goto_target/Subsystem/Command Velocity Publisher2'
//  '<S15>'  : 'c6_goto_target/Subsystem/Command Velocity Publisher3'
//  '<S16>'  : 'c6_goto_target/Subsystem/Command Velocity Publisher4'
//  '<S17>'  : 'c6_goto_target/Subsystem/Command Velocity Publisher5'
//  '<S18>'  : 'c6_goto_target/Subsystem/Publish2'
//  '<S19>'  : 'c6_goto_target/Subsystem/Car Pose Listener/Conversion'
//  '<S20>'  : 'c6_goto_target/Subsystem/Car Pose Listener/Subscribe'
//  '<S21>'  : 'c6_goto_target/Subsystem/Car Pose Listener/Subscribe/Enabled Subsystem'
//  '<S22>'  : 'c6_goto_target/Subsystem/Car Pose Listener1/Conversion'
//  '<S23>'  : 'c6_goto_target/Subsystem/Car Pose Listener1/Subscribe'
//  '<S24>'  : 'c6_goto_target/Subsystem/Car Pose Listener1/Subscribe/Enabled Subsystem'
//  '<S25>'  : 'c6_goto_target/Subsystem/Car Pose Listener2/Conversion'
//  '<S26>'  : 'c6_goto_target/Subsystem/Car Pose Listener2/Subscribe'
//  '<S27>'  : 'c6_goto_target/Subsystem/Car Pose Listener2/Subscribe/Enabled Subsystem'
//  '<S28>'  : 'c6_goto_target/Subsystem/Car Pose Listener3/Conversion'
//  '<S29>'  : 'c6_goto_target/Subsystem/Car Pose Listener3/Subscribe'
//  '<S30>'  : 'c6_goto_target/Subsystem/Car Pose Listener3/Subscribe/Enabled Subsystem'
//  '<S31>'  : 'c6_goto_target/Subsystem/Car Pose Listener4/Conversion'
//  '<S32>'  : 'c6_goto_target/Subsystem/Car Pose Listener4/Subscribe'
//  '<S33>'  : 'c6_goto_target/Subsystem/Car Pose Listener4/Subscribe/Enabled Subsystem'
//  '<S34>'  : 'c6_goto_target/Subsystem/Car Pose Listener5/Conversion'
//  '<S35>'  : 'c6_goto_target/Subsystem/Car Pose Listener5/Subscribe'
//  '<S36>'  : 'c6_goto_target/Subsystem/Car Pose Listener5/Subscribe/Enabled Subsystem'
//  '<S37>'  : 'c6_goto_target/Subsystem/Command Velocity Publisher/Blank Message'
//  '<S38>'  : 'c6_goto_target/Subsystem/Command Velocity Publisher/Publish2'
//  '<S39>'  : 'c6_goto_target/Subsystem/Command Velocity Publisher1/Blank Message'
//  '<S40>'  : 'c6_goto_target/Subsystem/Command Velocity Publisher1/Publish2'
//  '<S41>'  : 'c6_goto_target/Subsystem/Command Velocity Publisher2/Blank Message'
//  '<S42>'  : 'c6_goto_target/Subsystem/Command Velocity Publisher2/Publish2'
//  '<S43>'  : 'c6_goto_target/Subsystem/Command Velocity Publisher3/Blank Message'
//  '<S44>'  : 'c6_goto_target/Subsystem/Command Velocity Publisher3/Publish2'
//  '<S45>'  : 'c6_goto_target/Subsystem/Command Velocity Publisher4/Blank Message'
//  '<S46>'  : 'c6_goto_target/Subsystem/Command Velocity Publisher4/Publish2'
//  '<S47>'  : 'c6_goto_target/Subsystem/Command Velocity Publisher5/Blank Message'
//  '<S48>'  : 'c6_goto_target/Subsystem/Command Velocity Publisher5/Publish2'
//  '<S49>'  : 'c6_goto_target/controller1/MATLAB Function'
//  '<S50>'  : 'c6_goto_target/controller1/MATLAB Function1'
//  '<S51>'  : 'c6_goto_target/controller1/Subsystem1'
//  '<S52>'  : 'c6_goto_target/controller1/Subsystem2'
//  '<S53>'  : 'c6_goto_target/controller1/Subsystem3'
//  '<S54>'  : 'c6_goto_target/controller1/Subsystem4'
//  '<S55>'  : 'c6_goto_target/controller1/Subsystem5'
//  '<S56>'  : 'c6_goto_target/controller1/Subsystem6'
//  '<S57>'  : 'c6_goto_target/controller1/controller1'
//  '<S58>'  : 'c6_goto_target/controller1/Subsystem1/Adjust Velocities to Avoid Obstacles'
//  '<S59>'  : 'c6_goto_target/controller1/Subsystem1/Compute Velocity and Heading for Path following'
//  '<S60>'  : 'c6_goto_target/controller1/Subsystem1/Outputs'
//  '<S61>'  : 'c6_goto_target/controller1/Subsystem1/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S62>'  : 'c6_goto_target/controller1/Subsystem1/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S63>'  : 'c6_goto_target/controller1/Subsystem1/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S64>'  : 'c6_goto_target/controller1/Subsystem1/Compute Velocity and Heading for Path following/ Extract Goal'
//  '<S65>'  : 'c6_goto_target/controller1/Subsystem2/Adjust Velocities to Avoid Obstacles'
//  '<S66>'  : 'c6_goto_target/controller1/Subsystem2/Compute Velocity and Heading for Path following'
//  '<S67>'  : 'c6_goto_target/controller1/Subsystem2/Outputs'
//  '<S68>'  : 'c6_goto_target/controller1/Subsystem2/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S69>'  : 'c6_goto_target/controller1/Subsystem2/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S70>'  : 'c6_goto_target/controller1/Subsystem2/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S71>'  : 'c6_goto_target/controller1/Subsystem2/Compute Velocity and Heading for Path following/ Extract Goal'
//  '<S72>'  : 'c6_goto_target/controller1/Subsystem3/Adjust Velocities to Avoid Obstacles'
//  '<S73>'  : 'c6_goto_target/controller1/Subsystem3/Compute Velocity and Heading for Path following'
//  '<S74>'  : 'c6_goto_target/controller1/Subsystem3/Outputs'
//  '<S75>'  : 'c6_goto_target/controller1/Subsystem3/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S76>'  : 'c6_goto_target/controller1/Subsystem3/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S77>'  : 'c6_goto_target/controller1/Subsystem3/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S78>'  : 'c6_goto_target/controller1/Subsystem3/Compute Velocity and Heading for Path following/ Extract Goal'
//  '<S79>'  : 'c6_goto_target/controller1/Subsystem4/Adjust Velocities to Avoid Obstacles'
//  '<S80>'  : 'c6_goto_target/controller1/Subsystem4/Compute Velocity and Heading for Path following'
//  '<S81>'  : 'c6_goto_target/controller1/Subsystem4/Outputs'
//  '<S82>'  : 'c6_goto_target/controller1/Subsystem4/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S83>'  : 'c6_goto_target/controller1/Subsystem4/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S84>'  : 'c6_goto_target/controller1/Subsystem4/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S85>'  : 'c6_goto_target/controller1/Subsystem4/Compute Velocity and Heading for Path following/ Extract Goal'
//  '<S86>'  : 'c6_goto_target/controller1/Subsystem5/Adjust Velocities to Avoid Obstacles'
//  '<S87>'  : 'c6_goto_target/controller1/Subsystem5/Compute Velocity and Heading for Path following'
//  '<S88>'  : 'c6_goto_target/controller1/Subsystem5/Outputs'
//  '<S89>'  : 'c6_goto_target/controller1/Subsystem5/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S90>'  : 'c6_goto_target/controller1/Subsystem5/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S91>'  : 'c6_goto_target/controller1/Subsystem5/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S92>'  : 'c6_goto_target/controller1/Subsystem5/Compute Velocity and Heading for Path following/ Extract Goal'
//  '<S93>'  : 'c6_goto_target/controller1/Subsystem6/Adjust Velocities to Avoid Obstacles'
//  '<S94>'  : 'c6_goto_target/controller1/Subsystem6/Compute Velocity and Heading for Path following'
//  '<S95>'  : 'c6_goto_target/controller1/Subsystem6/Outputs'
//  '<S96>'  : 'c6_goto_target/controller1/Subsystem6/Adjust Velocities to Avoid Obstacles/Path Following'
//  '<S97>'  : 'c6_goto_target/controller1/Subsystem6/Adjust Velocities to Avoid Obstacles/Recovery'
//  '<S98>'  : 'c6_goto_target/controller1/Subsystem6/Adjust Velocities to Avoid Obstacles/Path Following/Compute Angular Velocity'
//  '<S99>'  : 'c6_goto_target/controller1/Subsystem6/Compute Velocity and Heading for Path following/ Extract Goal'
//  '<S100>' : 'c6_goto_target/controller1/controller1/MATLAB Function'
//  '<S101>' : 'c6_goto_target/controller1/controller1/MATLAB Function2'
//  '<S102>' : 'c6_goto_target/controller1/controller1/MATLAB Function3'
//  '<S103>' : 'c6_goto_target/controller1/controller1/MATLAB Function4'
//  '<S104>' : 'c6_goto_target/controller1/controller1/MATLAB Function5'
//  '<S105>' : 'c6_goto_target/controller1/controller1/MATLAB Function6'

#endif                                 // RTW_HEADER_c6_goto_target_h_

//
// File trailer for generated code.
//
// [EOF]
//
