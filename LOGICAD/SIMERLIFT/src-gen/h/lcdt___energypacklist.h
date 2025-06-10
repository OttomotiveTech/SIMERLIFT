#ifndef LC_PROT_LCDT___ENERGYPACKLIST__H
#define LC_PROT_LCDT___ENERGYPACKLIST__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_USINT LC_TD_DataType_ENERGYPACKLIST[10];

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_ENERGYPACKLIST(p) \
{ \
  LC_TD_USINT * ptrToElement_ENERGYPACKLIST = (LC_TD_USINT*)(p);\
  LC_TD_USINT * arrayEnd = ptrToElement_ENERGYPACKLIST+10;\
  for (; ptrToElement_ENERGYPACKLIST < arrayEnd; ptrToElement_ENERGYPACKLIST++) \
  { \
    LC_INIT_USINT(ptrToElement_ENERGYPACKLIST); \
  } \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_ENERGYPACKLIST(p,RF) \
if (RF==0) \
{ \
  LC_INIT_DataType_ENERGYPACKLIST(p); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_ENERGYPACKLIST(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_ENERGYPACKLIST * ptrToElement_ArrayOf_ENERGYPACKLIST = (LC_TD_DataType_ENERGYPACKLIST*)(p);\
  LC_TD_DataType_ENERGYPACKLIST * arrayEnd = ptrToElement_ArrayOf_ENERGYPACKLIST+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_ENERGYPACKLIST < arrayEnd; ptrToElement_ArrayOf_ENERGYPACKLIST++) \
  { \
    LC_INIT_DataType_ENERGYPACKLIST(ptrToElement_ArrayOf_ENERGYPACKLIST); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_ENERGYPACKLIST(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_ENERGYPACKLIST(p,ARRAYSIZE); \
  } \
}

#endif
