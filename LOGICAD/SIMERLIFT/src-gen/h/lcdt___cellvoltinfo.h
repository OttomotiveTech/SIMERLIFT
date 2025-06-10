#ifndef LC_PROT_LCDT___CELLVOLTINFO__H
#define LC_PROT_LCDT___CELLVOLTINFO__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_DataType_CELLVOLTINFO
{
  LC_TD_USINT LC_VD_LOCBMU;
  LC_TD_USINT LC_VD_LOCCELL;
  LC_TD_UINT LC_VD_VOLT;
} LCCG_StructAttrib LC_TD_DataType_CELLVOLTINFO;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_CELLVOLTINFO(p) \
{ \
  LC_INIT_USINT(&((p)->LC_VD_LOCBMU)); \
  LC_INIT_USINT(&((p)->LC_VD_LOCCELL)); \
  LC_INIT_UINT(&((p)->LC_VD_VOLT)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_CELLVOLTINFO(p,RF) \
{ \
  LC_WINIT_USINT(&((p)->LC_VD_LOCBMU),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_LOCCELL),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_VOLT),RF); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_CELLVOLTINFO(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_CELLVOLTINFO * ptrToElement_ArrayOf_CELLVOLTINFO = (LC_TD_DataType_CELLVOLTINFO*)(p);\
  LC_TD_DataType_CELLVOLTINFO * arrayEnd = ptrToElement_ArrayOf_CELLVOLTINFO+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_CELLVOLTINFO < arrayEnd; ptrToElement_ArrayOf_CELLVOLTINFO++) \
  { \
    LC_INIT_DataType_CELLVOLTINFO(ptrToElement_ArrayOf_CELLVOLTINFO); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_CELLVOLTINFO(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_CELLVOLTINFO(p,ARRAYSIZE); \
  } \
}


#endif
