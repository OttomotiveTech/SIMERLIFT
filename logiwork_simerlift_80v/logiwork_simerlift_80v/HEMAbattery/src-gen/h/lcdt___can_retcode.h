#ifndef LC_PROT_LCDT___CAN_RETCODE__H
#define LC_PROT_LCDT___CAN_RETCODE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_UINT LC_TD_DataType_CAN_RETCODE;

/*                            Named Value Constants                         */
#define LC_ED__CAN_RETCODE__CAN_OK ((LC_TD_UINT)0)
#define LC_ED__CAN_RETCODE__CAN_SEND_ERROR ((LC_TD_UINT)1)
#define LC_ED__CAN_RETCODE__CAN_RECEIVE_ERROR ((LC_TD_UINT)2)
#define LC_ED__CAN_RETCODE__CAN_NO_RECEIVE_DATA_REFERENCE ((LC_TD_UINT)3)
#define LC_ED__CAN_RETCODE__CAN_NO_SEND_DATA_REFERENCE ((LC_TD_UINT)4)
#define LC_ED__CAN_RETCODE__CAN_SYSTEM_SERVICE_NOT_LOADED ((LC_TD_UINT)5)
#define LC_ED__CAN_RETCODE__CAN_DLC_ERROR ((LC_TD_UINT)6)
#define LC_ED__CAN_RETCODE__CAN_INTERFACE_ERROR ((LC_TD_UINT)7)
#define LC_ED__CAN_RETCODE__CAN_NO_INTERFACE_NAME ((LC_TD_UINT)8)
#define LC_ED__CAN_RETCODE__CAN_NO_BITRATE ((LC_TD_UINT)9)
#define LC_ED__CAN_RETCODE__CAN_NO_FREE_INTERFACE_SLOT ((LC_TD_UINT)10)
#define LC_ED__CAN_RETCODE__CAN_NO_VALID_HANDLE ((LC_TD_UINT)11)
#define LC_ED__CAN_RETCODE__CAN_NO_CONNECTION ((LC_TD_UINT)12)
#define LC_ED__CAN_RETCODE__CAN_INTERFACE_STILL_IN_USE ((LC_TD_UINT)13)
#define LC_ED__CAN_RETCODE__CAN_INTERFACE_SLOT_UNUSED ((LC_TD_UINT)14)
#define LC_ED__CAN_RETCODE__CAN_INTERFACE_ALREADY_IN_USE ((LC_TD_UINT)15)
#define LC_ED__CAN_RETCODE__CAN_NOT_IMPLEMENTED ((LC_TD_UINT)16)
#define LC_ED__CAN_RETCODE__CAN_NO_VALID_BITRATE ((LC_TD_UINT)17)
#define LC_ED__CAN_RETCODE__CAN_RX_TIMEOUT ((LC_TD_UINT)18)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_CAN_RETCODE(p) \
{ \
  (*(p)) = LC_ED__CAN_RETCODE__CAN_OK; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_CAN_RETCODE(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__CAN_RETCODE__CAN_OK; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_CAN_RETCODE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_CAN_RETCODE * ptrToElement_ArrayOf_CAN_RETCODE = (LC_TD_DataType_CAN_RETCODE*)(p);\
  LC_TD_DataType_CAN_RETCODE * arrayEnd = ptrToElement_ArrayOf_CAN_RETCODE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_CAN_RETCODE < arrayEnd; ptrToElement_ArrayOf_CAN_RETCODE++) \
  { \
    LC_INIT_DataType_CAN_RETCODE(ptrToElement_ArrayOf_CAN_RETCODE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_CAN_RETCODE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_CAN_RETCODE(p,ARRAYSIZE); \
  } \
}

#endif
