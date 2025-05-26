#ifndef LC_PROT_LCFU___DGTIN__H
#define LC_PROT_LCFU___DGTIN__H

#include <LC3CGBase.h>
#include <lcdt___tmsadc.h>
#include <lcdt___tmsadcgrp.h>
#include <lcfu___anlg.h>
#include <lcfu_iec61131__AND.h>
#include <lcfu_iec61131__GE.h>
#include <lcfu_iec61131__GT.h>
#include <lcfu_iec61131__LE.h>
#include <lcfu_iec61131__LT.h>
#include <lcfu_iec61131__NE.h>
#include <lcfu_iec61131__SEL_ANY.h>
#include <lcfu_iec61131__TON.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_DGTIN
{
  LC_TD_USINT LC_VD_CH;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_USINT LC_VD_STAT;
  LC_TD_BOOL LC_VD___3_GE;
  LC_TD_BOOL LC_VD___13_LE;
  LC_TD_BOOL LC_VD___25_GT;
  LC_TD_BOOL LC_VD___28_LT;
  LC_TD_BOOL LC_VD___31_AND;
  LC_TD_BOOL LC_VD___44_NE;
  LC_TD_USINT LC_VD_CURRENTSTATE;
  LC_TD_USINT LC_VD_INSTANTSTATE;
  LC_TD_USINT LC_VD___7_SEL;
  LC_TD_USINT LC_VD___11_SEL;
  LC_TD_USINT LC_VD___34_SEL;
  LC_TD_USINT LC_VD___49_SEL;
  LC_TD_FunctionBlock_ANLG LC_VD_ANLG4;
  LC_TD_FunctionBlock_TON LC_VD_TON1;
} LCCG_StructAttrib LC_TD_FunctionBlock_DGTIN;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_DGTIN(p) \
{ \
  LC_INIT_USINT(&((p)->LC_VD_CH)); \
  LC_INIT_USINT(&((p)->LC_VD_STAT)); \
  LC_INIT_FunctionBlock_ANLG(&((p)->LC_VD_ANLG4)); \
  LC_INIT_USINT(&((p)->LC_VD_INSTANTSTATE)); \
  LC_INIT_USINT(&((p)->LC_VD_CURRENTSTATE)); \
  LC_INIT_FunctionBlock_TON(&((p)->LC_VD_TON1)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_DGTIN(p,RF) \
{ \
  LC_WINIT_USINT(&((p)->LC_VD_CH),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_STAT),RF); \
  LC_WINIT_FunctionBlock_ANLG(&((p)->LC_VD_ANLG4),0); \
  LC_WINIT_USINT(&((p)->LC_VD_INSTANTSTATE),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_CURRENTSTATE),RF); \
  LC_WINIT_FunctionBlock_TON(&((p)->LC_VD_TON1),0); \
}

/*                            Prototype                        */
void  lcfu___DGTIN(LC_TD_FunctionBlock_DGTIN* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
