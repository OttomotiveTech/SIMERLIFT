#ifndef LC_PROT_LCDT___DTC_BAM_BYTE__H
#define LC_PROT_LCDT___DTC_BAM_BYTE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_BYTE LC_TD_DataType_DTC_BAM_BYTE[401];

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_DTC_BAM_BYTE(p) \
{ \
  LC_TD_BYTE * ptrToElement_DTC_BAM_BYTE = (LC_TD_BYTE*)(p);\
  LC_TD_BYTE * arrayEnd = ptrToElement_DTC_BAM_BYTE+401;\
  for (; ptrToElement_DTC_BAM_BYTE < arrayEnd; ptrToElement_DTC_BAM_BYTE++) \
  { \
    LC_INIT_BYTE(ptrToElement_DTC_BAM_BYTE); \
  } \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_DTC_BAM_BYTE(p,RF) \
if (RF==0) \
{ \
  LC_INIT_DataType_DTC_BAM_BYTE(p); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_DTC_BAM_BYTE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_DTC_BAM_BYTE * ptrToElement_ArrayOf_DTC_BAM_BYTE = (LC_TD_DataType_DTC_BAM_BYTE*)(p);\
  LC_TD_DataType_DTC_BAM_BYTE * arrayEnd = ptrToElement_ArrayOf_DTC_BAM_BYTE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_DTC_BAM_BYTE < arrayEnd; ptrToElement_ArrayOf_DTC_BAM_BYTE++) \
  { \
    LC_INIT_DataType_DTC_BAM_BYTE(ptrToElement_ArrayOf_DTC_BAM_BYTE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_DTC_BAM_BYTE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_DTC_BAM_BYTE(p,ARRAYSIZE); \
  } \
}

#endif
