#ifndef LC_PROT_LCFU___PRECHARGECAN__H
#define LC_PROT_LCFU___PRECHARGECAN__H

#include <LC3CGBase.h>
#include <lcdt___can_format.h>
#include <lcdt___tms570_can.h>
#include <lcfu___canrecv.h>
#include <lcfu___cansend.h>
#include <lcfu___rbit.h>
#include <lcfu___wbit.h>
#include <lcfu_iec61131__CONVERT.h>
#include <lcfu_iec61131__NE.h>
#include <lcfu_iec61131__OR.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_PRECHARGECAN
{
  LC_TD_BOOL LC_VD_ENB;
  LC_TD_BOOL LC_VD_RST;
  LC_TD_DataType_TMS570_CAN LC_VD_CAN_CH;
  LC_TD_BOOL LC_VD_CANERR;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_IGBTFLT;
  LC_TD_BOOL LC_VD_IGBTRDY;
  LC_TD_BOOL LC_VD_IGBTRST;
  LC_TD_BOOL LC_VD_INVAL;
  LC_TD_BOOL LC_VD_OUTFBK;
  LC_TD_BOOL LC_VD___30_NE;
  LC_TD_BOOL LC_VD___34_NE;
  LC_TD_BOOL LC_VD___38_OR;
  LC_TD_BOOL LC_VD___75_TO_BOOL;
  LC_TD_BOOL LC_VD___77_TO_BOOL;
  LC_TD_BOOL LC_VD___81_TO_BOOL;
  LC_TD_BOOL LC_VD___84_TO_BOOL;
  LC_TD_BOOL LC_VD___87_TO_BOOL;
  LC_TD_LWORD LC_VD___14_OUTBIT;
  LC_TD_LWORD LC_VD___15_OR;
  LC_TD_LWORD LC_VD___43_OUTBIT;
  LC_TD_LWORD LC_VD___49_OUTBIT;
  LC_TD_LWORD LC_VD___54_OUTBIT;
  LC_TD_LWORD LC_VD___59_OUTBIT;
  LC_TD_LWORD LC_VD___70_OUTBIT;
  LC_TD_LWORD LC_VD___92_OUTBIT;
  LC_TD_FunctionBlock_CANRECV LC_VD_CANRECV1;
  LC_TD_FunctionBlock_CANSEND LC_VD_CANSEND1;
} LCCG_StructAttrib LC_TD_FunctionBlock_PRECHARGECAN;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_PRECHARGECAN(p) \
{ \
  LC_INIT_DataType_TMS570_CAN(&((p)->LC_VD_CAN_CH)); \
  LC_INIT_BOOL(&((p)->LC_VD_ENB)); \
  LC_INIT_BOOL(&((p)->LC_VD_RST)); \
  LC_INIT_BOOL(&((p)->LC_VD_CANERR)); \
  LC_INIT_BOOL(&((p)->LC_VD_OUTFBK)); \
  LC_INIT_BOOL(&((p)->LC_VD_IGBTFLT)); \
  LC_INIT_BOOL(&((p)->LC_VD_IGBTRDY)); \
  LC_INIT_BOOL(&((p)->LC_VD_IGBTRST)); \
  LC_INIT_BOOL(&((p)->LC_VD_INVAL)); \
  LC_INIT_FunctionBlock_CANSEND(&((p)->LC_VD_CANSEND1)); \
  LC_INIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV1)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_PRECHARGECAN(p,RF) \
{ \
  LC_WINIT_DataType_TMS570_CAN(&((p)->LC_VD_CAN_CH),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_ENB),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_RST),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_CANERR),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_OUTFBK),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_IGBTFLT),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_IGBTRDY),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_IGBTRST),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_INVAL),RF); \
  LC_WINIT_FunctionBlock_CANSEND(&((p)->LC_VD_CANSEND1),0); \
  LC_WINIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV1),0); \
}

/*                            Prototype                        */
void  lcfu___PRECHARGECAN(LC_TD_FunctionBlock_PRECHARGECAN* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
