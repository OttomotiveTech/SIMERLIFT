#ifndef LC_PROT_LCDT___BMSSTATE__H
#define LC_PROT_LCDT___BMSSTATE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_USINT LC_TD_DataType_BMSSTATE;

/*                            Named Value Constants                         */
#define LC_ED__BMSSTATE__STANDBY ((LC_TD_USINT)201)
#define LC_ED__BMSSTATE__STARTUP ((LC_TD_USINT)202)
#define LC_ED__BMSSTATE__PRECHARGE ((LC_TD_USINT)203)
#define LC_ED__BMSSTATE__DISCHARGE ((LC_TD_USINT)204)
#define LC_ED__BMSSTATE__CHARGE ((LC_TD_USINT)205)
#define LC_ED__BMSSTATE__SHUTDOWN ((LC_TD_USINT)206)
#define LC_ED__BMSSTATE__ERROR ((LC_TD_USINT)207)
#define LC_ED__BMSSTATE__CHARGECOMPLETE ((LC_TD_USINT)208)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_BMSSTATE(p) \
{ \
  (*(p)) = LC_ED__BMSSTATE__STANDBY; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_BMSSTATE(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__BMSSTATE__STANDBY; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_BMSSTATE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_BMSSTATE * ptrToElement_ArrayOf_BMSSTATE = (LC_TD_DataType_BMSSTATE*)(p);\
  LC_TD_DataType_BMSSTATE * arrayEnd = ptrToElement_ArrayOf_BMSSTATE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_BMSSTATE < arrayEnd; ptrToElement_ArrayOf_BMSSTATE++) \
  { \
    LC_INIT_DataType_BMSSTATE(ptrToElement_ArrayOf_BMSSTATE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_BMSSTATE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_BMSSTATE(p,ARRAYSIZE); \
  } \
}

#endif
