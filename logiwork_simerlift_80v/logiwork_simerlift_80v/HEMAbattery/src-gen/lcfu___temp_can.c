#ifndef LC_PROT_LCFU___TEMP_CAN__C
#define LC_PROT_LCFU___TEMP_CAN__C

#include <lcfu___temp_can.h>



/*                            FunctionBlocks                   */
void  lcfu___TEMP_CAN(LC_TD_FunctionBlock_TEMP_CAN* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_this->LC_VD_LINEER_FUNCTION1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_LINEER_FUNCTION1.LC_VD_INPUT = LC_this->LC_VD_TEMP;
      LC_this->LC_VD_LINEER_FUNCTION1.LC_VD_X1 = (LC_TD_LREAL)-40;
      LC_this->LC_VD_LINEER_FUNCTION1.LC_VD_X2 = (LC_TD_LREAL)210;
      LC_this->LC_VD_LINEER_FUNCTION1.LC_VD_Y1 = (LC_TD_LREAL)0;
      LC_this->LC_VD_LINEER_FUNCTION1.LC_VD_Y2 = (LC_TD_LREAL)250;
      lcfu___LINEER_FUNCTION(&(LC_this->LC_VD_LINEER_FUNCTION1), pEPDB);
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__LREAL(&lFunction_TO_USINT, LC_this->LC_VD_LINEER_FUNCTION1.LC_VD_LIM_OUTPUT, pEPDB);
      LC_this->LC_VD_CAN = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___2_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
  }
}

#endif
