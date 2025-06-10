#ifndef LC_PROT_LCDT___VCCU_REQPROGSTAT__H
#define LC_PROT_LCDT___VCCU_REQPROGSTAT__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_UINT LC_TD_DataType_VCCU_REQPROGSTAT;

/*                            Named Value Constants                         */
#define LC_ED__VCCU_REQPROGSTAT__PROGSTAT_default ((LC_TD_UINT)0)
#define LC_ED__VCCU_REQPROGSTAT__PROGSTAT_error ((LC_TD_UINT)1)
#define LC_ED__VCCU_REQPROGSTAT__PROGSTAT_shutoff ((LC_TD_UINT)2)
#define LC_ED__VCCU_REQPROGSTAT__PROGSTAT_cableCheck ((LC_TD_UINT)3)
#define LC_ED__VCCU_REQPROGSTAT__PROGSTAT_preCharge ((LC_TD_UINT)4)
#define LC_ED__VCCU_REQPROGSTAT__PROGSTAT_currentDemand ((LC_TD_UINT)5)
#define LC_ED__VCCU_REQPROGSTAT__PROGSTAT_weldingDetection ((LC_TD_UINT)6)
#define LC_ED__VCCU_REQPROGSTAT__PROGSTAT_standby ((LC_TD_UINT)7)
#define LC_ED__VCCU_REQPROGSTAT__PROGSTAT_stopCharge ((LC_TD_UINT)8)
#define LC_ED__VCCU_REQPROGSTAT__PROGSTAT_sessionStop ((LC_TD_UINT)9)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_VCCU_REQPROGSTAT(p) \
{ \
  (*(p)) = LC_ED__VCCU_REQPROGSTAT__PROGSTAT_default; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_VCCU_REQPROGSTAT(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__VCCU_REQPROGSTAT__PROGSTAT_default; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_VCCU_REQPROGSTAT(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_VCCU_REQPROGSTAT * ptrToElement_ArrayOf_VCCU_REQPROGSTAT = (LC_TD_DataType_VCCU_REQPROGSTAT*)(p);\
  LC_TD_DataType_VCCU_REQPROGSTAT * arrayEnd = ptrToElement_ArrayOf_VCCU_REQPROGSTAT+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_VCCU_REQPROGSTAT < arrayEnd; ptrToElement_ArrayOf_VCCU_REQPROGSTAT++) \
  { \
    LC_INIT_DataType_VCCU_REQPROGSTAT(ptrToElement_ArrayOf_VCCU_REQPROGSTAT); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_VCCU_REQPROGSTAT(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_VCCU_REQPROGSTAT(p,ARRAYSIZE); \
  } \
}

#endif
