#ifndef LC_PROT_LCDT___STATEPACKLIST__H
#define LC_PROT_LCDT___STATEPACKLIST__H

#include <LC3CGBase.h>

#include <lcdt___packstate.h>
/*                            Typedefs                         */
typedef LC_TD_DataType_PACKSTATE LC_TD_DataType_STATEPACKLIST[10];

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_STATEPACKLIST(p) \
{ \
  LC_TD_DataType_PACKSTATE * ptrToElement_STATEPACKLIST = (LC_TD_DataType_PACKSTATE*)(p);\
  LC_TD_DataType_PACKSTATE * arrayEnd = ptrToElement_STATEPACKLIST+10;\
  for (; ptrToElement_STATEPACKLIST < arrayEnd; ptrToElement_STATEPACKLIST++) \
  { \
    LC_INIT_DataType_PACKSTATE(ptrToElement_STATEPACKLIST); \
  } \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_STATEPACKLIST(p,RF) \
if (RF==0) \
{ \
  LC_INIT_DataType_STATEPACKLIST(p); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_STATEPACKLIST(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_STATEPACKLIST * ptrToElement_ArrayOf_STATEPACKLIST = (LC_TD_DataType_STATEPACKLIST*)(p);\
  LC_TD_DataType_STATEPACKLIST * arrayEnd = ptrToElement_ArrayOf_STATEPACKLIST+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_STATEPACKLIST < arrayEnd; ptrToElement_ArrayOf_STATEPACKLIST++) \
  { \
    LC_INIT_DataType_STATEPACKLIST(ptrToElement_ArrayOf_STATEPACKLIST); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_STATEPACKLIST(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_STATEPACKLIST(p,ARRAYSIZE); \
  } \
}

#endif
