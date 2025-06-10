#ifndef LC_PROT_LCFU___BCU_BALANCE_STATUS__H
#define LC_PROT_LCFU___BCU_BALANCE_STATUS__H

#include <LC3CGBase.h>
#include <lcdt___can_format.h>
#include <lcfu___cansend.h>
#include <lcfu___wbits.h>
#include <lcfu_iec61131__NE.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_BCU_BALANCE_STATUS
{
  LC_TD_UINT LC_VD_BALANCE_REGISTER;
  LC_TD_UDINT LC_VD_CAN_CH;
  LC_TD_UDINT LC_VD_CAN_ID;
  LC_TD_BOOL LC_VD_CAN_ERROR;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD___64_NE;
  LC_TD_BOOL LC_VD___95_NE;
  LC_TD_FunctionBlock_CANSEND LC_VD_CANSEND4;
  LC_TD_FunctionBlock_WBITS LC_VD_WBITS19;
} LCCG_StructAttrib LC_TD_FunctionBlock_BCU_BALANCE_STATUS;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_BCU_BALANCE_STATUS(p) \
{ \
  (p)->LC_VD_CAN_ID = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_BALANCE_REGISTER = (LC_TD_UINT)0; \
  (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_CAN_ERROR = LC_EL_false; \
  LC_INIT_FunctionBlock_CANSEND(&((p)->LC_VD_CANSEND4)); \
  LC_INIT_FunctionBlock_WBITS(&((p)->LC_VD_WBITS19)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_BCU_BALANCE_STATUS(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_CAN_ID = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_BALANCE_REGISTER = (LC_TD_UINT)0; \
  if (RF==0) (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_CAN_ERROR = LC_EL_false; \
  LC_WINIT_FunctionBlock_CANSEND(&((p)->LC_VD_CANSEND4),0); \
  LC_WINIT_FunctionBlock_WBITS(&((p)->LC_VD_WBITS19),0); \
}

/*                            Prototype                        */
void  lcfu___BCU_BALANCE_STATUS(LC_TD_FunctionBlock_BCU_BALANCE_STATUS* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
