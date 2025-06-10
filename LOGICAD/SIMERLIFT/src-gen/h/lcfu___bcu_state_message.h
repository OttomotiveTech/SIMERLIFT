#ifndef LC_PROT_LCFU___BCU_STATE_MESSAGE__H
#define LC_PROT_LCFU___BCU_STATE_MESSAGE__H

#include <LC3CGBase.h>
#include <lcdt___can_format.h>
#include <lcfu___cansend.h>
#include <lcfu___wbit.h>
#include <lcfu___wflt.h>
#include <lcfu_iec61131__CONVERT.h>
#include <lcfu_iec61131__NE.h>
#include <lcfu_iec61131__OR.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_BCU_STATE_MESSAGE
{
  LC_TD_BOOL LC_VD_CHARGECOMPLETE;
  LC_TD_BOOL LC_VD_CHARGECONTACT;
  LC_TD_BOOL LC_VD_CONTACTOR_STATUS;
  LC_TD_BOOL LC_VD_DISCHARGECOMPLETE;
  LC_TD_BOOL LC_VD_EMERGENCYBUTTON;
  LC_TD_BOOL LC_VD_NEGCONTACT;
  LC_TD_USINT LC_VD_IN1STATUS;
  LC_TD_USINT LC_VD_IN2STATUS;
  LC_TD_USINT LC_VD_ISOLATIONSTATUS;
  LC_TD_USINT LC_VD_STATE;
  LC_TD_UINT LC_VD_DMCC;
  LC_TD_UINT LC_VD_DMDC;
  LC_TD_UDINT LC_VD_CAN_CH;
  LC_TD_UDINT LC_VD_CAN_ID;
  LC_TD_REAL LC_VD_AMBIENT_TEMP;
  LC_TD_BOOL LC_VD_CAN_ERROR;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD___64_NE;
  LC_TD_BOOL LC_VD___95_NE;
  LC_TD_LWORD LC_VD___2_OUTBIT;
  LC_TD_LWORD LC_VD___3_OUTBIT;
  LC_TD_LWORD LC_VD___9_OUTBIT;
  LC_TD_LWORD LC_VD___10_OUTBIT;
  LC_TD_LWORD LC_VD___12_OR;
  LC_TD_LWORD LC_VD___13_TO_LWORD;
  LC_TD_LWORD LC_VD___14_OUTBIT;
  LC_TD_LWORD LC_VD___15_OUTBIT;
  LC_TD_LWORD LC_VD___16_TO_LWORD;
  LC_TD_LWORD LC_VD___17_TO_LWORD;
  LC_TD_LWORD LC_VD___79_TO_LWORD;
  LC_TD_LWORD LC_VD___81_OUTBIT;
  LC_TD_LWORD LC_VD___86_TO_LWORD;
  LC_TD_LWORD LC_VD___87_OUTBIT;
  LC_TD_LWORD LC_VD___104_TO_LWORD;
  LC_TD_LWORD LC_VD___105_OUTBIT;
  LC_TD_LWORD LC_VD___120_TO_LWORD;
  LC_TD_LWORD LC_VD___121_OUTBIT;
  LC_TD_LWORD LC_VD___129_TO_LWORD;
  LC_TD_LWORD LC_VD___130_OUTBIT;
  LC_TD_LWORD LC_VD___138_TO_LWORD;
  LC_TD_LWORD LC_VD___139_OUTBIT;
  LC_TD_LWORD LC_VD___147_TO_LWORD;
  LC_TD_LWORD LC_VD___148_OUTBIT;
  LC_TD_FunctionBlock_CANSEND LC_VD_CANSEND4;
} LCCG_StructAttrib LC_TD_FunctionBlock_BCU_STATE_MESSAGE;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_BCU_STATE_MESSAGE(p) \
{ \
  (p)->LC_VD_CAN_ID = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_STATE = (LC_TD_USINT)0; \
  (p)->LC_VD_CONTACTOR_STATUS = LC_EL_false; \
  (p)->LC_VD_CHARGECONTACT = LC_EL_false; \
  (p)->LC_VD_AMBIENT_TEMP = (LC_TD_REAL)0; \
  (p)->LC_VD_DMDC = (LC_TD_UINT)0; \
  (p)->LC_VD_DMCC = (LC_TD_UINT)0; \
  (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  LC_INIT_BOOL(&((p)->LC_VD_NEGCONTACT)); \
  LC_INIT_USINT(&((p)->LC_VD_ISOLATIONSTATUS)); \
  LC_INIT_BOOL(&((p)->LC_VD_CHARGECOMPLETE)); \
  LC_INIT_BOOL(&((p)->LC_VD_DISCHARGECOMPLETE)); \
  LC_INIT_BOOL(&((p)->LC_VD_EMERGENCYBUTTON)); \
  LC_INIT_USINT(&((p)->LC_VD_IN1STATUS)); \
  LC_INIT_USINT(&((p)->LC_VD_IN2STATUS)); \
  (p)->LC_VD_CAN_ERROR = LC_EL_false; \
  LC_INIT_FunctionBlock_CANSEND(&((p)->LC_VD_CANSEND4)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_BCU_STATE_MESSAGE(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_CAN_ID = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_STATE = (LC_TD_USINT)0; \
  if (RF==0) (p)->LC_VD_CONTACTOR_STATUS = LC_EL_false; \
  if (RF==0) (p)->LC_VD_CHARGECONTACT = LC_EL_false; \
  if (RF==0) (p)->LC_VD_AMBIENT_TEMP = (LC_TD_REAL)0; \
  if (RF==0) (p)->LC_VD_DMDC = (LC_TD_UINT)0; \
  if (RF==0) (p)->LC_VD_DMCC = (LC_TD_UINT)0; \
  if (RF==0) (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  LC_WINIT_BOOL(&((p)->LC_VD_NEGCONTACT),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_ISOLATIONSTATUS),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_CHARGECOMPLETE),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_DISCHARGECOMPLETE),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_EMERGENCYBUTTON),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_IN1STATUS),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_IN2STATUS),RF); \
  if (RF==0) (p)->LC_VD_CAN_ERROR = LC_EL_false; \
  LC_WINIT_FunctionBlock_CANSEND(&((p)->LC_VD_CANSEND4),0); \
}

/*                            Prototype                        */
void  lcfu___BCU_STATE_MESSAGE(LC_TD_FunctionBlock_BCU_STATE_MESSAGE* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
