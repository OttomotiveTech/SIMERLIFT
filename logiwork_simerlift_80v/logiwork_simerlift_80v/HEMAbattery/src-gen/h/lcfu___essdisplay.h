#ifndef LC_PROT_LCFU___ESSDISPLAY__H
#define LC_PROT_LCFU___ESSDISPLAY__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_ESSDISPLAY
{
  LC_TD_BOOL LC_VD_EMERGSTAT;
  LC_TD_BOOL LC_VD_STOPSTAT;
  LC_TD_USINT LC_VD_SOC;
  LC_TD_USINT LC_VD_STATE;
  LC_TD_UINT LC_VD_DUTYCYCLE;
  LC_TD_DINT LC_VD_MAXT;
  LC_TD_DINT LC_VD_MINT;
  LC_TD_UDINT LC_VD_MAXV;
  LC_TD_UDINT LC_VD_MINV;
  LC_TD_REAL LC_VD_AMPR;
  LC_TD_REAL LC_VD_INSTALLEDCAP;
  LC_TD_REAL LC_VD_REMAININGCAP;
  LC_TD_REAL LC_VD_VOLT;
  LC_TD_REAL LC_VD_WATT;
  LC_TD_LWORD LC_VD_ALARMS;
  LC_TD_BOOL LC_VD_ENO;
} LCCG_StructAttrib LC_TD_FunctionBlock_ESSDISPLAY;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_ESSDISPLAY(p) \
{ \
  LC_INIT_USINT(&((p)->LC_VD_SOC)); \
  LC_INIT_REAL(&((p)->LC_VD_WATT)); \
  LC_INIT_REAL(&((p)->LC_VD_VOLT)); \
  LC_INIT_REAL(&((p)->LC_VD_AMPR)); \
  LC_INIT_USINT(&((p)->LC_VD_STATE)); \
  LC_INIT_DINT(&((p)->LC_VD_MAXT)); \
  LC_INIT_DINT(&((p)->LC_VD_MINT)); \
  LC_INIT_UDINT(&((p)->LC_VD_MAXV)); \
  LC_INIT_UDINT(&((p)->LC_VD_MINV)); \
  LC_INIT_REAL(&((p)->LC_VD_INSTALLEDCAP)); \
  LC_INIT_REAL(&((p)->LC_VD_REMAININGCAP)); \
  LC_INIT_UINT(&((p)->LC_VD_DUTYCYCLE)); \
  LC_INIT_LWORD(&((p)->LC_VD_ALARMS)); \
  LC_INIT_BOOL(&((p)->LC_VD_EMERGSTAT)); \
  LC_INIT_BOOL(&((p)->LC_VD_STOPSTAT)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_ESSDISPLAY(p,RF) \
{ \
  LC_WINIT_USINT(&((p)->LC_VD_SOC),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_WATT),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_VOLT),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_AMPR),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_STATE),RF); \
  LC_WINIT_DINT(&((p)->LC_VD_MAXT),RF); \
  LC_WINIT_DINT(&((p)->LC_VD_MINT),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_MAXV),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_MINV),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_INSTALLEDCAP),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_REMAININGCAP),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_DUTYCYCLE),RF); \
  LC_WINIT_LWORD(&((p)->LC_VD_ALARMS),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_EMERGSTAT),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_STOPSTAT),RF); \
}

/*                            Prototype                        */
void  lcfu___ESSDISPLAY(LC_TD_FunctionBlock_ESSDISPLAY* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
