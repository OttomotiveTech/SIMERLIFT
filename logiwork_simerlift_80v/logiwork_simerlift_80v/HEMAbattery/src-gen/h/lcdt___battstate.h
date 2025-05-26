#ifndef LC_PROT_LCDT___BATTSTATE__H
#define LC_PROT_LCDT___BATTSTATE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_USINT LC_TD_DataType_BATTSTATE;

/*                            Named Value Constants                         */
#define LC_ED__BATTSTATE__STANDBY ((LC_TD_USINT)101)
#define LC_ED__BATTSTATE__STARTUP ((LC_TD_USINT)102)
#define LC_ED__BATTSTATE__PRECHARGE ((LC_TD_USINT)103)
#define LC_ED__BATTSTATE__DISCHARGE ((LC_TD_USINT)104)
#define LC_ED__BATTSTATE__CHARGE ((LC_TD_USINT)105)
#define LC_ED__BATTSTATE__SHUTDOWN ((LC_TD_USINT)106)
#define LC_ED__BATTSTATE__FAULT ((LC_TD_USINT)107)
#define LC_ED__BATTSTATE__CHARGECOMPLETE ((LC_TD_USINT)108)
#define LC_ED__BATTSTATE__DISCHARGECOMPLETE ((LC_TD_USINT)109)
#define LC_ED__BATTSTATE__PRECHARGE4charge ((LC_TD_USINT)110)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_BATTSTATE(p) \
{ \
  (*(p)) = LC_ED__BATTSTATE__STANDBY; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_BATTSTATE(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__BATTSTATE__STANDBY; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_BATTSTATE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_BATTSTATE * ptrToElement_ArrayOf_BATTSTATE = (LC_TD_DataType_BATTSTATE*)(p);\
  LC_TD_DataType_BATTSTATE * arrayEnd = ptrToElement_ArrayOf_BATTSTATE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_BATTSTATE < arrayEnd; ptrToElement_ArrayOf_BATTSTATE++) \
  { \
    LC_INIT_DataType_BATTSTATE(ptrToElement_ArrayOf_BATTSTATE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_BATTSTATE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_BATTSTATE(p,ARRAYSIZE); \
  } \
}

#endif
