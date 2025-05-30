#include <RISMD.h>
#include <lcfu___prechargecan.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_PRECHARGECAN_CANERR[] = "CANerr";
static RISMDInterfaceVariable const lcmd_var_PRECHARGECAN_CANERR =
INIT_RISMDInterfaceVariable(lcmd_var_name_PRECHARGECAN_CANERR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD_CANERR), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_CANRECV;
static char const lcmd_var_name_PRECHARGECAN_CANRECV1[] = "CANRECV1";
static RISMDStdVariable const lcmd_var_PRECHARGECAN_CANRECV1 =
INIT_RISMDStdVariable(lcmd_var_name_PRECHARGECAN_CANRECV1, &lcmd_type_CANRECV, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD_CANRECV1));

extern RISMDPOUType const lcmd_type_CANSEND;
static char const lcmd_var_name_PRECHARGECAN_CANSEND1[] = "CANSEND1";
static RISMDStdVariable const lcmd_var_PRECHARGECAN_CANSEND1 =
INIT_RISMDStdVariable(lcmd_var_name_PRECHARGECAN_CANSEND1, &lcmd_type_CANSEND, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD_CANSEND1));

extern RISMDDerivedType const lcmd_type_TMS570_CAN;
static char const lcmd_var_name_PRECHARGECAN_CAN_CH[] = "CAN_CH";
static RISMDInterfaceVariable const lcmd_var_PRECHARGECAN_CAN_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_PRECHARGECAN_CAN_CH, &lcmd_type_TMS570_CAN, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD_CAN_CH), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_PRECHARGECAN_ENB[] = "ENB";
static RISMDInterfaceVariable const lcmd_var_PRECHARGECAN_ENB =
INIT_RISMDInterfaceVariable(lcmd_var_name_PRECHARGECAN_ENB, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD_ENB), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_PRECHARGECAN_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_PRECHARGECAN_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_PRECHARGECAN_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_PRECHARGECAN_IGBTFLT[] = "igbtFlt";
static RISMDInterfaceVariable const lcmd_var_PRECHARGECAN_IGBTFLT =
INIT_RISMDInterfaceVariable(lcmd_var_name_PRECHARGECAN_IGBTFLT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD_IGBTFLT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_PRECHARGECAN_IGBTRDY[] = "igbtRdy";
static RISMDInterfaceVariable const lcmd_var_PRECHARGECAN_IGBTRDY =
INIT_RISMDInterfaceVariable(lcmd_var_name_PRECHARGECAN_IGBTRDY, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD_IGBTRDY), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_PRECHARGECAN_IGBTRST[] = "igbtRst";
static RISMDInterfaceVariable const lcmd_var_PRECHARGECAN_IGBTRST =
INIT_RISMDInterfaceVariable(lcmd_var_name_PRECHARGECAN_IGBTRST, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD_IGBTRST), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_PRECHARGECAN_INVAL[] = "inVal";
static RISMDInterfaceVariable const lcmd_var_PRECHARGECAN_INVAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_PRECHARGECAN_INVAL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD_INVAL), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_PRECHARGECAN_OUTFBK[] = "outFbk";
static RISMDInterfaceVariable const lcmd_var_PRECHARGECAN_OUTFBK =
INIT_RISMDInterfaceVariable(lcmd_var_name_PRECHARGECAN_OUTFBK, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD_OUTFBK), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_PRECHARGECAN_RST[] = "RST";
static RISMDInterfaceVariable const lcmd_var_PRECHARGECAN_RST =
INIT_RISMDInterfaceVariable(lcmd_var_name_PRECHARGECAN_RST, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD_RST), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_PRECHARGECAN___14_OUTBIT[] = "__14_OUTbit";
static RISMDStdVariable const lcmd_var_PRECHARGECAN___14_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_PRECHARGECAN___14_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD___14_OUTBIT));

static char const lcmd_var_name_PRECHARGECAN___15_OR[] = "__15_OR";
static RISMDStdVariable const lcmd_var_PRECHARGECAN___15_OR =
INIT_RISMDStdVariable(lcmd_var_name_PRECHARGECAN___15_OR, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD___15_OR));

static char const lcmd_var_name_PRECHARGECAN___30_NE[] = "__30_NE";
static RISMDStdVariable const lcmd_var_PRECHARGECAN___30_NE =
INIT_RISMDStdVariable(lcmd_var_name_PRECHARGECAN___30_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD___30_NE));

static char const lcmd_var_name_PRECHARGECAN___34_NE[] = "__34_NE";
static RISMDStdVariable const lcmd_var_PRECHARGECAN___34_NE =
INIT_RISMDStdVariable(lcmd_var_name_PRECHARGECAN___34_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD___34_NE));

