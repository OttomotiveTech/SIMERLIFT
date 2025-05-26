#ifndef LC_PROT_LCFU___HVCU_STATE__H
#define LC_PROT_LCFU___HVCU_STATE__H

#include <LC3CGBase.h>
#include <lcdt___can_format.h>
#include <lcfu___canrecv.h>
#include <lcfu___rbits.h>
#include <lcfu_iec61131__CONVERT.h>
#include <lcfu_iec61131__EQ.h>
#include <lcfu_iec61131__NE.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_HVCU_STATE
{
  LC_TD_UDINT LC_VD_CAN_CH;
  LC_TD_UDINT LC_VD_CAN_ID;
  LC_TD_BOOL LC_VD_CAN_ERROR;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_PDU_CHARGE_CONTACTOR;
  LC_TD_BOOL LC_VD_PDU_NEGATIVE_CONTACTOR;
  LC_TD_BOOL LC_VD_PDU_POSITIVE_CONTACTOR;
  LC_TD_BOOL LC_VD_PDU_PRECHARGE_CONTACTOR;
  LC_TD_USINT LC_VD_HVCU_ISOLATION_NEGATIVE;
  LC_TD_USINT LC_VD_HVCU_ISOLATION_POSITIVE;
  LC_TD_USINT LC_VD_HVCU_SOFTWARE_VERSION;
  LC_TD_USINT LC_VD_HVCU_STATE;
  LC_TD_USINT LC_VD_PDU_CONTACTOR_STATUS;
  LC_TD_BOOL LC_VD___64_NE;
  LC_TD_BOOL LC_VD___78_EQ;
  LC_TD_BOOL LC_VD___85_EQ;
  LC_TD_BOOL LC_VD___89_EQ;
  LC_TD_BOOL LC_VD___98_EQ;
  LC_TD_BOOL LC_VD___119_NE;
  LC_TD_USINT LC_VD___73_TO_USINT;
  LC_TD_USINT LC_VD___76_TO_USINT;
  LC_TD_USINT LC_VD___81_TO_USINT;
  LC_TD_USINT LC_VD___82_TO_USINT;
  LC_TD_USINT LC_VD___92_TO_USINT;
  LC_TD_FunctionBlock_CANRECV LC_VD_CANRECV1;
  LC_TD_FunctionBlock_RBITS LC_VD_RBITS1;
  LC_TD_FunctionBlock_RBITS LC_VD_RBITS2;
  LC_TD_FunctionBlock_RBITS LC_VD_RBITS3;
  LC_TD_FunctionBlock_RBITS LC_VD_RBITS4;
  LC_TD_FunctionBlock_RBITS LC_VD_RBITS5;
  LC_TD_FunctionBlock_RBITS LC_VD_RBITS6;
  LC_TD_FunctionBlock_RBITS LC_VD_RBITS7;
  LC_TD_FunctionBlock_RBITS LC_VD_RBITS8;
  LC_TD_FunctionBlock_RBITS LC_VD_RBITS9;
} LCCG_StructAttrib LC_TD_FunctionBlock_HVCU_STATE;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_HVCU_STATE(p) \
{ \
  (p)->LC_VD_CAN_ID = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_HVCU_STATE = (LC_TD_USINT)0; \
  (p)->LC_VD_PDU_CONTACTOR_STATUS = (LC_TD_USINT)0; \
  (p)->LC_VD_PDU_CHARGE_CONTACTOR = LC_EL_false; \
  (p)->LC_VD_PDU_PRECHARGE_CONTACTOR = LC_EL_false; \
  (p)->LC_VD_PDU_POSITIVE_CONTACTOR = LC_EL_false; \
  (p)->LC_VD_PDU_NEGATIVE_CONTACTOR = LC_EL_false; \
  (p)->LC_VD_HVCU_ISOLATION_POSITIVE = (LC_TD_USINT)0; \
  (p)->LC_VD_HVCU_ISOLATION_NEGATIVE = (LC_TD_USINT)0; \
  (p)->LC_VD_HVCU_SOFTWARE_VERSION = (LC_TD_USINT)0; \
  (p)->LC_VD_CAN_ERROR = LC_EL_false; \
  LC_INIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV1)); \
  LC_INIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS1)); \
  LC_INIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS2)); \
  LC_INIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS3)); \
  LC_INIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS4)); \
  LC_INIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS5)); \
  LC_INIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS6)); \
  LC_INIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS7)); \
  LC_INIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS8)); \
  LC_INIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS9)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_HVCU_STATE(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_CAN_ID = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_HVCU_STATE = (LC_TD_USINT)0; \
  if (RF==0) (p)->LC_VD_PDU_CONTACTOR_STATUS = (LC_TD_USINT)0; \
  if (RF==0) (p)->LC_VD_PDU_CHARGE_CONTACTOR = LC_EL_false; \
  if (RF==0) (p)->LC_VD_PDU_PRECHARGE_CONTACTOR = LC_EL_false; \
  if (RF==0) (p)->LC_VD_PDU_POSITIVE_CONTACTOR = LC_EL_false; \
  if (RF==0) (p)->LC_VD_PDU_NEGATIVE_CONTACTOR = LC_EL_false; \
  if (RF==0) (p)->LC_VD_HVCU_ISOLATION_POSITIVE = (LC_TD_USINT)0; \
  if (RF==0) (p)->LC_VD_HVCU_ISOLATION_NEGATIVE = (LC_TD_USINT)0; \
  if (RF==0) (p)->LC_VD_HVCU_SOFTWARE_VERSION = (LC_TD_USINT)0; \
  if (RF==0) (p)->LC_VD_CAN_ERROR = LC_EL_false; \
  LC_WINIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV1),0); \
  LC_WINIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS1),0); \
  LC_WINIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS2),0); \
  LC_WINIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS3),0); \
  LC_WINIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS4),0); \
  LC_WINIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS5),0); \
  LC_WINIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS6),0); \
  LC_WINIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS7),0); \
  LC_WINIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS8),0); \
  LC_WINIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS9),0); \
}

/*                            Prototype                        */
void  lcfu___HVCU_STATE(LC_TD_FunctionBlock_HVCU_STATE* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
