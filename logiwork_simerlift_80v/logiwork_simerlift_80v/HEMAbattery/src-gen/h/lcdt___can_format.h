#ifndef LC_PROT_LCDT___CAN_FORMAT__H
#define LC_PROT_LCDT___CAN_FORMAT__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_UINT LC_TD_DataType_CAN_FORMAT;

/*                            Named Value Constants                         */
#define LC_ED__CAN_FORMAT__FNULL ((LC_TD_UINT)0)
#define LC_ED__CAN_FORMAT__STANDARD ((LC_TD_UINT)1)
#define LC_ED__CAN_FORMAT__EXTENDED ((LC_TD_UINT)2)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_CAN_FORMAT(p) \
{ \
  (*(p)) = LC_ED__CAN_FORMAT__FNULL; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_CAN_FORMAT(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__CAN_FORMAT__FNULL; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_CAN_FORMAT(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_CAN_FORMAT * ptrToElement_ArrayOf_CAN_FORMAT = (LC_TD_DataType_CAN_FORMAT*)(p);\
  LC_TD_DataType_CAN_FORMAT * arrayEnd = ptrToElement_ArrayOf_CAN_FORMAT+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_CAN_FORMAT < arrayEnd; ptrToElement_ArrayOf_CAN_FORMAT++) \
  { \
    LC_INIT_DataType_CAN_FORMAT(ptrToElement_ArrayOf_CAN_FORMAT); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_CAN_FORMAT(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_CAN_FORMAT(p,ARRAYSIZE); \
  } \
}

#endif
