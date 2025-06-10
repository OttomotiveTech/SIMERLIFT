#ifndef LC_PROT_LCDT___BCU_DMXX__H
#define LC_PROT_LCDT___BCU_DMXX__H

#include <LC3CGBase.h>

#include <lcdt___bcu_dmx.h>
/*                            Typedefs                         */
typedef LC_TD_DataType_BCU_DMX LC_TD_DataType_BCU_DMXX[10];

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_BCU_DMXX(p) \
{ \
  LC_TD_DataType_BCU_DMX * ptrToElement_BCU_DMXX = (LC_TD_DataType_BCU_DMX*)(p);\
  LC_TD_DataType_BCU_DMX * arrayEnd = ptrToElement_BCU_DMXX+10;\
  for (; ptrToElement_BCU_DMXX < arrayEnd; ptrToElement_BCU_DMXX++) \
  { \
    LC_INIT_DataType_BCU_DMX(ptrToElement_BCU_DMXX); \
  } \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_BCU_DMXX(p,RF) \
if (RF==0) \
{ \
  LC_INIT_DataType_BCU_DMXX(p); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_BCU_DMXX(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_BCU_DMXX * ptrToElement_ArrayOf_BCU_DMXX = (LC_TD_DataType_BCU_DMXX*)(p);\
  LC_TD_DataType_BCU_DMXX * arrayEnd = ptrToElement_ArrayOf_BCU_DMXX+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_BCU_DMXX < arrayEnd; ptrToElement_ArrayOf_BCU_DMXX++) \
  { \
    LC_INIT_DataType_BCU_DMXX(ptrToElement_ArrayOf_BCU_DMXX); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_BCU_DMXX(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_BCU_DMXX(p,ARRAYSIZE); \
  } \
}

#endif
