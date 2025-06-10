#ifndef LC_PROT_LCFU___BAMTX__H
#define LC_PROT_LCFU___BAMTX__H

#include <LC3CGBase.h>
#include <lcdt___tms570_can.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_BAMTX
{
  LC_TD_BOOL LC_VD_R;
  LC_TD_UINT LC_VD_LEN;
  LC_TD_UINT LC_VD_PGN;
  LC_TD_UDINT LC_VD_TPCM;
  LC_TD_UDINT LC_VD_TPDT;
  LC_TD_TIME LC_VD_FRMPER;
  LC_TD_DataType_TMS570_CAN LC_VD_CH;
  LC_TD_BYTE (* LC_VD_DATA);
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_R_END;
  LC_TD_USINT LC_VD_RC;
  LC_TD_UDINT LC_VD_CTX;
  LC_TD_BOOL LC_VD_PENDING;
  LC_TD_BOOL LC_VD_R_M;
  LC_TD_UINT LC_VD_BYTES;
  LC_TD_UINT LC_VD_INDEX;
  LC_TD_UINT LC_VD_NEXTPACKET;
  LC_TD_UINT LC_VD_PACKETS;
  LC_TD_UINT LC_VD_PGN_M;
  LC_TD_UINT LC_VD_STATE;
  LC_TD_UDINT LC_VD_BOX;
  LC_TD_UDINT LC_VD_TPDT_M;
  LC_TD_TIME LC_VD_STARTT;
  LC_TD_BYTE LC_VD_BUFF[101];
  LC_TD_DataType_TMS570_CAN LC_VD_CH_M;
} LCCG_StructAttrib LC_TD_FunctionBlock_BAMTX;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_BAMTX(p) \
{ \
  LC_INIT_DataType_TMS570_CAN(&((p)->LC_VD_CH)); \
  LC_INIT_UDINT(&((p)->LC_VD_TPCM)); \
  LC_INIT_UDINT(&((p)->LC_VD_TPDT)); \
  LC_INIT_UINT(&((p)->LC_VD_PGN)); \
  LC_INIT_TIME(&((p)->LC_VD_FRMPER)); \
  LC_INIT_PTR(&((p)->LC_VD_DATA)); \
  LC_INIT_UINT(&((p)->LC_VD_LEN)); \
  LC_INIT_BOOL(&((p)->LC_VD_R)); \
  LC_INIT_UDINT(&((p)->LC_VD_CTX)); \
  LC_INIT_USINT(&((p)->LC_VD_RC)); \
  LC_INIT_BOOL(&((p)->LC_VD_R_END)); \
  LC_INIT_BOOL(&((p)->LC_VD_PENDING)); \
  LC_INIT_ARRAY(&((p)->LC_VD_BUFF),BYTE,101); \
  LC_INIT_UDINT(&((p)->LC_VD_BOX)); \
  LC_INIT_DataType_TMS570_CAN(&((p)->LC_VD_CH_M)); \
  LC_INIT_UDINT(&((p)->LC_VD_TPDT_M)); \
  LC_INIT_UINT(&((p)->LC_VD_PGN_M)); \
  LC_INIT_UINT(&((p)->LC_VD_BYTES)); \
  LC_INIT_UINT(&((p)->LC_VD_PACKETS)); \
  LC_INIT_UINT(&((p)->LC_VD_INDEX)); \
  LC_INIT_UINT(&((p)->LC_VD_NEXTPACKET)); \
  LC_INIT_UINT(&((p)->LC_VD_STATE)); \
  LC_INIT_TIME(&((p)->LC_VD_STARTT)); \
  LC_INIT_BOOL(&((p)->LC_VD_R_M)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_BAMTX(p,RF) \
{ \
  LC_WINIT_DataType_TMS570_CAN(&((p)->LC_VD_CH),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_TPCM),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_TPDT),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_PGN),RF); \
  LC_WINIT_TIME(&((p)->LC_VD_FRMPER),RF); \
  LC_WINIT_PTR(&((p)->LC_VD_DATA),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_LEN),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_CTX),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_RC),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R_END),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_PENDING),RF); \
  LC_WINIT_ARRAY(&((p)->LC_VD_BUFF),BYTE,101,RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_BOX),RF); \
  LC_WINIT_DataType_TMS570_CAN(&((p)->LC_VD_CH_M),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_TPDT_M),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_PGN_M),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_BYTES),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_PACKETS),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_INDEX),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_NEXTPACKET),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_STATE),RF); \
  LC_WINIT_TIME(&((p)->LC_VD_STARTT),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R_M),RF); \
}

/*                            Prototype                        */
void  lcfu___BAMTX(LC_TD_FunctionBlock_BAMTX* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