static char const lcmd_var_name_PRECHARGECAN___38_OR[] = "__38_OR";
static RISMDStdVariable const lcmd_var_PRECHARGECAN___38_OR =
INIT_RISMDStdVariable(lcmd_var_name_PRECHARGECAN___38_OR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD___38_OR));

static char const lcmd_var_name_PRECHARGECAN___43_OUTBIT[] = "__43_OUTbit";
static RISMDStdVariable const lcmd_var_PRECHARGECAN___43_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_PRECHARGECAN___43_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD___43_OUTBIT));

static char const lcmd_var_name_PRECHARGECAN___49_OUTBIT[] = "__49_OUTbit";
static RISMDStdVariable const lcmd_var_PRECHARGECAN___49_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_PRECHARGECAN___49_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD___49_OUTBIT));

static char const lcmd_var_name_PRECHARGECAN___54_OUTBIT[] = "__54_OUTbit";
static RISMDStdVariable const lcmd_var_PRECHARGECAN___54_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_PRECHARGECAN___54_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD___54_OUTBIT));

static char const lcmd_var_name_PRECHARGECAN___59_OUTBIT[] = "__59_OUTbit";
static RISMDStdVariable const lcmd_var_PRECHARGECAN___59_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_PRECHARGECAN___59_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD___59_OUTBIT));

static char const lcmd_var_name_PRECHARGECAN___70_OUTBIT[] = "__70_OUTbit";
static RISMDStdVariable const lcmd_var_PRECHARGECAN___70_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_PRECHARGECAN___70_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD___70_OUTBIT));

static char const lcmd_var_name_PRECHARGECAN___75_TO_BOOL[] = "__75_TO_BOOL";
static RISMDStdVariable const lcmd_var_PRECHARGECAN___75_TO_BOOL =
INIT_RISMDStdVariable(lcmd_var_name_PRECHARGECAN___75_TO_BOOL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD___75_TO_BOOL));

static char const lcmd_var_name_PRECHARGECAN___77_TO_BOOL[] = "__77_TO_BOOL";
static RISMDStdVariable const lcmd_var_PRECHARGECAN___77_TO_BOOL =
INIT_RISMDStdVariable(lcmd_var_name_PRECHARGECAN___77_TO_BOOL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD___77_TO_BOOL));

static char const lcmd_var_name_PRECHARGECAN___81_TO_BOOL[] = "__81_TO_BOOL";
static RISMDStdVariable const lcmd_var_PRECHARGECAN___81_TO_BOOL =
INIT_RISMDStdVariable(lcmd_var_name_PRECHARGECAN___81_TO_BOOL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD___81_TO_BOOL));

static char const lcmd_var_name_PRECHARGECAN___84_TO_BOOL[] = "__84_TO_BOOL";
static RISMDStdVariable const lcmd_var_PRECHARGECAN___84_TO_BOOL =
INIT_RISMDStdVariable(lcmd_var_name_PRECHARGECAN___84_TO_BOOL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD___84_TO_BOOL));

static char const lcmd_var_name_PRECHARGECAN___87_TO_BOOL[] = "__87_TO_BOOL";
static RISMDStdVariable const lcmd_var_PRECHARGECAN___87_TO_BOOL =
INIT_RISMDStdVariable(lcmd_var_name_PRECHARGECAN___87_TO_BOOL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD___87_TO_BOOL));

static char const lcmd_var_name_PRECHARGECAN___92_OUTBIT[] = "__92_OUTbit";
static RISMDStdVariable const lcmd_var_PRECHARGECAN___92_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_PRECHARGECAN___92_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_PRECHARGECAN,LC_VD___92_OUTBIT));

static RISMDReference const lcmd_var_list_PRECHARGECAN[] =
{
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN_CANERR),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN_CANRECV1),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN_CANSEND1),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN_CAN_CH),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN_ENB),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN_ENO),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN_IGBTFLT),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN_IGBTRDY),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN_IGBTRST),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN_INVAL),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN_OUTFBK),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN_RST),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN___14_OUTBIT),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN___15_OR),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN___30_NE),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN___34_NE),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN___38_OR),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN___43_OUTBIT),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN___49_OUTBIT),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN___54_OUTBIT),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN___59_OUTBIT),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN___70_OUTBIT),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN___75_TO_BOOL),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN___77_TO_BOOL),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN___81_TO_BOOL),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN___84_TO_BOOL),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN___87_TO_BOOL),
  INIT_RISMDReference(&lcmd_var_PRECHARGECAN___92_OUTBIT),
};

static char const lcmd_type_name_PRECHARGECAN[] = "PRECHARGECAN";
RISMDPOUType const lcmd_type_PRECHARGECAN = INIT_RISMDPOUType(lcmd_type_name_PRECHARGECAN, sizeof(LC_TD_FunctionBlock_PRECHARGECAN), 28, lcmd_var_list_PRECHARGECAN);
