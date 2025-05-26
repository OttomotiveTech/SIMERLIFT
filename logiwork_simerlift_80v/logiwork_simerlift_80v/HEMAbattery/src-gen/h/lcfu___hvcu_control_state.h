#ifndef LC_PROT_LCFU___HVCU_CONTROL_STATE__H
#define LC_PROT_LCFU___HVCU_CONTROL_STATE__H

#include <LC3CGBase.h>
#include <lcdt___can_format.h>
#include <lcfu___canrecv.h>
#include <lcfu___rbit.h>
#include <lcfu_iec61131__CONVERT.h>
#include <lcfu_iec61131__NE.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_HVCU_CONTROL_STATE
{
  LC_TD_UDINT LC_VD_CAN_CH;
  LC_TD_UDINT LC_VD_CAN_ID;
  LC_TD_BOOL LC_VD_CAN_ERROR;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_IMDCTRL_BCU0;
  LC_TD_USINT LC_VD_BATTEY_STATE_BCU_00;
  LC_TD_USINT LC_VD_BATTEY_STATE_BCU_01;
  LC_TD_USINT LC_VD_BATTEY_STATE_BCU_02;
  LC_TD_USINT LC_VD_BATTEY_STATE_BCU_03;
  LC_TD_BOOL LC_VD___32_TO_BOOL;
  LC_TD_BOOL LC_VD___64_NE;
  LC_TD_BOOL LC_VD___95_NE;
  LC_TD_USINT LC_VD___56_TO_USINT;
  LC_TD_USINT LC_VD___73_TO_USINT;
  LC_TD_USINT LC_VD___76_TO_USINT;
  LC_TD_USINT LC_VD___92_TO_USINT;
  LC_TD_LWORD LC_VD___9_OUTBIT;
  LC_TD_LWORD LC_VD___10_OUTBIT;
  LC_TD_LWORD LC_VD___13_OUTBIT;
  LC_TD_LWORD LC_VD___14_OUTBIT;
  LC_TD_LWORD LC_VD___17_OUTBIT;
  LC_TD_FunctionBlock_CANRECV LC_VD_CANRECV1;
} LCCG_StructAttrib LC_TD_FunctionBlock_HVCU_CONTROL_STATE;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_HVCU_CONTROL_STATE(p) \
{ \
  (p)->LC_VD_CAN_ID = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_BATTEY_STATE_BCU_00 = (LC_TD_USINT)0; \
  (p)->LC_VD_BATTEY_STATE_BCU_01 = (LC_TD_USINT)0; \
  (p)->LC_VD_BATTEY_STATE_BCU_02 = (LC_TD_USINT)0; \
  (p)->LC_VD_BATTEY_STATE_BCU_03 = (LC_TD_USINT)0; \
  LC_INIT_BOOL(&((p)->LC_VD_IMDCTRL_BCU0)); \
  LC_INIT_BOOL(&((p)->LC_VD_CAN_ERROR)); \
  LC_INIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV1)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_HVCU_CONTROL_STATE(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_CAN_ID = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_BATTEY_STATE_BCU_00 = (LC_TD_USINT)0; \
  if (RF==0) (p)->LC_VD_BATTEY_STATE_BCU_01 = (LC_TD_USINT)0; \
  if (RF==0) (p)->LC_VD_BATTEY_STATE_BCU_02 = (LC_TD_USINT)0; \
  if (RF==0) (p)->LC_VD_BATTEY_STATE_BCU_03 = (LC_TD_USINT)0; \
  LC_WINIT_BOOL(&((p)->LC_VD_IMDCTRL_BCU0),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_CAN_ERROR),RF); \
  LC_WINIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV1),0); \
}

/*                            Prototype                        */
void  lcfu___HVCU_CONTROL_STATE(LC_TD_FunctionBlock_HVCU_CONTROL_STATE* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
