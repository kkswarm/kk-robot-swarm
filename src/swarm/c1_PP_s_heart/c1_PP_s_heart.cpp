//
// File: c1_PP_s_heart.cpp
//
// Code generated for Simulink model 'c1_PP_s_heart'.
//
// Model version                  : 4.15
// Simulink Coder version         : 9.6 (R2021b) 14-May-2021
// C/C++ source code generated on : Thu Apr 14 15:47:35 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "c1_PP_s_heart.h"
#include "c1_PP_s_heart_private.h"

// Block signals (default storage)
B_c1_PP_s_heart_T c1_PP_s_heart_B;

// Block states (default storage)
DW_c1_PP_s_heart_T c1_PP_s_heart_DW;

// Real-time model
RT_MODEL_c1_PP_s_heart_T c1_PP_s_heart_M_ = RT_MODEL_c1_PP_s_heart_T();
RT_MODEL_c1_PP_s_heart_T *const c1_PP_s_heart_M = &c1_PP_s_heart_M_;

// Forward declaration for local functions
static real_T c1_PP_s_heart_norm(const real_T x[2]);
static void c1_PP_s_hear_closestPointOnLine(const real_T pt1[2], const real_T
  pt2[2], const real_T refPt[2], real_T closestPoint[2], real_T *distance);
static void c1_PP_s_heart_merge(int32_T idx_data[], real_T x_data[], int32_T
  offset, int32_T np, int32_T nq, int32_T iwork_data[], real_T xwork_data[]);
static void c1_PP_s_heart_sort(real_T x_data[], const int32_T *x_size);
static real_T c1_PP__skip_to_last_equal_value(int32_T *k, const real_T x[94]);
static void c1_PP_s_heart_do_vectors(const real_T b_data[], const int32_T
  *b_size, real_T c_data[], int32_T c_size[2], int32_T ia_data[], int32_T
  *ia_size, int32_T *ib_size);
real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    real_T tmp;
    real_T tmp_0;
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

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

static real_T c1_PP_s_heart_norm(const real_T x[2])
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  scale = 3.3121686421112381E-170;
  absxk = fabs(x[0]);
  if (absxk > 3.3121686421112381E-170) {
    y = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    y = t * t;
  }

  absxk = fabs(x[1]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  return scale * sqrt(y);
}

static void c1_PP_s_hear_closestPointOnLine(const real_T pt1[2], const real_T
  pt2[2], const real_T refPt[2], real_T closestPoint[2], real_T *distance)
{
  int32_T b_k;
  boolean_T exitg1;
  boolean_T p;
  boolean_T p_0;
  p = false;
  p_0 = true;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 2)) {
    if (!(pt1[b_k] == pt2[b_k])) {
      p_0 = false;
      exitg1 = true;
    } else {
      b_k++;
    }
  }

  if (p_0) {
    p = true;
  }

  if (p) {
    closestPoint[0] = pt1[0];
    c1_PP_s_heart_B.refPt[0] = refPt[0] - pt1[0];
    closestPoint[1] = pt1[1];
    c1_PP_s_heart_B.refPt[1] = refPt[1] - pt1[1];
    *distance = c1_PP_s_heart_norm(c1_PP_s_heart_B.refPt);
  } else {
    real_T alpha;
    real_T v12;
    real_T v12_0;
    alpha = pt2[0] - pt1[0];
    v12 = (pt2[0] - refPt[0]) * alpha;
    v12_0 = alpha * alpha;
    alpha = pt2[1] - pt1[1];
    alpha = ((pt2[1] - refPt[1]) * alpha + v12) / (alpha * alpha + v12_0);
    p = (alpha > 1.0);
    p_0 = (alpha < 0.0);
    if (p) {
      v12 = pt1[0];
    } else if (p_0) {
      v12 = pt2[0];
    } else {
      v12 = (1.0 - alpha) * pt2[0] + alpha * pt1[0];
    }

    c1_PP_s_heart_B.refPt[0] = refPt[0] - v12;
    closestPoint[0] = v12;
    if (p) {
      v12 = pt1[1];
    } else if (p_0) {
      v12 = pt2[1];
    } else {
      v12 = (1.0 - alpha) * pt2[1] + alpha * pt1[1];
    }

    c1_PP_s_heart_B.refPt[1] = refPt[1] - v12;
    closestPoint[1] = v12;
    *distance = c1_PP_s_heart_norm(c1_PP_s_heart_B.refPt);
  }
}

