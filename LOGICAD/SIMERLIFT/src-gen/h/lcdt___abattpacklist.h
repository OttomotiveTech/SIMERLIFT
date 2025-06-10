#ifndef LC_PROT_LCDT___ABATTPACKLIST__H
#define LC_PROT_LCDT___ABATTPACKLIST__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_REAL LC_TD_DataType_ABATTPACKLIST[10];

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_ABATTPACKLIST(p) \
{ \
  LC_TD_REAL * ptrToElement_ABATTPACKLIST = (LC_TD_REAL*)(p);\
  LC_TD_REAL * arrayEnd = ptrToElement_ABATTPACKLIST+10;\
  for (; ptrToElement_ABATTPACKLIST < arrayEnd; ptrToElement_ABATTPACKLIST++) \
  { \
    LC_INIT_REAL(ptrToElement_ABATTPACKLIST); \
  } \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_ABATTPACKLIST(p,RF) \
if (RF==0) \
{ \
  LC_INIT_DataType_ABATTPACKLIST(p); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_ABATTPACKLIST(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_ABATTPACKLIST * ptrToElement_ArrayOf_ABATTPACKLIST = (LC_TD_DataType_ABATTPACKLIST*)(p);\
  LC_TD_DataType_ABATTPACKLIST * arrayEnd = ptrToElement_ArrayOf_ABATTPACKLIST+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_ABATTPACKLIST < arrayEnd; ptrToElement_ArrayOf_ABATTPACKLIST++) \
  { \
    LC_INIT_DataType_ABATTPACKLIST(ptrToElement_ArrayOf_ABATTPACKLIST); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_ABATTPACKLIST(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_ABATTPACKLIST(p,ARRAYSIZE); \
  } \
}

#endif
