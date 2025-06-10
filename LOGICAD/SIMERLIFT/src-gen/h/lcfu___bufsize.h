#ifndef LC_PROT_LCFU___BUFSIZE__H
#define LC_PROT_LCFU___BUFSIZE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_BUFSIZE
{
  LC_TD_BYTE (* LC_VD_FIN);
  LC_TD_BYTE (* LC_VD_START);
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_UDINT LC_VD_SIZE;
} LCCG_StructAttrib LC_TD_FunctionBlock_BUFSIZE;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_BUFSIZE(p) \
{ \
  LC_INIT_PTR(&((p)->LC_VD_START)); \
  LC_INIT_PTR(&((p)->LC_VD_FIN)); \
  LC_INIT_UDINT(&((p)->LC_VD_SIZE)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_BUFSIZE(p,RF) \
{ \
  LC_WINIT_PTR(&((p)->LC_VD_START),RF); \
  LC_WINIT_PTR(&((p)->LC_VD_FIN),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_SIZE),RF); \
}

/*                            Prototype                        */
void  lcfu___BUFSIZE(LC_TD_FunctionBlock_BUFSIZE* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
