#ifndef LC_PROT_LCFU___CHARGEMAX__H
#define LC_PROT_LCFU___CHARGEMAX__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_CHARGEMAX
{
  LC_TD_REAL LC_VD_SOC;
  LC_TD_REAL LC_VD_TEMP;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_REAL LC_VD_A;
} LCCG_StructAttrib LC_TD_FunctionBlock_CHARGEMAX;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_CHARGEMAX(p) \
{ \
  LC_INIT_REAL(&((p)->LC_VD_SOC)); \
  LC_INIT_REAL(&((p)->LC_VD_TEMP)); \
  LC_INIT_REAL(&((p)->LC_VD_A)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_CHARGEMAX(p,RF) \
{ \
  LC_WINIT_REAL(&((p)->LC_VD_SOC),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_TEMP),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_A),RF); \
}

/*                            Prototype                        */
void  lcfu___CHARGEMAX(LC_TD_FunctionBlock_CHARGEMAX* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
