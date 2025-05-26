#ifndef LC_PROT_LCDT___PACKSTATE__H
#define LC_PROT_LCDT___PACKSTATE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_USINT LC_TD_DataType_PACKSTATE;

/*                            Named Value Constants                         */
#define LC_ED__PACKSTATE__STANDBY ((LC_TD_USINT)101)
#define LC_ED__PACKSTATE__PRECHARGE ((LC_TD_USINT)103)
#define LC_ED__PACKSTATE__DISCHARGE ((LC_TD_USINT)104)
#define LC_ED__PACKSTATE__CHARGE ((LC_TD_USINT)105)
#define LC_ED__PACKSTATE__SHUTDOWN ((LC_TD_USINT)106)
#define LC_ED__PACKSTATE__ERROR ((LC_TD_USINT)107)
#define LC_ED__PACKSTATE__CHARGECOMPLETE ((LC_TD_USINT)108)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_PACKSTATE(p) \
{ \
  (*(p)) = LC_ED__PACKSTATE__STANDBY; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_PACKSTATE(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__PACKSTATE__STANDBY; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_PACKSTATE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_PACKSTATE * ptrToElement_ArrayOf_PACKSTATE = (LC_TD_DataType_PACKSTATE*)(p);\
  LC_TD_DataType_PACKSTATE * arrayEnd = ptrToElement_ArrayOf_PACKSTATE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_PACKSTATE < arrayEnd; ptrToElement_ArrayOf_PACKSTATE++) \
  { \
    LC_INIT_DataType_PACKSTATE(ptrToElement_ArrayOf_PACKSTATE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_PACKSTATE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_PACKSTATE(p,ARRAYSIZE); \
  } \
}

#endif
