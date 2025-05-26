#ifndef LC_PROT_LCFU___MAX_MIN_VOLTAGE_STATUS__H
#define LC_PROT_LCFU___MAX_MIN_VOLTAGE_STATUS__H

#include <LC3CGBase.h>
#include <lcdt___can_format.h>
#include <lcfu___cansend.h>
#include <lcfu___wbit.h>
#include <lcfu_iec61131__CONVERT.h>
#include <lcfu_iec61131__NE.h>
#include <lcfu_iec61131__OR.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_MAX_MIN_VOLTAGE_STATUS
{
  LC_TD_USINT LC_VD_MAX_VOLT_BMU_LOC;
  LC_TD_USINT LC_VD_MAX_VOLT_CELL_LOC;
  LC_TD_USINT LC_VD_MIN_VOLT_BMU_LOC;
  LC_TD_USINT LC_VD_MIN_VOLT_CELL_LOC;
  LC_TD_UDINT LC_VD_AVERAGE_CELL_VOLTAGE;
  LC_TD_UDINT LC_VD_CAN_CH;
  LC_TD_UDINT LC_VD_CAN_ID;
  LC_TD_UDINT LC_VD_MAX_CELL_VOLTAGE;
  LC_TD_UDINT LC_VD_MIN_CELL_VOLTAGE;
  LC_TD_BOOL LC_VD_CAN_ERROR;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD___21_NE;
  LC_TD_BOOL LC_VD___64_NE;
  LC_TD_LWORD LC_VD___5_OUTBIT;
  LC_TD_LWORD LC_VD___6_OUTBIT;
  LC_TD_LWORD LC_VD___7_OUTBIT;
  LC_TD_LWORD LC_VD___8_OUTBIT;
  LC_TD_LWORD LC_VD___12_OUTBIT;
  LC_TD_LWORD LC_VD___13_OUTBIT;
  LC_TD_LWORD LC_VD___14_OUTBIT;
  LC_TD_LWORD LC_VD___27_TO_LWORD;
  LC_TD_LWORD LC_VD___32_TO_LWORD;
  LC_TD_LWORD LC_VD___33_TO_LWORD;
  LC_TD_LWORD LC_VD___34_TO_LWORD;
  LC_TD_LWORD LC_VD___35_TO_LWORD;
  LC_TD_LWORD LC_VD___36_TO_LWORD;
  LC_TD_LWORD LC_VD___37_TO_LWORD;
  LC_TD_LWORD LC_VD___192_OR;
  LC_TD_FunctionBlock_CANSEND LC_VD_CANSEND1;
} LCCG_StructAttrib LC_TD_FunctionBlock_MAX_MIN_VOLTAGE_STATUS;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_MAX_MIN_VOLTAGE_STATUS(p) \
{ \
  (p)->LC_VD_MAX_VOLT_BMU_LOC = (LC_TD_USINT)0; \
  (p)->LC_VD_MAX_VOLT_CELL_LOC = (LC_TD_USINT)0; \
  (p)->LC_VD_MIN_VOLT_BMU_LOC = (LC_TD_USINT)0; \
  (p)->LC_VD_MIN_VOLT_CELL_LOC = (LC_TD_USINT)0; \
  (p)->LC_VD_MAX_CELL_VOLTAGE = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_MIN_CELL_VOLTAGE = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_AVERAGE_CELL_VOLTAGE = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_CAN_ID = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_CAN_ERROR = LC_EL_false; \
  LC_INIT_FunctionBlock_CANSEND(&((p)->LC_VD_CANSEND1)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_MAX_MIN_VOLTAGE_STATUS(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_MAX_VOLT_BMU_LOC = (LC_TD_USINT)0; \
  if (RF==0) (p)->LC_VD_MAX_VOLT_CELL_LOC = (LC_TD_USINT)0; \
  if (RF==0) (p)->LC_VD_MIN_VOLT_BMU_LOC = (LC_TD_USINT)0; \
  if (RF==0) (p)->LC_VD_MIN_VOLT_CELL_LOC = (LC_TD_USINT)0; \
  if (RF==0) (p)->LC_VD_MAX_CELL_VOLTAGE = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_MIN_CELL_VOLTAGE = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_AVERAGE_CELL_VOLTAGE = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_CAN_ID = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_CAN_ERROR = LC_EL_false; \
  LC_WINIT_FunctionBlock_CANSEND(&((p)->LC_VD_CANSEND1),0); \
}

/*                            Prototype                        */
void  lcfu___MAX_MIN_VOLTAGE_STATUS(LC_TD_FunctionBlock_MAX_MIN_VOLTAGE_STATUS* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
