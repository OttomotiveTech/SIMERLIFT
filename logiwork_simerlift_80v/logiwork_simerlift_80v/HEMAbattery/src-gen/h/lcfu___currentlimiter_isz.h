#ifndef LC_PROT_LCFU___CURRENTLIMITER_ISZ__H
#define LC_PROT_LCFU___CURRENTLIMITER_ISZ__H

#include <LC3CGBase.h>
#include <lcfu___countimr.h>
#include <lcfu___flash.h>
#include <lcfu_iec61131__CONVERT.h>
#include <lcfu_iec61131__CTUD.h>
#include <lcfu_iec61131__GE.h>
#include <lcfu_iec61131__GT.h>
#include <lcfu_iec61131__LT.h>
#include <lcfu_iec61131__NOT.h>
#include <lcfu_iec61131__OR.h>
#include <lcfu_iec61131__RS.h>
#include <lcfu_iec61131__SEL_ANY.h>
#include <lcfu_iec61131__SR.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_CURRENTLIMITER_ISZ
{
  LC_TD_INT LC_VD_CURRENT;
  LC_TD_INT LC_VD_LIM30S;
  LC_TD_INT LC_VD_LIMCONT;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_OVERCURRENT;
  LC_TD_INT LC_VD_LIM;
  LC_TD_BOOL LC_VD_DERATINGTOCONT;
  LC_TD_BOOL LC_VD_EXCEED30S;
  LC_TD_BOOL LC_VD_OVERCURRENT10SEC;
  LC_TD_BOOL LC_VD_OVERCURRENT30SEC;
  LC_TD_BOOL LC_VD_OVERCURRENTCONT;
  LC_TD_BOOL LC_VD___18_GE;
  LC_TD_BOOL LC_VD___19_GT;
  LC_TD_BOOL LC_VD___20_GT;
  LC_TD_BOOL LC_VD___31_OR;
  LC_TD_BOOL LC_VD___95_GT;
  LC_TD_BOOL LC_VD___98_LT;
  LC_TD_INT LC_VD_MAXCURRENT;
  LC_TD_INT LC_VD___79_SEL;
  LC_TD_INT LC_VD___173_TO_INT;
  LC_TD_FunctionBlock_COUNTIMR LC_VD_COUNTIMR1;
  LC_TD_FunctionBlock_CTUD LC_VD_CTUD2;
  LC_TD_FunctionBlock_FLASH LC_VD_FLASH5;
  LC_TD_FunctionBlock_FLASH LC_VD_FLASH6;
  LC_TD_FunctionBlock_RS LC_VD_RS2;
  LC_TD_FunctionBlock_SR LC_VD_SR1;
} LCCG_StructAttrib LC_TD_FunctionBlock_CURRENTLIMITER_ISZ;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_CURRENTLIMITER_ISZ(p) \
{ \
  LC_INIT_INT(&((p)->LC_VD_LIM30S)); \
  LC_INIT_INT(&((p)->LC_VD_LIMCONT)); \
  LC_INIT_INT(&((p)->LC_VD_CURRENT)); \
  LC_INIT_BOOL(&((p)->LC_VD_OVERCURRENT)); \
  LC_INIT_INT(&((p)->LC_VD_LIM)); \
  LC_INIT_BOOL(&((p)->LC_VD_OVERCURRENT30SEC)); \
  LC_INIT_BOOL(&((p)->LC_VD_OVERCURRENT10SEC)); \
  LC_INIT_BOOL(&((p)->LC_VD_OVERCURRENTCONT)); \
  LC_INIT_FunctionBlock_COUNTIMR(&((p)->LC_VD_COUNTIMR1)); \
  LC_INIT_BOOL(&((p)->LC_VD_DERATINGTOCONT)); \
  LC_INIT_INT(&((p)->LC_VD_MAXCURRENT)); \
  LC_INIT_FunctionBlock_RS(&((p)->LC_VD_RS2)); \
  LC_INIT_BOOL(&((p)->LC_VD_EXCEED30S)); \
  LC_INIT_FunctionBlock_SR(&((p)->LC_VD_SR1)); \
  LC_INIT_FunctionBlock_FLASH(&((p)->LC_VD_FLASH5)); \
  LC_INIT_FunctionBlock_FLASH(&((p)->LC_VD_FLASH6)); \
  LC_INIT_FunctionBlock_CTUD(&((p)->LC_VD_CTUD2)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_CURRENTLIMITER_ISZ(p,RF) \
{ \
  LC_WINIT_INT(&((p)->LC_VD_LIM30S),RF); \
  LC_WINIT_INT(&((p)->LC_VD_LIMCONT),RF); \
  LC_WINIT_INT(&((p)->LC_VD_CURRENT),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_OVERCURRENT),RF); \
  LC_WINIT_INT(&((p)->LC_VD_LIM),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_OVERCURRENT30SEC),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_OVERCURRENT10SEC),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_OVERCURRENTCONT),RF); \
  LC_WINIT_FunctionBlock_COUNTIMR(&((p)->LC_VD_COUNTIMR1),0); \
  LC_WINIT_BOOL(&((p)->LC_VD_DERATINGTOCONT),RF); \
  LC_WINIT_INT(&((p)->LC_VD_MAXCURRENT),RF); \
  LC_WINIT_FunctionBlock_RS(&((p)->LC_VD_RS2),0); \
  LC_WINIT_BOOL(&((p)->LC_VD_EXCEED30S),RF); \
  LC_WINIT_FunctionBlock_SR(&((p)->LC_VD_SR1),0); \
  LC_WINIT_FunctionBlock_FLASH(&((p)->LC_VD_FLASH5),0); \
  LC_WINIT_FunctionBlock_FLASH(&((p)->LC_VD_FLASH6),0); \
  LC_WINIT_FunctionBlock_CTUD(&((p)->LC_VD_CTUD2),0); \
}

/*                            Prototype                        */
void  lcfu___CURRENTLIMITER_ISZ(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
