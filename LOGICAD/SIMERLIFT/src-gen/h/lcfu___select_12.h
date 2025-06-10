#ifndef LC_PROT_LCFU___SELECT_12__H
#define LC_PROT_LCFU___SELECT_12__H

#include <LC3CGBase.h>
#include <lcfu_iec61131__SEL_ANY.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_SELECT_12
{
  LC_TD_BOOL LC_VD_S00;
  LC_TD_BOOL LC_VD_S01;
  LC_TD_BOOL LC_VD_S02;
  LC_TD_BOOL LC_VD_S03;
  LC_TD_BOOL LC_VD_S04;
  LC_TD_BOOL LC_VD_S05;
  LC_TD_BOOL LC_VD_S06;
  LC_TD_BOOL LC_VD_S07;
  LC_TD_BOOL LC_VD_S08;
  LC_TD_BOOL LC_VD_S09;
  LC_TD_BOOL LC_VD_S10;
  LC_TD_BOOL LC_VD_S11;
  LC_TD_BYTE LC_VD_I;
  LC_TD_WORD LC_VD_IN00;
  LC_TD_WORD LC_VD_IN01;
  LC_TD_WORD LC_VD_IN02;
  LC_TD_WORD LC_VD_IN03;
  LC_TD_WORD LC_VD_IN04;
  LC_TD_WORD LC_VD_IN05;
  LC_TD_WORD LC_VD_IN06;
  LC_TD_WORD LC_VD_IN07;
  LC_TD_WORD LC_VD_IN08;
  LC_TD_WORD LC_VD_IN09;
  LC_TD_WORD LC_VD_IN10;
  LC_TD_WORD LC_VD_IN11;
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
  LC_TD_WORD LC_VD___51_SEL_WORD;
  LC_TD_WORD LC_VD___52_SEL_WORD;
  LC_TD_WORD LC_VD___53_SEL_WORD;
  LC_TD_WORD LC_VD___54_SEL_WORD;
} LCCG_StructAttrib LC_TD_FunctionBlock_SELECT_12;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_SELECT_12(p) \
{ \
  (p)->LC_VD_IN00 = (LC_TD_WORD)0; \
  (p)->LC_VD_IN01 = (LC_TD_WORD)0; \
  (p)->LC_VD_IN02 = (LC_TD_WORD)0; \
  (p)->LC_VD_IN03 = (LC_TD_WORD)0; \
  (p)->LC_VD_IN04 = (LC_TD_WORD)0; \
  (p)->LC_VD_IN05 = (LC_TD_WORD)0; \
  (p)->LC_VD_IN06 = (LC_TD_WORD)0; \
  (p)->LC_VD_IN07 = (LC_TD_WORD)0; \
  (p)->LC_VD_S00 = LC_EL_false; \
  (p)->LC_VD_S01 = LC_EL_false; \
  (p)->LC_VD_S02 = LC_EL_false; \
  (p)->LC_VD_S03 = LC_EL_false; \
  (p)->LC_VD_S04 = LC_EL_false; \
  (p)->LC_VD_S05 = LC_EL_false; \
  (p)->LC_VD_S06 = LC_EL_false; \
  (p)->LC_VD_I = (LC_TD_BYTE)0; \
  (p)->LC_VD_S07 = LC_EL_false; \
  (p)->LC_VD_IN08 = (LC_TD_WORD)0; \
  (p)->LC_VD_IN09 = (LC_TD_WORD)0; \
  (p)->LC_VD_IN10 = (LC_TD_WORD)0; \
  (p)->LC_VD_IN11 = (LC_TD_WORD)0; \
  (p)->LC_VD_S08 = LC_EL_false; \
  (p)->LC_VD_S09 = LC_EL_false; \
  (p)->LC_VD_S10 = LC_EL_false; \
  (p)->LC_VD_S11 = LC_EL_false; \
  (p)->LC_VD_Q = (LC_TD_WORD)0; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_SELECT_12(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_IN00 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_IN01 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_IN02 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_IN03 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_IN04 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_IN05 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_IN06 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_IN07 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_S00 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_S01 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_S02 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_S03 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_S04 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_S05 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_S06 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_I = (LC_TD_BYTE)0; \
  if (RF==0) (p)->LC_VD_S07 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_IN08 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_IN09 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_IN10 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_IN11 = (LC_TD_WORD)0; \
  if (RF==0) (p)->LC_VD_S08 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_S09 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_S10 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_S11 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_Q = (LC_TD_WORD)0; \
}

/*                            Prototype                        */
void  lcfu___SELECT_12(LC_TD_FunctionBlock_SELECT_12* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
