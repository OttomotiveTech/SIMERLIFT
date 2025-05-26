/* Copyright (C) logi.cals GmbH. All rights reserved. */

#include <lcfu_iec61131__ENDIAN.h>

uint16_t LCfu_iec61131__ENDIAN_Swap2(uint16_t val)
{
  return (val << 8) | (val >> 8 ); 
}

uint32_t LCfu_iec61131__ENDIAN_Swap4(uint32_t val)
{
  val = ((val << 8) & 0xFF00FF00 ) | ((val >> 8) & 0x00FF00FF); 
  return (val << 16) | (val >> 16);
}

uint64_t LCfu_iec61131__ENDIAN_Swap8(uint64_t val)
{
  val = ((val << 8) & RT_CC_CONST_ULL(0xFF00FF00FF00FF00))  | ((val >> 8) & RT_CC_CONST_ULL(0x00FF00FF00FF00FF));
  val = ((val << 16) & RT_CC_CONST_ULL(0xFFFF0000FFFF0000)) | ((val >> 16) & RT_CC_CONST_ULL(0x0000FFFF0000FFFF));
  return (val << 32) | (val >> 32);
}

#if defined(_WRS_KERNEL)
float LCfu_iec61131__ENDIAN_SwapFloat(volatile float val)
#else
float LCfu_iec61131__ENDIAN_SwapFloat(float val)
#endif
{
#if RT_SIZEOF_REAL==4
  uint32_t ret = LCfu_iec61131__ENDIAN_Swap4(*((uint32_t*)&val));
# if defined(_WRS_KERNEL)
  volatile float mem_float = *((float*)(&ret));
  return mem_float;
# else
  return *((float*)(&ret));
# endif
#else
  #error RT_SIZEOF_REAL_MUST_BE_4
  return 0.0;
#endif
}

#if defined(_WRS_KERNEL)
double LCfu_iec61131__ENDIAN_SwapDouble(volatile double val)
#else
double LCfu_iec61131__ENDIAN_SwapDouble(double val)
#endif
{
#if defined(_WRS_KERNEL)

# if RT_SIZEOF_LREAL!=8
# error RT_SIZEOF_LREAL_MUST_BE_8
# endif
  /* do not remove any volatile and do not make any optimizing!! */
  volatile double mem_in_val = val;
  volatile uint64_t mem_val = *((uint64_t*)&mem_in_val);
  volatile uint64_t ret = LCfu_iec61131__ENDIAN_Swap8(mem_val);
  volatile double mem_double = *((double*)(&ret));
  return mem_double;

#else /* defined(_WRS_KERNEL) */

# if RT_SIZEOF_LREAL==8
  uint64_t ret = LCfu_iec61131__ENDIAN_Swap8(*((uint64_t*)&val));
# elif RT_SIZEOF_LREAL==4
  uint32_t ret = LCfu_iec61131__ENDIAN_Swap4(*((uint32_t*)&val));
# else
  #error RT_SIZEOF_LREAL_MUST_BE_8_OR_4
  double ret = 0.0;
# endif
  return *((double*)(&ret));

#endif /* !defined(_WRS_KERNEL) */
}
