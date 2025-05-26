#ifndef LC_PROT_LCFU___HVCU_CHARGE__H
#define LC_PROT_LCFU___HVCU_CHARGE__H

#include <LC3CGBase.h>
#include <lcdt___can_format.h>
#include <lcfu___canrecv.h>
#include <lcfu___rbits.h>
#include <lcfu_iec61131__CONVERT.h>
#include <lcfu_iec61131__NE.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_HVCU_CHARGE
{
  LC_TD_UDINT LC_VD_CAN_CH;
  LC_TD_UDINT LC_VD_CAN_ID;
  LC_TD_BOOL LC_VD_CAN_ERROR;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_UINT LC_VD_CHARGE_MAX_CURRENT;
  LC_TD_UINT LC_VD_CHARGE_MAX_VOLTAGE;
  LC_TD_UINT LC_VD_CHARGE_TARGET_CURRENT;
  LC_TD_UINT LC_VD_CHARGE_TARGET_VOLTAGE;
  LC_TD_BOOL LC_VD___51_NE;
  LC_TD_BOOL LC_VD___64_NE;
  LC_TD_UINT LC_VD___34_TO_UINT;
  LC_TD_UINT LC_VD___35_TO_UINT;
  LC_TD_UINT LC_VD___36_TO_UINT;
  LC_TD_UINT LC_VD___37_TO_UINT;
  LC_TD_FunctionBlock_CANRECV LC_VD_CANRECV1;
  LC_TD_FunctionBlock_RBITS LC_VD_RBITS1;
  LC_TD_FunctionBlock_RBITS LC_VD_RBITS2;
  LC_TD_FunctionBlock_RBITS LC_VD_RBITS3;
  LC_TD_FunctionBlock_RBITS LC_VD_RBITS4;
} LCCG_StructAttrib LC_TD_FunctionBlock_HVCU_CHARGE;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_HVCU_CHARGE(p) \
{ \
  (p)->LC_VD_CAN_ID = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_CHARGE_TARGET_CURRENT = (LC_TD_UINT)0; \
  (p)->LC_VD_CHARGE_TARGET_VOLTAGE = (LC_TD_UINT)0; \
  (p)->LC_VD_CHARGE_MAX_CURRENT = (LC_TD_UINT)0; \
  (p)->LC_VD_CHARGE_MAX_VOLTAGE = (LC_TD_UINT)0; \
  (p)->LC_VD_CAN_ERROR = LC_EL_false; \
  LC_INIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV1)); \
  LC_INIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS1)); \
  LC_INIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS2)); \
  LC_INIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS3)); \
  LC_INIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS4)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_HVCU_CHARGE(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_CAN_ID = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_CHARGE_TARGET_CURRENT = (LC_TD_UINT)0; \
  if (RF==0) (p)->LC_VD_CHARGE_TARGET_VOLTAGE = (LC_TD_UINT)0; \
  if (RF==0) (p)->LC_VD_CHARGE_MAX_CURRENT = (LC_TD_UINT)0; \
  if (RF==0) (p)->LC_VD_CHARGE_MAX_VOLTAGE = (LC_TD_UINT)0; \
  if (RF==0) (p)->LC_VD_CAN_ERROR = LC_EL_false; \
  LC_WINIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV1),0); \
  LC_WINIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS1),0); \
  LC_WINIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS2),0); \
  LC_WINIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS3),0); \
  LC_WINIT_FunctionBlock_RBITS(&((p)->LC_VD_RBITS4),0); \
}

/*                            Prototype                        */
void  lcfu___HVCU_CHARGE(LC_TD_FunctionBlock_HVCU_CHARGE* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
