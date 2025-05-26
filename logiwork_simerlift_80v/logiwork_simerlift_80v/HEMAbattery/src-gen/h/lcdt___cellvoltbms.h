#ifndef LC_PROT_LCDT___CELLVOLTBMS__H
#define LC_PROT_LCDT___CELLVOLTBMS__H

#include <LC3CGBase.h>

#include <lcdt___cellvoltinfo.h>
/*                            Typedefs                         */
typedef struct _LC_TD_DataType_CELLVOLTBMS
{
  LC_TD_USINT LC_VD_PACK;
  LC_TD_DataType_CELLVOLTINFO LC_VD_CELL;
} LCCG_StructAttrib LC_TD_DataType_CELLVOLTBMS;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_CELLVOLTBMS(p) \
{ \
  LC_INIT_DataType_CELLVOLTINFO(&((p)->LC_VD_CELL)); \
  LC_INIT_USINT(&((p)->LC_VD_PACK)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_CELLVOLTBMS(p,RF) \
{ \
  LC_WINIT_DataType_CELLVOLTINFO(&((p)->LC_VD_CELL),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_PACK),RF); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_CELLVOLTBMS(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_CELLVOLTBMS * ptrToElement_ArrayOf_CELLVOLTBMS = (LC_TD_DataType_CELLVOLTBMS*)(p);\
  LC_TD_DataType_CELLVOLTBMS * arrayEnd = ptrToElement_ArrayOf_CELLVOLTBMS+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_CELLVOLTBMS < arrayEnd; ptrToElement_ArrayOf_CELLVOLTBMS++) \
  { \
    LC_INIT_DataType_CELLVOLTBMS(ptrToElement_ArrayOf_CELLVOLTBMS); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_CELLVOLTBMS(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_CELLVOLTBMS(p,ARRAYSIZE); \
  } \
}


#endif
