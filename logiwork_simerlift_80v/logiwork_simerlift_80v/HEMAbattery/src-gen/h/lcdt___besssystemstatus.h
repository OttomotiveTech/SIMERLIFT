#ifndef LC_PROT_LCDT___BESSSYSTEMSTATUS__H
#define LC_PROT_LCDT___BESSSYSTEMSTATUS__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_USINT LC_TD_DataType_BESSSYSTEMSTATUS;

/*                            Named Value Constants                         */
#define LC_ED__bessSystemStatus__bessPOWERON ((LC_TD_USINT)0)
#define LC_ED__bessSystemStatus__bessSTART ((LC_TD_USINT)1)
#define LC_ED__bessSystemStatus__bessSTAND ((LC_TD_USINT)2)
#define LC_ED__bessSystemStatus__bessCHARGE ((LC_TD_USINT)3)
#define LC_ED__bessSystemStatus__bessDISCHARGE ((LC_TD_USINT)4)
#define LC_ED__bessSystemStatus__bessCHARGEWAITING ((LC_TD_USINT)5)
#define LC_ED__bessSystemStatus__bessDISCHARGEWAITING ((LC_TD_USINT)6)
#define LC_ED__bessSystemStatus__bessLOCK ((LC_TD_USINT)7)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_BESSSYSTEMSTATUS(p) \
{ \
  (*(p)) = LC_ED__bessSystemStatus__bessPOWERON; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_BESSSYSTEMSTATUS(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__bessSystemStatus__bessPOWERON; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_BESSSYSTEMSTATUS(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_BESSSYSTEMSTATUS * ptrToElement_ArrayOf_BESSSYSTEMSTATUS = (LC_TD_DataType_BESSSYSTEMSTATUS*)(p);\
  LC_TD_DataType_BESSSYSTEMSTATUS * arrayEnd = ptrToElement_ArrayOf_BESSSYSTEMSTATUS+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_BESSSYSTEMSTATUS < arrayEnd; ptrToElement_ArrayOf_BESSSYSTEMSTATUS++) \
  { \
    LC_INIT_DataType_BESSSYSTEMSTATUS(ptrToElement_ArrayOf_BESSSYSTEMSTATUS); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_BESSSYSTEMSTATUS(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_BESSSYSTEMSTATUS(p,ARRAYSIZE); \
  } \
}

#endif
