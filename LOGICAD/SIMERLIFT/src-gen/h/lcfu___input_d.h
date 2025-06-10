#ifndef LC_PROT_LCFU___INPUT_D__H
#define LC_PROT_LCFU___INPUT_D__H

#include <LC3CGBase.h>
#include <lcdt___tmsadc.h>
#include <lcdt___tmsadcgrp.h>
#include <lcfu___anlg.h>
#include <lcfu___select_4.h>
#include <lcfu_iec61131__AND.h>
#include <lcfu_iec61131__CONVERT.h>
#include <lcfu_iec61131__GE.h>
#include <lcfu_iec61131__LE.h>
#include <lcfu_iec61131__NOT.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_INPUT_D
{
  LC_TD_USINT LC_VD_CH;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BYTE LC_VD_O;
  LC_TD_BOOL LC_VD___5_GE;
  LC_TD_BOOL LC_VD___6_LE;
  LC_TD_BOOL LC_VD___24_AND;
  LC_TD_BOOL LC_VD___34_GE;
  LC_TD_BYTE LC_VD___28_TO_BYTE;
  LC_TD_FunctionBlock_ANLG LC_VD_ANLG1;
  LC_TD_FunctionBlock_SELECT_4 LC_VD_SELECT_41;
} LCCG_StructAttrib LC_TD_FunctionBlock_INPUT_D;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_INPUT_D(p) \
{ \
  (p)->LC_VD_CH = (LC_TD_USINT)0; \
  (p)->LC_VD_O = (LC_TD_BYTE)0; \
  LC_INIT_FunctionBlock_ANLG(&((p)->LC_VD_ANLG1)); \
  LC_INIT_FunctionBlock_SELECT_4(&((p)->LC_VD_SELECT_41)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_INPUT_D(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_CH = (LC_TD_USINT)0; \
  if (RF==0) (p)->LC_VD_O = (LC_TD_BYTE)0; \
  LC_WINIT_FunctionBlock_ANLG(&((p)->LC_VD_ANLG1),0); \
  LC_WINIT_FunctionBlock_SELECT_4(&((p)->LC_VD_SELECT_41),0); \
}

/*                            Prototype                        */
void  lcfu___INPUT_D(LC_TD_FunctionBlock_INPUT_D* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
