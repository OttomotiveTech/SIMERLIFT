#ifndef LC_PROT_LCFU___SELECT_2__H
#define LC_PROT_LCFU___SELECT_2__H

#include <LC3CGBase.h>
#include <lcfu_iec61131__SEL_ANY.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_SELECT_2
{
  LC_TD_BOOL LC_VD_S0;
  LC_TD_BOOL LC_VD_S1;
  LC_TD_BYTE LC_VD_I;
  LC_TD_WORD LC_VD_IN0;
  LC_TD_WORD LC_VD_IN1;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_WORD LC_VD_Q;
  LC_TD_WORD LC_VD___19_SEL_WORD;
  LC_TD_WORD LC_VD___22_SEL_WORD;
} LCCG_StructAttrib LC_TD_FunctionBlock_SELECT_2;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_SELECT_2(p) \
{ \
  (p)->LC_VD_IN0 = (LC_TD_WORD)0; \
  (p)->LC_VD_IN1 = (LC_TD_WORD)0; \
  (p)->LC_VD_S0 = LC_EL_false; \
  (p)->LC_VD_S1 = LC_EL_false; \
  (p)->LC_VD_I = (LC_TD_BYTE)0; \
  (p)->LC_VD_Q = (LC_TD_WORD)0; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_SELECT_2(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_IN0 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_IN1 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_S0 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_S1 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_I = (LC_TD_BYTE)0; \
  if (RF==0) (p)->LC_VD_Q = (LC_TD_WORD)0; \
}

/*                            Prototype                        */
void  lcfu___SELECT_2(LC_TD_FunctionBlock_SELECT_2* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
