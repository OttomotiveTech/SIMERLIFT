#ifndef LC_PROT_LCFU___GUI__C
#define LC_PROT_LCFU___GUI__C

#include <lcfu___gui.h>



/*                            FunctionBlocks                   */
void  lcfu___GUI(LC_TD_FunctionBlock_GUI* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_this->LC_VD_CANRECV5.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CANRECV5.LC_VD_CH = LC_this->LC_VD_CH;
      LC_this->LC_VD_CANRECV5.LC_VD_ID = (LC_TD_UDINT)417996452UL;
      LC_this->LC_VD_CANRECV5.LC_VD_FMT = LC_ED__CAN_FORMAT__EXTENDED;
      LC_this->LC_VD_CANRECV5.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(1),RT_CC_CONST_LL(0));
      LC_this->LC_VD_CANRECV5.LC_VD_ENB = LC_EL_true;
      lcfu___CANRECV(&(LC_this->LC_VD_CANRECV5), pEPDB);
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)0, (LC_TD_INT)16, LC_this->LC_VD_CANRECV5.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___31_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__LWORD(&lFunction_TO_UINT, LC_this->LC_VD___31_OUTBIT, pEPDB);
      LC_this->LC_VD___2560_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
    {
      LC_TD_Function_FROM_BIG_ENDIAN__UINT lFunction_FROM_BIG_ENDIAN;
      LC_INIT_Function_FROM_BIG_ENDIAN__UINT(&lFunction_FROM_BIG_ENDIAN);
      lFunction_FROM_BIG_ENDIAN.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__FROM_BIG_ENDIAN__UINT(&lFunction_FROM_BIG_ENDIAN, LC_this->LC_VD___2560_TO_UINT, pEPDB);
      LC_this->LC_VD___774_FROM_BIG_ENDIAN = lFunction_FROM_BIG_ENDIAN.LC_VD_FROM_BIG_ENDIAN;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)8, (LC_TD_INT)8, LC_this->LC_VD_CANRECV5.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___35_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__LWORD(&lFunction_TO_USINT, LC_this->LC_VD___35_OUTBIT, pEPDB);
      LC_this->LC_VD___2558_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)0, (LC_TD_INT)4, LC_this->LC_VD_CANRECV5.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___36_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__LWORD(&lFunction_TO_USINT, LC_this->LC_VD___36_OUTBIT, pEPDB);
      LC_this->LC_VD___2559_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
    {
      LC_TD_Function_DIV__REAL lFunction_DIV;
      LC_INIT_Function_DIV__REAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__REAL(&lFunction_DIV, LC_this->LC_VD_VOLTAGE, (LC_TD_REAL)1000, pEPDB);
      LC_this->LC_VD___988_DIV = lFunction_DIV.LC_VD_DIV;
    }
    {
      LC_TD_Function_DIV__REAL lFunction_DIV;
      LC_INIT_Function_DIV__REAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__REAL(&lFunction_DIV, LC_this->LC_VD_CURRENT, (LC_TD_REAL)1000, pEPDB);
      LC_this->LC_VD___12_DIV = lFunction_DIV.LC_VD_DIV;
    }
    {
      LC_TD_Function_TO_SINT lFunction_TO_SINT;
      LC_INIT_Function_TO_SINT(&lFunction_TO_SINT);
      lFunction_TO_SINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_SINT__REAL(&lFunction_TO_SINT, LC_this->LC_VD_TEMP, pEPDB);
      LC_this->LC_VD___799_TO_SINT = lFunction_TO_SINT.LC_VD_TO_SINT;
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__REAL(&lFunction_TO_USINT, LC_this->LC_VD_HUMIDITY, pEPDB);
      LC_this->LC_VD___820_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)4, (LC_TD_INT)4, LC_this->LC_VD_CANRECV5.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___29_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__LWORD(&lFunction_TO_USINT, LC_this->LC_VD___29_OUTBIT, pEPDB);
      LC_this->LC_VD___27_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
    {
      LC_TD_Function_EQ lFunction_EQ;
      LC_INIT_Function_EQ(&lFunction_EQ);
      lFunction_EQ.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__EQ__ANY__2(&lFunction_EQ, LC_this->LC_VD___27_TO_USINT, LC_this->LC_VD_ID, pEPDB);
      LC_this->LC_VD___789_EQ = lFunction_EQ.LC_VD_EQ;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_GUIREQCOUNT, LC_this->LC_VD_CANRECV5.LC_VD_CRX, pEPDB);
      LC_this->LC_VD___2565_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_TD_Function_SEL__UDINT lFunction_SEL;
      LC_INIT_Function_SEL__UDINT(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__UDINT(&lFunction_SEL, LC_this->LC_VD___2565_NE, LC_this->LC_VD_GUIREQCOUNT, LC_this->LC_VD_CANRECV5.LC_VD_CRX, pEPDB);
      LC_this->LC_VD_GUIREQCOUNT = lFunction_SEL.LC_VD_SEL;
      LC_this->LC_VD___2564_SEL = lFunction_SEL.LC_VD_SEL;
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, LC_this->LC_VD___2565_NE, LC_this->LC_VD___789_EQ, pEPDB);
      LC_this->LC_VD___779_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_this->LC_VD_BATTSTACKINFO1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BATTSTACKINFO1.LC_VD_INFO = LC_this->LC_VD___2558_TO_USINT;
      LC_this->LC_VD_BATTSTACKINFO1.LC_VD_BRD = LC_this->LC_VD___2559_TO_USINT;
      LC_this->LC_VD_BATTSTACKINFO1.LC_VD_VOLT = LC_this->LC_VD___988_DIV;
      LC_this->LC_VD_BATTSTACKINFO1.LC_VD_AMP = LC_this->LC_VD___12_DIV;
      LC_this->LC_VD_BATTSTACKINFO1.LC_VD_CYCLE = LC_this->LC_VD_CYCLE;
      LC_this->LC_VD_BATTSTACKINFO1.LC_VD_STATE = LC_this->LC_VD_STATE;
      LC_this->LC_VD_BATTSTACKINFO1.LC_VD_SOC = LC_this->LC_VD_SOC;
      LC_this->LC_VD_BATTSTACKINFO1.LC_VD_SOH = LC_this->LC_VD_SOH;
      LC_this->LC_VD_BATTSTACKINFO1.LC_VD_TEMP = LC_this->LC_VD___799_TO_SINT;
      LC_this->LC_VD_BATTSTACKINFO1.LC_VD_HUM = LC_this->LC_VD___820_TO_USINT;
      LC_this->LC_VD_BATTSTACKINFO1.LC_VD_FAULT = LC_this->LC_VD_FAULT;
      LC_this->LC_VD_BATTSTACKINFO1.LC_VD_NTCBETA = (LC_TD_REAL)3950;
      LC_this->LC_VD_BATTSTACKINFO1.LC_VD_NTCNOMT_KLV = (LC_TD_REAL)298.15;
      LC_this->LC_VD_BATTSTACKINFO1.LC_VD_NTCNOMR_OHM = (LC_TD_REAL)10000.0;
      LC_ASSIGN_ARRAY_VAR(LC_this->LC_VD_BATTSTACKINFO1.LC_VD_T_CELLS[0], LC_this->LC_VD_TAUXCELLS[0], LC_TD_USINT, 16);
      LC_this->LC_VD_BATTSTACKINFO1.LC_VD_R = LC_this->LC_VD___779_AND;
      lcfu___BATTSTACKINFO(&(LC_this->LC_VD_BATTSTACKINFO1), pEPDB);
    }
    {
      LC_this->LC_VD_BAMTX2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BAMTX2.LC_VD_CH = LC_this->LC_VD_CH;
      LC_this->LC_VD_BAMTX2.LC_VD_TPCM = (LC_TD_UDINT)419408845UL;
      LC_this->LC_VD_BAMTX2.LC_VD_TPDT = (LC_TD_UDINT)419408846UL;
      LC_this->LC_VD_BAMTX2.LC_VD_PGN = LC_this->LC_VD___774_FROM_BIG_ENDIAN;
      LC_this->LC_VD_BAMTX2.LC_VD_FRMPER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(50000000));
      LC_this->LC_VD_BAMTX2.LC_VD_DATA = LC_this->LC_VD_BATTSTACKINFO1.LC_VD_DATA;
      LC_this->LC_VD_BAMTX2.LC_VD_LEN = LC_this->LC_VD_BATTSTACKINFO1.LC_VD_LEN;
      LC_this->LC_VD_BAMTX2.LC_VD_R = LC_this->LC_VD_BATTSTACKINFO1.LC_VD_R_OUT;
      lcfu___BAMTX(&(LC_this->LC_VD_BAMTX2), pEPDB);
    }
    {
      LC_this->LC_VD_TP1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TP1.LC_VD_IN = LC_this->LC_VD_BAMTX2.LC_VD_R_END;
      LC_this->LC_VD_TP1.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(100000000));
      lcfu_iec61131__TP(&(LC_this->LC_VD_TP1), pEPDB);
    }
  }
}

#endif
