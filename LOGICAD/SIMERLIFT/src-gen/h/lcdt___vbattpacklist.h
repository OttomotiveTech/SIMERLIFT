#ifndef LC_PROT_LCDT___VBATTPACKLIST__H
#define LC_PROT_LCDT___VBATTPACKLIST__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_UINT LC_TD_DataType_VBATTPACKLIST[10];

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_VBATTPACKLIST(p) \
{ \
  LC_TD_UINT * ptrToElement_VBATTPACKLIST = (LC_TD_UINT*)(p);\
  LC_TD_UINT * arrayEnd = ptrToElement_VBATTPACKLIST+10;\
  for (; ptrToElement_VBATTPACKLIST < arrayEnd; ptrToElement_VBATTPACKLIST++) \
  { \
    LC_INIT_UINT(ptrToElement_VBATTPACKLIST); \
  } \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_VBATTPACKLIST(p,RF) \
if (RF==0) \
{ \
  LC_INIT_DataType_VBATTPACKLIST(p); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_VBATTPACKLIST(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_VBATTPACKLIST * ptrToElement_ArrayOf_VBATTPACKLIST = (LC_TD_DataType_VBATTPACKLIST*)(p);\
  LC_TD_DataType_VBATTPACKLIST * arrayEnd = ptrToElement_ArrayOf_VBATTPACKLIST+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_VBATTPACKLIST < arrayEnd; ptrToElement_ArrayOf_VBATTPACKLIST++) \
  { \
    LC_INIT_DataType_VBATTPACKLIST(ptrToElement_ArrayOf_VBATTPACKLIST); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_VBATTPACKLIST(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_VBATTPACKLIST(p,ARRAYSIZE); \
  } \
}

#endif
