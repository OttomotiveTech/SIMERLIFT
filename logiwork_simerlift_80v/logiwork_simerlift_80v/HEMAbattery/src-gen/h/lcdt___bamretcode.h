#ifndef LC_PROT_LCDT___BAMRETCODE__H
#define LC_PROT_LCDT___BAMRETCODE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_UINT LC_TD_DataType_BAMRETCODE;

/*                            Named Value Constants                         */
#define LC_ED__BAMRETCODE__BAM_OK ((LC_TD_UINT)0)
#define LC_ED__BAMRETCODE__BAM_ILLEGAL_INPUT ((LC_TD_UINT)1)
#define LC_ED__BAMRETCODE__BAM_NO_HW_HANDLE ((LC_TD_UINT)2)
#define LC_ED__BAMRETCODE__BAM_HW_BUSY ((LC_TD_UINT)3)
#define LC_ED__BAMRETCODE__BAM_SEND_ERR ((LC_TD_UINT)4)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_BAMRETCODE(p) \
{ \
  (*(p)) = LC_ED__BAMRETCODE__BAM_OK; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_BAMRETCODE(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__BAMRETCODE__BAM_OK; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_BAMRETCODE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_BAMRETCODE * ptrToElement_ArrayOf_BAMRETCODE = (LC_TD_DataType_BAMRETCODE*)(p);\
  LC_TD_DataType_BAMRETCODE * arrayEnd = ptrToElement_ArrayOf_BAMRETCODE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_BAMRETCODE < arrayEnd; ptrToElement_ArrayOf_BAMRETCODE++) \
  { \
    LC_INIT_DataType_BAMRETCODE(ptrToElement_ArrayOf_BAMRETCODE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_BAMRETCODE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_BAMRETCODE(p,ARRAYSIZE); \
  } \
}

#endif
