#ifndef LC_PROT_LCFU___AMPMULTVOLTCHAR__H
#define LC_PROT_LCFU___AMPMULTVOLTCHAR__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_AMPMULTVOLTCHAR
{
  LC_TD_BOOL LC_VD_CHARGEON;
  LC_TD_UDINT LC_VD_MAXCELL;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_REAL LC_VD_MULT;
  LC_TD_USINT LC_VD_STATE;
} LCCG_StructAttrib LC_TD_FunctionBlock_AMPMULTVOLTCHAR;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_AMPMULTVOLTCHAR(p) \
{ \
  LC_INIT_BOOL(&((p)->LC_VD_CHARGEON)); \
  LC_INIT_UDINT(&((p)->LC_VD_MAXCELL)); \
  LC_INIT_REAL(&((p)->LC_VD_MULT)); \
  LC_INIT_USINT(&((p)->LC_VD_STATE)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_AMPMULTVOLTCHAR(p,RF) \
{ \
  LC_WINIT_BOOL(&((p)->LC_VD_CHARGEON),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_MAXCELL),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_MULT),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_STATE),RF); \
}

/*                            Prototype                        */
void  lcfu___AMPMULTVOLTCHAR(LC_TD_FunctionBlock_AMPMULTVOLTCHAR* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
