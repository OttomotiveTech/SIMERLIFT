#ifndef LC_PROT_LCFU___BTTDIAG__H
#define LC_PROT_LCFU___BTTDIAG__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_BTTDIAG
{
  LC_TD_BOOL LC_VD_IN;
  LC_TD_UINT LC_VD_IMAX;
  LC_TD_UINT LC_VD_IMIN;
  LC_TD_UINT LC_VD_IOUT;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BYTE LC_VD_DIAG;
} LCCG_StructAttrib LC_TD_FunctionBlock_BTTDIAG;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_BTTDIAG(p) \
{ \
  LC_INIT_BOOL(&((p)->LC_VD_IN)); \
  LC_INIT_UINT(&((p)->LC_VD_IOUT)); \
  LC_INIT_UINT(&((p)->LC_VD_IMIN)); \
  LC_INIT_UINT(&((p)->LC_VD_IMAX)); \
  LC_INIT_BYTE(&((p)->LC_VD_DIAG)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_BTTDIAG(p,RF) \
{ \
  LC_WINIT_BOOL(&((p)->LC_VD_IN),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_IOUT),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_IMIN),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_IMAX),RF); \
  LC_WINIT_BYTE(&((p)->LC_VD_DIAG),RF); \
}

/*                            Prototype                        */
void  lcfu___BTTDIAG(LC_TD_FunctionBlock_BTTDIAG* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
