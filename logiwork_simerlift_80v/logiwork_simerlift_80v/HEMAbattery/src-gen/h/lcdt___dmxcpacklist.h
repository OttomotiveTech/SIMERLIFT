#ifndef LC_PROT_LCDT___DMXCPACKLIST__H
#define LC_PROT_LCDT___DMXCPACKLIST__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_REAL LC_TD_DataType_DMXCPACKLIST[10];

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_DMXCPACKLIST(p) \
{ \
  LC_TD_REAL * ptrToElement_DMXCPACKLIST = (LC_TD_REAL*)(p);\
  LC_TD_REAL * arrayEnd = ptrToElement_DMXCPACKLIST+10;\
  for (; ptrToElement_DMXCPACKLIST < arrayEnd; ptrToElement_DMXCPACKLIST++) \
  { \
    LC_INIT_REAL(ptrToElement_DMXCPACKLIST); \
  } \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_DMXCPACKLIST(p,RF) \
if (RF==0) \
{ \
  LC_INIT_DataType_DMXCPACKLIST(p); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_DMXCPACKLIST(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_DMXCPACKLIST * ptrToElement_ArrayOf_DMXCPACKLIST = (LC_TD_DataType_DMXCPACKLIST*)(p);\
  LC_TD_DataType_DMXCPACKLIST * arrayEnd = ptrToElement_ArrayOf_DMXCPACKLIST+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_DMXCPACKLIST < arrayEnd; ptrToElement_ArrayOf_DMXCPACKLIST++) \
  { \
    LC_INIT_DataType_DMXCPACKLIST(ptrToElement_ArrayOf_DMXCPACKLIST); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_DMXCPACKLIST(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_DMXCPACKLIST(p,ARRAYSIZE); \
  } \
}

#endif
