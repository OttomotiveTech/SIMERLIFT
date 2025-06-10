#ifndef LC_PROT_LCDT___VCCU_PROXSTATE__H
#define LC_PROT_LCDT___VCCU_PROXSTATE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_UINT LC_TD_DataType_VCCU_PROXSTATE;

/*                            Named Value Constants                         */
#define LC_ED__VCCU_PROXSTATE__PROXSTATE_unknown ((LC_TD_UINT)0)
#define LC_ED__VCCU_PROXSTATE__PROXSTATE_not_connected ((LC_TD_UINT)1)
#define LC_ED__VCCU_PROXSTATE__PROXSTATE_connected ((LC_TD_UINT)2)
#define LC_ED__VCCU_PROXSTATE__PROXSTATE_connected_but_not_latched ((LC_TD_UINT)3)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_VCCU_PROXSTATE(p) \
{ \
  (*(p)) = LC_ED__VCCU_PROXSTATE__PROXSTATE_unknown; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_VCCU_PROXSTATE(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__VCCU_PROXSTATE__PROXSTATE_unknown; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_VCCU_PROXSTATE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_VCCU_PROXSTATE * ptrToElement_ArrayOf_VCCU_PROXSTATE = (LC_TD_DataType_VCCU_PROXSTATE*)(p);\
  LC_TD_DataType_VCCU_PROXSTATE * arrayEnd = ptrToElement_ArrayOf_VCCU_PROXSTATE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_VCCU_PROXSTATE < arrayEnd; ptrToElement_ArrayOf_VCCU_PROXSTATE++) \
  { \
    LC_INIT_DataType_VCCU_PROXSTATE(ptrToElement_ArrayOf_VCCU_PROXSTATE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_VCCU_PROXSTATE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_VCCU_PROXSTATE(p,ARRAYSIZE); \
  } \
}

#endif
