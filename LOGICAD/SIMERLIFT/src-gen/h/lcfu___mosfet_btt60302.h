#ifndef LC_PROT_LCFU___MOSFET_BTT60302__H
#define LC_PROT_LCFU___MOSFET_BTT60302__H

#include <LC3CGBase.h>
#include <lcfu___bttdiag.h>
#include <lcfu___flash.h>
#include <lcfu_iec61131__CONVERT.h>
#include <lcfu_iec61131__CTU.h>
#include <lcfu_iec61131__EQ.h>
#include <lcfu_iec61131__IAND.h>
#include <lcfu_iec61131__MUL.h>
#include <lcfu_iec61131__R_TRIG.h>
#include <lcfu_iec61131__SEL_ANY.h>
#include <lcfu_iec61131__XOR.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_MOSFET_BTT60302
{
  LC_TD_BOOL LC_VD_IN1;
  LC_TD_BOOL LC_VD_IN2;
  LC_TD_UINT LC_VD_IMAX1;
  LC_TD_UINT LC_VD_IMAX2;
  LC_TD_UINT LC_VD_IMIN1;
  LC_TD_UINT LC_VD_IMIN2;
  LC_TD_REAL LC_VD_ISENS;
  LC_TD_BOOL LC_VD_DEN;
  LC_TD_BOOL LC_VD_DSEL;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_OUT1;
  LC_TD_BOOL LC_VD_OUT2;
  LC_TD_BYTE LC_VD_OUT1_DIAG;
  LC_TD_BYTE LC_VD_OUT2_DIAG;
  LC_TD_UINT LC_VD_IOUT1;
  LC_TD_UINT LC_VD_IOUT2;
  LC_TD_BOOL LC_VD___10_XOR;
  LC_TD_BOOL LC_VD___19_EQ;
  LC_TD_BOOL LC_VD___25_EQ;
  LC_TD_BOOL LC_VD___92_TO_BOOL;
  LC_TD_INT LC_VD___106_IAND;
  LC_TD_UINT LC_VD___13_SEL;
  LC_TD_UINT LC_VD___26_SEL;
  LC_TD_UINT LC_VD___29_TO_UINT;
  LC_TD_REAL LC_VD___18_MUL;
  LC_TD_FunctionBlock_BTTDIAG LC_VD_BTTDIAG1;
  LC_TD_FunctionBlock_BTTDIAG LC_VD_BTTDIAG2;
  LC_TD_FunctionBlock_CTU LC_VD_CTU1;
  LC_TD_FunctionBlock_FLASH LC_VD_FLASH1;
  LC_TD_FunctionBlock_R_TRIG LC_VD_R_TRIG1;
} LCCG_StructAttrib LC_TD_FunctionBlock_MOSFET_BTT60302;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_MOSFET_BTT60302(p) \
{ \
  LC_INIT_BOOL(&((p)->LC_VD_IN1)); \
  LC_INIT_BOOL(&((p)->LC_VD_IN2)); \
  LC_INIT_REAL(&((p)->LC_VD_ISENS)); \
  LC_INIT_UINT(&((p)->LC_VD_IMAX1)); \
  LC_INIT_UINT(&((p)->LC_VD_IMAX2)); \
  LC_INIT_UINT(&((p)->LC_VD_IMIN1)); \
  LC_INIT_UINT(&((p)->LC_VD_IMIN2)); \
  LC_INIT_BOOL(&((p)->LC_VD_DEN)); \
  (p)->LC_VD_DSEL = LC_EL_false; \
  LC_INIT_BOOL(&((p)->LC_VD_OUT1)); \
  LC_INIT_BOOL(&((p)->LC_VD_OUT2)); \
  LC_INIT_BYTE(&((p)->LC_VD_OUT1_DIAG)); \
  LC_INIT_BYTE(&((p)->LC_VD_OUT2_DIAG)); \
  LC_INIT_UINT(&((p)->LC_VD_IOUT1)); \
  LC_INIT_UINT(&((p)->LC_VD_IOUT2)); \
  LC_INIT_FunctionBlock_FLASH(&((p)->LC_VD_FLASH1)); \
  LC_INIT_FunctionBlock_CTU(&((p)->LC_VD_CTU1)); \
  LC_INIT_FunctionBlock_R_TRIG(&((p)->LC_VD_R_TRIG1)); \
  LC_INIT_FunctionBlock_BTTDIAG(&((p)->LC_VD_BTTDIAG1)); \
  LC_INIT_FunctionBlock_BTTDIAG(&((p)->LC_VD_BTTDIAG2)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_MOSFET_BTT60302(p,RF) \
{ \
  LC_WINIT_BOOL(&((p)->LC_VD_IN1),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_IN2),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_ISENS),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_IMAX1),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_IMAX2),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_IMIN1),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_IMIN2),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_DEN),RF); \
  if (RF==0) (p)->LC_VD_DSEL = LC_EL_false; \
  LC_WINIT_BOOL(&((p)->LC_VD_OUT1),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_OUT2),RF); \
  LC_WINIT_BYTE(&((p)->LC_VD_OUT1_DIAG),RF); \
  LC_WINIT_BYTE(&((p)->LC_VD_OUT2_DIAG),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_IOUT1),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_IOUT2),RF); \
  LC_WINIT_FunctionBlock_FLASH(&((p)->LC_VD_FLASH1),0); \
  LC_WINIT_FunctionBlock_CTU(&((p)->LC_VD_CTU1),0); \
  LC_WINIT_FunctionBlock_R_TRIG(&((p)->LC_VD_R_TRIG1),0); \
  LC_WINIT_FunctionBlock_BTTDIAG(&((p)->LC_VD_BTTDIAG1),0); \
  LC_WINIT_FunctionBlock_BTTDIAG(&((p)->LC_VD_BTTDIAG2),0); \
}

/*                            Prototype                        */
void  lcfu___MOSFET_BTT60302(LC_TD_FunctionBlock_MOSFET_BTT60302* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
