#ifndef LC_PROT_LCFU___CANTX__H
#define LC_PROT_LCFU___CANTX__H

#include <LC3CGBase.h>
#include <lcdt___can_format.h>
#include <lcdt___can_retcode.h>
#include <lcdt___tms570_can.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_CANTX
{
  LC_TD_BOOL LC_VD_R;
  LC_TD_UDINT LC_VD_DLC;
  LC_TD_UDINT LC_VD_ID;
  LC_TD_LWORD LC_VD_DATA;
  LC_TD_DataType_TMS570_CAN LC_VD_CH;
  LC_TD_DataType_CAN_FORMAT LC_VD_FMT;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_UDINT LC_VD_CTX;
  LC_TD_DataType_CAN_RETCODE LC_VD_RC;
  LC_TD_BOOL LC_VD_R_M;
  LC_TD_UDINT LC_VD_BOX;
  LC_TD_UDINT LC_VD_ID_M;
  LC_TD_DataType_TMS570_CAN LC_VD_CH_M;
  LC_TD_DataType_CAN_FORMAT LC_VD_FMT_M;
} LCCG_StructAttrib LC_TD_FunctionBlock_CANTX;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_CANTX(p) \
{ \
  LC_INIT_DataType_TMS570_CAN(&((p)->LC_VD_CH)); \
  LC_INIT_UDINT(&((p)->LC_VD_ID)); \
  LC_INIT_DataType_CAN_FORMAT(&((p)->LC_VD_FMT)); \
  LC_INIT_LWORD(&((p)->LC_VD_DATA)); \
  LC_INIT_UDINT(&((p)->LC_VD_DLC)); \
  LC_INIT_BOOL(&((p)->LC_VD_R)); \
  LC_INIT_UDINT(&((p)->LC_VD_CTX)); \
  LC_INIT_DataType_CAN_RETCODE(&((p)->LC_VD_RC)); \
  LC_INIT_BOOL(&((p)->LC_VD_R_M)); \
  LC_INIT_UDINT(&((p)->LC_VD_BOX)); \
  LC_INIT_UDINT(&((p)->LC_VD_ID_M)); \
  LC_INIT_DataType_TMS570_CAN(&((p)->LC_VD_CH_M)); \
  LC_INIT_DataType_CAN_FORMAT(&((p)->LC_VD_FMT_M)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_CANTX(p,RF) \
{ \
  LC_WINIT_DataType_TMS570_CAN(&((p)->LC_VD_CH),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_ID),RF); \
  LC_WINIT_DataType_CAN_FORMAT(&((p)->LC_VD_FMT),RF); \
  LC_WINIT_LWORD(&((p)->LC_VD_DATA),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_DLC),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_CTX),RF); \
  LC_WINIT_DataType_CAN_RETCODE(&((p)->LC_VD_RC),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R_M),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_BOX),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_ID_M),RF); \
  LC_WINIT_DataType_TMS570_CAN(&((p)->LC_VD_CH_M),RF); \
  LC_WINIT_DataType_CAN_FORMAT(&((p)->LC_VD_FMT_M),RF); \
}

/*                            Prototype                        */
void  lcfu___CANTX(LC_TD_FunctionBlock_CANTX* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
