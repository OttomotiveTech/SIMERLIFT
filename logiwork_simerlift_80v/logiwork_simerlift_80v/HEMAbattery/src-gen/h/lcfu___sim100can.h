#ifndef LC_PROT_LCFU___SIM100CAN__H
#define LC_PROT_LCFU___SIM100CAN__H

#include <LC3CGBase.h>
#include <lcdt___tms570_can.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_SIM100CAN
{
  LC_TD_BOOL LC_VD_ISOOFF;
  LC_TD_UINT LC_VD_VBATMAX;
  LC_TD_DataType_TMS570_CAN LC_VD_CH;
  LC_TD_BOOL LC_VD_DEVICEERR;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_LOWVOLTAGE;
  LC_TD_BOOL LC_VD_NODEVICE;
  LC_TD_USINT LC_VD_ISOSTAT;
  LC_TD_BYTE LC_VD_ERRCODE;
  LC_TD_UINT LC_VD_OHMPERV;
  LC_TD_UDINT LC_VD_ISORN;
  LC_TD_UDINT LC_VD_ISORP;
  LC_TD_BOOL LC_VD_R_M;
  LC_TD_USINT LC_VD_STATE;
  LC_TD_UDINT LC_VD_BOX;
} LCCG_StructAttrib LC_TD_FunctionBlock_SIM100CAN;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_SIM100CAN(p) \
{ \
  LC_INIT_DataType_TMS570_CAN(&((p)->LC_VD_CH)); \
  LC_INIT_BOOL(&((p)->LC_VD_ISOOFF)); \
  LC_INIT_UINT(&((p)->LC_VD_VBATMAX)); \
  LC_INIT_USINT(&((p)->LC_VD_ISOSTAT)); \
  LC_INIT_UINT(&((p)->LC_VD_OHMPERV)); \
  LC_INIT_UDINT(&((p)->LC_VD_ISORP)); \
  LC_INIT_UDINT(&((p)->LC_VD_ISORN)); \
  LC_INIT_BOOL(&((p)->LC_VD_LOWVOLTAGE)); \
  LC_INIT_BOOL(&((p)->LC_VD_DEVICEERR)); \
  LC_INIT_BOOL(&((p)->LC_VD_NODEVICE)); \
  LC_INIT_BYTE(&((p)->LC_VD_ERRCODE)); \
  LC_INIT_USINT(&((p)->LC_VD_STATE)); \
  LC_INIT_BOOL(&((p)->LC_VD_R_M)); \
  LC_INIT_UDINT(&((p)->LC_VD_BOX)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_SIM100CAN(p,RF) \
{ \
  LC_WINIT_DataType_TMS570_CAN(&((p)->LC_VD_CH),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_ISOOFF),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_VBATMAX),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_ISOSTAT),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_OHMPERV),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_ISORP),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_ISORN),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_LOWVOLTAGE),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_DEVICEERR),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_NODEVICE),RF); \
  LC_WINIT_BYTE(&((p)->LC_VD_ERRCODE),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_STATE),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R_M),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_BOX),RF); \
}

/*                            Prototype                        */
void  lcfu___SIM100CAN(LC_TD_FunctionBlock_SIM100CAN* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
