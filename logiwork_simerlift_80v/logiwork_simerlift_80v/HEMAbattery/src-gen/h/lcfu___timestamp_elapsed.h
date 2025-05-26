#ifndef LC_PROT_LCFU___TIMESTAMP_ELAPSED__H
#define LC_PROT_LCFU___TIMESTAMP_ELAPSED__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_TIMESTAMP_ELAPSED
{
  LC_TD_TIME LC_VD_START;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_TIME LC_VD_ELAPSED;
} LCCG_StructAttrib LC_TD_FunctionBlock_TIMESTAMP_ELAPSED;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_TIMESTAMP_ELAPSED(p) \
{ \
  LC_INIT_TIME(&((p)->LC_VD_START)); \
  LC_INIT_TIME(&((p)->LC_VD_ELAPSED)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_TIMESTAMP_ELAPSED(p,RF) \
{ \
  LC_WINIT_TIME(&((p)->LC_VD_START),RF); \
  LC_WINIT_TIME(&((p)->LC_VD_ELAPSED),RF); \
}

/*                            Prototype                        */
void  lcfu___TIMESTAMP_ELAPSED(LC_TD_FunctionBlock_TIMESTAMP_ELAPSED* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
