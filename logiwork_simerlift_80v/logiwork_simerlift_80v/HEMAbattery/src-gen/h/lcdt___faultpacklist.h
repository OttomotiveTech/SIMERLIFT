#ifndef LC_PROT_LCDT___FAULTPACKLIST__H
#define LC_PROT_LCDT___FAULTPACKLIST__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_LWORD LC_TD_DataType_FAULTPACKLIST[10];

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_FAULTPACKLIST(p) \
{ \
  LC_TD_LWORD * ptrToElement_FAULTPACKLIST = (LC_TD_LWORD*)(p);\
  LC_TD_LWORD * arrayEnd = ptrToElement_FAULTPACKLIST+10;\
  for (; ptrToElement_FAULTPACKLIST < arrayEnd; ptrToElement_FAULTPACKLIST++) \
  { \
    LC_INIT_LWORD(ptrToElement_FAULTPACKLIST); \
  } \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_FAULTPACKLIST(p,RF) \
if (RF==0) \
{ \
  LC_INIT_DataType_FAULTPACKLIST(p); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_FAULTPACKLIST(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_FAULTPACKLIST * ptrToElement_ArrayOf_FAULTPACKLIST = (LC_TD_DataType_FAULTPACKLIST*)(p);\
  LC_TD_DataType_FAULTPACKLIST * arrayEnd = ptrToElement_ArrayOf_FAULTPACKLIST+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_FAULTPACKLIST < arrayEnd; ptrToElement_ArrayOf_FAULTPACKLIST++) \
  { \
    LC_INIT_DataType_FAULTPACKLIST(ptrToElement_ArrayOf_FAULTPACKLIST); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_FAULTPACKLIST(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_FAULTPACKLIST(p,ARRAYSIZE); \
  } \
}

#endif
