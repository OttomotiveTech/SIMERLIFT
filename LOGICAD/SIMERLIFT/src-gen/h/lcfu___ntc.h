#ifndef LC_PROT_LCFU___NTC__H
#define LC_PROT_LCFU___NTC__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_NTC
{
  LC_TD_REAL LC_VD_BETA;
  LC_TD_REAL LC_VD_RNOM;
  LC_TD_REAL LC_VD_RS;
  LC_TD_REAL LC_VD_TNOM;
  LC_TD_REAL LC_VD_VOLT;
  LC_TD_REAL LC_VD_VSUP;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_REAL LC_VD_TEMP;
} LCCG_StructAttrib LC_TD_FunctionBlock_NTC;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_NTC(p) \
{ \
  LC_INIT_REAL(&((p)->LC_VD_VOLT)); \
  LC_INIT_REAL(&((p)->LC_VD_VSUP)); \
  LC_INIT_REAL(&((p)->LC_VD_RS)); \
  LC_INIT_REAL(&((p)->LC_VD_BETA)); \
  LC_INIT_REAL(&((p)->LC_VD_TNOM)); \
  LC_INIT_REAL(&((p)->LC_VD_RNOM)); \
  LC_INIT_REAL(&((p)->LC_VD_TEMP)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_NTC(p,RF) \
{ \
  LC_WINIT_REAL(&((p)->LC_VD_VOLT),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_VSUP),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_RS),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_BETA),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_TNOM),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_RNOM),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_TEMP),RF); \
}

/*                            Prototype                        */
void  lcfu___NTC(LC_TD_FunctionBlock_NTC* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
