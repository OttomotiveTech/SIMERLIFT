#ifndef LC_PROT_LCDT___BCU_FAULT__H
#define LC_PROT_LCDT___BCU_FAULT__H

#include <LC3CGBase.h>

#include <lcdt___bcu_fault_types.h>
/*                            Typedefs                         */
typedef LC_TD_DataType_BCU_FAULT_TYPES LC_TD_DataType_BCU_FAULT[10];

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_BCU_FAULT(p) \
{ \
  LC_TD_DataType_BCU_FAULT_TYPES * ptrToElement_BCU_FAULT = (LC_TD_DataType_BCU_FAULT_TYPES*)(p);\
  LC_TD_DataType_BCU_FAULT_TYPES * arrayEnd = ptrToElement_BCU_FAULT+10;\
  for (; ptrToElement_BCU_FAULT < arrayEnd; ptrToElement_BCU_FAULT++) \
  { \
    LC_INIT_DataType_BCU_FAULT_TYPES(ptrToElement_BCU_FAULT); \
  } \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_BCU_FAULT(p,RF) \
if (RF==0) \
{ \
  LC_INIT_DataType_BCU_FAULT(p); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_BCU_FAULT(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_BCU_FAULT * ptrToElement_ArrayOf_BCU_FAULT = (LC_TD_DataType_BCU_FAULT*)(p);\
  LC_TD_DataType_BCU_FAULT * arrayEnd = ptrToElement_ArrayOf_BCU_FAULT+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_BCU_FAULT < arrayEnd; ptrToElement_ArrayOf_BCU_FAULT++) \
  { \
    LC_INIT_DataType_BCU_FAULT(ptrToElement_ArrayOf_BCU_FAULT); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_BCU_FAULT(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_BCU_FAULT(p,ARRAYSIZE); \
  } \
}

#endif
