#ifndef LC_PROT_LCFU___CAN_TEST_2__H
#define LC_PROT_LCFU___CAN_TEST_2__H

#include <LC3CGBase.h>
#include <lcdt___can_format.h>
#include <lcfu___cansend.h>
#include <lcfu___wbit.h>
#include <lcfu_iec61131__CONVERT.h>
#include <lcfu_iec61131__NE.h>
#include <lcfu_iec61131__OR.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_CAN_TEST_2
{
  LC_TD_UDINT LC_VD_CAN_CH;
  LC_TD_UDINT LC_VD_CAN_ID;
  LC_TD_UDINT LC_VD_IN_1;
  LC_TD_UDINT LC_VD_IN_2;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD___64_NE;
  LC_TD_LWORD LC_VD___5_OUTBIT;
  LC_TD_LWORD LC_VD___6_OUTBIT;
  LC_TD_LWORD LC_VD___16_TO_LWORD;
  LC_TD_LWORD LC_VD___18_TO_LWORD;
  LC_TD_LWORD LC_VD___542_OR;
  LC_TD_FunctionBlock_CANSEND LC_VD_CANSEND3;
} LCCG_StructAttrib LC_TD_FunctionBlock_CAN_TEST_2;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_CAN_TEST_2(p) \
{ \
  (p)->LC_VD_IN_1 = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_IN_2 = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_CAN_ID = (LC_TD_UDINT)0UL; \
  LC_INIT_FunctionBlock_CANSEND(&((p)->LC_VD_CANSEND3)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_CAN_TEST_2(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_IN_1 = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_IN_2 = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_CAN_ID = (LC_TD_UDINT)0UL; \
  LC_WINIT_FunctionBlock_CANSEND(&((p)->LC_VD_CANSEND3),0); \
}

/*                            Prototype                        */
void  lcfu___CAN_TEST_2(LC_TD_FunctionBlock_CAN_TEST_2* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
