#ifndef LC_PROT_LCFU___ARR2VAL__H
#define LC_PROT_LCFU___ARR2VAL__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_ARR2VAL
{
  LC_TD_USINT LC_VD_CELLCOUNTER;
  LC_TD_USINT LC_VD_INDX;
  LC_TD_USINT LC_VD_MAXBMU;
  LC_TD_USINT LC_VD_MAP[16];
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_RESET;
  LC_TD_UINT LC_VD_NUMOFCELL;
} LCCG_StructAttrib LC_TD_FunctionBlock_ARR2VAL;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_ARR2VAL(p) \
{ \
  LC_INIT_USINT(&((p)->LC_VD_MAXBMU)); \
  LC_INIT_USINT(&((p)->LC_VD_INDX)); \
  LC_INIT_ARRAY(&((p)->LC_VD_MAP),USINT,16); \
  LC_INIT_USINT(&((p)->LC_VD_CELLCOUNTER)); \
  LC_INIT_UINT(&((p)->LC_VD_NUMOFCELL)); \
  LC_INIT_BOOL(&((p)->LC_VD_RESET)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_ARR2VAL(p,RF) \
{ \
  LC_WINIT_USINT(&((p)->LC_VD_MAXBMU),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_INDX),RF); \
  LC_WINIT_ARRAY(&((p)->LC_VD_MAP),USINT,16,RF); \
  LC_WINIT_USINT(&((p)->LC_VD_CELLCOUNTER),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_NUMOFCELL),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_RESET),RF); \
}

/*                            Prototype                        */
void  lcfu___ARR2VAL(LC_TD_FunctionBlock_ARR2VAL* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
