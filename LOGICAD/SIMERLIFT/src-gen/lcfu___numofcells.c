#ifndef LC_PROT_LCFU___NUMOFCELLS__C
#define LC_PROT_LCFU___NUMOFCELLS__C

#include <lcfu___numofcells.h>
#include <LC3CGStmtFor.h>



/*                            FunctionBlocks                   */
void  lcfu___NUMOFCELLS(LC_TD_FunctionBlock_NUMOFCELLS* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  LC_this->LC_VD_NUMOFCELL = (LC_TD_UINT)0;
  {
    LC3_MST_FOR(LC_this->LC_VD_I, (LC_TD_USINT)1, LC_this->LC_VD_NUMOFBMU, (LC_TD_USINT)1,USINT, USINT);
    {
      LC_this->LC_VD_NUMOFCELL = (LC_TD_UINT)(LC_this->LC_VD_NUMOFCELL + LC_SUBSCRIPT_ARRAY(LC_this->LC_VD_CELLMAP,(LC_TD_USINT)(LC_this->LC_VD_I - (LC_TD_USINT)1),(LC_TD_DINT)0,(LC_TD_DINT)15));
    }
    LC3_MST_FOR_END(LC_this->LC_VD_I, (LC_TD_USINT)1,LC_this->LC_VD_NUMOFBMU, (LC_TD_USINT)1, USINT, USINT);
  }
}

#endif
