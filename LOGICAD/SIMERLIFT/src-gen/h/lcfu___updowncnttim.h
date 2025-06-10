#ifndef LC_PROT_LCFU___UPDOWNCNTTIM__H
#define LC_PROT_LCFU___UPDOWNCNTTIM__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_UPDOWNCNTTIM
{
  LC_TD_BOOL LC_VD_CD;
  LC_TD_BOOL LC_VD_CU;
  LC_TD_BOOL LC_VD_RST;
  LC_TD_INT LC_VD_PV;
  LC_TD_TIME LC_VD_DPER;
  LC_TD_TIME LC_VD_UPER;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_QD;
  LC_TD_BOOL LC_VD_QU;
  LC_TD_INT LC_VD_CV;
  LC_TD_BOOL LC_VD_LASTCD;
  LC_TD_BOOL LC_VD_LASTCU;
  LC_TD_UDINT LC_VD_TICK;
} LCCG_StructAttrib LC_TD_FunctionBlock_UPDOWNCNTTIM;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_UPDOWNCNTTIM(p) \
{ \
  LC_INIT_BOOL(&((p)->LC_VD_CU)); \
  LC_INIT_BOOL(&((p)->LC_VD_CD)); \
  LC_INIT_TIME(&((p)->LC_VD_UPER)); \
  LC_INIT_TIME(&((p)->LC_VD_DPER)); \
  LC_INIT_INT(&((p)->LC_VD_PV)); \
  LC_INIT_BOOL(&((p)->LC_VD_RST)); \
  LC_INIT_INT(&((p)->LC_VD_CV)); \
  LC_INIT_BOOL(&((p)->LC_VD_QD)); \
  LC_INIT_BOOL(&((p)->LC_VD_QU)); \
  LC_INIT_BOOL(&((p)->LC_VD_LASTCU)); \
  LC_INIT_BOOL(&((p)->LC_VD_LASTCD)); \
  LC_INIT_UDINT(&((p)->LC_VD_TICK)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_UPDOWNCNTTIM(p,RF) \
{ \
  LC_WINIT_BOOL(&((p)->LC_VD_CU),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_CD),RF); \
  LC_WINIT_TIME(&((p)->LC_VD_UPER),RF); \
  LC_WINIT_TIME(&((p)->LC_VD_DPER),RF); \
  LC_WINIT_INT(&((p)->LC_VD_PV),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_RST),RF); \
  LC_WINIT_INT(&((p)->LC_VD_CV),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_QD),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_QU),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_LASTCU),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_LASTCD),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_TICK),RF); \
}

/*                            Prototype                        */
void  lcfu___UPDOWNCNTTIM(LC_TD_FunctionBlock_UPDOWNCNTTIM* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
