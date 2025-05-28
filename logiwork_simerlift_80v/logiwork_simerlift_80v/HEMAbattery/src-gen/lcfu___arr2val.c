#ifndef LC_PROT_LCFU___ARR2VAL__C
#define LC_PROT_LCFU___ARR2VAL__C

#include <lcfu___arr2val.h>
#include <lcfu_iec61131__AND.h>
#include <lcfu_iec61131__NOT.h>



/*                            FunctionBlocks                   */
void  lcfu___ARR2VAL(LC_TD_FunctionBlock_ARR2VAL* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  LC_this->LC_VD_RESET = LC_EL_false;
  LC_this->LC_VD_NUMOFCELL = LC_SUBSCRIPT_ARRAY(LC_this->LC_VD_MAP,LC_this->LC_VD_INDX,(LC_TD_DINT)0,(LC_TD_DINT)15);
  {
    LC_TD_BOOL conditionResult = LC_EL_false;
    conditionResult = (lcfu_iec61131__AND__BOOL__2__INL((lcfu_iec61131__AND__BOOL__2__INL((lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_RESET)),(LC_TD_BOOL)(LC_this->LC_VD_INDX == (LC_TD_USINT)(LC_this->LC_VD_MAXBMU - (LC_TD_USINT)1)))),(LC_TD_BOOL)(LC_this->LC_VD_CELLCOUNTER == LC_SUBSCRIPT_ARRAY(LC_this->LC_VD_MAP,LC_this->LC_VD_INDX,(LC_TD_DINT)0,(LC_TD_DINT)15))));
    if (conditionResult)
    {
      LC_this->LC_VD_RESET = LC_EL_true;
    }
  }
}

#endif
