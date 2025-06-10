#ifndef LC_PROT_LCDT___BESSWORKMODE__H
#define LC_PROT_LCDT___BESSWORKMODE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_USINT LC_TD_DataType_BESSWORKMODE;

/*                            Named Value Constants                         */
#define LC_ED__bessWorkMode__bessWorkingNULL ((LC_TD_USINT)0)
#define LC_ED__bessWorkMode__bessWorkingPOWERON ((LC_TD_USINT)1)
#define LC_ED__bessWorkMode__bessWorkingPOWEROFF ((LC_TD_USINT)2)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_BESSWORKMODE(p) \
{ \
  (*(p)) = LC_ED__bessWorkMode__bessWorkingNULL; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_BESSWORKMODE(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__bessWorkMode__bessWorkingNULL; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_BESSWORKMODE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_BESSWORKMODE * ptrToElement_ArrayOf_BESSWORKMODE = (LC_TD_DataType_BESSWORKMODE*)(p);\
  LC_TD_DataType_BESSWORKMODE * arrayEnd = ptrToElement_ArrayOf_BESSWORKMODE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_BESSWORKMODE < arrayEnd; ptrToElement_ArrayOf_BESSWORKMODE++) \
  { \
    LC_INIT_DataType_BESSWORKMODE(ptrToElement_ArrayOf_BESSWORKMODE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_BESSWORKMODE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_BESSWORKMODE(p,ARRAYSIZE); \
  } \
}

#endif
