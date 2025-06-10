#ifndef LC_PROT_LCFU___SOCUKF__H
#define LC_PROT_LCFU___SOCUKF__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_SOCUKF
{
  LC_TD_BOOL LC_VD_ENB;
  LC_TD_REAL LC_VD_AMP;
  LC_TD_REAL LC_VD_TEMP;
  LC_TD_REAL LC_VD_VOLT;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_REAL LC_VD_SOC;
} LCCG_StructAttrib LC_TD_FunctionBlock_SOCUKF;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_SOCUKF(p) \
{ \
  LC_INIT_BOOL(&((p)->LC_VD_ENB)); \
  LC_INIT_REAL(&((p)->LC_VD_AMP)); \
  LC_INIT_REAL(&((p)->LC_VD_VOLT)); \
  LC_INIT_REAL(&((p)->LC_VD_TEMP)); \
  LC_INIT_REAL(&((p)->LC_VD_SOC)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_SOCUKF(p,RF) \
{ \
  LC_WINIT_BOOL(&((p)->LC_VD_ENB),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_AMP),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_VOLT),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_TEMP),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_SOC),RF); \
}

/*                            Prototype                        */
void  lcfu___SOCUKF(LC_TD_FunctionBlock_SOCUKF* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
