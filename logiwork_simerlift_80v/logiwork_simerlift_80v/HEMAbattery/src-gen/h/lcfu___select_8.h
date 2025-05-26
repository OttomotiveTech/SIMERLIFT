#ifndef LC_PROT_LCFU___SELECT_8__H
#define LC_PROT_LCFU___SELECT_8__H

#include <LC3CGBase.h>
#include <lcfu_iec61131__SEL_ANY.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_SELECT_8
{
  LC_TD_BOOL LC_VD_S0;
  LC_TD_BOOL LC_VD_S1;
  LC_TD_BOOL LC_VD_S2;
  LC_TD_BOOL LC_VD_S3;
  LC_TD_BOOL LC_VD_S4;
  LC_TD_BOOL LC_VD_S5;
  LC_TD_BOOL LC_VD_S6;
  LC_TD_BOOL LC_VD_S7;
  LC_TD_BYTE LC_VD_I;
  LC_TD_WORD LC_VD_IN0;
  LC_TD_WORD LC_VD_IN1;
  LC_TD_WORD LC_VD_IN2;
  LC_TD_WORD LC_VD_IN3;
  LC_TD_WORD LC_VD_IN4;
  LC_TD_WORD LC_VD_IN5;
  LC_TD_WORD LC_VD_IN6;
  LC_TD_WORD LC_VD_IN7;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_WORD LC_VD_Q;
  LC_TD_WORD LC_VD___19_SEL_WORD;
  LC_TD_WORD LC_VD___22_SEL_WORD;
  LC_TD_WORD LC_VD___23_SEL_WORD;
  LC_TD_WORD LC_VD___24_SEL_WORD;
  LC_TD_WORD LC_VD___25_SEL_WORD;
  LC_TD_WORD LC_VD___26_SEL_WORD;
  LC_TD_WORD LC_VD___27_SEL_WORD;
  LC_TD_WORD LC_VD___28_SEL_WORD;
} LCCG_StructAttrib LC_TD_FunctionBlock_SELECT_8;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_SELECT_8(p) \
{ \
  (p)->LC_VD_IN0 = (LC_TD_WORD)0; \
  (p)->LC_VD_IN1 = (LC_TD_WORD)0; \
  (p)->LC_VD_IN2 = (LC_TD_WORD)0; \
  (p)->LC_VD_IN3 = (LC_TD_WORD)0; \
  (p)->LC_VD_IN4 = (LC_TD_WORD)0; \
  (p)->LC_VD_IN5 = (LC_TD_WORD)0; \
  (p)->LC_VD_IN6 = (LC_TD_WORD)0; \
  (p)->LC_VD_IN7 = (LC_TD_WORD)0; \
  (p)->LC_VD_S0 = LC_EL_false; \
  (p)->LC_VD_S1 = LC_EL_false; \
  (p)->LC_VD_S2 = LC_EL_false; \
  (p)->LC_VD_S3 = LC_EL_false; \
  (p)->LC_VD_S4 = LC_EL_false; \
  (p)->LC_VD_S5 = LC_EL_false; \
  (p)->LC_VD_S6 = LC_EL_false; \
  (p)->LC_VD_S7 = LC_EL_false; \
  (p)->LC_VD_I = (LC_TD_BYTE)0; \
  (p)->LC_VD_Q = (LC_TD_WORD)0; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_SELECT_8(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_IN0 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_IN1 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_IN2 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_IN3 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_IN4 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_IN5 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_IN6 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_IN7 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_S0 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_S1 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_S2 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_S3 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_S4 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_S5 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_S6 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_S7 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_I = (LC_TD_BYTE)0; \
  if (RF==0) (p)->LC_VD_Q = (LC_TD_WORD)0; \
}

/*                            Prototype                        */
void  lcfu___SELECT_8(LC_TD_FunctionBlock_SELECT_8* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
