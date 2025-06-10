#ifndef LC_PROT_LCFU___BMU_CELL_TEMP__H
#define LC_PROT_LCFU___BMU_CELL_TEMP__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_BMU_CELL_TEMP
{
  LC_TD_BOOL LC_VD_ENO;
} LCCG_StructAttrib LC_TD_FunctionBlock_BMU_CELL_TEMP;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_BMU_CELL_TEMP(p) \
{ \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_BMU_CELL_TEMP(p,RF) \
{ \
}

/*                            Prototype                        */
void  lcfu___BMU_CELL_TEMP(LC_TD_FunctionBlock_BMU_CELL_TEMP* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
