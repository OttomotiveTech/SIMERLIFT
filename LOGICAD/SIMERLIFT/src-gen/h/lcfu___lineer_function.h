#ifndef LC_PROT_LCFU___LINEER_FUNCTION__H
#define LC_PROT_LCFU___LINEER_FUNCTION__H

#include <LC3CGBase.h>
#include <lcfu_iec61131__ADD.h>
#include <lcfu_iec61131__DIV.h>
#include <lcfu_iec61131__LE.h>
#include <lcfu_iec61131__LIMIT.h>
#include <lcfu_iec61131__MUL.h>
#include <lcfu_iec61131__SUB.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_LINEER_FUNCTION
{
  LC_TD_LREAL LC_VD_INPUT;
  LC_TD_LREAL LC_VD_X1;
  LC_TD_LREAL LC_VD_X2;
  LC_TD_LREAL LC_VD_Y1;
  LC_TD_LREAL LC_VD_Y2;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_ERROR;
  LC_TD_LREAL LC_VD_LIM_OUTPUT;
  LC_TD_LREAL LC_VD_OUTPUT;
  LC_TD_BOOL LC_VD___57_LE;
  LC_TD_LREAL LC_VD___33_LIMIT;
  LC_TD_LREAL LC_VD___35_DIV;
  LC_TD_LREAL LC_VD___56_MUL;
  LC_TD_LREAL LC_VD___58_SUB;
  LC_TD_LREAL LC_VD___59_SUB;
  LC_TD_LREAL LC_VD___60_MUL;
  LC_TD_LREAL LC_VD___61_SUB;
  LC_TD_LREAL LC_VD___62_ADD;
} LCCG_StructAttrib LC_TD_FunctionBlock_LINEER_FUNCTION;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_LINEER_FUNCTION(p) \
{ \
  (p)->LC_VD_INPUT = (LC_TD_LREAL)0; \
  (p)->LC_VD_X1 = (LC_TD_LREAL)0; \
  (p)->LC_VD_X2 = (LC_TD_LREAL)0; \
  (p)->LC_VD_Y1 = (LC_TD_LREAL)0; \
  (p)->LC_VD_Y2 = (LC_TD_LREAL)0; \
  (p)->LC_VD_OUTPUT = (LC_TD_LREAL)0; \
  (p)->LC_VD_ERROR = LC_EL_false; \
  (p)->LC_VD_LIM_OUTPUT = (LC_TD_LREAL)0; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_LINEER_FUNCTION(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_INPUT = (LC_TD_LREAL)0; \
  if (RF==0) (p)->LC_VD_X1 = (LC_TD_LREAL)0; \
  if (RF==0) (p)->LC_VD_X2 = (LC_TD_LREAL)0; \
  if (RF==0) (p)->LC_VD_Y1 = (LC_TD_LREAL)0; \
  if (RF==0) (p)->LC_VD_Y2 = (LC_TD_LREAL)0; \
  if (RF==0) (p)->LC_VD_OUTPUT = (LC_TD_LREAL)0; \
  if (RF==0) (p)->LC_VD_ERROR = LC_EL_false; \
  if (RF==0) (p)->LC_VD_LIM_OUTPUT = (LC_TD_LREAL)0; \
}

/*                            Prototype                        */
void  lcfu___LINEER_FUNCTION(LC_TD_FunctionBlock_LINEER_FUNCTION* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
