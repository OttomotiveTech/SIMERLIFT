#ifndef LC_PROT_LCFU___REGENMAX10S__H
#define LC_PROT_LCFU___REGENMAX10S__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_REGENMAX10S
{
  LC_TD_REAL LC_VD_SOC;
  LC_TD_REAL LC_VD_TEMP;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_REAL LC_VD_A;
} LCCG_StructAttrib LC_TD_FunctionBlock_REGENMAX10S;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_REGENMAX10S(p) \
{ \
  LC_INIT_REAL(&((p)->LC_VD_SOC)); \
  LC_INIT_REAL(&((p)->LC_VD_TEMP)); \
  LC_INIT_REAL(&((p)->LC_VD_A)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_REGENMAX10S(p,RF) \
{ \
  LC_WINIT_REAL(&((p)->LC_VD_SOC),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_TEMP),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_A),RF); \
}

/*                            Prototype                        */
void  lcfu___REGENMAX10S(LC_TD_FunctionBlock_REGENMAX10S* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
