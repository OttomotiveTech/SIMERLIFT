#ifndef LC_PROT_LCDT___BMSTYPE__H
#define LC_PROT_LCDT___BMSTYPE__H

#include <LC3CGBase.h>

#include <lcdt___bmsstate.h>
#include <lcdt___celltempbms.h>
#include <lcdt___cellvoltbms.h>
/*                            Typedefs                         */
typedef struct _LC_TD_DataType_BMSTYPE
{
  LC_TD_USINT LC_VD_NUMOFPACKS;
  LC_TD_USINT LC_VD_SOC;
  LC_TD_USINT LC_VD_SOH;
  LC_TD_UINT LC_VD_AVGCELLV;
  LC_TD_UINT LC_VD_DMCC;
  LC_TD_UINT LC_VD_DMDC;
  LC_TD_UINT LC_VD_ENERGY;
  LC_TD_UINT LC_VD_VOLTAGE;
  LC_TD_REAL LC_VD_CURRENT;
  LC_TD_DataType_CELLTEMPBMS LC_VD_MAXCELLT;
  LC_TD_DataType_CELLVOLTBMS LC_VD_MAXCELLV;
  LC_TD_DataType_CELLTEMPBMS LC_VD_MINCELLT;
  LC_TD_DataType_CELLVOLTBMS LC_VD_MINCELLV;
  LC_TD_DataType_BMSSTATE LC_VD_STATE;
} LCCG_StructAttrib LC_TD_DataType_BMSTYPE;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_BMSTYPE(p) \
{ \
  LC_INIT_UINT(&((p)->LC_VD_AVGCELLV)); \
  LC_INIT_DataType_CELLVOLTBMS(&((p)->LC_VD_MAXCELLV)); \
  LC_INIT_DataType_CELLVOLTBMS(&((p)->LC_VD_MINCELLV)); \
  LC_INIT_DataType_CELLTEMPBMS(&((p)->LC_VD_MAXCELLT)); \
  LC_INIT_DataType_CELLTEMPBMS(&((p)->LC_VD_MINCELLT)); \
  LC_INIT_UINT(&((p)->LC_VD_DMDC)); \
  LC_INIT_UINT(&((p)->LC_VD_DMCC)); \
  LC_INIT_DataType_BMSSTATE(&((p)->LC_VD_STATE)); \
  LC_INIT_USINT(&((p)->LC_VD_SOC)); \
  LC_INIT_USINT(&((p)->LC_VD_SOH)); \
  LC_INIT_UINT(&((p)->LC_VD_ENERGY)); \
  LC_INIT_UINT(&((p)->LC_VD_VOLTAGE)); \
  LC_INIT_REAL(&((p)->LC_VD_CURRENT)); \
  LC_INIT_USINT(&((p)->LC_VD_NUMOFPACKS)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_BMSTYPE(p,RF) \
{ \
  LC_WINIT_UINT(&((p)->LC_VD_AVGCELLV),RF); \
  LC_WINIT_DataType_CELLVOLTBMS(&((p)->LC_VD_MAXCELLV),RF); \
  LC_WINIT_DataType_CELLVOLTBMS(&((p)->LC_VD_MINCELLV),RF); \
  LC_WINIT_DataType_CELLTEMPBMS(&((p)->LC_VD_MAXCELLT),RF); \
  LC_WINIT_DataType_CELLTEMPBMS(&((p)->LC_VD_MINCELLT),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_DMDC),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_DMCC),RF); \
  LC_WINIT_DataType_BMSSTATE(&((p)->LC_VD_STATE),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_SOC),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_SOH),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_ENERGY),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_VOLTAGE),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_CURRENT),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_NUMOFPACKS),RF); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_BMSTYPE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_BMSTYPE * ptrToElement_ArrayOf_BMSTYPE = (LC_TD_DataType_BMSTYPE*)(p);\
  LC_TD_DataType_BMSTYPE * arrayEnd = ptrToElement_ArrayOf_BMSTYPE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_BMSTYPE < arrayEnd; ptrToElement_ArrayOf_BMSTYPE++) \
  { \
    LC_INIT_DataType_BMSTYPE(ptrToElement_ArrayOf_BMSTYPE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_BMSTYPE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_BMSTYPE(p,ARRAYSIZE); \
  } \
}


#endif
