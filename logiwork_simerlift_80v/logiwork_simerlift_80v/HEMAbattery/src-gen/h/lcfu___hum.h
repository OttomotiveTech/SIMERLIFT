#ifndef LC_PROT_LCFU___HUM__H
#define LC_PROT_LCFU___HUM__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_HUM
{
  LC_TD_REAL LC_VD_TEMP;
  LC_TD_REAL LC_VD_VOLT;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_REAL LC_VD_HUM;
} LCCG_StructAttrib LC_TD_FunctionBlock_HUM;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_HUM(p) \
{ \
  LC_INIT_REAL(&((p)->LC_VD_VOLT)); \
  LC_INIT_REAL(&((p)->LC_VD_TEMP)); \
  LC_INIT_REAL(&((p)->LC_VD_HUM)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_HUM(p,RF) \
{ \
  LC_WINIT_REAL(&((p)->LC_VD_VOLT),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_TEMP),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_HUM),RF); \
}

/*                            Prototype                        */
void  lcfu___HUM(LC_TD_FunctionBlock_HUM* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
