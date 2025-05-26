#ifndef LC_PROT_LCDT___PLCHANNEL__H
#define LC_PROT_LCDT___PLCHANNEL__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_UDINT LC_TD_DataType_PLCHANNEL;

/*                            Named Value Constants                         */
#define LC_ED__PLCHANNEL__CHNULL ((LC_TD_UDINT)0UL)
#define LC_ED__PLCHANNEL__VMMON ((LC_TD_UDINT)1UL)
#define LC_ED__PLCHANNEL__MODULE ((LC_TD_UDINT)2UL)
#define LC_ED__PLCHANNEL__REFCH ((LC_TD_UDINT)4UL)
#define LC_ED__PLCHANNEL__V18 ((LC_TD_UDINT)32UL)
#define LC_ED__PLCHANNEL__HT ((LC_TD_UDINT)64UL)
#define LC_ED__PLCHANNEL__GT ((LC_TD_UDINT)128UL)
#define LC_ED__PLCHANNEL__AUX0 ((LC_TD_UDINT)256UL)
#define LC_ED__PLCHANNEL__AUX1 ((LC_TD_UDINT)512UL)
#define LC_ED__PLCHANNEL__AUX2 ((LC_TD_UDINT)1024UL)
#define LC_ED__PLCHANNEL__AUX3 ((LC_TD_UDINT)2048UL)
#define LC_ED__PLCHANNEL__AUX4 ((LC_TD_UDINT)4096UL)
#define LC_ED__PLCHANNEL__AUX5 ((LC_TD_UDINT)8192UL)
#define LC_ED__PLCHANNEL__AUX6 ((LC_TD_UDINT)16384UL)
#define LC_ED__PLCHANNEL__AUX7 ((LC_TD_UDINT)32768UL)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_PLCHANNEL(p) \
{ \
  (*(p)) = LC_ED__PLCHANNEL__CHNULL; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_PLCHANNEL(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__PLCHANNEL__CHNULL; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_PLCHANNEL(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_PLCHANNEL * ptrToElement_ArrayOf_PLCHANNEL = (LC_TD_DataType_PLCHANNEL*)(p);\
  LC_TD_DataType_PLCHANNEL * arrayEnd = ptrToElement_ArrayOf_PLCHANNEL+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_PLCHANNEL < arrayEnd; ptrToElement_ArrayOf_PLCHANNEL++) \
  { \
    LC_INIT_DataType_PLCHANNEL(ptrToElement_ArrayOf_PLCHANNEL); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_PLCHANNEL(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_PLCHANNEL(p,ARRAYSIZE); \
  } \
}

#endif
