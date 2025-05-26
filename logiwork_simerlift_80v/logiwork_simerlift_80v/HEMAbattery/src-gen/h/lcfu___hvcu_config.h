#ifndef LC_PROT_LCFU___HVCU_CONFIG__H
#define LC_PROT_LCFU___HVCU_CONFIG__H

#include <LC3CGBase.h>
#include <lcdt___can_format.h>
#include <lcfu___canrecv.h>
#include <lcfu___rbit.h>
#include <lcfu_iec61131__CONVERT.h>
#include <lcfu_iec61131__NE.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_HVCU_CONFIG
{
  LC_TD_UDINT LC_VD_CAN_CH;
  LC_TD_UDINT LC_VD_CAN_ID;
  LC_TD_BOOL LC_VD_CAN_ERROR;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_USINT LC_VD_CMD0;
  LC_TD_USINT LC_VD_CMD1;
  LC_TD_USINT LC_VD_CMD2;
  LC_TD_USINT LC_VD_CMD3;
  LC_TD_BOOL LC_VD___51_NE;
  LC_TD_BOOL LC_VD___64_NE;
  LC_TD_USINT LC_VD___12_TO_USINT;
  LC_TD_USINT LC_VD___22_TO_USINT;
  LC_TD_USINT LC_VD___23_TO_USINT;
  LC_TD_USINT LC_VD___42_TO_USINT;
  LC_TD_LWORD LC_VD___11_OUTBIT;
  LC_TD_LWORD LC_VD___24_OUTBIT;
  LC_TD_LWORD LC_VD___35_OUTBIT;
  LC_TD_LWORD LC_VD___40_OUTBIT;
  LC_TD_FunctionBlock_CANRECV LC_VD_CANRECV1;
} LCCG_StructAttrib LC_TD_FunctionBlock_HVCU_CONFIG;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_HVCU_CONFIG(p) \
{ \
  (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_CAN_ID = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_CMD0 = (LC_TD_USINT)0; \
  LC_INIT_BOOL(&((p)->LC_VD_CAN_ERROR)); \
  LC_INIT_USINT(&((p)->LC_VD_CMD1)); \
  LC_INIT_USINT(&((p)->LC_VD_CMD2)); \
  LC_INIT_USINT(&((p)->LC_VD_CMD3)); \
  LC_INIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV1)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_HVCU_CONFIG(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_CAN_ID = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_CMD0 = (LC_TD_USINT)0; \
  LC_WINIT_BOOL(&((p)->LC_VD_CAN_ERROR),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_CMD1),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_CMD2),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_CMD3),RF); \
  LC_WINIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV1),0); \
}

/*                            Prototype                        */
void  lcfu___HVCU_CONFIG(LC_TD_FunctionBlock_HVCU_CONFIG* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
