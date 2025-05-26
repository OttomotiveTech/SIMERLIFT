#ifndef LC_PROT_LCFU___CMS_IVT__C
#define LC_PROT_LCFU___CMS_IVT__C

#include <lcfu___cms_ivt.h>



/*                            FunctionBlocks                   */
void  lcfu___CMS_IVT(LC_TD_FunctionBlock_CMS_IVT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_this->LC_VD_CANRECV1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CANRECV1.LC_VD_CH = LC_this->LC_VD_CAN_CH;
      LC_this->LC_VD_CANRECV1.LC_VD_ID = (LC_TD_UDINT)1313UL;
      LC_this->LC_VD_CANRECV1.LC_VD_FMT = LC_ED__CAN_FORMAT__STANDARD;
      LC_this->LC_VD_CANRECV1.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(200000000));
      LC_this->LC_VD_CANRECV1.LC_VD_ENB = LC_EL_true;
      lcfu___CANRECV(&(LC_this->LC_VD_CANRECV1), pEPDB);
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)16, (LC_TD_INT)32, LC_this->LC_VD_CANRECV1.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___54_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_DINT lFunction_TO_DINT;
      LC_INIT_Function_TO_DINT(&lFunction_TO_DINT);
      lFunction_TO_DINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_DINT__LWORD(&lFunction_TO_DINT, LC_this->LC_VD___54_OUTBIT, pEPDB);
      LC_this->LC_VD___169_TO_DINT = lFunction_TO_DINT.LC_VD_TO_DINT;
    }
    {
      LC_TD_Function_FROM_BIG_ENDIAN__DINT lFunction_FROM_BIG_ENDIAN;
      LC_INIT_Function_FROM_BIG_ENDIAN__DINT(&lFunction_FROM_BIG_ENDIAN);
      lFunction_FROM_BIG_ENDIAN.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__FROM_BIG_ENDIAN__DINT(&lFunction_FROM_BIG_ENDIAN, LC_this->LC_VD___169_TO_DINT, pEPDB);
      LC_this->LC_VD___349_FROM_BIG_ENDIAN = lFunction_FROM_BIG_ENDIAN.LC_VD_FROM_BIG_ENDIAN;
    }
    {
      LC_TD_Function_TO_REAL lFunction_TO_REAL;
      LC_INIT_Function_TO_REAL(&lFunction_TO_REAL);
      lFunction_TO_REAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_REAL__DINT(&lFunction_TO_REAL, LC_this->LC_VD___349_FROM_BIG_ENDIAN, pEPDB);
      LC_this->LC_VD_CURRENT_MA = lFunction_TO_REAL.LC_VD_TO_REAL;
      LC_this->LC_VD___185_TO_REAL = lFunction_TO_REAL.LC_VD_TO_REAL;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)14, (LC_TD_INT)2, LC_this->LC_VD_CANRECV1.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___61_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD___61_OUTBIT, (LC_TD_LWORD)RT_CC_CONST_ULL(0), pEPDB);
      LC_this->LC_VD_ERROR_521 = lFunction_NE.LC_VD_NE;
      LC_this->LC_VD___120_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CANRECV1.LC_VD_RC, (LC_TD_UINT)0, pEPDB);
      LC_this->LC_VD___113_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_this->LC_VD_CANRECV2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CANRECV2.LC_VD_CH = LC_this->LC_VD_CAN_CH;
      LC_this->LC_VD_CANRECV2.LC_VD_ID = (LC_TD_UDINT)1314UL;
      LC_this->LC_VD_CANRECV2.LC_VD_FMT = LC_ED__CAN_FORMAT__STANDARD;
      LC_this->LC_VD_CANRECV2.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(200000000));
      LC_this->LC_VD_CANRECV2.LC_VD_ENB = LC_EL_true;
      lcfu___CANRECV(&(LC_this->LC_VD_CANRECV2), pEPDB);
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)16, (LC_TD_INT)32, LC_this->LC_VD_CANRECV2.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___12_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_DINT lFunction_TO_DINT;
      LC_INIT_Function_TO_DINT(&lFunction_TO_DINT);
      lFunction_TO_DINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_DINT__LWORD(&lFunction_TO_DINT, LC_this->LC_VD___12_OUTBIT, pEPDB);
      LC_this->LC_VD___171_TO_DINT = lFunction_TO_DINT.LC_VD_TO_DINT;
    }
    {
      LC_TD_Function_FROM_BIG_ENDIAN__DINT lFunction_FROM_BIG_ENDIAN;
      LC_INIT_Function_FROM_BIG_ENDIAN__DINT(&lFunction_FROM_BIG_ENDIAN);
      lFunction_FROM_BIG_ENDIAN.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__FROM_BIG_ENDIAN__DINT(&lFunction_FROM_BIG_ENDIAN, LC_this->LC_VD___171_TO_DINT, pEPDB);
      LC_this->LC_VD___188_FROM_BIG_ENDIAN = lFunction_FROM_BIG_ENDIAN.LC_VD_FROM_BIG_ENDIAN;
    }
    {
      LC_TD_Function_TO_REAL lFunction_TO_REAL;
      LC_INIT_Function_TO_REAL(&lFunction_TO_REAL);
      lFunction_TO_REAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_REAL__DINT(&lFunction_TO_REAL, LC_this->LC_VD___188_FROM_BIG_ENDIAN, pEPDB);
      LC_this->LC_VD_VOLTAGE1_MV = lFunction_TO_REAL.LC_VD_TO_REAL;
      LC_this->LC_VD___186_TO_REAL = lFunction_TO_REAL.LC_VD_TO_REAL;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)14, (LC_TD_INT)2, LC_this->LC_VD_CANRECV2.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___31_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD___31_OUTBIT, (LC_TD_LWORD)RT_CC_CONST_ULL(0), pEPDB);
      LC_this->LC_VD_ERROR_522 = lFunction_NE.LC_VD_NE;
      LC_this->LC_VD___124_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CANRECV2.LC_VD_RC, (LC_TD_UINT)0, pEPDB);
      LC_this->LC_VD___4_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_this->LC_VD_CANRECV4.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CANRECV4.LC_VD_CH = LC_this->LC_VD_CAN_CH;
      LC_this->LC_VD_CANRECV4.LC_VD_ID = (LC_TD_UDINT)1315UL;
      LC_this->LC_VD_CANRECV4.LC_VD_FMT = LC_ED__CAN_FORMAT__STANDARD;
      LC_this->LC_VD_CANRECV4.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(200000000));
      LC_this->LC_VD_CANRECV4.LC_VD_ENB = LC_EL_true;
      lcfu___CANRECV(&(LC_this->LC_VD_CANRECV4), pEPDB);
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)16, (LC_TD_INT)32, LC_this->LC_VD_CANRECV4.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___32_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_DINT lFunction_TO_DINT;
      LC_INIT_Function_TO_DINT(&lFunction_TO_DINT);
      lFunction_TO_DINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_DINT__LWORD(&lFunction_TO_DINT, LC_this->LC_VD___32_OUTBIT, pEPDB);
      LC_this->LC_VD___173_TO_DINT = lFunction_TO_DINT.LC_VD_TO_DINT;
    }
    {
      LC_TD_Function_FROM_BIG_ENDIAN__DINT lFunction_FROM_BIG_ENDIAN;
      LC_INIT_Function_FROM_BIG_ENDIAN__DINT(&lFunction_FROM_BIG_ENDIAN);
      lFunction_FROM_BIG_ENDIAN.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__FROM_BIG_ENDIAN__DINT(&lFunction_FROM_BIG_ENDIAN, LC_this->LC_VD___173_TO_DINT, pEPDB);
      LC_this->LC_VD___224_FROM_BIG_ENDIAN = lFunction_FROM_BIG_ENDIAN.LC_VD_FROM_BIG_ENDIAN;
    }
    {
      LC_TD_Function_TO_REAL lFunction_TO_REAL;
      LC_INIT_Function_TO_REAL(&lFunction_TO_REAL);
      lFunction_TO_REAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_REAL__DINT(&lFunction_TO_REAL, LC_this->LC_VD___224_FROM_BIG_ENDIAN, pEPDB);
      LC_this->LC_VD_VOLTAGE2_MV = lFunction_TO_REAL.LC_VD_TO_REAL;
      LC_this->LC_VD___199_TO_REAL = lFunction_TO_REAL.LC_VD_TO_REAL;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)14, (LC_TD_INT)2, LC_this->LC_VD_CANRECV4.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___38_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD___38_OUTBIT, (LC_TD_LWORD)RT_CC_CONST_ULL(0), pEPDB);
      LC_this->LC_VD_ERROR_523 = lFunction_NE.LC_VD_NE;
      LC_this->LC_VD___147_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CANRECV4.LC_VD_RC, (LC_TD_UINT)0, pEPDB);
      LC_this->LC_VD___65_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_this->LC_VD_CANRECV3.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CANRECV3.LC_VD_CH = LC_this->LC_VD_CAN_CH;
      LC_this->LC_VD_CANRECV3.LC_VD_ID = (LC_TD_UDINT)1316UL;
      LC_this->LC_VD_CANRECV3.LC_VD_FMT = LC_ED__CAN_FORMAT__STANDARD;
      LC_this->LC_VD_CANRECV3.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(200000000));
      LC_this->LC_VD_CANRECV3.LC_VD_ENB = LC_EL_true;
      lcfu___CANRECV(&(LC_this->LC_VD_CANRECV3), pEPDB);
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)16, (LC_TD_INT)32, LC_this->LC_VD_CANRECV3.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___34_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_DINT lFunction_TO_DINT;
      LC_INIT_Function_TO_DINT(&lFunction_TO_DINT);
      lFunction_TO_DINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_DINT__LWORD(&lFunction_TO_DINT, LC_this->LC_VD___34_OUTBIT, pEPDB);
      LC_this->LC_VD___175_TO_DINT = lFunction_TO_DINT.LC_VD_TO_DINT;
    }
    {
      LC_TD_Function_FROM_BIG_ENDIAN__DINT lFunction_FROM_BIG_ENDIAN;
      LC_INIT_Function_FROM_BIG_ENDIAN__DINT(&lFunction_FROM_BIG_ENDIAN);
      lFunction_FROM_BIG_ENDIAN.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__FROM_BIG_ENDIAN__DINT(&lFunction_FROM_BIG_ENDIAN, LC_this->LC_VD___175_TO_DINT, pEPDB);
      LC_this->LC_VD___231_FROM_BIG_ENDIAN = lFunction_FROM_BIG_ENDIAN.LC_VD_FROM_BIG_ENDIAN;
    }
    {
      LC_TD_Function_TO_REAL lFunction_TO_REAL;
      LC_INIT_Function_TO_REAL(&lFunction_TO_REAL);
      lFunction_TO_REAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_REAL__DINT(&lFunction_TO_REAL, LC_this->LC_VD___231_FROM_BIG_ENDIAN, pEPDB);
      LC_this->LC_VD_VOLTAGE3_MV = lFunction_TO_REAL.LC_VD_TO_REAL;
      LC_this->LC_VD___200_TO_REAL = lFunction_TO_REAL.LC_VD_TO_REAL;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)14, (LC_TD_INT)2, LC_this->LC_VD_CANRECV3.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___62_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD___62_OUTBIT, (LC_TD_LWORD)RT_CC_CONST_ULL(0), pEPDB);
      LC_this->LC_VD_ERROR_524 = lFunction_NE.LC_VD_NE;
      LC_this->LC_VD___163_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CANRECV3.LC_VD_RC, (LC_TD_UINT)0, pEPDB);
      LC_this->LC_VD___59_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_this->LC_VD_CANRECV8.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CANRECV8.LC_VD_CH = LC_this->LC_VD_CAN_CH;
      LC_this->LC_VD_CANRECV8.LC_VD_ID = (LC_TD_UDINT)1317UL;
      LC_this->LC_VD_CANRECV8.LC_VD_FMT = LC_ED__CAN_FORMAT__STANDARD;
      LC_this->LC_VD_CANRECV8.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(1),RT_CC_CONST_LL(0));
      LC_this->LC_VD_CANRECV8.LC_VD_ENB = LC_EL_true;
      lcfu___CANRECV(&(LC_this->LC_VD_CANRECV8), pEPDB);
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)16, (LC_TD_INT)32, LC_this->LC_VD_CANRECV8.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___63_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_DINT lFunction_TO_DINT;
      LC_INIT_Function_TO_DINT(&lFunction_TO_DINT);
      lFunction_TO_DINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_DINT__LWORD(&lFunction_TO_DINT, LC_this->LC_VD___63_OUTBIT, pEPDB);
      LC_this->LC_VD___177_TO_DINT = lFunction_TO_DINT.LC_VD_TO_DINT;
    }
    {
      LC_TD_Function_FROM_BIG_ENDIAN__DINT lFunction_FROM_BIG_ENDIAN;
      LC_INIT_Function_FROM_BIG_ENDIAN__DINT(&lFunction_FROM_BIG_ENDIAN);
      lFunction_FROM_BIG_ENDIAN.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__FROM_BIG_ENDIAN__DINT(&lFunction_FROM_BIG_ENDIAN, LC_this->LC_VD___177_TO_DINT, pEPDB);
      LC_this->LC_VD___353_FROM_BIG_ENDIAN = lFunction_FROM_BIG_ENDIAN.LC_VD_FROM_BIG_ENDIAN;
    }
    {
      LC_TD_Function_TO_REAL lFunction_TO_REAL;
      LC_INIT_Function_TO_REAL(&lFunction_TO_REAL);
      lFunction_TO_REAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_REAL__DINT(&lFunction_TO_REAL, LC_this->LC_VD___353_FROM_BIG_ENDIAN, pEPDB);
      LC_this->LC_VD___220_TO_REAL = lFunction_TO_REAL.LC_VD_TO_REAL;
    }
    {
      LC_TD_Function_DIV__REAL lFunction_DIV;
      LC_INIT_Function_DIV__REAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__REAL(&lFunction_DIV, LC_this->LC_VD___220_TO_REAL, (LC_TD_REAL)10, pEPDB);
      LC_this->LC_VD_TEMP = lFunction_DIV.LC_VD_DIV;
      LC_this->LC_VD___219_DIV = lFunction_DIV.LC_VD_DIV;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)14, (LC_TD_INT)2, LC_this->LC_VD_CANRECV8.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___64_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD___64_OUTBIT, (LC_TD_LWORD)RT_CC_CONST_ULL(0), pEPDB);
      LC_this->LC_VD_ERROR_525 = lFunction_NE.LC_VD_NE;
      LC_this->LC_VD___287_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CANRECV8.LC_VD_RC, (LC_TD_UINT)0, pEPDB);
      LC_this->LC_VD___33_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_this->LC_VD_CANRECV7.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CANRECV7.LC_VD_CH = LC_this->LC_VD_CAN_CH;
      LC_this->LC_VD_CANRECV7.LC_VD_ID = (LC_TD_UDINT)1318UL;
      LC_this->LC_VD_CANRECV7.LC_VD_FMT = LC_ED__CAN_FORMAT__STANDARD;
      LC_this->LC_VD_CANRECV7.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(1),RT_CC_CONST_LL(0));
      LC_this->LC_VD_CANRECV7.LC_VD_ENB = LC_EL_true;
      lcfu___CANRECV(&(LC_this->LC_VD_CANRECV7), pEPDB);
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)16, (LC_TD_INT)32, LC_this->LC_VD_CANRECV7.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___79_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_DINT lFunction_TO_DINT;
      LC_INIT_Function_TO_DINT(&lFunction_TO_DINT);
      lFunction_TO_DINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_DINT__LWORD(&lFunction_TO_DINT, LC_this->LC_VD___79_OUTBIT, pEPDB);
      LC_this->LC_VD___179_TO_DINT = lFunction_TO_DINT.LC_VD_TO_DINT;
    }
    {
      LC_TD_Function_FROM_BIG_ENDIAN__DINT lFunction_FROM_BIG_ENDIAN;
      LC_INIT_Function_FROM_BIG_ENDIAN__DINT(&lFunction_FROM_BIG_ENDIAN);
      lFunction_FROM_BIG_ENDIAN.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__FROM_BIG_ENDIAN__DINT(&lFunction_FROM_BIG_ENDIAN, LC_this->LC_VD___179_TO_DINT, pEPDB);
      LC_this->LC_VD___356_FROM_BIG_ENDIAN = lFunction_FROM_BIG_ENDIAN.LC_VD_FROM_BIG_ENDIAN;
    }
    {
      LC_TD_Function_TO_REAL lFunction_TO_REAL;
      LC_INIT_Function_TO_REAL(&lFunction_TO_REAL);
      lFunction_TO_REAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_REAL__DINT(&lFunction_TO_REAL, LC_this->LC_VD___356_FROM_BIG_ENDIAN, pEPDB);
      LC_this->LC_VD___226_TO_REAL = lFunction_TO_REAL.LC_VD_TO_REAL;
    }
    {
      LC_TD_Function_DIV__REAL lFunction_DIV;
      LC_INIT_Function_DIV__REAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__REAL(&lFunction_DIV, LC_this->LC_VD___226_TO_REAL, (LC_TD_REAL)1000, pEPDB);
      LC_this->LC_VD_POWER_KWH = lFunction_DIV.LC_VD_DIV;
      LC_this->LC_VD___379_DIV = lFunction_DIV.LC_VD_DIV;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)14, (LC_TD_INT)2, LC_this->LC_VD_CANRECV7.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___80_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD___80_OUTBIT, (LC_TD_LWORD)RT_CC_CONST_ULL(0), pEPDB);
      LC_this->LC_VD_ERROR_526 = lFunction_NE.LC_VD_NE;
      LC_this->LC_VD___291_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CANRECV7.LC_VD_RC, (LC_TD_UINT)0, pEPDB);
      LC_this->LC_VD___365_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_this->LC_VD_CANRECV6.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CANRECV6.LC_VD_CH = LC_this->LC_VD_CAN_CH;
      LC_this->LC_VD_CANRECV6.LC_VD_ID = (LC_TD_UDINT)1319UL;
      LC_this->LC_VD_CANRECV6.LC_VD_FMT = LC_ED__CAN_FORMAT__STANDARD;
      LC_this->LC_VD_CANRECV6.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(200000000));
      LC_this->LC_VD_CANRECV6.LC_VD_ENB = LC_EL_true;
      lcfu___CANRECV(&(LC_this->LC_VD_CANRECV6), pEPDB);
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)16, (LC_TD_INT)32, LC_this->LC_VD_CANRECV6.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___84_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_DINT lFunction_TO_DINT;
      LC_INIT_Function_TO_DINT(&lFunction_TO_DINT);
      lFunction_TO_DINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_DINT__LWORD(&lFunction_TO_DINT, LC_this->LC_VD___84_OUTBIT, pEPDB);
      LC_this->LC_VD___181_TO_DINT = lFunction_TO_DINT.LC_VD_TO_DINT;
    }
    {
      LC_TD_Function_FROM_BIG_ENDIAN__DINT lFunction_FROM_BIG_ENDIAN;
      LC_INIT_Function_FROM_BIG_ENDIAN__DINT(&lFunction_FROM_BIG_ENDIAN);
      lFunction_FROM_BIG_ENDIAN.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__FROM_BIG_ENDIAN__DINT(&lFunction_FROM_BIG_ENDIAN, LC_this->LC_VD___181_TO_DINT, pEPDB);
      LC_this->LC_VD___359_FROM_BIG_ENDIAN = lFunction_FROM_BIG_ENDIAN.LC_VD_FROM_BIG_ENDIAN;
    }
    {
      LC_TD_Function_TO_REAL lFunction_TO_REAL;
      LC_INIT_Function_TO_REAL(&lFunction_TO_REAL);
      lFunction_TO_REAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_REAL__DINT(&lFunction_TO_REAL, LC_this->LC_VD___359_FROM_BIG_ENDIAN, pEPDB);
      LC_this->LC_VD___228_TO_REAL = lFunction_TO_REAL.LC_VD_TO_REAL;
    }
    {
      LC_TD_Function_DIV__REAL lFunction_DIV;
      LC_INIT_Function_DIV__REAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__REAL(&lFunction_DIV, LC_this->LC_VD___228_TO_REAL, (LC_TD_REAL)3600, pEPDB);
      LC_this->LC_VD_CURRENT_COUNTER_AH = lFunction_DIV.LC_VD_DIV;
      LC_this->LC_VD___331_DIV = lFunction_DIV.LC_VD_DIV;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)14, (LC_TD_INT)2, LC_this->LC_VD_CANRECV6.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___89_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD___89_OUTBIT, (LC_TD_LWORD)RT_CC_CONST_ULL(0), pEPDB);
      LC_this->LC_VD_ERROR_527 = lFunction_NE.LC_VD_NE;
      LC_this->LC_VD___295_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CANRECV6.LC_VD_RC, (LC_TD_UINT)0, pEPDB);
      LC_this->LC_VD___82_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_this->LC_VD_CANRECV5.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CANRECV5.LC_VD_CH = LC_this->LC_VD_CAN_CH;
      LC_this->LC_VD_CANRECV5.LC_VD_ID = (LC_TD_UDINT)1320UL;
      LC_this->LC_VD_CANRECV5.LC_VD_FMT = LC_ED__CAN_FORMAT__STANDARD;
      LC_this->LC_VD_CANRECV5.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(200000000));
      LC_this->LC_VD_CANRECV5.LC_VD_ENB = LC_EL_true;
      lcfu___CANRECV(&(LC_this->LC_VD_CANRECV5), pEPDB);
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)16, (LC_TD_INT)32, LC_this->LC_VD_CANRECV5.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___81_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_DINT lFunction_TO_DINT;
      LC_INIT_Function_TO_DINT(&lFunction_TO_DINT);
      lFunction_TO_DINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_DINT__LWORD(&lFunction_TO_DINT, LC_this->LC_VD___81_OUTBIT, pEPDB);
      LC_this->LC_VD___183_TO_DINT = lFunction_TO_DINT.LC_VD_TO_DINT;
    }
    {
      LC_TD_Function_FROM_BIG_ENDIAN__DINT lFunction_FROM_BIG_ENDIAN;
      LC_INIT_Function_FROM_BIG_ENDIAN__DINT(&lFunction_FROM_BIG_ENDIAN);
      lFunction_FROM_BIG_ENDIAN.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__FROM_BIG_ENDIAN__DINT(&lFunction_FROM_BIG_ENDIAN, LC_this->LC_VD___183_TO_DINT, pEPDB);
      LC_this->LC_VD___362_FROM_BIG_ENDIAN = lFunction_FROM_BIG_ENDIAN.LC_VD_FROM_BIG_ENDIAN;
    }
    {
      LC_TD_Function_TO_REAL lFunction_TO_REAL;
      LC_INIT_Function_TO_REAL(&lFunction_TO_REAL);
      lFunction_TO_REAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_REAL__DINT(&lFunction_TO_REAL, LC_this->LC_VD___362_FROM_BIG_ENDIAN, pEPDB);
      LC_this->LC_VD_POWER_COUNTER_WH = lFunction_TO_REAL.LC_VD_TO_REAL;
      LC_this->LC_VD___230_TO_REAL = lFunction_TO_REAL.LC_VD_TO_REAL;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)14, (LC_TD_INT)2, LC_this->LC_VD_CANRECV5.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___92_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD___92_OUTBIT, (LC_TD_LWORD)RT_CC_CONST_ULL(0), pEPDB);
      LC_this->LC_VD_ERROR_528 = lFunction_NE.LC_VD_NE;
      LC_this->LC_VD___299_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CANRECV5.LC_VD_RC, (LC_TD_UINT)0, pEPDB);
      LC_this->LC_VD___132_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__8(&lFunction_OR, LC_this->LC_VD___113_NE, LC_this->LC_VD___4_NE, LC_this->LC_VD___65_NE, LC_this->LC_VD___59_NE, LC_this->LC_VD___33_NE, LC_this->LC_VD___365_NE, LC_this->LC_VD___82_NE, LC_this->LC_VD___132_NE, pEPDB);
      LC_this->LC_VD_CAN_ERROR = lFunction_OR.LC_VD_OR;
      LC_this->LC_VD___160_OR = lFunction_OR.LC_VD_OR;
    }
  }
  /* Network 2 */
  {
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__8(&lFunction_OR, LC_this->LC_VD_ERROR_521, LC_this->LC_VD_ERROR_522, LC_this->LC_VD_ERROR_523, LC_this->LC_VD_ERROR_524, LC_this->LC_VD_ERROR_525, LC_this->LC_VD_ERROR_526, LC_this->LC_VD_ERROR_527, LC_this->LC_VD_ERROR_528, pEPDB);
      LC_this->LC_VD___327_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_this->LC_VD_TON1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON1.LC_VD_IN = LC_this->LC_VD___327_OR;
      LC_this->LC_VD_TON1.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(500000000));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON1), pEPDB);
      LC_this->LC_VD_CMS_ERROR = LC_this->LC_VD_TON1.LC_VD_Q;
    }
  }
  /* Network 3 */
  {
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)0, (LC_TD_INT)8, (LC_TD_LWORD)RT_CC_CONST_ULL(66), pEPDB);
      LC_this->LC_VD___332_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)8, (LC_TD_INT)8, (LC_TD_LWORD)RT_CC_CONST_ULL(6), pEPDB);
      LC_this->LC_VD___334_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_OR__LWORD lFunction_OR;
      LC_INIT_Function_OR__LWORD(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__ANY__2(&lFunction_OR, LC_this->LC_VD___332_OUTBIT, LC_this->LC_VD___334_OUTBIT, pEPDB);
      LC_this->LC_VD___407_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_this->LC_VD_CANSEND1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CANSEND1.LC_VD_CH = LC_this->LC_VD_CAN_CH;
      LC_this->LC_VD_CANSEND1.LC_VD_ID = (LC_TD_UDINT)1041UL;
      LC_this->LC_VD_CANSEND1.LC_VD_FMT = LC_ED__CAN_FORMAT__STANDARD;
      LC_this->LC_VD_CANSEND1.LC_VD_DATA = LC_this->LC_VD___407_OR;
      LC_this->LC_VD_CANSEND1.LC_VD_DLC = (LC_TD_UDINT)2UL;
      LC_this->LC_VD_CANSEND1.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(1),RT_CC_CONST_LL(0));
      LC_this->LC_VD_CANSEND1.LC_VD_ENB = LC_EL_true;
      lcfu___CANSEND(&(LC_this->LC_VD_CANSEND1), pEPDB);
    }
  }
  /* Network 4 */
  {
    {
      LC_this->LC_VD_CANRECV9.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CANRECV9.LC_VD_CH = LC_this->LC_VD_CAN_CH;
      LC_this->LC_VD_CANRECV9.LC_VD_ID = (LC_TD_UDINT)1297UL;
      LC_this->LC_VD_CANRECV9.LC_VD_FMT = LC_ED__CAN_FORMAT__STANDARD;
      LC_this->LC_VD_CANRECV9.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(100000000));
      LC_this->LC_VD_CANRECV9.LC_VD_ENB = LC_EL_true;
      lcfu___CANRECV(&(LC_this->LC_VD_CANRECV9), pEPDB);
    }
    {
      LC_TD_Function_FROM_BIG_ENDIAN__LWORD lFunction_FROM_BIG_ENDIAN;
      LC_INIT_Function_FROM_BIG_ENDIAN__LWORD(&lFunction_FROM_BIG_ENDIAN);
      lFunction_FROM_BIG_ENDIAN.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__FROM_BIG_ENDIAN__LWORD(&lFunction_FROM_BIG_ENDIAN, LC_this->LC_VD_CANRECV9.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___455_FROM_BIG_ENDIAN = lFunction_FROM_BIG_ENDIAN.LC_VD_FROM_BIG_ENDIAN;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)0, (LC_TD_INT)48, LC_this->LC_VD___455_FROM_BIG_ENDIAN, pEPDB);
      LC_this->LC_VD___394_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LREAL lFunction_TO_LREAL;
      LC_INIT_Function_TO_LREAL(&lFunction_TO_LREAL);
      lFunction_TO_LREAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LREAL__LWORD(&lFunction_TO_LREAL, LC_this->LC_VD___394_OUTBIT, pEPDB);
      LC_this->LC_VD___454_TO_LREAL = lFunction_TO_LREAL.LC_VD_TO_LREAL;
    }
    {
      LC_TD_Function_DIV__LREAL lFunction_DIV;
      LC_INIT_Function_DIV__LREAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__LREAL(&lFunction_DIV, LC_this->LC_VD___454_TO_LREAL, (LC_TD_LREAL)1000, pEPDB);
      LC_this->LC_VD_OVERALL_POWER_KWH = lFunction_DIV.LC_VD_DIV;
      LC_this->LC_VD___456_DIV = lFunction_DIV.LC_VD_DIV;
    }
  }
}

#endif