// Function for MATLAB Function: '<S14>/ Extract Goal'
static void c1_PP_s_heart_merge(int32_T idx_data[], real_T x_data[], int32_T
  offset, int32_T np, int32_T nq, int32_T iwork_data[], real_T xwork_data[])
{
  if (nq != 0) {
    int32_T iout;
    int32_T offset1;
    int32_T p;
    int32_T q;
    offset1 = np + nq;
    for (p = 0; p < offset1; p++) {
      q = offset + p;
      iwork_data[p] = idx_data[q];
      xwork_data[p] = x_data[q];
    }

    p = 0;
    q = np;
    iout = offset - 1;
    int32_T exitg1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork_data[p] <= xwork_data[q]) {
        idx_data[iout] = iwork_data[p];
        x_data[iout] = xwork_data[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx_data[iout] = iwork_data[q];
        x_data[iout] = xwork_data[q];
        if (q + 1 < offset1) {
          q++;
        } else {
          offset1 = iout - p;
          while (p + 1 <= np) {
            q = (offset1 + p) + 1;
            idx_data[q] = iwork_data[p];
            x_data[q] = xwork_data[p];
            p++;
          }

          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

// Function for MATLAB Function: '<S14>/ Extract Goal'
static void c1_PP_s_heart_sort(real_T x_data[], const int32_T *x_size)
{
  int32_T b;
  int32_T n;
  int32_T vstride;
  int32_T vwork_size_idx_0;
  int8_T perm[4];
  uint8_T idx4[4];
  c1_PP_s_heart_B.dim = 2;
  if (*x_size != 1) {
    c1_PP_s_heart_B.dim = 1;
    b = *x_size - 1;
  } else {
    b = 0;
  }

  vwork_size_idx_0 = b + 1;
  vstride = 1;
  n = 0;
  while (n <= c1_PP_s_heart_B.dim - 2) {
    vstride *= *x_size;
    n = 1;
  }

  c1_PP_s_heart_B.dim = 0;
  while (c1_PP_s_heart_B.dim <= vstride - 1) {
    for (n = 0; n <= b; n++) {
      c1_PP_s_heart_B.vwork_data[n] = x_data[n * vstride + c1_PP_s_heart_B.dim];
    }

    if (0 <= vwork_size_idx_0 - 1) {
      memcpy(&c1_PP_s_heart_B.b_x_data[0], &c1_PP_s_heart_B.vwork_data[0],
             vwork_size_idx_0 * sizeof(real_T));
    }

    if (vwork_size_idx_0 != 0) {
      int32_T ib;
      int32_T nPairs;
      int32_T nTail;
      if (0 <= static_cast<uint8_T>(vwork_size_idx_0) - 1) {
        memset(&c1_PP_s_heart_B.idx_data[0], 0, static_cast<uint8_T>
               (vwork_size_idx_0) * sizeof(int32_T));
      }

      c1_PP_s_heart_B.x4[0] = 0.0;
      idx4[0] = 0U;
      c1_PP_s_heart_B.x4[1] = 0.0;
      idx4[1] = 0U;
      c1_PP_s_heart_B.x4[2] = 0.0;
      idx4[2] = 0U;
      c1_PP_s_heart_B.x4[3] = 0.0;
      idx4[3] = 0U;
      ib = 0;
      for (nPairs = 0; nPairs < vwork_size_idx_0; nPairs++) {
        ib++;
        idx4[ib - 1] = static_cast<uint8_T>(nPairs + 1);
        c1_PP_s_heart_B.x4[ib - 1] = c1_PP_s_heart_B.b_x_data[nPairs];
        if (ib == 4) {
          int32_T i4;
          if (c1_PP_s_heart_B.x4[0] <= c1_PP_s_heart_B.x4[1]) {
            ib = 1;
            nTail = 2;
          } else {
            ib = 2;
            nTail = 1;
          }

          if (c1_PP_s_heart_B.x4[2] <= c1_PP_s_heart_B.x4[3]) {
            n = 3;
            i4 = 4;
          } else {
            n = 4;
            i4 = 3;
          }

          c1_PP_s_heart_B.d = c1_PP_s_heart_B.x4[ib - 1];
          c1_PP_s_heart_B.d1 = c1_PP_s_heart_B.x4[n - 1];
          if (c1_PP_s_heart_B.d <= c1_PP_s_heart_B.d1) {
            c1_PP_s_heart_B.d = c1_PP_s_heart_B.x4[nTail - 1];
            if (c1_PP_s_heart_B.d <= c1_PP_s_heart_B.d1) {
              perm[0] = static_cast<int8_T>(ib);
              perm[1] = static_cast<int8_T>(nTail);
              perm[2] = static_cast<int8_T>(n);
              perm[3] = static_cast<int8_T>(i4);
            } else if (c1_PP_s_heart_B.d <= c1_PP_s_heart_B.x4[i4 - 1]) {
              perm[0] = static_cast<int8_T>(ib);
              perm[1] = static_cast<int8_T>(n);
              perm[2] = static_cast<int8_T>(nTail);
              perm[3] = static_cast<int8_T>(i4);
            } else {
              perm[0] = static_cast<int8_T>(ib);
              perm[1] = static_cast<int8_T>(n);
              perm[2] = static_cast<int8_T>(i4);
              perm[3] = static_cast<int8_T>(nTail);
            }
          } else {
            c1_PP_s_heart_B.d1 = c1_PP_s_heart_B.x4[i4 - 1];
            if (c1_PP_s_heart_B.d <= c1_PP_s_heart_B.d1) {
              if (c1_PP_s_heart_B.x4[nTail - 1] <= c1_PP_s_heart_B.d1) {
                perm[0] = static_cast<int8_T>(n);
                perm[1] = static_cast<int8_T>(ib);
                perm[2] = static_cast<int8_T>(nTail);
                perm[3] = static_cast<int8_T>(i4);
              } else {
                perm[0] = static_cast<int8_T>(n);
                perm[1] = static_cast<int8_T>(ib);
                perm[2] = static_cast<int8_T>(i4);
                perm[3] = static_cast<int8_T>(nTail);
              }
            } else {
              perm[0] = static_cast<int8_T>(n);
              perm[1] = static_cast<int8_T>(i4);
              perm[2] = static_cast<int8_T>(ib);
              perm[3] = static_cast<int8_T>(nTail);
            }
          }

          c1_PP_s_heart_B.idx_data[nPairs - 3] = idx4[perm[0] - 1];
          c1_PP_s_heart_B.idx_data[nPairs - 2] = idx4[perm[1] - 1];
          c1_PP_s_heart_B.idx_data[nPairs - 1] = idx4[perm[2] - 1];
          c1_PP_s_heart_B.idx_data[nPairs] = idx4[perm[3] - 1];
          c1_PP_s_heart_B.b_x_data[nPairs - 3] = c1_PP_s_heart_B.x4[perm[0] - 1];
          c1_PP_s_heart_B.b_x_data[nPairs - 2] = c1_PP_s_heart_B.x4[perm[1] - 1];
          c1_PP_s_heart_B.b_x_data[nPairs - 1] = c1_PP_s_heart_B.x4[perm[2] - 1];
          c1_PP_s_heart_B.b_x_data[nPairs] = c1_PP_s_heart_B.x4[perm[3] - 1];
          ib = 0;
        }
      }

      if (ib > 0) {
        perm[1] = 0;
        perm[2] = 0;
        perm[3] = 0;
        switch (ib) {
         case 1:
          perm[0] = 1;
          break;

         case 2:
          if (c1_PP_s_heart_B.x4[0] <= c1_PP_s_heart_B.x4[1]) {
            perm[0] = 1;
            perm[1] = 2;
          } else {
            perm[0] = 2;
            perm[1] = 1;
          }
          break;

         default:
          if (c1_PP_s_heart_B.x4[0] <= c1_PP_s_heart_B.x4[1]) {
            if (c1_PP_s_heart_B.x4[1] <= c1_PP_s_heart_B.x4[2]) {
              perm[0] = 1;
              perm[1] = 2;
              perm[2] = 3;
            } else if (c1_PP_s_heart_B.x4[0] <= c1_PP_s_heart_B.x4[2]) {
              perm[0] = 1;
              perm[1] = 3;
              perm[2] = 2;
            } else {
              perm[0] = 3;
              perm[1] = 1;
              perm[2] = 2;
            }
          } else if (c1_PP_s_heart_B.x4[0] <= c1_PP_s_heart_B.x4[2]) {
            perm[0] = 2;
            perm[1] = 1;
            perm[2] = 3;
          } else if (c1_PP_s_heart_B.x4[1] <= c1_PP_s_heart_B.x4[2]) {
            perm[0] = 2;
            perm[1] = 3;
            perm[2] = 1;
          } else {
            perm[0] = 3;
            perm[1] = 2;
            perm[2] = 1;
          }
          break;
        }

        for (nPairs = 0; nPairs < ib; nPairs++) {
          nTail = perm[nPairs] - 1;
          n = (vwork_size_idx_0 - ib) + nPairs;
          c1_PP_s_heart_B.idx_data[n] = idx4[nTail];
          c1_PP_s_heart_B.b_x_data[n] = c1_PP_s_heart_B.x4[nTail];
        }
      }

      if (vwork_size_idx_0 > 1) {
        if (0 <= static_cast<uint8_T>(vwork_size_idx_0) - 1) {
          memset(&c1_PP_s_heart_B.iwork_data[0], 0, static_cast<uint8_T>
                 (vwork_size_idx_0) * sizeof(int32_T));
        }

        if (0 <= vwork_size_idx_0 - 1) {
          memset(&c1_PP_s_heart_B.vwork_data[0], 0, vwork_size_idx_0 * sizeof
                 (real_T));
        }

        nPairs = vwork_size_idx_0 >> 2;
        n = 4;
        while (nPairs > 1) {
          if ((nPairs & 1U) != 0U) {
            nPairs--;
            ib = n * nPairs;
            nTail = vwork_size_idx_0 - ib;
            if (nTail > n) {
              c1_PP_s_heart_merge(c1_PP_s_heart_B.idx_data,
                                  c1_PP_s_heart_B.b_x_data, ib, n, nTail - n,
                                  c1_PP_s_heart_B.iwork_data,
                                  c1_PP_s_heart_B.vwork_data);
            }
          }

          ib = n << 1;
          nPairs >>= 1;
          for (nTail = 0; nTail < nPairs; nTail++) {
            c1_PP_s_heart_merge(c1_PP_s_heart_B.idx_data,
                                c1_PP_s_heart_B.b_x_data, nTail * ib, n, n,
                                c1_PP_s_heart_B.iwork_data,
                                c1_PP_s_heart_B.vwork_data);
          }

          n = ib;
        }

        if (vwork_size_idx_0 > n) {
          c1_PP_s_heart_merge(c1_PP_s_heart_B.idx_data, c1_PP_s_heart_B.b_x_data,
                              0, n, vwork_size_idx_0 - n,
                              c1_PP_s_heart_B.iwork_data,
                              c1_PP_s_heart_B.vwork_data);
        }
      }
    }

    if (0 <= vwork_size_idx_0 - 1) {
      memcpy(&c1_PP_s_heart_B.vwork_data[0], &c1_PP_s_heart_B.b_x_data[0],
             vwork_size_idx_0 * sizeof(real_T));
    }

    for (n = 0; n <= b; n++) {
      x_data[c1_PP_s_heart_B.dim + n * vstride] = c1_PP_s_heart_B.b_x_data[n];
    }

    c1_PP_s_heart_B.dim++;
  }
}

// Function for MATLAB Function: '<S14>/ Extract Goal'
static real_T c1_PP__skip_to_last_equal_value(int32_T *k, const real_T x[94])
{
  real_T xk;
  int32_T exponent;
  boolean_T exitg1;
  xk = x[*k - 1];
  exitg1 = false;
  while ((!exitg1) && (*k < 94)) {
    real_T absx;
    boolean_T p;
    absx = fabs(xk / 2.0);
    if ((!rtIsInf(absx)) && (!rtIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &exponent);
        absx = ldexp(1.0, exponent - 53);
      }
    } else {
      absx = (rtNaN);
    }

    if (fabs(xk - x[*k]) < absx) {
      p = true;
    } else if (rtIsInf(x[*k])) {
      if (rtIsInf(xk)) {
        p = ((x[*k] > 0.0) == (xk > 0.0));
      } else {
        p = false;
      }
    } else {
      p = false;
    }

    if (p) {
      (*k)++;
    } else {
      exitg1 = true;
    }
  }

  return xk;
}

// Function for MATLAB Function: '<S14>/ Extract Goal'
static void c1_PP_s_heart_do_vectors(const real_T b_data[], const int32_T
  *b_size, real_T c_data[], int32_T c_size[2], int32_T ia_data[], int32_T
  *ia_size, int32_T *ib_size)
{
  int32_T b_exponent;
  int32_T b_ialast;
  int32_T exponent;
  int32_T iafirst;
  int32_T ialast;
  int32_T iblast;
  int32_T nc;
  int32_T nia;
  c_size[0] = 1;
  *ib_size = 0;
  nc = 0;
  nia = -1;
  iafirst = 0;
  ialast = 1;
  iblast = 1;
  while ((ialast <= 94) && (iblast <= *b_size)) {
    real_T b_absx;
    boolean_T c_p;
    boolean_T exitg1;
    b_ialast = ialast;
    for (ialast = 0; ialast < 94; ialast++) {
      c1_PP_s_heart_B.dv[ialast] = static_cast<real_T>(ialast) + 1.0;
    }

    c1_PP_s_heart_B.b_ak = c1_PP__skip_to_last_equal_value(&b_ialast,
      c1_PP_s_heart_B.dv);
    ialast = b_ialast;
    c1_PP_s_heart_B.bk = b_data[iblast - 1];
    exitg1 = false;
    while ((!exitg1) && (iblast < *b_size)) {
      b_absx = fabs(c1_PP_s_heart_B.bk / 2.0);
      if ((!rtIsInf(b_absx)) && (!rtIsNaN(b_absx))) {
        if (b_absx <= 2.2250738585072014E-308) {
          b_absx = 4.94065645841247E-324;
        } else {
          frexp(b_absx, &b_exponent);
          b_absx = ldexp(1.0, b_exponent - 53);
        }
      } else {
        b_absx = (rtNaN);
      }

      if (fabs(c1_PP_s_heart_B.bk - b_data[iblast]) < b_absx) {
        c_p = true;
      } else if (rtIsInf(b_data[iblast])) {
        if (rtIsInf(c1_PP_s_heart_B.bk)) {
          c_p = ((b_data[iblast] > 0.0) == (c1_PP_s_heart_B.bk > 0.0));
        } else {
          c_p = false;
        }
      } else {
        c_p = false;
      }

      if (c_p) {
        iblast++;
      } else {
        exitg1 = true;
      }
    }

    b_absx = fabs(c1_PP_s_heart_B.bk / 2.0);
    if ((!rtIsInf(b_absx)) && (!rtIsNaN(b_absx))) {
      if (b_absx <= 2.2250738585072014E-308) {
        b_absx = 4.94065645841247E-324;
      } else {
        frexp(b_absx, &exponent);
        b_absx = ldexp(1.0, exponent - 53);
      }
    } else {
      b_absx = (rtNaN);
    }

    if ((fabs(c1_PP_s_heart_B.bk - c1_PP_s_heart_B.b_ak) < b_absx) || (rtIsInf
         (c1_PP_s_heart_B.b_ak) && (rtIsInf(c1_PP_s_heart_B.bk) &&
          ((c1_PP_s_heart_B.b_ak > 0.0) == (c1_PP_s_heart_B.bk > 0.0))))) {
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast++;
    } else {
      if (rtIsNaN(c1_PP_s_heart_B.bk)) {
        c_p = !rtIsNaN(c1_PP_s_heart_B.b_ak);
      } else {
        c_p = ((!rtIsNaN(c1_PP_s_heart_B.b_ak)) && (c1_PP_s_heart_B.b_ak <
                c1_PP_s_heart_B.bk));
      }

      if (c_p) {
        nc++;
        nia++;
        c_data[nc - 1] = c1_PP_s_heart_B.b_ak;
        ia_data[nia] = iafirst + 1;
        ialast = b_ialast + 1;
        iafirst = b_ialast;
      } else {
        iblast++;
      }
    }
  }

  while (ialast <= 94) {
    iblast = ialast;
    for (ialast = 0; ialast < 94; ialast++) {
      c1_PP_s_heart_B.dv[ialast] = static_cast<real_T>(ialast) + 1.0;
    }

    c1_PP_s_heart_B.b_ak = c1_PP__skip_to_last_equal_value(&iblast,
      c1_PP_s_heart_B.dv);
    nc++;
    nia++;
    c_data[nc - 1] = c1_PP_s_heart_B.b_ak;
    ia_data[nia] = iafirst + 1;
    ialast = iblast + 1;
    iafirst = iblast;
  }

  if (1 > nia + 1) {
    nia = -1;
  }

  *ia_size = nia + 1;
  if (1 > nc) {
    c_size[1] = 0;
  } else {
    c_size[1] = nc;
  }
}

// Model step function
void c1_PP_s_heart_step(void)
{
  boolean_T mask1;
  boolean_T mask2;
  boolean_T searchFlag;
  static const real_T wp1[16] = { 0.3, 1.0, 1.7, 1.7, 1.7, 1.0, 0.3, 0.3, 0.3,
    0.3, 0.3, 1.0, 1.7, 1.7, 1.7, 1.0 };

  // MATLAB Function: '<Root>/MATLAB Function1'
  for (c1_PP_s_heart_B.ii = 0; c1_PP_s_heart_B.ii < 26; c1_PP_s_heart_B.ii++) {
    c1_PP_s_heart_B.dist = static_cast<real_T>(c1_PP_s_heart_B.ii) / 4.0;
    c1_PP_s_heart_B.x[c1_PP_s_heart_B.ii] = rt_powd_snf(sin(c1_PP_s_heart_B.dist),
      3.0) * 16.0 * 0.05625 + 1.0;
    c1_PP_s_heart_B.y[c1_PP_s_heart_B.ii] = (((cos(c1_PP_s_heart_B.dist) * 13.0
      - cos(static_cast<real_T>(c1_PP_s_heart_B.ii) / 2.0) * 5.0) - cos(3.0 *
      static_cast<real_T>(c1_PP_s_heart_B.ii) / 4.0) * 2.0) - cos(static_cast<
      real_T>(c1_PP_s_heart_B.ii))) * 0.05625 + 1.0;
  }

  for (c1_PP_s_heart_B.ii = 0; c1_PP_s_heart_B.ii < 2; c1_PP_s_heart_B.ii++) {
    for (c1_PP_s_heart_B.idx = 0; c1_PP_s_heart_B.idx < 8; c1_PP_s_heart_B.idx++)
    {
      c1_PP_s_heart_B.dist = wp1[(c1_PP_s_heart_B.ii << 3) + c1_PP_s_heart_B.idx];
      c1_PP_s_heart_B.jj = 94 * c1_PP_s_heart_B.ii + c1_PP_s_heart_B.idx;
      c1_PP_s_heart_B.z[c1_PP_s_heart_B.jj] = c1_PP_s_heart_B.dist;
      c1_PP_s_heart_B.z[c1_PP_s_heart_B.jj + 8] = c1_PP_s_heart_B.dist;
    }
  }

  for (c1_PP_s_heart_B.ii = 0; c1_PP_s_heart_B.ii < 26; c1_PP_s_heart_B.ii++) {
    c1_PP_s_heart_B.dist = c1_PP_s_heart_B.y[c1_PP_s_heart_B.ii];
    c1_PP_s_heart_B.minDistance = c1_PP_s_heart_B.x[c1_PP_s_heart_B.ii];
    c1_PP_s_heart_B.z[c1_PP_s_heart_B.ii + 16] = c1_PP_s_heart_B.minDistance;
    c1_PP_s_heart_B.z[c1_PP_s_heart_B.ii + 42] = c1_PP_s_heart_B.minDistance;
    c1_PP_s_heart_B.z[c1_PP_s_heart_B.ii + 68] = c1_PP_s_heart_B.minDistance;
    c1_PP_s_heart_B.z[c1_PP_s_heart_B.ii + 110] = c1_PP_s_heart_B.dist;
    c1_PP_s_heart_B.z[c1_PP_s_heart_B.ii + 136] = c1_PP_s_heart_B.dist;
    c1_PP_s_heart_B.z[c1_PP_s_heart_B.ii + 162] = c1_PP_s_heart_B.dist;
  }

  // End of MATLAB Function: '<Root>/MATLAB Function1'

  // Outputs for Atomic SubSystem: '<S4>/Subscribe'
  // MATLABSystem: '<S7>/SourceBlock' incorporates:
  //   Inport: '<S8>/In1'

  searchFlag = Sub_c1_PP_s_heart_506.getLatestMessage
    (&c1_PP_s_heart_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S8>/Enable'

  if (searchFlag) {
    c1_PP_s_heart_B.In1 = c1_PP_s_heart_B.b_varargout_2;
  }

  // End of Outputs for SubSystem: '<S7>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S4>/Subscribe'

  // MATLAB Function: '<S4>/Conversion'
  c1_PP_s_heart_B.lookaheadIdx = 1.0 / sqrt
    (((c1_PP_s_heart_B.In1.Pose.Pose.Orientation.W *
       c1_PP_s_heart_B.In1.Pose.Pose.Orientation.W +
       c1_PP_s_heart_B.In1.Pose.Pose.Orientation.X *
       c1_PP_s_heart_B.In1.Pose.Pose.Orientation.X) +
      c1_PP_s_heart_B.In1.Pose.Pose.Orientation.Y *
      c1_PP_s_heart_B.In1.Pose.Pose.Orientation.Y) +
     c1_PP_s_heart_B.In1.Pose.Pose.Orientation.Z *
     c1_PP_s_heart_B.In1.Pose.Pose.Orientation.Z);
  c1_PP_s_heart_B.dist = c1_PP_s_heart_B.In1.Pose.Pose.Orientation.W *
    c1_PP_s_heart_B.lookaheadIdx;
  c1_PP_s_heart_B.minDistance = c1_PP_s_heart_B.In1.Pose.Pose.Orientation.X *
    c1_PP_s_heart_B.lookaheadIdx;
  c1_PP_s_heart_B.lookaheadEndPt_idx_1 =
    c1_PP_s_heart_B.In1.Pose.Pose.Orientation.Y * c1_PP_s_heart_B.lookaheadIdx;
  c1_PP_s_heart_B.lookaheadIdx *= c1_PP_s_heart_B.In1.Pose.Pose.Orientation.Z;
  c1_PP_s_heart_B.aSinInput = (c1_PP_s_heart_B.minDistance *
    c1_PP_s_heart_B.lookaheadIdx - c1_PP_s_heart_B.dist *
    c1_PP_s_heart_B.lookaheadEndPt_idx_1) * -2.0;
  mask1 = (c1_PP_s_heart_B.aSinInput >= 0.99999999999999778);
  mask2 = (c1_PP_s_heart_B.aSinInput <= -0.99999999999999778);
  if (c1_PP_s_heart_B.aSinInput >= 0.99999999999999778) {
    c1_PP_s_heart_B.aSinInput = 1.0;
  }

  if (mask2) {
    c1_PP_s_heart_B.aSinInput = -1.0;
  }

  c1_PP_s_heart_B.eul_idx_0 = rt_atan2d_snf((c1_PP_s_heart_B.minDistance *
    c1_PP_s_heart_B.lookaheadEndPt_idx_1 + c1_PP_s_heart_B.dist *
    c1_PP_s_heart_B.lookaheadIdx) * 2.0, ((c1_PP_s_heart_B.dist *
    c1_PP_s_heart_B.dist + c1_PP_s_heart_B.minDistance *
    c1_PP_s_heart_B.minDistance) - c1_PP_s_heart_B.lookaheadEndPt_idx_1 *
    c1_PP_s_heart_B.lookaheadEndPt_idx_1) - c1_PP_s_heart_B.lookaheadIdx *
    c1_PP_s_heart_B.lookaheadIdx);
  c1_PP_s_heart_B.ii = 0;
  if (mask1 || mask2) {
    c1_PP_s_heart_B.ii = 1;
  }

  if (0 <= c1_PP_s_heart_B.ii - 1) {
    c1_PP_s_heart_B.x_data_idx_0 = c1_PP_s_heart_B.aSinInput;
  }

  c1_PP_s_heart_B.idx = 0;
  while (c1_PP_s_heart_B.idx <= c1_PP_s_heart_B.ii - 1) {
    if (c1_PP_s_heart_B.x_data_idx_0 < 0.0) {
      c1_PP_s_heart_B.x_data_idx_0 = -1.0;
    } else if (c1_PP_s_heart_B.x_data_idx_0 > 0.0) {
      c1_PP_s_heart_B.x_data_idx_0 = 1.0;
    } else if (c1_PP_s_heart_B.x_data_idx_0 == 0.0) {
      c1_PP_s_heart_B.x_data_idx_0 = 0.0;
    } else {
      c1_PP_s_heart_B.x_data_idx_0 = (rtNaN);
    }

    c1_PP_s_heart_B.idx = 1;
  }

  c1_PP_s_heart_B.idx = 0;
  if (mask1 || mask2) {
    c1_PP_s_heart_B.idx = 1;
  }

  if (0 <= static_cast<int8_T>(c1_PP_s_heart_B.idx) - 1) {
    c1_PP_s_heart_B.d_data_idx_0 = rt_atan2d_snf(c1_PP_s_heart_B.minDistance,
      c1_PP_s_heart_B.dist);
  }

  if (0 <= c1_PP_s_heart_B.ii - 1) {
    c1_PP_s_heart_B.eul_idx_0 = -c1_PP_s_heart_B.x_data_idx_0 * 2.0 *
      c1_PP_s_heart_B.d_data_idx_0;
  }

  // Outputs for Enabled SubSystem: '<S2>/Command Velocity Publisher' incorporates:
  //   EnablePort: '<S5>/Enable'

  // Outputs for Enabled SubSystem: '<Root>/controller1' incorporates:
  //   EnablePort: '<S3>/Enable'

  // Outputs for Atomic SubSystem: '<S4>/Subscribe'
  // MATLABSystem: '<S7>/SourceBlock'
  if (searchFlag) {
    boolean_T exitg1;

    // SignalConversion generated from: '<S3>/Pure Pursuit2' incorporates:
    //   MATLAB Function: '<S4>/Conversion'

    c1_PP_s_heart_B.TmpSignalConversionAtPurePu[0] =
      c1_PP_s_heart_B.In1.Pose.Pose.Position.X;
    c1_PP_s_heart_B.TmpSignalConversionAtPurePu[1] =
      c1_PP_s_heart_B.In1.Pose.Pose.Position.Y;
    c1_PP_s_heart_B.TmpSignalConversionAtPurePu[2] = c1_PP_s_heart_B.eul_idx_0;

    // MATLABSystem: '<S3>/Pure Pursuit2' incorporates:
    //   MATLAB Function: '<S4>/Conversion'
    //   SignalConversion generated from: '<S3>/Pure Pursuit2'

    if (c1_PP_s_heart_DW.obj_a.DesiredLinearVelocity !=
        c1_PP_s_heart_P.desired_v) {
      c1_PP_s_heart_DW.obj_a.DesiredLinearVelocity = c1_PP_s_heart_P.desired_v;
    }

    if (c1_PP_s_heart_DW.obj_a.MaxAngularVelocity != c1_PP_s_heart_P.desired_w)
    {
      c1_PP_s_heart_DW.obj_a.MaxAngularVelocity = c1_PP_s_heart_P.desired_w;
    }

    if (c1_PP_s_heart_DW.obj_a.LookaheadDistance !=
        c1_PP_s_heart_P.desired_lookahead) {
      c1_PP_s_heart_DW.obj_a.LookaheadDistance =
        c1_PP_s_heart_P.desired_lookahead;
    }

    searchFlag = false;
    mask1 = true;
    c1_PP_s_heart_B.ii = 0;
    exitg1 = false;
    while ((!exitg1) && (c1_PP_s_heart_B.ii < 188)) {
      if ((c1_PP_s_heart_DW.obj_a.WaypointsInternal[c1_PP_s_heart_B.ii] ==
           c1_PP_s_heart_B.z[c1_PP_s_heart_B.ii]) || (rtIsNaN
           (c1_PP_s_heart_DW.obj_a.WaypointsInternal[c1_PP_s_heart_B.ii]) &&
           rtIsNaN(c1_PP_s_heart_B.z[c1_PP_s_heart_B.ii]))) {
        c1_PP_s_heart_B.ii++;
      } else {
        mask1 = false;
        exitg1 = true;
      }
    }

    if (mask1) {
      searchFlag = true;
    }

    if (!searchFlag) {
      memcpy(&c1_PP_s_heart_DW.obj_a.WaypointsInternal[0], &c1_PP_s_heart_B.z[0],
             188U * sizeof(real_T));
      c1_PP_s_heart_DW.obj_a.ProjectionLineIndex = 0.0;
    }

    for (c1_PP_s_heart_B.ii = 0; c1_PP_s_heart_B.ii < 188; c1_PP_s_heart_B.ii++)
    {
      c1_PP_s_heart_B.b[c1_PP_s_heart_B.ii] = !rtIsNaN
        (c1_PP_s_heart_B.z[c1_PP_s_heart_B.ii]);
    }

    c1_PP_s_heart_B.ii = 0;
    for (c1_PP_s_heart_B.idx = 0; c1_PP_s_heart_B.idx < 94; c1_PP_s_heart_B.idx
         ++) {
      if (c1_PP_s_heart_B.b[c1_PP_s_heart_B.idx] &&
          c1_PP_s_heart_B.b[c1_PP_s_heart_B.idx + 94]) {
        c1_PP_s_heart_B.ii++;
      }
    }

    c1_PP_s_heart_B.f_size = c1_PP_s_heart_B.ii;
    c1_PP_s_heart_B.idx = 0;
    for (c1_PP_s_heart_B.ii = 0; c1_PP_s_heart_B.ii < 94; c1_PP_s_heart_B.ii++)
    {
      if (c1_PP_s_heart_B.b[c1_PP_s_heart_B.ii] &&
          c1_PP_s_heart_B.b[c1_PP_s_heart_B.ii + 94]) {
        c1_PP_s_heart_B.f_data[c1_PP_s_heart_B.idx] = c1_PP_s_heart_B.ii + 1;
        c1_PP_s_heart_B.idx++;
      }
    }

    c1_PP_s_heart_B.waypoints_size_idx_0 = c1_PP_s_heart_B.f_size;
    c1_PP_s_heart_B.jj = c1_PP_s_heart_B.f_size;
    for (c1_PP_s_heart_B.ii = 0; c1_PP_s_heart_B.ii < 2; c1_PP_s_heart_B.ii++) {
      for (c1_PP_s_heart_B.idx = 0; c1_PP_s_heart_B.idx < c1_PP_s_heart_B.jj;
           c1_PP_s_heart_B.idx++) {
        c1_PP_s_heart_B.waypoints_data[c1_PP_s_heart_B.idx +
          c1_PP_s_heart_B.waypoints_size_idx_0 * c1_PP_s_heart_B.ii] =
          c1_PP_s_heart_B.z[(94 * c1_PP_s_heart_B.ii +
                             c1_PP_s_heart_B.f_data[c1_PP_s_heart_B.idx]) - 1];
      }
    }

    if (c1_PP_s_heart_B.f_size != 0) {
      searchFlag = false;
      if (c1_PP_s_heart_DW.obj_a.ProjectionLineIndex == 0.0) {
        searchFlag = true;
        c1_PP_s_heart_DW.obj_a.ProjectionPoint[0] =
          c1_PP_s_heart_B.waypoints_data[0];
        c1_PP_s_heart_DW.obj_a.ProjectionPoint[1] =
          c1_PP_s_heart_B.waypoints_data[c1_PP_s_heart_B.f_size];
        c1_PP_s_heart_DW.obj_a.ProjectionLineIndex = 1.0;
      }

      if (c1_PP_s_heart_B.f_size == 1) {
        c1_PP_s_heart_B.dist = c1_PP_s_heart_B.waypoints_data[0];
        c1_PP_s_heart_DW.obj_a.ProjectionPoint[0] = c1_PP_s_heart_B.dist;
        c1_PP_s_heart_B.minDistance =
          c1_PP_s_heart_B.waypoints_data[c1_PP_s_heart_B.f_size];
        c1_PP_s_heart_DW.obj_a.ProjectionPoint[1] = c1_PP_s_heart_B.minDistance;
        c1_PP_s_heart_DW.obj_a.LookaheadPoint[0] = c1_PP_s_heart_B.dist;
        c1_PP_s_heart_DW.obj_a.LookaheadPoint[1] = c1_PP_s_heart_B.minDistance;
      } else {
        c1_PP_s_heart_B.waypoints[0] = c1_PP_s_heart_B.waypoints_data[
          static_cast<int32_T>(c1_PP_s_heart_DW.obj_a.ProjectionLineIndex + 1.0)
          - 1];
        c1_PP_s_heart_B.waypoints[1] = c1_PP_s_heart_B.waypoints_data[(
          static_cast<int32_T>(c1_PP_s_heart_DW.obj_a.ProjectionLineIndex + 1.0)
          + c1_PP_s_heart_B.f_size) - 1];
        for (c1_PP_s_heart_B.i = 0; c1_PP_s_heart_B.i < 2; c1_PP_s_heart_B.i++)
        {
          c1_PP_s_heart_B.lookaheadStartPt[c1_PP_s_heart_B.i] =
            c1_PP_s_heart_DW.obj_a.ProjectionPoint[c1_PP_s_heart_B.i];
        }

        c1_PP_s_hear_closestPointOnLine(c1_PP_s_heart_B.lookaheadStartPt,
          c1_PP_s_heart_B.waypoints,
          &c1_PP_s_heart_B.TmpSignalConversionAtPurePu[0],
          c1_PP_s_heart_DW.obj_a.ProjectionPoint, &c1_PP_s_heart_B.minDistance);
        c1_PP_s_heart_B.lookaheadStartPt[0] =
          c1_PP_s_heart_DW.obj_a.ProjectionPoint[0] -
          c1_PP_s_heart_B.waypoints_data[static_cast<int32_T>
          (c1_PP_s_heart_DW.obj_a.ProjectionLineIndex + 1.0) - 1];
        c1_PP_s_heart_B.lookaheadStartPt[1] =
          c1_PP_s_heart_DW.obj_a.ProjectionPoint[1] -
          c1_PP_s_heart_B.waypoints_data[(static_cast<int32_T>
          (c1_PP_s_heart_DW.obj_a.ProjectionLineIndex + 1.0) +
          c1_PP_s_heart_B.f_size) - 1];
        c1_PP_s_heart_B.dist = c1_PP_s_heart_norm
          (c1_PP_s_heart_B.lookaheadStartPt);
        c1_PP_s_heart_B.lookaheadIdx =
          c1_PP_s_heart_DW.obj_a.ProjectionLineIndex + 1.0;
        c1_PP_s_heart_B.idx = static_cast<int32_T>((1.0 -
          (c1_PP_s_heart_DW.obj_a.ProjectionLineIndex + 1.0)) +
          (static_cast<real_T>(c1_PP_s_heart_B.f_size) - 1.0)) - 1;
        c1_PP_s_heart_B.ii = 0;
        exitg1 = false;
        while ((!exitg1) && (c1_PP_s_heart_B.ii <= c1_PP_s_heart_B.idx)) {
          c1_PP_s_heart_B.lookaheadEndPt_idx_1 = c1_PP_s_heart_B.lookaheadIdx +
            static_cast<real_T>(c1_PP_s_heart_B.ii);
          if ((!searchFlag) && (c1_PP_s_heart_B.dist >
                                c1_PP_s_heart_DW.obj_a.LookaheadDistance)) {
            exitg1 = true;
          } else {
            c1_PP_s_heart_B.aSinInput = c1_PP_s_heart_B.waypoints_data[
              static_cast<int32_T>(c1_PP_s_heart_B.lookaheadEndPt_idx_1) - 1];
            c1_PP_s_heart_B.x_data_idx_0 = c1_PP_s_heart_B.waypoints_data[
              static_cast<int32_T>(c1_PP_s_heart_B.lookaheadEndPt_idx_1 + 1.0) -
              1];
            c1_PP_s_heart_B.waypoints[0] = c1_PP_s_heart_B.aSinInput -
              c1_PP_s_heart_B.x_data_idx_0;
            c1_PP_s_heart_B.waypoints_c[0] = c1_PP_s_heart_B.aSinInput;
            c1_PP_s_heart_B.waypoints_k[0] = c1_PP_s_heart_B.x_data_idx_0;
            c1_PP_s_heart_B.aSinInput = c1_PP_s_heart_B.waypoints_data[(
              static_cast<int32_T>(c1_PP_s_heart_B.lookaheadEndPt_idx_1) +
              c1_PP_s_heart_B.waypoints_size_idx_0) - 1];
            c1_PP_s_heart_B.x_data_idx_0 = c1_PP_s_heart_B.waypoints_data[(
              static_cast<int32_T>(c1_PP_s_heart_B.lookaheadEndPt_idx_1 + 1.0) +
              c1_PP_s_heart_B.waypoints_size_idx_0) - 1];
            c1_PP_s_heart_B.waypoints[1] = c1_PP_s_heart_B.aSinInput -
              c1_PP_s_heart_B.x_data_idx_0;
            c1_PP_s_heart_B.waypoints_c[1] = c1_PP_s_heart_B.aSinInput;
            c1_PP_s_heart_B.waypoints_k[1] = c1_PP_s_heart_B.x_data_idx_0;
            c1_PP_s_heart_B.dist += c1_PP_s_heart_norm(c1_PP_s_heart_B.waypoints);
            c1_PP_s_hear_closestPointOnLine(c1_PP_s_heart_B.waypoints_c,
              c1_PP_s_heart_B.waypoints_k,
              &c1_PP_s_heart_B.TmpSignalConversionAtPurePu[0],
              c1_PP_s_heart_B.lookaheadStartPt, &c1_PP_s_heart_B.aSinInput);
            if (c1_PP_s_heart_B.aSinInput < c1_PP_s_heart_B.minDistance) {
              c1_PP_s_heart_B.minDistance = c1_PP_s_heart_B.aSinInput;
              c1_PP_s_heart_DW.obj_a.ProjectionPoint[0] =
                c1_PP_s_heart_B.lookaheadStartPt[0];
              c1_PP_s_heart_DW.obj_a.ProjectionPoint[1] =
                c1_PP_s_heart_B.lookaheadStartPt[1];
              c1_PP_s_heart_DW.obj_a.ProjectionLineIndex =
                c1_PP_s_heart_B.lookaheadEndPt_idx_1;
            }

            c1_PP_s_heart_B.ii++;
          }
        }

        c1_PP_s_heart_B.minDistance = c1_PP_s_heart_B.waypoints_data[
          static_cast<int32_T>(c1_PP_s_heart_DW.obj_a.ProjectionLineIndex + 1.0)
          - 1];
        c1_PP_s_heart_B.lookaheadStartPt[0] =
          c1_PP_s_heart_DW.obj_a.ProjectionPoint[0] -
          c1_PP_s_heart_B.minDistance;
        c1_PP_s_heart_B.lookaheadEndPt_idx_1 = c1_PP_s_heart_B.waypoints_data[(
          static_cast<int32_T>(c1_PP_s_heart_DW.obj_a.ProjectionLineIndex + 1.0)
          + c1_PP_s_heart_B.f_size) - 1];
        c1_PP_s_heart_B.lookaheadStartPt[1] =
          c1_PP_s_heart_DW.obj_a.ProjectionPoint[1] -
          c1_PP_s_heart_B.lookaheadEndPt_idx_1;
        c1_PP_s_heart_B.dist = c1_PP_s_heart_norm
          (c1_PP_s_heart_B.lookaheadStartPt);
        c1_PP_s_heart_B.lookaheadStartPt[0] =
          c1_PP_s_heart_DW.obj_a.ProjectionPoint[0];
        c1_PP_s_heart_B.lookaheadStartPt[1] =
          c1_PP_s_heart_DW.obj_a.ProjectionPoint[1];
        c1_PP_s_heart_B.aSinInput = c1_PP_s_heart_B.dist -
          c1_PP_s_heart_DW.obj_a.LookaheadDistance;
        c1_PP_s_heart_B.lookaheadIdx =
          c1_PP_s_heart_DW.obj_a.ProjectionLineIndex;
        while ((c1_PP_s_heart_B.aSinInput < 0.0) &&
               (c1_PP_s_heart_B.lookaheadIdx < static_cast<real_T>
                (c1_PP_s_heart_B.f_size) - 1.0)) {
          c1_PP_s_heart_B.lookaheadIdx++;
          c1_PP_s_heart_B.aSinInput = c1_PP_s_heart_B.waypoints_data[
            static_cast<int32_T>(c1_PP_s_heart_B.lookaheadIdx) - 1];
          c1_PP_s_heart_B.lookaheadStartPt[0] = c1_PP_s_heart_B.aSinInput;
          c1_PP_s_heart_B.lookaheadEndPt_idx_1 = c1_PP_s_heart_B.waypoints_data[
            static_cast<int32_T>(c1_PP_s_heart_B.lookaheadIdx + 1.0) - 1];
          c1_PP_s_heart_B.waypoints[0] = c1_PP_s_heart_B.aSinInput -
            c1_PP_s_heart_B.lookaheadEndPt_idx_1;
          c1_PP_s_heart_B.minDistance = c1_PP_s_heart_B.lookaheadEndPt_idx_1;
          c1_PP_s_heart_B.aSinInput = c1_PP_s_heart_B.waypoints_data[(
            static_cast<int32_T>(c1_PP_s_heart_B.lookaheadIdx) +
            c1_PP_s_heart_B.waypoints_size_idx_0) - 1];
          c1_PP_s_heart_B.lookaheadStartPt[1] = c1_PP_s_heart_B.aSinInput;
          c1_PP_s_heart_B.lookaheadEndPt_idx_1 = c1_PP_s_heart_B.waypoints_data
            [(static_cast<int32_T>(c1_PP_s_heart_B.lookaheadIdx + 1.0) +
              c1_PP_s_heart_B.waypoints_size_idx_0) - 1];
          c1_PP_s_heart_B.waypoints[1] = c1_PP_s_heart_B.aSinInput -
            c1_PP_s_heart_B.lookaheadEndPt_idx_1;
          c1_PP_s_heart_B.dist += c1_PP_s_heart_norm(c1_PP_s_heart_B.waypoints);
          c1_PP_s_heart_B.aSinInput = c1_PP_s_heart_B.dist -
            c1_PP_s_heart_DW.obj_a.LookaheadDistance;
        }

        c1_PP_s_heart_B.waypoints[0] = c1_PP_s_heart_B.lookaheadStartPt[0] -
          c1_PP_s_heart_B.minDistance;
        c1_PP_s_heart_B.waypoints[1] = c1_PP_s_heart_B.lookaheadStartPt[1] -
          c1_PP_s_heart_B.lookaheadEndPt_idx_1;
        c1_PP_s_heart_B.dist = c1_PP_s_heart_B.aSinInput / c1_PP_s_heart_norm
          (c1_PP_s_heart_B.waypoints);
        if (c1_PP_s_heart_B.dist > 0.0) {
          c1_PP_s_heart_DW.obj_a.LookaheadPoint[0] = (1.0 - c1_PP_s_heart_B.dist)
            * c1_PP_s_heart_B.minDistance + c1_PP_s_heart_B.dist *
            c1_PP_s_heart_B.lookaheadStartPt[0];
          c1_PP_s_heart_DW.obj_a.LookaheadPoint[1] = (1.0 - c1_PP_s_heart_B.dist)
            * c1_PP_s_heart_B.lookaheadEndPt_idx_1 + c1_PP_s_heart_B.dist *
            c1_PP_s_heart_B.lookaheadStartPt[1];
        } else {
          c1_PP_s_heart_DW.obj_a.LookaheadPoint[0] = c1_PP_s_heart_B.minDistance;
          c1_PP_s_heart_DW.obj_a.LookaheadPoint[1] =
            c1_PP_s_heart_B.lookaheadEndPt_idx_1;
        }
      }

      c1_PP_s_heart_DW.obj_a.LastPose[0] =
        c1_PP_s_heart_B.In1.Pose.Pose.Position.X;
      c1_PP_s_heart_DW.obj_a.LastPose[1] =
        c1_PP_s_heart_B.In1.Pose.Pose.Position.Y;
      c1_PP_s_heart_DW.obj_a.LastPose[2] = c1_PP_s_heart_B.eul_idx_0;
    }

    // End of MATLABSystem: '<S3>/Pure Pursuit2'

    // MATLABSystem: '<S14>/Pure Pursuit' incorporates:
    //   MATLAB Function: '<S4>/Conversion'
    //   SignalConversion generated from: '<S3>/Pure Pursuit2'

    if (c1_PP_s_heart_DW.obj.DesiredLinearVelocity != c1_PP_s_heart_P.desired_v)
    {
      c1_PP_s_heart_DW.obj.DesiredLinearVelocity = c1_PP_s_heart_P.desired_v;
    }

    if (c1_PP_s_heart_DW.obj.MaxAngularVelocity != c1_PP_s_heart_P.desired_w) {
      c1_PP_s_heart_DW.obj.MaxAngularVelocity = c1_PP_s_heart_P.desired_w;
    }

    if (c1_PP_s_heart_DW.obj.LookaheadDistance !=
        c1_PP_s_heart_P.desired_lookahead) {
      c1_PP_s_heart_DW.obj.LookaheadDistance = c1_PP_s_heart_P.desired_lookahead;
    }

    searchFlag = false;
    mask1 = true;
    c1_PP_s_heart_B.ii = 0;
    exitg1 = false;
    while ((!exitg1) && (c1_PP_s_heart_B.ii < 188)) {
      if ((c1_PP_s_heart_DW.obj.WaypointsInternal[c1_PP_s_heart_B.ii] ==
           c1_PP_s_heart_B.z[c1_PP_s_heart_B.ii]) || (rtIsNaN
           (c1_PP_s_heart_DW.obj.WaypointsInternal[c1_PP_s_heart_B.ii]) &&
           rtIsNaN(c1_PP_s_heart_B.z[c1_PP_s_heart_B.ii]))) {
        c1_PP_s_heart_B.ii++;
      } else {
        mask1 = false;
        exitg1 = true;
      }
    }

    if (mask1) {
      searchFlag = true;
    }

    if (!searchFlag) {
      memcpy(&c1_PP_s_heart_DW.obj.WaypointsInternal[0], &c1_PP_s_heart_B.z[0],
             188U * sizeof(real_T));
      c1_PP_s_heart_DW.obj.ProjectionLineIndex = 0.0;
    }

    for (c1_PP_s_heart_B.ii = 0; c1_PP_s_heart_B.ii < 188; c1_PP_s_heart_B.ii++)
    {
      c1_PP_s_heart_B.b[c1_PP_s_heart_B.ii] = !rtIsNaN
        (c1_PP_s_heart_B.z[c1_PP_s_heart_B.ii]);
    }

    c1_PP_s_heart_B.ii = 0;
    for (c1_PP_s_heart_B.idx = 0; c1_PP_s_heart_B.idx < 94; c1_PP_s_heart_B.idx
         ++) {
      if (c1_PP_s_heart_B.b[c1_PP_s_heart_B.idx] &&
          c1_PP_s_heart_B.b[c1_PP_s_heart_B.idx + 94]) {
        c1_PP_s_heart_B.ii++;
      }
    }

    c1_PP_s_heart_B.jj = c1_PP_s_heart_B.ii;
    c1_PP_s_heart_B.idx = 0;
    for (c1_PP_s_heart_B.ii = 0; c1_PP_s_heart_B.ii < 94; c1_PP_s_heart_B.ii++)
    {
      if (c1_PP_s_heart_B.b[c1_PP_s_heart_B.ii] &&
          c1_PP_s_heart_B.b[c1_PP_s_heart_B.ii + 94]) {
        c1_PP_s_heart_B.f_data_m[c1_PP_s_heart_B.idx] = static_cast<int8_T>
          (c1_PP_s_heart_B.ii + 1);
        c1_PP_s_heart_B.idx++;
      }
    }

    for (c1_PP_s_heart_B.ii = 0; c1_PP_s_heart_B.ii < 2; c1_PP_s_heart_B.ii++) {
      for (c1_PP_s_heart_B.idx = 0; c1_PP_s_heart_B.idx < c1_PP_s_heart_B.jj;
           c1_PP_s_heart_B.idx++) {
        c1_PP_s_heart_B.waypoints_data[c1_PP_s_heart_B.idx + c1_PP_s_heart_B.jj *
          c1_PP_s_heart_B.ii] = c1_PP_s_heart_B.z[(94 * c1_PP_s_heart_B.ii +
          c1_PP_s_heart_B.f_data_m[c1_PP_s_heart_B.idx]) - 1];
      }
    }

    if (c1_PP_s_heart_B.jj == 0) {
      c1_PP_s_heart_B.lookaheadEndPt_idx_1 = 0.0;
      c1_PP_s_heart_B.minDistance = 0.0;
      c1_PP_s_heart_B.dist = 0.0;
    } else {
      searchFlag = false;
      if (c1_PP_s_heart_DW.obj.ProjectionLineIndex == 0.0) {
        searchFlag = true;
        c1_PP_s_heart_DW.obj.ProjectionPoint[0] =
          c1_PP_s_heart_B.waypoints_data[0];
        c1_PP_s_heart_DW.obj.ProjectionPoint[1] =
          c1_PP_s_heart_B.waypoints_data[c1_PP_s_heart_B.jj];
        c1_PP_s_heart_DW.obj.ProjectionLineIndex = 1.0;
      }

      if (c1_PP_s_heart_B.jj == 1) {
        c1_PP_s_heart_B.dist = c1_PP_s_heart_B.waypoints_data[0];
        c1_PP_s_heart_DW.obj.ProjectionPoint[0] = c1_PP_s_heart_B.dist;
        c1_PP_s_heart_B.minDistance =
          c1_PP_s_heart_B.waypoints_data[c1_PP_s_heart_B.jj];
        c1_PP_s_heart_DW.obj.ProjectionPoint[1] = c1_PP_s_heart_B.minDistance;
        c1_PP_s_heart_DW.obj.LookaheadPoint[0] = c1_PP_s_heart_B.dist;
        c1_PP_s_heart_DW.obj.LookaheadPoint[1] = c1_PP_s_heart_B.minDistance;
      } else {
        c1_PP_s_heart_B.waypoints[0] = c1_PP_s_heart_B.waypoints_data[
          static_cast<int32_T>(c1_PP_s_heart_DW.obj.ProjectionLineIndex + 1.0) -
          1];
        c1_PP_s_heart_B.waypoints[1] = c1_PP_s_heart_B.waypoints_data[(
          static_cast<int32_T>(c1_PP_s_heart_DW.obj.ProjectionLineIndex + 1.0) +
          c1_PP_s_heart_B.jj) - 1];
        for (c1_PP_s_heart_B.i1 = 0; c1_PP_s_heart_B.i1 < 2; c1_PP_s_heart_B.i1
             ++) {
          c1_PP_s_heart_B.lookaheadStartPt[c1_PP_s_heart_B.i1] =
            c1_PP_s_heart_DW.obj.ProjectionPoint[c1_PP_s_heart_B.i1];
        }

        c1_PP_s_hear_closestPointOnLine(c1_PP_s_heart_B.lookaheadStartPt,
          c1_PP_s_heart_B.waypoints,
          &c1_PP_s_heart_B.TmpSignalConversionAtPurePu[0],
          c1_PP_s_heart_DW.obj.ProjectionPoint, &c1_PP_s_heart_B.minDistance);
        c1_PP_s_heart_B.lookaheadStartPt[0] =
          c1_PP_s_heart_DW.obj.ProjectionPoint[0] -
          c1_PP_s_heart_B.waypoints_data[static_cast<int32_T>
          (c1_PP_s_heart_DW.obj.ProjectionLineIndex + 1.0) - 1];
        c1_PP_s_heart_B.lookaheadStartPt[1] =
          c1_PP_s_heart_DW.obj.ProjectionPoint[1] -
          c1_PP_s_heart_B.waypoints_data[(static_cast<int32_T>
          (c1_PP_s_heart_DW.obj.ProjectionLineIndex + 1.0) + c1_PP_s_heart_B.jj)
          - 1];
        c1_PP_s_heart_B.dist = c1_PP_s_heart_norm
          (c1_PP_s_heart_B.lookaheadStartPt);
        c1_PP_s_heart_B.lookaheadIdx = c1_PP_s_heart_DW.obj.ProjectionLineIndex
          + 1.0;
        c1_PP_s_heart_B.idx = static_cast<int32_T>((1.0 -
          (c1_PP_s_heart_DW.obj.ProjectionLineIndex + 1.0)) +
          (static_cast<real_T>(c1_PP_s_heart_B.jj) - 1.0)) - 1;
        c1_PP_s_heart_B.ii = 0;
        exitg1 = false;
        while ((!exitg1) && (c1_PP_s_heart_B.ii <= c1_PP_s_heart_B.idx)) {
          c1_PP_s_heart_B.lookaheadEndPt_idx_1 = c1_PP_s_heart_B.lookaheadIdx +
            static_cast<real_T>(c1_PP_s_heart_B.ii);
          if ((!searchFlag) && (c1_PP_s_heart_B.dist >
                                c1_PP_s_heart_DW.obj.LookaheadDistance)) {
            exitg1 = true;
          } else {
            c1_PP_s_heart_B.aSinInput = c1_PP_s_heart_B.waypoints_data[
              static_cast<int32_T>(c1_PP_s_heart_B.lookaheadEndPt_idx_1) - 1];
            c1_PP_s_heart_B.x_data_idx_0 = c1_PP_s_heart_B.waypoints_data[
              static_cast<int32_T>(c1_PP_s_heart_B.lookaheadEndPt_idx_1 + 1.0) -
              1];
            c1_PP_s_heart_B.waypoints[0] = c1_PP_s_heart_B.aSinInput -
              c1_PP_s_heart_B.x_data_idx_0;
            c1_PP_s_heart_B.waypoints_c[0] = c1_PP_s_heart_B.aSinInput;
            c1_PP_s_heart_B.waypoints_k[0] = c1_PP_s_heart_B.x_data_idx_0;
            c1_PP_s_heart_B.aSinInput = c1_PP_s_heart_B.waypoints_data[(
              static_cast<int32_T>(c1_PP_s_heart_B.lookaheadEndPt_idx_1) +
              c1_PP_s_heart_B.jj) - 1];
            c1_PP_s_heart_B.x_data_idx_0 = c1_PP_s_heart_B.waypoints_data[(
              static_cast<int32_T>(c1_PP_s_heart_B.lookaheadEndPt_idx_1 + 1.0) +
              c1_PP_s_heart_B.jj) - 1];
            c1_PP_s_heart_B.waypoints[1] = c1_PP_s_heart_B.aSinInput -
              c1_PP_s_heart_B.x_data_idx_0;
            c1_PP_s_heart_B.waypoints_c[1] = c1_PP_s_heart_B.aSinInput;
            c1_PP_s_heart_B.waypoints_k[1] = c1_PP_s_heart_B.x_data_idx_0;
            c1_PP_s_heart_B.dist += c1_PP_s_heart_norm(c1_PP_s_heart_B.waypoints);
            c1_PP_s_hear_closestPointOnLine(c1_PP_s_heart_B.waypoints_c,
              c1_PP_s_heart_B.waypoints_k,
              &c1_PP_s_heart_B.TmpSignalConversionAtPurePu[0],
              c1_PP_s_heart_B.lookaheadStartPt, &c1_PP_s_heart_B.aSinInput);
            if (c1_PP_s_heart_B.aSinInput < c1_PP_s_heart_B.minDistance) {
              c1_PP_s_heart_B.minDistance = c1_PP_s_heart_B.aSinInput;
              c1_PP_s_heart_DW.obj.ProjectionPoint[0] =
                c1_PP_s_heart_B.lookaheadStartPt[0];
              c1_PP_s_heart_DW.obj.ProjectionPoint[1] =
                c1_PP_s_heart_B.lookaheadStartPt[1];
              c1_PP_s_heart_DW.obj.ProjectionLineIndex =
                c1_PP_s_heart_B.lookaheadEndPt_idx_1;
            }

            c1_PP_s_heart_B.ii++;
          }
        }

        c1_PP_s_heart_B.lookaheadStartPt[0] =
          c1_PP_s_heart_DW.obj.ProjectionPoint[0] -
          c1_PP_s_heart_B.waypoints_data[static_cast<int32_T>
          (c1_PP_s_heart_DW.obj.ProjectionLineIndex + 1.0) - 1];
        c1_PP_s_heart_B.lookaheadStartPt[1] =
          c1_PP_s_heart_DW.obj.ProjectionPoint[1] -
          c1_PP_s_heart_B.waypoints_data[(static_cast<int32_T>
          (c1_PP_s_heart_DW.obj.ProjectionLineIndex + 1.0) + c1_PP_s_heart_B.jj)
          - 1];
        c1_PP_s_heart_B.dist = c1_PP_s_heart_norm
          (c1_PP_s_heart_B.lookaheadStartPt);
        c1_PP_s_heart_B.lookaheadStartPt[0] =
          c1_PP_s_heart_DW.obj.ProjectionPoint[0];
        c1_PP_s_heart_B.minDistance = c1_PP_s_heart_B.waypoints_data[
          static_cast<int32_T>(c1_PP_s_heart_DW.obj.ProjectionLineIndex + 1.0) -
          1];
        c1_PP_s_heart_B.lookaheadStartPt[1] =
          c1_PP_s_heart_DW.obj.ProjectionPoint[1];
        c1_PP_s_heart_B.lookaheadEndPt_idx_1 = c1_PP_s_heart_B.waypoints_data[(
          static_cast<int32_T>(c1_PP_s_heart_DW.obj.ProjectionLineIndex + 1.0) +
          c1_PP_s_heart_B.jj) - 1];
        c1_PP_s_heart_B.aSinInput = c1_PP_s_heart_B.dist -
          c1_PP_s_heart_DW.obj.LookaheadDistance;
        c1_PP_s_heart_B.lookaheadIdx = c1_PP_s_heart_DW.obj.ProjectionLineIndex;
        while ((c1_PP_s_heart_B.aSinInput < 0.0) &&
               (c1_PP_s_heart_B.lookaheadIdx < static_cast<real_T>
                (c1_PP_s_heart_B.jj) - 1.0)) {
          c1_PP_s_heart_B.lookaheadIdx++;
          c1_PP_s_heart_B.aSinInput = c1_PP_s_heart_B.waypoints_data[
            static_cast<int32_T>(c1_PP_s_heart_B.lookaheadIdx) - 1];
          c1_PP_s_heart_B.lookaheadStartPt[0] = c1_PP_s_heart_B.aSinInput;
          c1_PP_s_heart_B.lookaheadEndPt_idx_1 = c1_PP_s_heart_B.waypoints_data[
            static_cast<int32_T>(c1_PP_s_heart_B.lookaheadIdx + 1.0) - 1];
          c1_PP_s_heart_B.waypoints[0] = c1_PP_s_heart_B.aSinInput -
            c1_PP_s_heart_B.lookaheadEndPt_idx_1;
          c1_PP_s_heart_B.minDistance = c1_PP_s_heart_B.lookaheadEndPt_idx_1;
          c1_PP_s_heart_B.aSinInput = c1_PP_s_heart_B.waypoints_data[(
            static_cast<int32_T>(c1_PP_s_heart_B.lookaheadIdx) +
            c1_PP_s_heart_B.jj) - 1];
          c1_PP_s_heart_B.lookaheadStartPt[1] = c1_PP_s_heart_B.aSinInput;
          c1_PP_s_heart_B.lookaheadEndPt_idx_1 = c1_PP_s_heart_B.waypoints_data
            [(static_cast<int32_T>(c1_PP_s_heart_B.lookaheadIdx + 1.0) +
              c1_PP_s_heart_B.jj) - 1];
          c1_PP_s_heart_B.waypoints[1] = c1_PP_s_heart_B.aSinInput -
            c1_PP_s_heart_B.lookaheadEndPt_idx_1;
          c1_PP_s_heart_B.dist += c1_PP_s_heart_norm(c1_PP_s_heart_B.waypoints);
          c1_PP_s_heart_B.aSinInput = c1_PP_s_heart_B.dist -
            c1_PP_s_heart_DW.obj.LookaheadDistance;
        }

        c1_PP_s_heart_B.waypoints[0] = c1_PP_s_heart_B.lookaheadStartPt[0] -
          c1_PP_s_heart_B.minDistance;
        c1_PP_s_heart_B.waypoints[1] = c1_PP_s_heart_B.lookaheadStartPt[1] -
          c1_PP_s_heart_B.lookaheadEndPt_idx_1;
        c1_PP_s_heart_B.dist = c1_PP_s_heart_B.aSinInput / c1_PP_s_heart_norm
          (c1_PP_s_heart_B.waypoints);
        if (c1_PP_s_heart_B.dist > 0.0) {
          c1_PP_s_heart_DW.obj.LookaheadPoint[0] = (1.0 - c1_PP_s_heart_B.dist) *
            c1_PP_s_heart_B.minDistance + c1_PP_s_heart_B.dist *
            c1_PP_s_heart_B.lookaheadStartPt[0];
          c1_PP_s_heart_DW.obj.LookaheadPoint[1] = (1.0 - c1_PP_s_heart_B.dist) *
            c1_PP_s_heart_B.lookaheadEndPt_idx_1 + c1_PP_s_heart_B.dist *
            c1_PP_s_heart_B.lookaheadStartPt[1];
        } else {
          c1_PP_s_heart_DW.obj.LookaheadPoint[0] = c1_PP_s_heart_B.minDistance;
          c1_PP_s_heart_DW.obj.LookaheadPoint[1] =
            c1_PP_s_heart_B.lookaheadEndPt_idx_1;
        }
      }

      c1_PP_s_heart_B.dist = rt_atan2d_snf(c1_PP_s_heart_DW.obj.LookaheadPoint[1]
        - c1_PP_s_heart_B.In1.Pose.Pose.Position.Y,
        c1_PP_s_heart_DW.obj.LookaheadPoint[0] -
        c1_PP_s_heart_B.In1.Pose.Pose.Position.X) - c1_PP_s_heart_B.eul_idx_0;
      if (fabs(c1_PP_s_heart_B.dist) > 3.1415926535897931) {
        if (rtIsNaN(c1_PP_s_heart_B.dist + 3.1415926535897931) || rtIsInf
            (c1_PP_s_heart_B.dist + 3.1415926535897931)) {
          c1_PP_s_heart_B.lookaheadIdx = (rtNaN);
        } else if (c1_PP_s_heart_B.dist + 3.1415926535897931 == 0.0) {
          c1_PP_s_heart_B.lookaheadIdx = 0.0;
        } else {
          c1_PP_s_heart_B.lookaheadIdx = fmod(c1_PP_s_heart_B.dist +
            3.1415926535897931, 6.2831853071795862);
          searchFlag = (c1_PP_s_heart_B.lookaheadIdx == 0.0);
          if (!searchFlag) {
            c1_PP_s_heart_B.aSinInput = fabs((c1_PP_s_heart_B.dist +
              3.1415926535897931) / 6.2831853071795862);
            searchFlag = !(fabs(c1_PP_s_heart_B.aSinInput - floor
                                (c1_PP_s_heart_B.aSinInput + 0.5)) >
                           2.2204460492503131E-16 * c1_PP_s_heart_B.aSinInput);
          }

          if (searchFlag) {
            c1_PP_s_heart_B.lookaheadIdx = 0.0;
          } else if (c1_PP_s_heart_B.dist + 3.1415926535897931 < 0.0) {
            c1_PP_s_heart_B.lookaheadIdx += 6.2831853071795862;
          }
        }

        if ((c1_PP_s_heart_B.lookaheadIdx == 0.0) && (c1_PP_s_heart_B.dist +
             3.1415926535897931 > 0.0)) {
          c1_PP_s_heart_B.lookaheadIdx = 6.2831853071795862;
        }

        c1_PP_s_heart_B.dist = c1_PP_s_heart_B.lookaheadIdx - 3.1415926535897931;
      }

      c1_PP_s_heart_B.minDistance = 2.0 * sin(c1_PP_s_heart_B.dist) /
        c1_PP_s_heart_DW.obj.LookaheadDistance;
      if (fabs(fabs(c1_PP_s_heart_B.dist) - 3.1415926535897931) <
          1.4901161193847656E-8) {
        if (c1_PP_s_heart_B.minDistance < 0.0) {
          c1_PP_s_heart_B.minDistance = -1.0;
        } else if (c1_PP_s_heart_B.minDistance > 0.0) {
          c1_PP_s_heart_B.minDistance = 1.0;
        } else if (c1_PP_s_heart_B.minDistance == 0.0) {
          c1_PP_s_heart_B.minDistance = 0.0;
        } else {
          c1_PP_s_heart_B.minDistance = (rtNaN);
        }
      }

      if (fabs(c1_PP_s_heart_B.minDistance) >
          c1_PP_s_heart_DW.obj.MaxAngularVelocity) {
        if (c1_PP_s_heart_B.minDistance < 0.0) {
          c1_PP_s_heart_B.minDistance = -1.0;
        } else if (c1_PP_s_heart_B.minDistance > 0.0) {
          c1_PP_s_heart_B.minDistance = 1.0;
        } else if (c1_PP_s_heart_B.minDistance == 0.0) {
          c1_PP_s_heart_B.minDistance = 0.0;
        } else {
          c1_PP_s_heart_B.minDistance = (rtNaN);
        }

        c1_PP_s_heart_B.minDistance *= c1_PP_s_heart_DW.obj.MaxAngularVelocity;
      }

      c1_PP_s_heart_B.lookaheadEndPt_idx_1 =
        c1_PP_s_heart_DW.obj.DesiredLinearVelocity;
      c1_PP_s_heart_DW.obj.LastPose[0] =
        c1_PP_s_heart_B.In1.Pose.Pose.Position.X;
      c1_PP_s_heart_DW.obj.LastPose[1] =
        c1_PP_s_heart_B.In1.Pose.Pose.Position.Y;
      c1_PP_s_heart_DW.obj.LastPose[2] = c1_PP_s_heart_B.eul_idx_0;
      if (rtIsNaN(c1_PP_s_heart_B.dist)) {
        c1_PP_s_heart_B.dist = 0.0;
      }
    }

    // Outputs for Atomic SubSystem: '<S13>/Path Following'
    // MATLAB Function: '<S16>/Compute Angular Velocity' incorporates:
    //   Constant: '<S16>/MaxAngularVelocity'
    //   MATLABSystem: '<S14>/Pure Pursuit'

    c1_PP_s_heart_B.dist = rt_atan2d_snf(sin(c1_PP_s_heart_B.dist), cos
      (c1_PP_s_heart_B.dist));
    if (fabs(c1_PP_s_heart_B.dist) > 3.1415926535897931) {
      if (rtIsNaN(c1_PP_s_heart_B.dist + 3.1415926535897931)) {
        c1_PP_s_heart_B.lookaheadIdx = (rtNaN);
      } else if (rtIsInf(c1_PP_s_heart_B.dist + 3.1415926535897931)) {
        c1_PP_s_heart_B.lookaheadIdx = (rtNaN);
      } else if (c1_PP_s_heart_B.dist + 3.1415926535897931 == 0.0) {
        c1_PP_s_heart_B.lookaheadIdx = 0.0;
      } else {
        c1_PP_s_heart_B.lookaheadIdx = fmod(c1_PP_s_heart_B.dist +
          3.1415926535897931, 6.2831853071795862);
        searchFlag = (c1_PP_s_heart_B.lookaheadIdx == 0.0);
        if (!searchFlag) {
          c1_PP_s_heart_B.aSinInput = fabs((c1_PP_s_heart_B.dist +
            3.1415926535897931) / 6.2831853071795862);
          searchFlag = !(fabs(c1_PP_s_heart_B.aSinInput - floor
                              (c1_PP_s_heart_B.aSinInput + 0.5)) >
                         2.2204460492503131E-16 * c1_PP_s_heart_B.aSinInput);
        }

        if (searchFlag) {
          c1_PP_s_heart_B.lookaheadIdx = 0.0;
        } else if (c1_PP_s_heart_B.dist + 3.1415926535897931 < 0.0) {
          c1_PP_s_heart_B.lookaheadIdx += 6.2831853071795862;
        }
      }

      if ((c1_PP_s_heart_B.lookaheadIdx == 0.0) && (c1_PP_s_heart_B.dist +
           3.1415926535897931 > 0.0)) {
        c1_PP_s_heart_B.lookaheadIdx = 6.2831853071795862;
      }

      c1_PP_s_heart_B.dist = c1_PP_s_heart_B.lookaheadIdx - 3.1415926535897931;
    }

    c1_PP_s_heart_B.lookaheadIdx = 2.0 * sin(c1_PP_s_heart_B.dist);
    if (fabs(fabs(c1_PP_s_heart_B.dist) - 3.1415926535897931) < 1.0E-12) {
      if (c1_PP_s_heart_B.lookaheadIdx < 0.0) {
        c1_PP_s_heart_B.lookaheadIdx = -1.0;
      } else if (c1_PP_s_heart_B.lookaheadIdx > 0.0) {
        c1_PP_s_heart_B.lookaheadIdx = 1.0;
      } else if (c1_PP_s_heart_B.lookaheadIdx == 0.0) {
        c1_PP_s_heart_B.lookaheadIdx = 0.0;
      } else {
        c1_PP_s_heart_B.lookaheadIdx = (rtNaN);
      }
    }

    if (fabs(c1_PP_s_heart_B.lookaheadIdx) >
        c1_PP_s_heart_P.MaxAngularVelocity_Value) {
      if (c1_PP_s_heart_B.lookaheadIdx < 0.0) {
        c1_PP_s_heart_B.lookaheadIdx = -1.0;
      } else if (c1_PP_s_heart_B.lookaheadIdx > 0.0) {
        c1_PP_s_heart_B.lookaheadIdx = 1.0;
      } else if (c1_PP_s_heart_B.lookaheadIdx == 0.0) {
        c1_PP_s_heart_B.lookaheadIdx = 0.0;
      } else {
        c1_PP_s_heart_B.lookaheadIdx = (rtNaN);
      }

      c1_PP_s_heart_B.lookaheadIdx *= c1_PP_s_heart_P.MaxAngularVelocity_Value;
    }

    // End of MATLAB Function: '<S16>/Compute Angular Velocity'
    // End of Outputs for SubSystem: '<S13>/Path Following'

    // Logic: '<S15>/Logical Operator' incorporates:
    //   Constant: '<S12>/1'

    searchFlag = !(c1_PP_s_heart_P.u_Value != 0.0);

    // MATLAB Function: '<S14>/ Extract Goal'
    for (c1_PP_s_heart_B.ii = 0; c1_PP_s_heart_B.ii < 188; c1_PP_s_heart_B.ii++)
    {
      c1_PP_s_heart_B.b[c1_PP_s_heart_B.ii] = rtIsNaN
        (c1_PP_s_heart_B.z[c1_PP_s_heart_B.ii]);
    }

    c1_PP_s_heart_B.idx = -1;
    c1_PP_s_heart_B.ii = 1;
    c1_PP_s_heart_B.jj = 1;
    exitg1 = false;
    while ((!exitg1) && (c1_PP_s_heart_B.jj <= 2)) {
      boolean_T guard1 = false;
      guard1 = false;
      if (c1_PP_s_heart_B.b[((c1_PP_s_heart_B.jj - 1) * 94 + c1_PP_s_heart_B.ii)
          - 1]) {
        c1_PP_s_heart_B.idx++;
        c1_PP_s_heart_B.i_data[c1_PP_s_heart_B.idx] = c1_PP_s_heart_B.ii;
        if (c1_PP_s_heart_B.idx + 1 >= 188) {
          exitg1 = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1) {
        c1_PP_s_heart_B.ii++;
        if (c1_PP_s_heart_B.ii > 94) {
          c1_PP_s_heart_B.ii = 1;
          c1_PP_s_heart_B.jj++;
        }
      }
    }

    if (1 > c1_PP_s_heart_B.idx + 1) {
      c1_PP_s_heart_B.idx = -1;
    }

    c1_PP_s_heart_B.c_size = c1_PP_s_heart_B.idx + 1;
    for (c1_PP_s_heart_B.ii = 0; c1_PP_s_heart_B.ii <= c1_PP_s_heart_B.idx;
         c1_PP_s_heart_B.ii++) {
      c1_PP_s_heart_B.z[c1_PP_s_heart_B.ii] =
        c1_PP_s_heart_B.i_data[c1_PP_s_heart_B.ii];
    }

    c1_PP_s_heart_sort(c1_PP_s_heart_B.z, &c1_PP_s_heart_B.c_size);
    c1_PP_s_heart_do_vectors(c1_PP_s_heart_B.z, &c1_PP_s_heart_B.c_size,
      c1_PP_s_heart_B.ridx_data, c1_PP_s_heart_B.ridx_size,
      c1_PP_s_heart_B.f_data, &c1_PP_s_heart_B.f_size, &c1_PP_s_heart_B.ib_size);

    // End of MATLAB Function: '<S14>/ Extract Goal'

    // BusAssignment: '<S5>/Bus Assignment1' incorporates:
    //   Constant: '<S12>/0'
    //   Constant: '<S9>/Constant'
    //   Gain: '<S2>/Gain'
    //   MATLABSystem: '<S14>/Pure Pursuit'
    //   Product: '<S15>/Product'
    //   Product: '<S15>/Product1'
    //   Sum: '<S15>/Add'
    //   Sum: '<S15>/Add1'
    //   Sum: '<S16>/Subtract'

    c1_PP_s_heart_B.BusAssignment1 = c1_PP_s_heart_P.Constant_Value_l;
    c1_PP_s_heart_B.BusAssignment1.Linear.X = (c1_PP_s_heart_P.u_Value_d +
      c1_PP_s_heart_B.lookaheadEndPt_idx_1) * static_cast<real_T>(searchFlag);

    // Outputs for Atomic SubSystem: '<S13>/Path Following'
    c1_PP_s_heart_B.BusAssignment1.Angular.Z = ((c1_PP_s_heart_B.lookaheadIdx -
      c1_PP_s_heart_B.minDistance) + c1_PP_s_heart_B.minDistance) * static_cast<
      real_T>(searchFlag) * c1_PP_s_heart_P.ks;

    // End of Outputs for SubSystem: '<S13>/Path Following'

    // Outputs for Atomic SubSystem: '<S5>/Publish2'
    // MATLABSystem: '<S10>/SinkBlock'
    Pub_c1_PP_s_heart_515.publish(&c1_PP_s_heart_B.BusAssignment1);

    // End of Outputs for SubSystem: '<S5>/Publish2'
  }

  // End of Outputs for SubSystem: '<S4>/Subscribe'
  // End of Outputs for SubSystem: '<Root>/controller1'
  // End of Outputs for SubSystem: '<S2>/Command Velocity Publisher'
}

// Model initialize function
void c1_PP_s_heart_initialize(void)
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

    // SystemInitialize for Atomic SubSystem: '<S4>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S8>/Out1' incorporates:
    //   Inport: '<S8>/In1'

    c1_PP_s_heart_B.In1 = c1_PP_s_heart_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem'

    // Start for MATLABSystem: '<S7>/SourceBlock'
    c1_PP_s_heart_DW.obj_d.matlabCodegenIsDeleted = false;
    c1_PP_s_heart_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 13; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[13] = '\x00';
    Sub_c1_PP_s_heart_506.createSubscriber(&b_zeroDelimTopic[0], 51);
    c1_PP_s_heart_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S4>/Subscribe'

    // SystemInitialize for Enabled SubSystem: '<Root>/controller1'
    // Start for MATLABSystem: '<S3>/Pure Pursuit2'
    c1_PP_s_heart_DW.obj_a.DesiredLinearVelocity = c1_PP_s_heart_P.desired_v;
    c1_PP_s_heart_DW.obj_a.MaxAngularVelocity = c1_PP_s_heart_P.desired_w;
    c1_PP_s_heart_DW.obj_a.LookaheadDistance = c1_PP_s_heart_P.desired_lookahead;
    c1_PP_s_heart_DW.obj_a.isInitialized = 1;
    c1_PP_s_heart_DW.obj_a.LookaheadPoint[0] = 0.0;
    c1_PP_s_heart_DW.obj_a.LookaheadPoint[1] = 0.0;
    c1_PP_s_heart_DW.obj_a.LastPose[0] = 0.0;
    c1_PP_s_heart_DW.obj_a.LastPose[1] = 0.0;
    c1_PP_s_heart_DW.obj_a.LastPose[2] = 0.0;
    c1_PP_s_heart_DW.obj_a.ProjectionLineIndex = 0.0;

    // InitializeConditions for MATLABSystem: '<S3>/Pure Pursuit2'
    c1_PP_s_heart_DW.obj_a.LookaheadPoint[0] *= 0.0;
    c1_PP_s_heart_DW.obj_a.LookaheadPoint[1] *= 0.0;
    c1_PP_s_heart_DW.obj_a.LastPose[0] *= 0.0;
    c1_PP_s_heart_DW.obj_a.LastPose[1] *= 0.0;
    c1_PP_s_heart_DW.obj_a.LastPose[2] *= 0.0;
    c1_PP_s_heart_DW.obj_a.ProjectionPoint[0] = (rtNaN);
    c1_PP_s_heart_DW.obj_a.ProjectionPoint[1] = (rtNaN);
    c1_PP_s_heart_DW.obj_a.ProjectionLineIndex *= 0.0;

    // Start for MATLABSystem: '<S14>/Pure Pursuit'
    c1_PP_s_heart_DW.obj.DesiredLinearVelocity = c1_PP_s_heart_P.desired_v;
    c1_PP_s_heart_DW.obj.MaxAngularVelocity = c1_PP_s_heart_P.desired_w;
    c1_PP_s_heart_DW.obj.LookaheadDistance = c1_PP_s_heart_P.desired_lookahead;
    c1_PP_s_heart_DW.obj.isInitialized = 1;
    for (i = 0; i < 188; i++) {
      // Start for MATLABSystem: '<S3>/Pure Pursuit2'
      c1_PP_s_heart_DW.obj_a.WaypointsInternal[i] = (rtNaN);

      // Start for MATLABSystem: '<S14>/Pure Pursuit'
      c1_PP_s_heart_DW.obj.WaypointsInternal[i] = (rtNaN);
    }

    // Start for MATLABSystem: '<S14>/Pure Pursuit'
    c1_PP_s_heart_DW.obj.LookaheadPoint[0] = 0.0;
    c1_PP_s_heart_DW.obj.LookaheadPoint[1] = 0.0;
    c1_PP_s_heart_DW.obj.LastPose[0] = 0.0;
    c1_PP_s_heart_DW.obj.LastPose[1] = 0.0;
    c1_PP_s_heart_DW.obj.LastPose[2] = 0.0;
    c1_PP_s_heart_DW.obj.ProjectionLineIndex = 0.0;

    // InitializeConditions for MATLABSystem: '<S14>/Pure Pursuit'
    c1_PP_s_heart_DW.obj.LookaheadPoint[0] *= 0.0;
    c1_PP_s_heart_DW.obj.LookaheadPoint[1] *= 0.0;
    c1_PP_s_heart_DW.obj.LastPose[0] *= 0.0;
    c1_PP_s_heart_DW.obj.LastPose[1] *= 0.0;
    c1_PP_s_heart_DW.obj.LastPose[2] *= 0.0;
    c1_PP_s_heart_DW.obj.ProjectionPoint[0] = (rtNaN);
    c1_PP_s_heart_DW.obj.ProjectionPoint[1] = (rtNaN);
    c1_PP_s_heart_DW.obj.ProjectionLineIndex *= 0.0;

    // End of SystemInitialize for SubSystem: '<Root>/controller1'

    // SystemInitialize for Enabled SubSystem: '<S2>/Command Velocity Publisher' 
    // SystemInitialize for Atomic SubSystem: '<S5>/Publish2'
    // Start for MATLABSystem: '<S10>/SinkBlock'
    c1_PP_s_heart_DW.obj_m.matlabCodegenIsDeleted = false;
    c1_PP_s_heart_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      b_zeroDelimTopic_0[i] = tmp_0[i];
    }

    b_zeroDelimTopic_0[16] = '\x00';
    Pub_c1_PP_s_heart_515.createPublisher(&b_zeroDelimTopic_0[0], 105);
    c1_PP_s_heart_DW.obj_m.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S5>/Publish2'
    // End of SystemInitialize for SubSystem: '<S2>/Command Velocity Publisher'
  }
}

// Model terminate function
void c1_PP_s_heart_terminate(void)
{
  // Terminate for Atomic SubSystem: '<S4>/Subscribe'
  // Terminate for MATLABSystem: '<S7>/SourceBlock'
  if (!c1_PP_s_heart_DW.obj_d.matlabCodegenIsDeleted) {
    c1_PP_s_heart_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S7>/SourceBlock'
  // End of Terminate for SubSystem: '<S4>/Subscribe'

  // Terminate for Enabled SubSystem: '<S2>/Command Velocity Publisher'
  // Terminate for Atomic SubSystem: '<S5>/Publish2'
  // Terminate for MATLABSystem: '<S10>/SinkBlock'
  if (!c1_PP_s_heart_DW.obj_m.matlabCodegenIsDeleted) {
    c1_PP_s_heart_DW.obj_m.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S10>/SinkBlock'
  // End of Terminate for SubSystem: '<S5>/Publish2'
  // End of Terminate for SubSystem: '<S2>/Command Velocity Publisher'
}

//
// File trailer for generated code.
//
// [EOF]
//
