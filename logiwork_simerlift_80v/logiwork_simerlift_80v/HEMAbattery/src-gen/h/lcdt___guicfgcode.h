#ifndef LC_PROT_LCDT___GUICFGCODE__H
#define LC_PROT_LCDT___GUICFGCODE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_UDINT LC_TD_DataType_GUICFGCODE;

/*                            Named Value Constants                         */
#define LC_ED__GUICFGCODE__CAN1BAUD ((LC_TD_UDINT)2UL)
#define LC_ED__GUICFGCODE__CAN2BAUD ((LC_TD_UDINT)3UL)
#define LC_ED__GUICFGCODE__CAN3BAUD ((LC_TD_UDINT)4UL)
#define LC_ED__GUICFGCODE__CAN4BAUD ((LC_TD_UDINT)5UL)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_GUICFGCODE(p) \
{ \
  (*(p)) = LC_ED__GUICFGCODE__CAN1BAUD; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_GUICFGCODE(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__GUICFGCODE__CAN1BAUD; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_GUICFGCODE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_GUICFGCODE * ptrToElement_ArrayOf_GUICFGCODE = (LC_TD_DataType_GUICFGCODE*)(p);\
  LC_TD_DataType_GUICFGCODE * arrayEnd = ptrToElement_ArrayOf_GUICFGCODE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_GUICFGCODE < arrayEnd; ptrToElement_ArrayOf_GUICFGCODE++) \
  { \
    LC_INIT_DataType_GUICFGCODE(ptrToElement_ArrayOf_GUICFGCODE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_GUICFGCODE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_GUICFGCODE(p,ARRAYSIZE); \
  } \
}

#endif
