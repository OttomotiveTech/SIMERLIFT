#ifndef LC_PROT_LCDT___CELLTEMPINFO__H
#define LC_PROT_LCDT___CELLTEMPINFO__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_DataType_CELLTEMPINFO
{
  LC_TD_SINT LC_VD_TEMP;
  LC_TD_USINT LC_VD_LOCBMU;
  LC_TD_USINT LC_VD_LOCCELL;
} LCCG_StructAttrib LC_TD_DataType_CELLTEMPINFO;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_CELLTEMPINFO(p) \
{ \
  LC_INIT_USINT(&((p)->LC_VD_LOCBMU)); \
  LC_INIT_USINT(&((p)->LC_VD_LOCCELL)); \
  LC_INIT_SINT(&((p)->LC_VD_TEMP)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_CELLTEMPINFO(p,RF) \
{ \
  LC_WINIT_USINT(&((p)->LC_VD_LOCBMU),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_LOCCELL),RF); \
  LC_WINIT_SINT(&((p)->LC_VD_TEMP),RF); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_CELLTEMPINFO(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_CELLTEMPINFO * ptrToElement_ArrayOf_CELLTEMPINFO = (LC_TD_DataType_CELLTEMPINFO*)(p);\
  LC_TD_DataType_CELLTEMPINFO * arrayEnd = ptrToElement_ArrayOf_CELLTEMPINFO+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_CELLTEMPINFO < arrayEnd; ptrToElement_ArrayOf_CELLTEMPINFO++) \
  { \
    LC_INIT_DataType_CELLTEMPINFO(ptrToElement_ArrayOf_CELLTEMPINFO); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_CELLTEMPINFO(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_CELLTEMPINFO(p,ARRAYSIZE); \
  } \
}


#endif
