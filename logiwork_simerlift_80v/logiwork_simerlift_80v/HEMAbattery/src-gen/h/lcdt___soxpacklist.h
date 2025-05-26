#ifndef LC_PROT_LCDT___SOXPACKLIST__H
#define LC_PROT_LCDT___SOXPACKLIST__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_USINT LC_TD_DataType_SOXPACKLIST[10];

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_SOXPACKLIST(p) \
{ \
  LC_TD_USINT * ptrToElement_SOXPACKLIST = (LC_TD_USINT*)(p);\
  LC_TD_USINT * arrayEnd = ptrToElement_SOXPACKLIST+10;\
  for (; ptrToElement_SOXPACKLIST < arrayEnd; ptrToElement_SOXPACKLIST++) \
  { \
    LC_INIT_USINT(ptrToElement_SOXPACKLIST); \
  } \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_SOXPACKLIST(p,RF) \
if (RF==0) \
{ \
  LC_INIT_DataType_SOXPACKLIST(p); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_SOXPACKLIST(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_SOXPACKLIST * ptrToElement_ArrayOf_SOXPACKLIST = (LC_TD_DataType_SOXPACKLIST*)(p);\
  LC_TD_DataType_SOXPACKLIST * arrayEnd = ptrToElement_ArrayOf_SOXPACKLIST+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_SOXPACKLIST < arrayEnd; ptrToElement_ArrayOf_SOXPACKLIST++) \
  { \
    LC_INIT_DataType_SOXPACKLIST(ptrToElement_ArrayOf_SOXPACKLIST); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_SOXPACKLIST(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_SOXPACKLIST(p,ARRAYSIZE); \
  } \
}

#endif
