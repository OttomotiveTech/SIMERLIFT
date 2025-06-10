#ifndef LC_PROT_LCDT___CELLVOLTPACKLIST__H
#define LC_PROT_LCDT___CELLVOLTPACKLIST__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_UINT LC_TD_DataType_CELLVOLTPACKLIST[10];

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_CELLVOLTPACKLIST(p) \
{ \
  LC_TD_UINT * ptrToElement_CELLVOLTPACKLIST = (LC_TD_UINT*)(p);\
  LC_TD_UINT * arrayEnd = ptrToElement_CELLVOLTPACKLIST+10;\
  for (; ptrToElement_CELLVOLTPACKLIST < arrayEnd; ptrToElement_CELLVOLTPACKLIST++) \
  { \
    LC_INIT_UINT(ptrToElement_CELLVOLTPACKLIST); \
  } \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_CELLVOLTPACKLIST(p,RF) \
if (RF==0) \
{ \
  LC_INIT_DataType_CELLVOLTPACKLIST(p); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_CELLVOLTPACKLIST(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_CELLVOLTPACKLIST * ptrToElement_ArrayOf_CELLVOLTPACKLIST = (LC_TD_DataType_CELLVOLTPACKLIST*)(p);\
  LC_TD_DataType_CELLVOLTPACKLIST * arrayEnd = ptrToElement_ArrayOf_CELLVOLTPACKLIST+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_CELLVOLTPACKLIST < arrayEnd; ptrToElement_ArrayOf_CELLVOLTPACKLIST++) \
  { \
    LC_INIT_DataType_CELLVOLTPACKLIST(ptrToElement_ArrayOf_CELLVOLTPACKLIST); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_CELLVOLTPACKLIST(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_CELLVOLTPACKLIST(p,ARRAYSIZE); \
  } \
}

#endif
