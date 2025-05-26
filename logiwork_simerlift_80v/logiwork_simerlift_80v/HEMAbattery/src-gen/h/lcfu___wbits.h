#ifndef LC_PROT_LCFU___WBITS__H
#define LC_PROT_LCFU___WBITS__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_WBITS
{
  LC_TD_UINT LC_VD_LEN;
  LC_TD_UINT LC_VD_START;
  LC_TD_ULINT LC_VD_PRM;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_LWORD LC_VD_OUT;
} LCCG_StructAttrib LC_TD_FunctionBlock_WBITS;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_WBITS(p) \
{ \
  LC_INIT_UINT(&((p)->LC_VD_START)); \
  LC_INIT_UINT(&((p)->LC_VD_LEN)); \
  LC_INIT_ULINT(&((p)->LC_VD_PRM)); \
  LC_INIT_LWORD(&((p)->LC_VD_OUT)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_WBITS(p,RF) \
{ \
  LC_WINIT_UINT(&((p)->LC_VD_START),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_LEN),RF); \
  LC_WINIT_ULINT(&((p)->LC_VD_PRM),RF); \
  LC_WINIT_LWORD(&((p)->LC_VD_OUT),RF); \
}

/*                            Prototype                        */
void  lcfu___WBITS(LC_TD_FunctionBlock_WBITS* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
