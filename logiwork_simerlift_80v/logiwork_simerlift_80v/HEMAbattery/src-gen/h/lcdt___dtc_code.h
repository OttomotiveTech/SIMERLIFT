#ifndef LC_PROT_LCDT___DTC_CODE__H
#define LC_PROT_LCDT___DTC_CODE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_DWORD LC_TD_DataType_DTC_CODE[400];

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_DTC_CODE(p) \
{ \
  LC_TD_DWORD * ptrToElement_DTC_CODE = (LC_TD_DWORD*)(p);\
  LC_TD_DWORD * arrayEnd = ptrToElement_DTC_CODE+400;\
  for (; ptrToElement_DTC_CODE < arrayEnd; ptrToElement_DTC_CODE++) \
  { \
    LC_INIT_DWORD(ptrToElement_DTC_CODE); \
  } \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_DTC_CODE(p,RF) \
if (RF==0) \
{ \
  LC_INIT_DataType_DTC_CODE(p); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_DTC_CODE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_DTC_CODE * ptrToElement_ArrayOf_DTC_CODE = (LC_TD_DataType_DTC_CODE*)(p);\
  LC_TD_DataType_DTC_CODE * arrayEnd = ptrToElement_ArrayOf_DTC_CODE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_DTC_CODE < arrayEnd; ptrToElement_ArrayOf_DTC_CODE++) \
  { \
    LC_INIT_DataType_DTC_CODE(ptrToElement_ArrayOf_DTC_CODE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_DTC_CODE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_DTC_CODE(p,ARRAYSIZE); \
  } \
}

#endif
