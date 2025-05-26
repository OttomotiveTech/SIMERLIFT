#ifndef LC_PROT_LCDT___TMS570_CAN__H
#define LC_PROT_LCDT___TMS570_CAN__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_UDINT LC_TD_DataType_TMS570_CAN;

/*                            Named Value Constants                         */
#define LC_ED__TMS570_CAN__LNULL ((LC_TD_UDINT)0UL)
#define LC_ED__TMS570_CAN__L1 ((LC_TD_UDINT)4294433792UL)
#define LC_ED__TMS570_CAN__L2 ((LC_TD_UDINT)4294434304UL)
#define LC_ED__TMS570_CAN__L3 ((LC_TD_UDINT)4294434816UL)
#define LC_ED__TMS570_CAN__L4 ((LC_TD_UDINT)4294435328UL)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_TMS570_CAN(p) \
{ \
  (*(p)) = LC_ED__TMS570_CAN__LNULL; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_TMS570_CAN(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__TMS570_CAN__LNULL; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_TMS570_CAN(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_TMS570_CAN * ptrToElement_ArrayOf_TMS570_CAN = (LC_TD_DataType_TMS570_CAN*)(p);\
  LC_TD_DataType_TMS570_CAN * arrayEnd = ptrToElement_ArrayOf_TMS570_CAN+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_TMS570_CAN < arrayEnd; ptrToElement_ArrayOf_TMS570_CAN++) \
  { \
    LC_INIT_DataType_TMS570_CAN(ptrToElement_ArrayOf_TMS570_CAN); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_TMS570_CAN(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_TMS570_CAN(p,ARRAYSIZE); \
  } \
}

#endif
