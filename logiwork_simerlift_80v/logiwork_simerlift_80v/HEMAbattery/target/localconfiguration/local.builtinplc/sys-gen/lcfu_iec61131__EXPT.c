/* Copyright (C) logi.cals GmbH. All rights reserved. */

#include <lcfu_iec61131__EXPT.h>

/*
 ** recursive function to calculate base**exp, method is divide and conquer
 ** returns 0 on overflow (over ulonglong max)
 ** does not handle singed values!
 */
static lc_uint64_t integerPow(lc_uint64_t base, lc_uint32_t exp)
{
  lc_uint64_t a;
  if (exp == 1)
  {
    return base;
  }
  a = integerPow(base, exp / 2);
  if (a == 0)
  {
    return 0;
  }
  if (a >= LC_UINT64_MAX / a)
  {
    return 0;
  }
  a *= a;

  if (exp % 2 == 0)
  {
    return a;
  }
  if (a >= LC_UINT64_MAX / base)
  {
    return 0;
  }
  return a * base;
}

/*
 ** impl for a**b for signed values, range up to maxval
 */
lc_int64_t LC_MF_EXPT_SINTEGER_IMPL(lc_uint64_t maxval, lc_int64_t in1, lc_int64_t in2, LC_TD_BOOL *pENO)
{
  lc_uint64_t underflowMaxVal = maxval / 2 + 1;
  lc_uint64_t overflowMaxVal = maxval / 2;
  lc_uint8_t isNeg = 0;
  LC_TD_BOOL localEno;
  lc_uint64_t result;

  if (pENO == NULL)
  {
    pENO = &localEno;
  }

  if ((in2 == 0) || (in1 == 1))
  {
    return 1;
  }
  if (in1 == -1)
  {
    if (in2 % 2 == 0)
    {
      return 1;
    }
    return -1;
  }
  if (in1 == 0)
  {
    if (in2 > 0)
    {
      return 0;
    }
    *pENO = LC_EL_false;
    return overflowMaxVal;
  }
  if (in2 < 0)
  {
    return 0;
  }
  if (in2 == 1)
  {
    return in1;
  }

  if (in1 == underflowMaxVal)
  {
    *pENO = LC_EL_false;
    return in1;
  }

  if (in1 < 0)
  {
    if (in2 % 2 != 0)
    {
      isNeg = 1;
    }
    in1 = -in1;
  }

  /* 2**64 is not more possible. so max exponent is 63 */
  if (in2 >= 63)
  {
    *pENO = LC_EL_false;
    if (!isNeg)
    {
      return overflowMaxVal;
    }
    /* special handling for long-long-min necessary. - else compilers change it to 0 */
    if (maxval == LC_UINT64_MAX)
    {
      return LC_INT64_MIN;
    }
    return (lc_uint64_t) (-(lc_int32_t) underflowMaxVal);
  }

  result = integerPow((lc_uint64_t) in1, (lc_uint32_t) in2);
  if (isNeg && (result > underflowMaxVal || result == 0))
  {
    *pENO = LC_EL_false;
    /* special handling for long-long-min necessary. - else compilers change it to 0 */
    if (maxval == LC_UINT64_MAX)
    {
      return LC_INT64_MIN;
    }
    return (lc_uint64_t) (-(lc_int32_t) underflowMaxVal);
  }
  if ((!isNeg) && (result > overflowMaxVal || result == 0))
  {
    *pENO = LC_EL_false;
    return overflowMaxVal;
  }

  if (isNeg)
  {
    return (lc_uint64_t) (-(lc_int32_t) result);
  }
  return result;
}

/*
 ** impl for a**b for unsigned values, range up to maxval
 */
lc_uint64_t LC_MF_EXPT_UINTEGER_IMPL(lc_uint64_t maxval, lc_uint64_t in1, lc_uint64_t in2, LC_TD_BOOL *pENO)
{
  LC_TD_BOOL localEno;
  lc_uint64_t result;

  if (pENO == NULL)
  {
    pENO = &localEno;
  }

  if ((in2 == 0) || (in1 == 1))
  {
    return 1;
  }
  if (in1 == 0)
  {
    return 0;
  }
  if (in2 == 1)
  {
    return in1;
  }

  /* 2**64 is not more possible. so max exponent is 63 */
  if (in2 >= 63)
  {
    *pENO = LC_EL_false;
    return maxval;
  }
  result = integerPow(in1, (lc_uint32_t) in2);
  if (result == 0)
  {
    *pENO = LC_EL_false;
    return maxval;
  }

  if (result > maxval || result == 0)
  {
    *pENO = LC_EL_false;
    return maxval;
  }

  return result;
}
