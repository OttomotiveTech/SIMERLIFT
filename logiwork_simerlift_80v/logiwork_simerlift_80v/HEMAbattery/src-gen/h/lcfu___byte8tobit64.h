#ifndef LC_PROT_LCFU___BYTE8TOBIT64__H
#define LC_PROT_LCFU___BYTE8TOBIT64__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_BYTE8TOBIT64
{
  LC_TD_BYTE LC_VD_BYTES8[8];
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_LWORD LC_VD_BIT64;
} LCCG_StructAttrib LC_TD_FunctionBlock_BYTE8TOBIT64;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_BYTE8TOBIT64(p) \
{ \
  LC_INIT_ARRAY(&((p)->LC_VD_BYTES8),BYTE,8); \
  LC_INIT_LWORD(&((p)->LC_VD_BIT64)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_BYTE8TOBIT64(p,RF) \
{ \
  LC_WINIT_ARRAY(&((p)->LC_VD_BYTES8),BYTE,8,RF); \
  LC_WINIT_LWORD(&((p)->LC_VD_BIT64),RF); \
}

/*                            Prototype                        */
void  lcfu___BYTE8TOBIT64(LC_TD_FunctionBlock_BYTE8TOBIT64* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
