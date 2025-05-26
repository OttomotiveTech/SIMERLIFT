#ifndef LC_PROT_LCDT___BCU_DMX__H
#define LC_PROT_LCDT___BCU_DMX__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_DataType_BCU_DMX
{
  LC_TD_USINT LC_VD_STATE;
  LC_TD_LREAL LC_VD_DMCC;
  LC_TD_LREAL LC_VD_DMDC;
} LCCG_StructAttrib LC_TD_DataType_BCU_DMX;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_BCU_DMX(p) \
{ \
  LC_INIT_LREAL(&((p)->LC_VD_DMDC)); \
  LC_INIT_LREAL(&((p)->LC_VD_DMCC)); \
  LC_INIT_USINT(&((p)->LC_VD_STATE)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_BCU_DMX(p,RF) \
{ \
  LC_WINIT_LREAL(&((p)->LC_VD_DMDC),RF); \
  LC_WINIT_LREAL(&((p)->LC_VD_DMCC),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_STATE),RF); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_BCU_DMX(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_BCU_DMX * ptrToElement_ArrayOf_BCU_DMX = (LC_TD_DataType_BCU_DMX*)(p);\
  LC_TD_DataType_BCU_DMX * arrayEnd = ptrToElement_ArrayOf_BCU_DMX+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_BCU_DMX < arrayEnd; ptrToElement_ArrayOf_BCU_DMX++) \
  { \
    LC_INIT_DataType_BCU_DMX(ptrToElement_ArrayOf_BCU_DMX); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_BCU_DMX(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_BCU_DMX(p,ARRAYSIZE); \
  } \
}


#endif
