#ifndef LC_PROT_LCDT___CELLVPACKLIST__H
#define LC_PROT_LCDT___CELLVPACKLIST__H

#include <LC3CGBase.h>

#include <lcdt___cellvoltinfo.h>
/*                            Typedefs                         */
typedef LC_TD_DataType_CELLVOLTINFO LC_TD_DataType_CELLVPACKLIST[10];

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_CELLVPACKLIST(p) \
{ \
  LC_TD_DataType_CELLVOLTINFO * ptrToElement_CELLVPACKLIST = (LC_TD_DataType_CELLVOLTINFO*)(p);\
  LC_TD_DataType_CELLVOLTINFO * arrayEnd = ptrToElement_CELLVPACKLIST+10;\
  for (; ptrToElement_CELLVPACKLIST < arrayEnd; ptrToElement_CELLVPACKLIST++) \
  { \
    LC_INIT_DataType_CELLVOLTINFO(ptrToElement_CELLVPACKLIST); \
  } \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_CELLVPACKLIST(p,RF) \
if (RF==0) \
{ \
  LC_INIT_DataType_CELLVPACKLIST(p); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_CELLVPACKLIST(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_CELLVPACKLIST * ptrToElement_ArrayOf_CELLVPACKLIST = (LC_TD_DataType_CELLVPACKLIST*)(p);\
  LC_TD_DataType_CELLVPACKLIST * arrayEnd = ptrToElement_ArrayOf_CELLVPACKLIST+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_CELLVPACKLIST < arrayEnd; ptrToElement_ArrayOf_CELLVPACKLIST++) \
  { \
    LC_INIT_DataType_CELLVPACKLIST(ptrToElement_ArrayOf_CELLVPACKLIST); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_CELLVPACKLIST(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_CELLVPACKLIST(p,ARRAYSIZE); \
  } \
}

#endif
