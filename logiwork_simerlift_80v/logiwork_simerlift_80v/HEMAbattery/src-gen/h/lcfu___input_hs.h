#ifndef LC_PROT_LCFU___INPUT_HS__H
#define LC_PROT_LCFU___INPUT_HS__H

#include <LC3CGBase.h>
#include <lcdt___tmsadc.h>
#include <lcdt___tmsadcgrp.h>
#include <lcfu___anlg.h>
#include <lcfu_iec61131__GE.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_INPUT_HS
{
  LC_TD_USINT LC_VD_CH;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_O;
  LC_TD_BOOL LC_VD___5_GE;
  LC_TD_FunctionBlock_ANLG LC_VD_ANLG1;
} LCCG_StructAttrib LC_TD_FunctionBlock_INPUT_HS;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_INPUT_HS(p) \
{ \
  (p)->LC_VD_CH = (LC_TD_USINT)0; \
  (p)->LC_VD_O = LC_EL_false; \
  LC_INIT_FunctionBlock_ANLG(&((p)->LC_VD_ANLG1)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_INPUT_HS(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_CH = (LC_TD_USINT)0; \
  if (RF==0) (p)->LC_VD_O = LC_EL_false; \
  LC_WINIT_FunctionBlock_ANLG(&((p)->LC_VD_ANLG1),0); \
}

/*                            Prototype                        */
void  lcfu___INPUT_HS(LC_TD_FunctionBlock_INPUT_HS* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
