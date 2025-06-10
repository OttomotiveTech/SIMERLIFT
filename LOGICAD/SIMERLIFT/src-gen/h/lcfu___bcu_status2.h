#ifndef LC_PROT_LCFU___BCU_STATUS2__H
#define LC_PROT_LCFU___BCU_STATUS2__H

#include <LC3CGBase.h>
#include <lcdt___can_format.h>
#include <lcfu___cansend.h>
#include <lcfu___wbit.h>
#include <lcfu___wflt.h>
#include <lcfu_iec61131__CONVERT.h>
#include <lcfu_iec61131__NE.h>
#include <lcfu_iec61131__OR.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_BCU_STATUS2
{
  LC_TD_USINT LC_VD_MAX_TEMP_BMU_LOC;
  LC_TD_USINT LC_VD_MAX_TEMP_CELL_LOC;
  LC_TD_USINT LC_VD_MIN_TEMP_BMU_LOC;
  LC_TD_USINT LC_VD_MIN_TEMP_CELL_LOC;
  LC_TD_UDINT LC_VD_CAN_CH;
  LC_TD_UDINT LC_VD_CAN_ID;
  LC_TD_REAL LC_VD_MAX_CELL_TEMP;
  LC_TD_REAL LC_VD_MIN_CELL_TEMP;
  LC_TD_REAL LC_VD_OUTVOLT;
  LC_TD_BOOL LC_VD_CAN_ERROR;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD___64_NE;
  LC_TD_BOOL LC_VD___95_NE;
  LC_TD_LWORD LC_VD___7_OUTBIT;
  LC_TD_LWORD LC_VD___9_OUTBIT;
  LC_TD_LWORD LC_VD___10_OUTBIT;
  LC_TD_LWORD LC_VD___12_OUTBIT;
  LC_TD_LWORD LC_VD___14_OUTBIT;
  LC_TD_LWORD LC_VD___21_OUTBIT;
  LC_TD_LWORD LC_VD___23_TO_LWORD;
  LC_TD_LWORD LC_VD___24_TO_LWORD;
  LC_TD_LWORD LC_VD___25_TO_LWORD;
  LC_TD_LWORD LC_VD___26_TO_LWORD;
  LC_TD_LWORD LC_VD___57_OUTBIT;
  LC_TD_LWORD LC_VD___114_OR;
  LC_TD_FunctionBlock_CANSEND LC_VD_CANSEND2;
} LCCG_StructAttrib LC_TD_FunctionBlock_BCU_STATUS2;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_BCU_STATUS2(p) \
{ \
  (p)->LC_VD_MAX_TEMP_BMU_LOC = (LC_TD_USINT)0; \
  (p)->LC_VD_MAX_TEMP_CELL_LOC = (LC_TD_USINT)0; \
  (p)->LC_VD_MIN_TEMP_BMU_LOC = (LC_TD_USINT)0; \
  (p)->LC_VD_MIN_TEMP_CELL_LOC = (LC_TD_USINT)0; \
  (p)->LC_VD_MAX_CELL_TEMP = (LC_TD_REAL)0; \
  (p)->LC_VD_MIN_CELL_TEMP = (LC_TD_REAL)0; \
  (p)->LC_VD_CAN_ID = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  LC_INIT_REAL(&((p)->LC_VD_OUTVOLT)); \
  (p)->LC_VD_CAN_ERROR = LC_EL_false; \
  LC_INIT_FunctionBlock_CANSEND(&((p)->LC_VD_CANSEND2)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_BCU_STATUS2(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_MAX_TEMP_BMU_LOC = (LC_TD_USINT)0; \
  if (RF==0) (p)->LC_VD_MAX_TEMP_CELL_LOC = (LC_TD_USINT)0; \
  if (RF==0) (p)->LC_VD_MIN_TEMP_BMU_LOC = (LC_TD_USINT)0; \
  if (RF==0) (p)->LC_VD_MIN_TEMP_CELL_LOC = (LC_TD_USINT)0; \
  if (RF==0) (p)->LC_VD_MAX_CELL_TEMP = (LC_TD_REAL)0; \
  if (RF==0) (p)->LC_VD_MIN_CELL_TEMP = (LC_TD_REAL)0; \
  if (RF==0) (p)->LC_VD_CAN_ID = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  LC_WINIT_REAL(&((p)->LC_VD_OUTVOLT),RF); \
  if (RF==0) (p)->LC_VD_CAN_ERROR = LC_EL_false; \
  LC_WINIT_FunctionBlock_CANSEND(&((p)->LC_VD_CANSEND2),0); \
}

/*                            Prototype                        */
void  lcfu___BCU_STATUS2(LC_TD_FunctionBlock_BCU_STATUS2* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
