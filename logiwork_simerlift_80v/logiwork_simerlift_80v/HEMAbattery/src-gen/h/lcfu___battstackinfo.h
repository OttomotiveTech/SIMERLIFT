#ifndef LC_PROT_LCFU___BATTSTACKINFO__H
#define LC_PROT_LCFU___BATTSTACKINFO__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_BATTSTACKINFO
{
  LC_TD_BOOL LC_VD_R;
  LC_TD_SINT LC_VD_TEMP;
  LC_TD_USINT LC_VD_BRD;
  LC_TD_USINT LC_VD_HUM;
  LC_TD_USINT LC_VD_INFO;
  LC_TD_USINT LC_VD_SOC;
  LC_TD_USINT LC_VD_SOH;
  LC_TD_USINT LC_VD_STATE;
  LC_TD_UINT LC_VD_CYCLE;
  LC_TD_UDINT LC_VD_FAULT;
  LC_TD_REAL LC_VD_AMP;
  LC_TD_REAL LC_VD_NTCBETA;
  LC_TD_REAL LC_VD_NTCNOMR_OHM;
  LC_TD_REAL LC_VD_NTCNOMT_KLV;
  LC_TD_REAL LC_VD_VOLT;
  LC_TD_USINT LC_VD_T_CELLS[16];
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_R_OUT;
  LC_TD_UINT LC_VD_LEN;
  LC_TD_BYTE (* LC_VD_DATA);
  LC_TD_BOOL LC_VD_PENDING;
  LC_TD_BOOL LC_VD_R_M;
  LC_TD_USINT LC_VD_BUF[64];
} LCCG_StructAttrib LC_TD_FunctionBlock_BATTSTACKINFO;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_BATTSTACKINFO(p) \
{ \
  LC_INIT_USINT(&((p)->LC_VD_INFO)); \
  LC_INIT_USINT(&((p)->LC_VD_BRD)); \
  LC_INIT_REAL(&((p)->LC_VD_VOLT)); \
  LC_INIT_REAL(&((p)->LC_VD_AMP)); \
  LC_INIT_UINT(&((p)->LC_VD_CYCLE)); \
  LC_INIT_USINT(&((p)->LC_VD_STATE)); \
  LC_INIT_USINT(&((p)->LC_VD_SOC)); \
  LC_INIT_USINT(&((p)->LC_VD_SOH)); \
  LC_INIT_SINT(&((p)->LC_VD_TEMP)); \
  LC_INIT_USINT(&((p)->LC_VD_HUM)); \
  LC_INIT_UDINT(&((p)->LC_VD_FAULT)); \
  LC_INIT_REAL(&((p)->LC_VD_NTCBETA)); \
  LC_INIT_REAL(&((p)->LC_VD_NTCNOMT_KLV)); \
  LC_INIT_REAL(&((p)->LC_VD_NTCNOMR_OHM)); \
  LC_INIT_ARRAY(&((p)->LC_VD_T_CELLS),USINT,16); \
  LC_INIT_BOOL(&((p)->LC_VD_R)); \
  LC_INIT_PTR(&((p)->LC_VD_DATA)); \
  LC_INIT_UINT(&((p)->LC_VD_LEN)); \
  LC_INIT_BOOL(&((p)->LC_VD_R_OUT)); \
  LC_INIT_ARRAY(&((p)->LC_VD_BUF),USINT,64); \
  LC_INIT_BOOL(&((p)->LC_VD_R_M)); \
  LC_INIT_BOOL(&((p)->LC_VD_PENDING)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_BATTSTACKINFO(p,RF) \
{ \
  LC_WINIT_USINT(&((p)->LC_VD_INFO),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_BRD),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_VOLT),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_AMP),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_CYCLE),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_STATE),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_SOC),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_SOH),RF); \
  LC_WINIT_SINT(&((p)->LC_VD_TEMP),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_HUM),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_FAULT),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_NTCBETA),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_NTCNOMT_KLV),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_NTCNOMR_OHM),RF); \
  LC_WINIT_ARRAY(&((p)->LC_VD_T_CELLS),USINT,16,RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R),RF); \
  LC_WINIT_PTR(&((p)->LC_VD_DATA),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_LEN),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R_OUT),RF); \
  LC_WINIT_ARRAY(&((p)->LC_VD_BUF),USINT,64,RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R_M),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_PENDING),RF); \
}

/*                            Prototype                        */
void  lcfu___BATTSTACKINFO(LC_TD_FunctionBlock_BATTSTACKINFO* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
