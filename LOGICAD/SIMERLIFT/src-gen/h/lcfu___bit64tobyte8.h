#ifndef LC_PROT_LCFU___BIT64TOBYTE8__H
#define LC_PROT_LCFU___BIT64TOBYTE8__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_BIT64TOBYTE8
{
  LC_TD_LWORD LC_VD_BIT64;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BYTE LC_VD_BYTES8[8];
} LCCG_StructAttrib LC_TD_FunctionBlock_BIT64TOBYTE8;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_BIT64TOBYTE8(p) \
{ \
  LC_INIT_LWORD(&((p)->LC_VD_BIT64)); \
  LC_INIT_ARRAY(&((p)->LC_VD_BYTES8),BYTE,8); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_BIT64TOBYTE8(p,RF) \
{ \
  LC_WINIT_LWORD(&((p)->LC_VD_BIT64),RF); \
  LC_WINIT_ARRAY(&((p)->LC_VD_BYTES8),BYTE,8,RF); \
}

/*                            Prototype                        */
void  lcfu___BIT64TOBYTE8(LC_TD_FunctionBlock_BIT64TOBYTE8* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
