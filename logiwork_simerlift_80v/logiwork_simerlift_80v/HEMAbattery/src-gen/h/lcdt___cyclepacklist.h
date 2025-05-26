#ifndef LC_PROT_LCDT___CYCLEPACKLIST__H
#define LC_PROT_LCDT___CYCLEPACKLIST__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_UINT LC_TD_DataType_CYCLEPACKLIST[10];

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_CYCLEPACKLIST(p) \
{ \
  LC_TD_UINT * ptrToElement_CYCLEPACKLIST = (LC_TD_UINT*)(p);\
  LC_TD_UINT * arrayEnd = ptrToElement_CYCLEPACKLIST+10;\
  for (; ptrToElement_CYCLEPACKLIST < arrayEnd; ptrToElement_CYCLEPACKLIST++) \
  { \
    LC_INIT_UINT(ptrToElement_CYCLEPACKLIST); \
  } \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_CYCLEPACKLIST(p,RF) \
if (RF==0) \
{ \
  LC_INIT_DataType_CYCLEPACKLIST(p); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_CYCLEPACKLIST(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_CYCLEPACKLIST * ptrToElement_ArrayOf_CYCLEPACKLIST = (LC_TD_DataType_CYCLEPACKLIST*)(p);\
  LC_TD_DataType_CYCLEPACKLIST * arrayEnd = ptrToElement_ArrayOf_CYCLEPACKLIST+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_CYCLEPACKLIST < arrayEnd; ptrToElement_ArrayOf_CYCLEPACKLIST++) \
  { \
    LC_INIT_DataType_CYCLEPACKLIST(ptrToElement_ArrayOf_CYCLEPACKLIST); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_CYCLEPACKLIST(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_CYCLEPACKLIST(p,ARRAYSIZE); \
  } \
}

#endif
