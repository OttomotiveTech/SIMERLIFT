#ifndef LC_PROT_LCFU___NUMOFCELLS__H
#define LC_PROT_LCFU___NUMOFCELLS__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_NUMOFCELLS
{
  LC_TD_USINT LC_VD_NUMOFBMU;
  LC_TD_USINT LC_VD_CELLMAP[16];
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_UINT LC_VD_NUMOFCELL;
  LC_TD_USINT LC_VD_I;
} LCCG_StructAttrib LC_TD_FunctionBlock_NUMOFCELLS;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_NUMOFCELLS(p) \
{ \
  LC_INIT_USINT(&((p)->LC_VD_NUMOFBMU)); \
  LC_INIT_ARRAY(&((p)->LC_VD_CELLMAP),USINT,16); \
  LC_INIT_UINT(&((p)->LC_VD_NUMOFCELL)); \
  LC_INIT_USINT(&((p)->LC_VD_I)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_NUMOFCELLS(p,RF) \
{ \
  LC_WINIT_USINT(&((p)->LC_VD_NUMOFBMU),RF); \
  LC_WINIT_ARRAY(&((p)->LC_VD_CELLMAP),USINT,16,RF); \
  LC_WINIT_UINT(&((p)->LC_VD_NUMOFCELL),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_I),RF); \
}

/*                            Prototype                        */
void  lcfu___NUMOFCELLS(LC_TD_FunctionBlock_NUMOFCELLS* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
