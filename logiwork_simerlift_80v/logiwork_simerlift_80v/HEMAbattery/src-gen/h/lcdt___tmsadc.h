#ifndef LC_PROT_LCDT___TMSADC__H
#define LC_PROT_LCDT___TMSADC__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_UDINT LC_TD_DataType_TMSADC;

/*                            Named Value Constants                         */
#define LC_ED__TMSADC__A1 ((LC_TD_UDINT)4294426624UL)
#define LC_ED__TMSADC__A2 ((LC_TD_UDINT)4294427136UL)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_TMSADC(p) \
{ \
  (*(p)) = LC_ED__TMSADC__A1; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_TMSADC(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__TMSADC__A1; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_TMSADC(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_TMSADC * ptrToElement_ArrayOf_TMSADC = (LC_TD_DataType_TMSADC*)(p);\
  LC_TD_DataType_TMSADC * arrayEnd = ptrToElement_ArrayOf_TMSADC+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_TMSADC < arrayEnd; ptrToElement_ArrayOf_TMSADC++) \
  { \
    LC_INIT_DataType_TMSADC(ptrToElement_ArrayOf_TMSADC); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_TMSADC(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_TMSADC(p,ARRAYSIZE); \
  } \
}

#endif
