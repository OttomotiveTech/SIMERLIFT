#ifndef LC_PROT_LCFU___TIMER__H
#define LC_PROT_LCFU___TIMER__H

#include <LC3CGBase.h>
#include <lcfu_iec61131__AND.h>
#include <lcfu_iec61131__DIV_TIME.h>
#include <lcfu_iec61131__NOT.h>
#include <lcfu_iec61131__TON.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_TIMER
{
  LC_TD_BOOL LC_VD_ENABLE;
  LC_TD_TIME LC_VD_PULSE;
  LC_TD_TIME LC_VD_T_H;
  LC_TD_TIME LC_VD_T_L;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_P_Q;
  LC_TD_BOOL LC_VD_T_Q;
  LC_TD_BOOL LC_VD___33_NOT;
  LC_TD_BOOL LC_VD___34_AND;
  LC_TD_BOOL LC_VD___62_NOT;
  LC_TD_BOOL LC_VD___63_AND;
  LC_TD_TIME LC_VD___64_DIV_TIME;
  LC_TD_FunctionBlock_TON LC_VD_TON3;
  LC_TD_FunctionBlock_TON LC_VD_TON4;
  LC_TD_FunctionBlock_TON LC_VD_TON5;
  LC_TD_FunctionBlock_TON LC_VD_TON6;
} LCCG_StructAttrib LC_TD_FunctionBlock_TIMER;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_TIMER(p) \
{ \
  (p)->LC_VD_T_H = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(100000000)); \
  (p)->LC_VD_T_L = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(100000000)); \
  (p)->LC_VD_ENABLE = LC_EL_false; \
  (p)->LC_VD_PULSE = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(100000000)); \
  LC_INIT_BOOL(&((p)->LC_VD_T_Q)); \
  (p)->LC_VD_P_Q = LC_EL_false; \
  LC_INIT_FunctionBlock_TON(&((p)->LC_VD_TON4)); \
  LC_INIT_FunctionBlock_TON(&((p)->LC_VD_TON3)); \
  LC_INIT_FunctionBlock_TON(&((p)->LC_VD_TON5)); \
  LC_INIT_FunctionBlock_TON(&((p)->LC_VD_TON6)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_TIMER(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_T_H = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(100000000)); \
  if (RF==0) (p)->LC_VD_T_L = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(100000000)); \
  if (RF==0) (p)->LC_VD_ENABLE = LC_EL_false; \
  if (RF==0) (p)->LC_VD_PULSE = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(100000000)); \
  LC_WINIT_BOOL(&((p)->LC_VD_T_Q),RF); \
  if (RF==0) (p)->LC_VD_P_Q = LC_EL_false; \
  LC_WINIT_FunctionBlock_TON(&((p)->LC_VD_TON4),0); \
  LC_WINIT_FunctionBlock_TON(&((p)->LC_VD_TON3),0); \
  LC_WINIT_FunctionBlock_TON(&((p)->LC_VD_TON5),0); \
  LC_WINIT_FunctionBlock_TON(&((p)->LC_VD_TON6),0); \
}

/*                            Prototype                        */
void  lcfu___TIMER(LC_TD_FunctionBlock_TIMER* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
