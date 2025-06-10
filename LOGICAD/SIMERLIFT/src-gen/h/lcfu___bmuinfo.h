#ifndef LC_PROT_LCFU___BMUINFO__H
#define LC_PROT_LCFU___BMUINFO__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_BMUINFO
{
  LC_TD_BOOL LC_VD_R;
  LC_TD_USINT LC_VD_BRD;
  LC_TD_REAL LC_VD_NTCBETA;
  LC_TD_REAL LC_VD_NTCNOMR_OHM;
  LC_TD_REAL LC_VD_NTCNOMT_KLV;
  LC_TD_USINT LC_VD_T_CELLS[16];
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_R_OUT;
  LC_TD_SINT LC_VD_CELLTEMP[16];
  LC_TD_UINT LC_VD_CELLVOLT[16];
  LC_TD_BOOL LC_VD_PENDING;
  LC_TD_BOOL LC_VD_R_M;
} LCCG_StructAttrib LC_TD_FunctionBlock_BMUINFO;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_BMUINFO(p) \
{ \
  LC_INIT_USINT(&((p)->LC_VD_BRD)); \
  LC_INIT_REAL(&((p)->LC_VD_NTCBETA)); \
  LC_INIT_REAL(&((p)->LC_VD_NTCNOMT_KLV)); \
  LC_INIT_REAL(&((p)->LC_VD_NTCNOMR_OHM)); \
  LC_INIT_ARRAY(&((p)->LC_VD_T_CELLS),USINT,16); \
  LC_INIT_BOOL(&((p)->LC_VD_R)); \
  LC_INIT_ARRAY(&((p)->LC_VD_CELLVOLT),UINT,16); \
  LC_INIT_ARRAY(&((p)->LC_VD_CELLTEMP),SINT,16); \
  LC_INIT_BOOL(&((p)->LC_VD_R_OUT)); \
  LC_INIT_BOOL(&((p)->LC_VD_R_M)); \
  LC_INIT_BOOL(&((p)->LC_VD_PENDING)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_BMUINFO(p,RF) \
{ \
  LC_WINIT_USINT(&((p)->LC_VD_BRD),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_NTCBETA),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_NTCNOMT_KLV),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_NTCNOMR_OHM),RF); \
  LC_WINIT_ARRAY(&((p)->LC_VD_T_CELLS),USINT,16,RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R),RF); \
  LC_WINIT_ARRAY(&((p)->LC_VD_CELLVOLT),UINT,16,RF); \
  LC_WINIT_ARRAY(&((p)->LC_VD_CELLTEMP),SINT,16,RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R_OUT),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R_M),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_PENDING),RF); \
}

/*                            Prototype                        */
void  lcfu___BMUINFO(LC_TD_FunctionBlock_BMUINFO* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
