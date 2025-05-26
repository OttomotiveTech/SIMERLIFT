#ifndef LC_PROT_LCFU___FLASH__H
#define LC_PROT_LCFU___FLASH__H

#include <LC3CGBase.h>
#include <lcfu_iec61131__AND.h>
#include <lcfu_iec61131__NOT.h>
#include <lcfu_iec61131__TON.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_FLASH
{
  LC_TD_BOOL LC_VD_IN;
  LC_TD_TIME LC_VD_PER;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_OUT;
  LC_TD_BOOL LC_VD___4_AND;
  LC_TD_BOOL LC_VD___5_NOT;
  LC_TD_FunctionBlock_TON LC_VD_TON1;
  LC_TD_FunctionBlock_TON LC_VD_TON2;
} LCCG_StructAttrib LC_TD_FunctionBlock_FLASH;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_FLASH(p) \
{ \
  (p)->LC_VD_IN = LC_EL_false; \
  (p)->LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(0)); \
  (p)->LC_VD_OUT = LC_EL_false; \
  LC_INIT_FunctionBlock_TON(&((p)->LC_VD_TON2)); \
  LC_INIT_FunctionBlock_TON(&((p)->LC_VD_TON1)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_FLASH(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_IN = LC_EL_false; \
  if (RF==0) (p)->LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(0)); \
  if (RF==0) (p)->LC_VD_OUT = LC_EL_false; \
  LC_WINIT_FunctionBlock_TON(&((p)->LC_VD_TON2),0); \
  LC_WINIT_FunctionBlock_TON(&((p)->LC_VD_TON1),0); \
}

/*                            Prototype                        */
void  lcfu___FLASH(LC_TD_FunctionBlock_FLASH* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
