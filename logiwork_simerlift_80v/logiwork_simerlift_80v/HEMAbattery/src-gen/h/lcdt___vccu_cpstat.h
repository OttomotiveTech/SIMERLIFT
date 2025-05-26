#ifndef LC_PROT_LCDT___VCCU_CPSTAT__H
#define LC_PROT_LCDT___VCCU_CPSTAT__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_UINT LC_TD_DataType_VCCU_CPSTAT;

/*                            Named Value Constants                         */
#define LC_ED__VCCU_CPSTAT__CPSTAT_unknown ((LC_TD_UINT)0)
#define LC_ED__VCCU_CPSTAT__CPSTAT_A ((LC_TD_UINT)1)
#define LC_ED__VCCU_CPSTAT__CPSTAT_B ((LC_TD_UINT)2)
#define LC_ED__VCCU_CPSTAT__CPSTAT_C ((LC_TD_UINT)3)
#define LC_ED__VCCU_CPSTAT__CPSTAT_D ((LC_TD_UINT)4)
#define LC_ED__VCCU_CPSTAT__CPSTAT_E ((LC_TD_UINT)5)
#define LC_ED__VCCU_CPSTAT__CPSTAT_F ((LC_TD_UINT)6)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_VCCU_CPSTAT(p) \
{ \
  (*(p)) = LC_ED__VCCU_CPSTAT__CPSTAT_unknown; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_VCCU_CPSTAT(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__VCCU_CPSTAT__CPSTAT_unknown; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_VCCU_CPSTAT(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_VCCU_CPSTAT * ptrToElement_ArrayOf_VCCU_CPSTAT = (LC_TD_DataType_VCCU_CPSTAT*)(p);\
  LC_TD_DataType_VCCU_CPSTAT * arrayEnd = ptrToElement_ArrayOf_VCCU_CPSTAT+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_VCCU_CPSTAT < arrayEnd; ptrToElement_ArrayOf_VCCU_CPSTAT++) \
  { \
    LC_INIT_DataType_VCCU_CPSTAT(ptrToElement_ArrayOf_VCCU_CPSTAT); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_VCCU_CPSTAT(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_VCCU_CPSTAT(p,ARRAYSIZE); \
  } \
}

#endif
