#ifndef LC_PROT_LCDT___BATTERYBUNDLE__H
#define LC_PROT_LCDT___BATTERYBUNDLE__H

#include <LC3CGBase.h>

#include <lcdt___abattpacklist.h>
#include <lcdt___celltpacklist.h>
#include <lcdt___cellvoltpacklist.h>
#include <lcdt___cellvpacklist.h>
#include <lcdt___cyclepacklist.h>
#include <lcdt___dmxcpacklist.h>
#include <lcdt___energypacklist.h>
#include <lcdt___faultpacklist.h>
#include <lcdt___soxpacklist.h>
#include <lcdt___statepacklist.h>
#include <lcdt___temppacklist.h>
#include <lcdt___vbattpacklist.h>
/*                            Typedefs                         */
typedef struct _LC_TD_DataType_BATTERYBUNDLE
{
  LC_TD_DataType_CELLVOLTPACKLIST LC_VD_AVGCELLV;
  LC_TD_DataType_ABATTPACKLIST LC_VD_CURRENT;
  LC_TD_DataType_CYCLEPACKLIST LC_VD_CYCLE;
  LC_TD_DataType_DMXCPACKLIST LC_VD_DMCC;
  LC_TD_DataType_DMXCPACKLIST LC_VD_DMDC;
  LC_TD_DataType_ENERGYPACKLIST LC_VD_ENERGY;
  LC_TD_DataType_ENERGYPACKLIST LC_VD_ENERGYREMAINING;
  LC_TD_DataType_FAULTPACKLIST LC_VD_FAULT;
  LC_TD_DataType_CELLTPACKLIST LC_VD_MAXTCELL;
  LC_TD_DataType_CELLVPACKLIST LC_VD_MAXVCELL;
  LC_TD_DataType_CELLTPACKLIST LC_VD_MINTCELL;
  LC_TD_DataType_CELLVPACKLIST LC_VD_MINVCELL;
  LC_TD_DataType_SOXPACKLIST LC_VD_SOC;
  LC_TD_DataType_SOXPACKLIST LC_VD_SOH;
  LC_TD_DataType_STATEPACKLIST LC_VD_STATE;
  LC_TD_DataType_TEMPPACKLIST LC_VD_TEMP;
  LC_TD_DataType_VBATTPACKLIST LC_VD_VOLTAGE;
} LCCG_StructAttrib LC_TD_DataType_BATTERYBUNDLE;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_BATTERYBUNDLE(p) \
{ \
  LC_INIT_DataType_CELLVOLTPACKLIST(&((p)->LC_VD_AVGCELLV)); \
  LC_INIT_DataType_CELLVPACKLIST(&((p)->LC_VD_MAXVCELL)); \
  LC_INIT_DataType_CELLVPACKLIST(&((p)->LC_VD_MINVCELL)); \
  LC_INIT_DataType_CELLTPACKLIST(&((p)->LC_VD_MAXTCELL)); \
  LC_INIT_DataType_CELLTPACKLIST(&((p)->LC_VD_MINTCELL)); \
  LC_INIT_DataType_DMXCPACKLIST(&((p)->LC_VD_DMDC)); \
  LC_INIT_DataType_DMXCPACKLIST(&((p)->LC_VD_DMCC)); \
  LC_INIT_DataType_STATEPACKLIST(&((p)->LC_VD_STATE)); \
  LC_INIT_DataType_TEMPPACKLIST(&((p)->LC_VD_TEMP)); \
  LC_INIT_DataType_CYCLEPACKLIST(&((p)->LC_VD_CYCLE)); \
  LC_INIT_DataType_SOXPACKLIST(&((p)->LC_VD_SOC)); \
  LC_INIT_DataType_SOXPACKLIST(&((p)->LC_VD_SOH)); \
  LC_INIT_DataType_ENERGYPACKLIST(&((p)->LC_VD_ENERGY)); \
  LC_INIT_DataType_ENERGYPACKLIST(&((p)->LC_VD_ENERGYREMAINING)); \
  LC_INIT_DataType_VBATTPACKLIST(&((p)->LC_VD_VOLTAGE)); \
  LC_INIT_DataType_ABATTPACKLIST(&((p)->LC_VD_CURRENT)); \
  LC_INIT_DataType_FAULTPACKLIST(&((p)->LC_VD_FAULT)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_BATTERYBUNDLE(p,RF) \
{ \
  LC_WINIT_DataType_CELLVOLTPACKLIST(&((p)->LC_VD_AVGCELLV),RF); \
  LC_WINIT_DataType_CELLVPACKLIST(&((p)->LC_VD_MAXVCELL),RF); \
  LC_WINIT_DataType_CELLVPACKLIST(&((p)->LC_VD_MINVCELL),RF); \
  LC_WINIT_DataType_CELLTPACKLIST(&((p)->LC_VD_MAXTCELL),RF); \
  LC_WINIT_DataType_CELLTPACKLIST(&((p)->LC_VD_MINTCELL),RF); \
  LC_WINIT_DataType_DMXCPACKLIST(&((p)->LC_VD_DMDC),RF); \
  LC_WINIT_DataType_DMXCPACKLIST(&((p)->LC_VD_DMCC),RF); \
  LC_WINIT_DataType_STATEPACKLIST(&((p)->LC_VD_STATE),RF); \
  LC_WINIT_DataType_TEMPPACKLIST(&((p)->LC_VD_TEMP),RF); \
  LC_WINIT_DataType_CYCLEPACKLIST(&((p)->LC_VD_CYCLE),RF); \
  LC_WINIT_DataType_SOXPACKLIST(&((p)->LC_VD_SOC),RF); \
  LC_WINIT_DataType_SOXPACKLIST(&((p)->LC_VD_SOH),RF); \
  LC_WINIT_DataType_ENERGYPACKLIST(&((p)->LC_VD_ENERGY),RF); \
  LC_WINIT_DataType_ENERGYPACKLIST(&((p)->LC_VD_ENERGYREMAINING),RF); \
  LC_WINIT_DataType_VBATTPACKLIST(&((p)->LC_VD_VOLTAGE),RF); \
  LC_WINIT_DataType_ABATTPACKLIST(&((p)->LC_VD_CURRENT),RF); \
  LC_WINIT_DataType_FAULTPACKLIST(&((p)->LC_VD_FAULT),RF); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_BATTERYBUNDLE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_BATTERYBUNDLE * ptrToElement_ArrayOf_BATTERYBUNDLE = (LC_TD_DataType_BATTERYBUNDLE*)(p);\
  LC_TD_DataType_BATTERYBUNDLE * arrayEnd = ptrToElement_ArrayOf_BATTERYBUNDLE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_BATTERYBUNDLE < arrayEnd; ptrToElement_ArrayOf_BATTERYBUNDLE++) \
  { \
    LC_INIT_DataType_BATTERYBUNDLE(ptrToElement_ArrayOf_BATTERYBUNDLE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_BATTERYBUNDLE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_BATTERYBUNDLE(p,ARRAYSIZE); \
  } \
}


#endif
