#ifndef LC_PROT_LCDT___BESSOPRSTATUS__H
#define LC_PROT_LCDT___BESSOPRSTATUS__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_USINT LC_TD_DataType_BESSOPRSTATUS;

/*                            Named Value Constants                         */
#define LC_ED__bessOprStatus__bessOperatingNULL ((LC_TD_USINT)0)
#define LC_ED__bessOprStatus__bessOperatingNormal ((LC_TD_USINT)1)
#define LC_ED__bessOprStatus__bessOperatingAlarm ((LC_TD_USINT)2)
#define LC_ED__bessOprStatus__bessOperatingFault ((LC_TD_USINT)3)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_BESSOPRSTATUS(p) \
{ \
  (*(p)) = LC_ED__bessOprStatus__bessOperatingNULL; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_BESSOPRSTATUS(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__bessOprStatus__bessOperatingNULL; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_BESSOPRSTATUS(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_BESSOPRSTATUS * ptrToElement_ArrayOf_BESSOPRSTATUS = (LC_TD_DataType_BESSOPRSTATUS*)(p);\
  LC_TD_DataType_BESSOPRSTATUS * arrayEnd = ptrToElement_ArrayOf_BESSOPRSTATUS+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_BESSOPRSTATUS < arrayEnd; ptrToElement_ArrayOf_BESSOPRSTATUS++) \
  { \
    LC_INIT_DataType_BESSOPRSTATUS(ptrToElement_ArrayOf_BESSOPRSTATUS); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_BESSOPRSTATUS(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_BESSOPRSTATUS(p,ARRAYSIZE); \
  } \
}

#endif
