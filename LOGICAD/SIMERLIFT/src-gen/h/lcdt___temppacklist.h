#ifndef LC_PROT_LCDT___TEMPPACKLIST__H
#define LC_PROT_LCDT___TEMPPACKLIST__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_SINT LC_TD_DataType_TEMPPACKLIST[10];

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_TEMPPACKLIST(p) \
{ \
  LC_TD_SINT * ptrToElement_TEMPPACKLIST = (LC_TD_SINT*)(p);\
  LC_TD_SINT * arrayEnd = ptrToElement_TEMPPACKLIST+10;\
  for (; ptrToElement_TEMPPACKLIST < arrayEnd; ptrToElement_TEMPPACKLIST++) \
  { \
    LC_INIT_SINT(ptrToElement_TEMPPACKLIST); \
  } \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_TEMPPACKLIST(p,RF) \
if (RF==0) \
{ \
  LC_INIT_DataType_TEMPPACKLIST(p); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_TEMPPACKLIST(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_TEMPPACKLIST * ptrToElement_ArrayOf_TEMPPACKLIST = (LC_TD_DataType_TEMPPACKLIST*)(p);\
  LC_TD_DataType_TEMPPACKLIST * arrayEnd = ptrToElement_ArrayOf_TEMPPACKLIST+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_TEMPPACKLIST < arrayEnd; ptrToElement_ArrayOf_TEMPPACKLIST++) \
  { \
    LC_INIT_DataType_TEMPPACKLIST(ptrToElement_ArrayOf_TEMPPACKLIST); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_TEMPPACKLIST(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_TEMPPACKLIST(p,ARRAYSIZE); \
  } \
}

#endif
