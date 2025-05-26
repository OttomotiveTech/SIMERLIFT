#ifndef LC_PROT_LCDT___CHECKTABLE__H
#define LC_PROT_LCDT___CHECKTABLE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_BOOL LC_TD_DataType_CHECKTABLE[10];

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_CHECKTABLE(p) \
{ \
  LC_TD_BOOL * ptrToElement_CHECKTABLE = (LC_TD_BOOL*)(p);\
  LC_TD_BOOL * arrayEnd = ptrToElement_CHECKTABLE+10;\
  for (; ptrToElement_CHECKTABLE < arrayEnd; ptrToElement_CHECKTABLE++) \
  { \
    LC_INIT_BOOL(ptrToElement_CHECKTABLE); \
  } \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_CHECKTABLE(p,RF) \
if (RF==0) \
{ \
  LC_INIT_DataType_CHECKTABLE(p); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_CHECKTABLE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_CHECKTABLE * ptrToElement_ArrayOf_CHECKTABLE = (LC_TD_DataType_CHECKTABLE*)(p);\
  LC_TD_DataType_CHECKTABLE * arrayEnd = ptrToElement_ArrayOf_CHECKTABLE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_CHECKTABLE < arrayEnd; ptrToElement_ArrayOf_CHECKTABLE++) \
  { \
    LC_INIT_DataType_CHECKTABLE(ptrToElement_ArrayOf_CHECKTABLE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_CHECKTABLE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_CHECKTABLE(p,ARRAYSIZE); \
  } \
}

#endif
