#ifndef LC_PROT_LCDT___CELLTEMPBMS__H
#define LC_PROT_LCDT___CELLTEMPBMS__H

#include <LC3CGBase.h>

#include <lcdt___celltempinfo.h>
/*                            Typedefs                         */
typedef struct _LC_TD_DataType_CELLTEMPBMS
{
  LC_TD_USINT LC_VD_PACK;
  LC_TD_DataType_CELLTEMPINFO LC_VD_CELL;
} LCCG_StructAttrib LC_TD_DataType_CELLTEMPBMS;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_CELLTEMPBMS(p) \
{ \
  LC_INIT_DataType_CELLTEMPINFO(&((p)->LC_VD_CELL)); \
  LC_INIT_USINT(&((p)->LC_VD_PACK)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_CELLTEMPBMS(p,RF) \
{ \
  LC_WINIT_DataType_CELLTEMPINFO(&((p)->LC_VD_CELL),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_PACK),RF); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_CELLTEMPBMS(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_CELLTEMPBMS * ptrToElement_ArrayOf_CELLTEMPBMS = (LC_TD_DataType_CELLTEMPBMS*)(p);\
  LC_TD_DataType_CELLTEMPBMS * arrayEnd = ptrToElement_ArrayOf_CELLTEMPBMS+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_CELLTEMPBMS < arrayEnd; ptrToElement_ArrayOf_CELLTEMPBMS++) \
  { \
    LC_INIT_DataType_CELLTEMPBMS(ptrToElement_ArrayOf_CELLTEMPBMS); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_CELLTEMPBMS(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_CELLTEMPBMS(p,ARRAYSIZE); \
  } \
}


#endif
