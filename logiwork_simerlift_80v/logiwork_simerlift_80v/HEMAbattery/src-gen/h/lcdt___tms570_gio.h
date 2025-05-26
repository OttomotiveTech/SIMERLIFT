#ifndef LC_PROT_LCDT___TMS570_GIO__H
#define LC_PROT_LCDT___TMS570_GIO__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_UDINT LC_TD_DataType_TMS570_GIO;

/*                            Named Value Constants                         */
#define LC_ED__TMS570_GIO__A ((LC_TD_UDINT)4294425652UL)
#define LC_ED__TMS570_GIO__B ((LC_TD_UDINT)4294425684UL)
#define LC_ED__TMS570_GIO__HET1 ((LC_TD_UDINT)4294424652UL)
#define LC_ED__TMS570_GIO__HET2 ((LC_TD_UDINT)4294424908UL)
#define LC_ED__TMS570_GIO__SPI1 ((LC_TD_UDINT)4294439960UL)
#define LC_ED__TMS570_GIO__SPI2 ((LC_TD_UDINT)4294440472UL)
#define LC_ED__TMS570_GIO__SPI3 ((LC_TD_UDINT)4294440984UL)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_TMS570_GIO(p) \
{ \
  (*(p)) = LC_ED__TMS570_GIO__A; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_TMS570_GIO(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__TMS570_GIO__A; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_TMS570_GIO(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_TMS570_GIO * ptrToElement_ArrayOf_TMS570_GIO = (LC_TD_DataType_TMS570_GIO*)(p);\
  LC_TD_DataType_TMS570_GIO * arrayEnd = ptrToElement_ArrayOf_TMS570_GIO+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_TMS570_GIO < arrayEnd; ptrToElement_ArrayOf_TMS570_GIO++) \
  { \
    LC_INIT_DataType_TMS570_GIO(ptrToElement_ArrayOf_TMS570_GIO); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_TMS570_GIO(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_TMS570_GIO(p,ARRAYSIZE); \
  } \
}

#endif
