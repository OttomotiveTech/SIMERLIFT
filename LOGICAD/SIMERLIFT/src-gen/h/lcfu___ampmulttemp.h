#ifndef LC_PROT_LCFU___AMPMULTTEMP__H
#define LC_PROT_LCFU___AMPMULTTEMP__H

#include <LC3CGBase.h>
#include <lcfu_iec61131__TON.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_AMPMULTTEMP
{
  LC_TD_REAL LC_VD_TEMP;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_REAL LC_VD_MULT;
  LC_TD_BOOL LC_VD_TIMEOUT;
  LC_TD_REAL LC_VD_INSTANTMULT;
  LC_TD_REAL LC_VD_LASTMULT;
  LC_TD_FunctionBlock_TON LC_VD_RSTTIMER;
} LCCG_StructAttrib LC_TD_FunctionBlock_AMPMULTTEMP;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_AMPMULTTEMP(p) \
{ \
  LC_INIT_REAL(&((p)->LC_VD_TEMP)); \
  LC_INIT_REAL(&((p)->LC_VD_MULT)); \
  LC_INIT_FunctionBlock_TON(&((p)->LC_VD_RSTTIMER)); \
  LC_INIT_BOOL(&((p)->LC_VD_TIMEOUT)); \
  LC_INIT_REAL(&((p)->LC_VD_LASTMULT)); \
  LC_INIT_REAL(&((p)->LC_VD_INSTANTMULT)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_AMPMULTTEMP(p,RF) \
{ \
  LC_WINIT_REAL(&((p)->LC_VD_TEMP),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_MULT),RF); \
  LC_WINIT_FunctionBlock_TON(&((p)->LC_VD_RSTTIMER),0); \
  LC_WINIT_BOOL(&((p)->LC_VD_TIMEOUT),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_LASTMULT),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_INSTANTMULT),RF); \
}

/*                            Prototype                        */
void  lcfu___AMPMULTTEMP(LC_TD_FunctionBlock_AMPMULTTEMP* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
