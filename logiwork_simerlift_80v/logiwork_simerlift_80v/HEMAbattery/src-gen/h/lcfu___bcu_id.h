#ifndef LC_PROT_LCFU___BCU_ID__H
#define LC_PROT_LCFU___BCU_ID__H

#include <LC3CGBase.h>
#include <lcfu_iec61131__ADD.h>
#include <lcfu_iec61131__CONVERT.h>
#include <lcfu_iec61131__MUL.h>
#include <lcfu_iec61131__SEL_ANY.h>
#include <lcfu_iec61131__TON.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_BCU_ID
{
  LC_TD_BOOL LC_VD_ADDR_BIT0;
  LC_TD_BOOL LC_VD_ADDR_BIT1;
  LC_TD_BOOL LC_VD_ADDR_BIT2;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_USINT LC_VD_PACK_ID;
  LC_TD_UDINT LC_VD_CAN_ID_10;
  LC_TD_UDINT LC_VD_CAN_ID_11;
  LC_TD_UDINT LC_VD_CAN_ID_12;
  LC_TD_UDINT LC_VD_CAN_ID_13;
  LC_TD_UDINT LC_VD_CAN_ID_14;
  LC_TD_UDINT LC_VD_CAN_ID_15;
  LC_TD_UDINT LC_VD_CAN_ID_16;
  LC_TD_USINT LC_VD___7_ADD;
  LC_TD_USINT LC_VD___9_SEL;
  LC_TD_USINT LC_VD___10_SEL;
  LC_TD_USINT LC_VD___11_SEL;
  LC_TD_UDINT LC_VD___25_ADD;
  LC_TD_UDINT LC_VD___26_ADD;
  LC_TD_UDINT LC_VD___30_ADD;
  LC_TD_UDINT LC_VD___36_TO_UDINT;
  LC_TD_UDINT LC_VD___38_ADD;
  LC_TD_UDINT LC_VD___39_ADD;
  LC_TD_UDINT LC_VD___41_MUL;
  LC_TD_UDINT LC_VD___51_MUL;
  LC_TD_UDINT LC_VD___54_ADD;
  LC_TD_UDINT LC_VD___59_MUL;
  LC_TD_UDINT LC_VD___67_ADD;
  LC_TD_UDINT LC_VD___70_MUL;
  LC_TD_UDINT LC_VD___83_MUL;
  LC_TD_UDINT LC_VD___98_MUL;
  LC_TD_UDINT LC_VD___113_MUL;
  LC_TD_FunctionBlock_TON LC_VD_TON1;
} LCCG_StructAttrib LC_TD_FunctionBlock_BCU_ID;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_BCU_ID(p) \
{ \
  LC_INIT_BOOL(&((p)->LC_VD_ADDR_BIT0)); \
  LC_INIT_BOOL(&((p)->LC_VD_ADDR_BIT1)); \
  LC_INIT_BOOL(&((p)->LC_VD_ADDR_BIT2)); \
  LC_INIT_USINT(&((p)->LC_VD_PACK_ID)); \
  LC_INIT_UDINT(&((p)->LC_VD_CAN_ID_10)); \
  LC_INIT_UDINT(&((p)->LC_VD_CAN_ID_11)); \
  LC_INIT_UDINT(&((p)->LC_VD_CAN_ID_12)); \
  LC_INIT_UDINT(&((p)->LC_VD_CAN_ID_13)); \
  LC_INIT_UDINT(&((p)->LC_VD_CAN_ID_14)); \
  LC_INIT_UDINT(&((p)->LC_VD_CAN_ID_15)); \
  LC_INIT_UDINT(&((p)->LC_VD_CAN_ID_16)); \
  LC_INIT_FunctionBlock_TON(&((p)->LC_VD_TON1)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_BCU_ID(p,RF) \
{ \
  LC_WINIT_BOOL(&((p)->LC_VD_ADDR_BIT0),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_ADDR_BIT1),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_ADDR_BIT2),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_PACK_ID),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_CAN_ID_10),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_CAN_ID_11),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_CAN_ID_12),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_CAN_ID_13),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_CAN_ID_14),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_CAN_ID_15),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_CAN_ID_16),RF); \
  LC_WINIT_FunctionBlock_TON(&((p)->LC_VD_TON1),0); \
}

/*                            Prototype                        */
void  lcfu___BCU_ID(LC_TD_FunctionBlock_BCU_ID* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
