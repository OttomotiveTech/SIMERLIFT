#include <RISMD.h>
#include <lcfu___cms_ivt.h>

extern RISMDPOUType const lcmd_type_CANRECV;
static char const lcmd_var_name_CMS_IVT_CANRECV1[] = "CANRECV1";
static RISMDStdVariable const lcmd_var_CMS_IVT_CANRECV1 =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT_CANRECV1, &lcmd_type_CANRECV, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_CANRECV1));

static char const lcmd_var_name_CMS_IVT_CANRECV2[] = "CANRECV2";
static RISMDStdVariable const lcmd_var_CMS_IVT_CANRECV2 =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT_CANRECV2, &lcmd_type_CANRECV, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_CANRECV2));

static char const lcmd_var_name_CMS_IVT_CANRECV3[] = "CANRECV3";
static RISMDStdVariable const lcmd_var_CMS_IVT_CANRECV3 =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT_CANRECV3, &lcmd_type_CANRECV, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_CANRECV3));

static char const lcmd_var_name_CMS_IVT_CANRECV4[] = "CANRECV4";
static RISMDStdVariable const lcmd_var_CMS_IVT_CANRECV4 =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT_CANRECV4, &lcmd_type_CANRECV, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_CANRECV4));

static char const lcmd_var_name_CMS_IVT_CANRECV5[] = "CANRECV5";
static RISMDStdVariable const lcmd_var_CMS_IVT_CANRECV5 =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT_CANRECV5, &lcmd_type_CANRECV, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_CANRECV5));

static char const lcmd_var_name_CMS_IVT_CANRECV6[] = "CANRECV6";
static RISMDStdVariable const lcmd_var_CMS_IVT_CANRECV6 =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT_CANRECV6, &lcmd_type_CANRECV, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_CANRECV6));

static char const lcmd_var_name_CMS_IVT_CANRECV7[] = "CANRECV7";
static RISMDStdVariable const lcmd_var_CMS_IVT_CANRECV7 =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT_CANRECV7, &lcmd_type_CANRECV, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_CANRECV7));

static char const lcmd_var_name_CMS_IVT_CANRECV8[] = "CANRECV8";
static RISMDStdVariable const lcmd_var_CMS_IVT_CANRECV8 =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT_CANRECV8, &lcmd_type_CANRECV, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_CANRECV8));

static char const lcmd_var_name_CMS_IVT_CANRECV9[] = "CANRECV9";
static RISMDStdVariable const lcmd_var_CMS_IVT_CANRECV9 =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT_CANRECV9, &lcmd_type_CANRECV, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_CANRECV9));

extern RISMDPOUType const lcmd_type_CANSEND;
static char const lcmd_var_name_CMS_IVT_CANSEND1[] = "CANSEND1";
static RISMDStdVariable const lcmd_var_CMS_IVT_CANSEND1 =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT_CANSEND1, &lcmd_type_CANSEND, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_CANSEND1));

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_CMS_IVT_CAN_CH[] = "CAN_CH";
static RISMDInterfaceVariable const lcmd_var_CMS_IVT_CAN_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_CMS_IVT_CAN_CH, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_CAN_CH), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_CMS_IVT_CAN_ERROR[] = "CAN_Error";
static RISMDInterfaceVariable const lcmd_var_CMS_IVT_CAN_ERROR =
INIT_RISMDInterfaceVariable(lcmd_var_name_CMS_IVT_CAN_ERROR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_CAN_ERROR), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CMS_IVT_CMS_ERROR[] = "CMS_Error";
static RISMDInterfaceVariable const lcmd_var_CMS_IVT_CMS_ERROR =
INIT_RISMDInterfaceVariable(lcmd_var_name_CMS_IVT_CMS_ERROR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_CMS_ERROR), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_CMS_IVT_CURRENT_COUNTER_AH[] = "Current_Counter_Ah";
static RISMDInterfaceVariable const lcmd_var_CMS_IVT_CURRENT_COUNTER_AH =
INIT_RISMDInterfaceVariable(lcmd_var_name_CMS_IVT_CURRENT_COUNTER_AH, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_CURRENT_COUNTER_AH), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CMS_IVT_CURRENT_MA[] = "Current_mA";
static RISMDInterfaceVariable const lcmd_var_CMS_IVT_CURRENT_MA =
INIT_RISMDInterfaceVariable(lcmd_var_name_CMS_IVT_CURRENT_MA, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_CURRENT_MA), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CMS_IVT_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_CMS_IVT_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_CMS_IVT_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CMS_IVT_ERROR_521[] = "Error_521";
static RISMDStdVariable const lcmd_var_CMS_IVT_ERROR_521 =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT_ERROR_521, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_ERROR_521));

static char const lcmd_var_name_CMS_IVT_ERROR_522[] = "Error_522";
static RISMDStdVariable const lcmd_var_CMS_IVT_ERROR_522 =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT_ERROR_522, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_ERROR_522));

static char const lcmd_var_name_CMS_IVT_ERROR_523[] = "Error_523";
static RISMDStdVariable const lcmd_var_CMS_IVT_ERROR_523 =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT_ERROR_523, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_ERROR_523));

static char const lcmd_var_name_CMS_IVT_ERROR_524[] = "Error_524";
static RISMDStdVariable const lcmd_var_CMS_IVT_ERROR_524 =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT_ERROR_524, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_ERROR_524));

static char const lcmd_var_name_CMS_IVT_ERROR_525[] = "Error_525";
static RISMDStdVariable const lcmd_var_CMS_IVT_ERROR_525 =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT_ERROR_525, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_ERROR_525));

static char const lcmd_var_name_CMS_IVT_ERROR_526[] = "Error_526";
static RISMDStdVariable const lcmd_var_CMS_IVT_ERROR_526 =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT_ERROR_526, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_ERROR_526));

static char const lcmd_var_name_CMS_IVT_ERROR_527[] = "Error_527";
static RISMDStdVariable const lcmd_var_CMS_IVT_ERROR_527 =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT_ERROR_527, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_ERROR_527));

static char const lcmd_var_name_CMS_IVT_ERROR_528[] = "Error_528";
static RISMDStdVariable const lcmd_var_CMS_IVT_ERROR_528 =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT_ERROR_528, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_ERROR_528));

extern RISMDSimpleNumType const risMdType_LREAL;
static char const lcmd_var_name_CMS_IVT_OVERALL_POWER_KWH[] = "Overall_Power_kWh";
static RISMDInterfaceVariable const lcmd_var_CMS_IVT_OVERALL_POWER_KWH =
INIT_RISMDInterfaceVariable(lcmd_var_name_CMS_IVT_OVERALL_POWER_KWH, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_OVERALL_POWER_KWH), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CMS_IVT_POWER_COUNTER_WH[] = "Power_Counter_Wh";
static RISMDInterfaceVariable const lcmd_var_CMS_IVT_POWER_COUNTER_WH =
INIT_RISMDInterfaceVariable(lcmd_var_name_CMS_IVT_POWER_COUNTER_WH, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_POWER_COUNTER_WH), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CMS_IVT_POWER_KWH[] = "Power_kWh";
static RISMDInterfaceVariable const lcmd_var_CMS_IVT_POWER_KWH =
INIT_RISMDInterfaceVariable(lcmd_var_name_CMS_IVT_POWER_KWH, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_POWER_KWH), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CMS_IVT_TEMP[] = "Temp";
static RISMDInterfaceVariable const lcmd_var_CMS_IVT_TEMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_CMS_IVT_TEMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_TEMP), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_TON;
static char const lcmd_var_name_CMS_IVT_TON1[] = "TON1";
static RISMDStdVariable const lcmd_var_CMS_IVT_TON1 =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT_TON1, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_TON1));

static char const lcmd_var_name_CMS_IVT_VOLTAGE1_MV[] = "Voltage1_mV";
static RISMDInterfaceVariable const lcmd_var_CMS_IVT_VOLTAGE1_MV =
INIT_RISMDInterfaceVariable(lcmd_var_name_CMS_IVT_VOLTAGE1_MV, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_VOLTAGE1_MV), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CMS_IVT_VOLTAGE2_MV[] = "Voltage2_mV";
static RISMDInterfaceVariable const lcmd_var_CMS_IVT_VOLTAGE2_MV =
INIT_RISMDInterfaceVariable(lcmd_var_name_CMS_IVT_VOLTAGE2_MV, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_VOLTAGE2_MV), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CMS_IVT_VOLTAGE3_MV[] = "Voltage3_mV";
static RISMDInterfaceVariable const lcmd_var_CMS_IVT_VOLTAGE3_MV =
INIT_RISMDInterfaceVariable(lcmd_var_name_CMS_IVT_VOLTAGE3_MV, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD_VOLTAGE3_MV), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CMS_IVT___113_NE[] = "__113_NE";
static RISMDStdVariable const lcmd_var_CMS_IVT___113_NE =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___113_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___113_NE));

static char const lcmd_var_name_CMS_IVT___120_NE[] = "__120_NE";
static RISMDStdVariable const lcmd_var_CMS_IVT___120_NE =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___120_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___120_NE));

static char const lcmd_var_name_CMS_IVT___124_NE[] = "__124_NE";
static RISMDStdVariable const lcmd_var_CMS_IVT___124_NE =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___124_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___124_NE));

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_CMS_IVT___12_OUTBIT[] = "__12_OUTbit";
static RISMDStdVariable const lcmd_var_CMS_IVT___12_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___12_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___12_OUTBIT));

static char const lcmd_var_name_CMS_IVT___132_NE[] = "__132_NE";
static RISMDStdVariable const lcmd_var_CMS_IVT___132_NE =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___132_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___132_NE));

static char const lcmd_var_name_CMS_IVT___147_NE[] = "__147_NE";
static RISMDStdVariable const lcmd_var_CMS_IVT___147_NE =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___147_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___147_NE));

static char const lcmd_var_name_CMS_IVT___160_OR[] = "__160_OR";
static RISMDStdVariable const lcmd_var_CMS_IVT___160_OR =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___160_OR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___160_OR));

static char const lcmd_var_name_CMS_IVT___163_NE[] = "__163_NE";
static RISMDStdVariable const lcmd_var_CMS_IVT___163_NE =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___163_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___163_NE));

extern RISMDSimpleNumType const risMdType_DINT;
static char const lcmd_var_name_CMS_IVT___169_TO_DINT[] = "__169_TO_DINT";
static RISMDStdVariable const lcmd_var_CMS_IVT___169_TO_DINT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___169_TO_DINT, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___169_TO_DINT));

static char const lcmd_var_name_CMS_IVT___171_TO_DINT[] = "__171_TO_DINT";
static RISMDStdVariable const lcmd_var_CMS_IVT___171_TO_DINT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___171_TO_DINT, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___171_TO_DINT));

static char const lcmd_var_name_CMS_IVT___173_TO_DINT[] = "__173_TO_DINT";
static RISMDStdVariable const lcmd_var_CMS_IVT___173_TO_DINT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___173_TO_DINT, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___173_TO_DINT));

static char const lcmd_var_name_CMS_IVT___175_TO_DINT[] = "__175_TO_DINT";
static RISMDStdVariable const lcmd_var_CMS_IVT___175_TO_DINT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___175_TO_DINT, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___175_TO_DINT));

static char const lcmd_var_name_CMS_IVT___177_TO_DINT[] = "__177_TO_DINT";
static RISMDStdVariable const lcmd_var_CMS_IVT___177_TO_DINT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___177_TO_DINT, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___177_TO_DINT));

static char const lcmd_var_name_CMS_IVT___179_TO_DINT[] = "__179_TO_DINT";
static RISMDStdVariable const lcmd_var_CMS_IVT___179_TO_DINT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___179_TO_DINT, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___179_TO_DINT));

static char const lcmd_var_name_CMS_IVT___181_TO_DINT[] = "__181_TO_DINT";
static RISMDStdVariable const lcmd_var_CMS_IVT___181_TO_DINT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___181_TO_DINT, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___181_TO_DINT));

static char const lcmd_var_name_CMS_IVT___183_TO_DINT[] = "__183_TO_DINT";
static RISMDStdVariable const lcmd_var_CMS_IVT___183_TO_DINT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___183_TO_DINT, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___183_TO_DINT));

static char const lcmd_var_name_CMS_IVT___185_TO_REAL[] = "__185_TO_REAL";
static RISMDStdVariable const lcmd_var_CMS_IVT___185_TO_REAL =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___185_TO_REAL, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___185_TO_REAL));

static char const lcmd_var_name_CMS_IVT___186_TO_REAL[] = "__186_TO_REAL";
static RISMDStdVariable const lcmd_var_CMS_IVT___186_TO_REAL =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___186_TO_REAL, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___186_TO_REAL));

static char const lcmd_var_name_CMS_IVT___188_FROM_BIG_ENDIAN[] = "__188_FROM_BIG_ENDIAN";
static RISMDStdVariable const lcmd_var_CMS_IVT___188_FROM_BIG_ENDIAN =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___188_FROM_BIG_ENDIAN, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___188_FROM_BIG_ENDIAN));

static char const lcmd_var_name_CMS_IVT___199_TO_REAL[] = "__199_TO_REAL";
static RISMDStdVariable const lcmd_var_CMS_IVT___199_TO_REAL =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___199_TO_REAL, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___199_TO_REAL));

static char const lcmd_var_name_CMS_IVT___200_TO_REAL[] = "__200_TO_REAL";
static RISMDStdVariable const lcmd_var_CMS_IVT___200_TO_REAL =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___200_TO_REAL, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___200_TO_REAL));

static char const lcmd_var_name_CMS_IVT___219_DIV[] = "__219_DIV";
static RISMDStdVariable const lcmd_var_CMS_IVT___219_DIV =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___219_DIV, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___219_DIV));

static char const lcmd_var_name_CMS_IVT___220_TO_REAL[] = "__220_TO_REAL";
static RISMDStdVariable const lcmd_var_CMS_IVT___220_TO_REAL =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___220_TO_REAL, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___220_TO_REAL));

static char const lcmd_var_name_CMS_IVT___224_FROM_BIG_ENDIAN[] = "__224_FROM_BIG_ENDIAN";
static RISMDStdVariable const lcmd_var_CMS_IVT___224_FROM_BIG_ENDIAN =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___224_FROM_BIG_ENDIAN, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___224_FROM_BIG_ENDIAN));

static char const lcmd_var_name_CMS_IVT___226_TO_REAL[] = "__226_TO_REAL";
static RISMDStdVariable const lcmd_var_CMS_IVT___226_TO_REAL =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___226_TO_REAL, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___226_TO_REAL));

static char const lcmd_var_name_CMS_IVT___228_TO_REAL[] = "__228_TO_REAL";
static RISMDStdVariable const lcmd_var_CMS_IVT___228_TO_REAL =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___228_TO_REAL, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___228_TO_REAL));

static char const lcmd_var_name_CMS_IVT___230_TO_REAL[] = "__230_TO_REAL";
static RISMDStdVariable const lcmd_var_CMS_IVT___230_TO_REAL =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___230_TO_REAL, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___230_TO_REAL));

static char const lcmd_var_name_CMS_IVT___231_FROM_BIG_ENDIAN[] = "__231_FROM_BIG_ENDIAN";
static RISMDStdVariable const lcmd_var_CMS_IVT___231_FROM_BIG_ENDIAN =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___231_FROM_BIG_ENDIAN, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___231_FROM_BIG_ENDIAN));

static char const lcmd_var_name_CMS_IVT___287_NE[] = "__287_NE";
static RISMDStdVariable const lcmd_var_CMS_IVT___287_NE =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___287_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___287_NE));

static char const lcmd_var_name_CMS_IVT___291_NE[] = "__291_NE";
static RISMDStdVariable const lcmd_var_CMS_IVT___291_NE =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___291_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___291_NE));

static char const lcmd_var_name_CMS_IVT___295_NE[] = "__295_NE";
static RISMDStdVariable const lcmd_var_CMS_IVT___295_NE =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___295_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___295_NE));

static char const lcmd_var_name_CMS_IVT___299_NE[] = "__299_NE";
static RISMDStdVariable const lcmd_var_CMS_IVT___299_NE =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___299_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___299_NE));

static char const lcmd_var_name_CMS_IVT___31_OUTBIT[] = "__31_OUTbit";
static RISMDStdVariable const lcmd_var_CMS_IVT___31_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___31_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___31_OUTBIT));

static char const lcmd_var_name_CMS_IVT___327_OR[] = "__327_OR";
static RISMDStdVariable const lcmd_var_CMS_IVT___327_OR =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___327_OR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___327_OR));

static char const lcmd_var_name_CMS_IVT___32_OUTBIT[] = "__32_OUTbit";
static RISMDStdVariable const lcmd_var_CMS_IVT___32_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___32_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___32_OUTBIT));

static char const lcmd_var_name_CMS_IVT___331_DIV[] = "__331_DIV";
static RISMDStdVariable const lcmd_var_CMS_IVT___331_DIV =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___331_DIV, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___331_DIV));

static char const lcmd_var_name_CMS_IVT___332_OUTBIT[] = "__332_OUTbit";
static RISMDStdVariable const lcmd_var_CMS_IVT___332_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___332_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___332_OUTBIT));

static char const lcmd_var_name_CMS_IVT___334_OUTBIT[] = "__334_OUTbit";
static RISMDStdVariable const lcmd_var_CMS_IVT___334_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___334_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___334_OUTBIT));

static char const lcmd_var_name_CMS_IVT___33_NE[] = "__33_NE";
static RISMDStdVariable const lcmd_var_CMS_IVT___33_NE =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___33_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___33_NE));

static char const lcmd_var_name_CMS_IVT___349_FROM_BIG_ENDIAN[] = "__349_FROM_BIG_ENDIAN";
static RISMDStdVariable const lcmd_var_CMS_IVT___349_FROM_BIG_ENDIAN =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___349_FROM_BIG_ENDIAN, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___349_FROM_BIG_ENDIAN));

static char const lcmd_var_name_CMS_IVT___34_OUTBIT[] = "__34_OUTbit";
static RISMDStdVariable const lcmd_var_CMS_IVT___34_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___34_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___34_OUTBIT));

static char const lcmd_var_name_CMS_IVT___353_FROM_BIG_ENDIAN[] = "__353_FROM_BIG_ENDIAN";
static RISMDStdVariable const lcmd_var_CMS_IVT___353_FROM_BIG_ENDIAN =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___353_FROM_BIG_ENDIAN, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___353_FROM_BIG_ENDIAN));

static char const lcmd_var_name_CMS_IVT___356_FROM_BIG_ENDIAN[] = "__356_FROM_BIG_ENDIAN";
static RISMDStdVariable const lcmd_var_CMS_IVT___356_FROM_BIG_ENDIAN =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___356_FROM_BIG_ENDIAN, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___356_FROM_BIG_ENDIAN));

static char const lcmd_var_name_CMS_IVT___359_FROM_BIG_ENDIAN[] = "__359_FROM_BIG_ENDIAN";
static RISMDStdVariable const lcmd_var_CMS_IVT___359_FROM_BIG_ENDIAN =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___359_FROM_BIG_ENDIAN, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___359_FROM_BIG_ENDIAN));

static char const lcmd_var_name_CMS_IVT___362_FROM_BIG_ENDIAN[] = "__362_FROM_BIG_ENDIAN";
static RISMDStdVariable const lcmd_var_CMS_IVT___362_FROM_BIG_ENDIAN =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___362_FROM_BIG_ENDIAN, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___362_FROM_BIG_ENDIAN));

static char const lcmd_var_name_CMS_IVT___365_NE[] = "__365_NE";
static RISMDStdVariable const lcmd_var_CMS_IVT___365_NE =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___365_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___365_NE));

static char const lcmd_var_name_CMS_IVT___379_DIV[] = "__379_DIV";
static RISMDStdVariable const lcmd_var_CMS_IVT___379_DIV =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___379_DIV, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___379_DIV));

static char const lcmd_var_name_CMS_IVT___38_OUTBIT[] = "__38_OUTbit";
static RISMDStdVariable const lcmd_var_CMS_IVT___38_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___38_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___38_OUTBIT));

static char const lcmd_var_name_CMS_IVT___394_OUTBIT[] = "__394_OUTbit";
static RISMDStdVariable const lcmd_var_CMS_IVT___394_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___394_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___394_OUTBIT));

static char const lcmd_var_name_CMS_IVT___407_OR[] = "__407_OR";
static RISMDStdVariable const lcmd_var_CMS_IVT___407_OR =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___407_OR, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___407_OR));

static char const lcmd_var_name_CMS_IVT___454_TO_LREAL[] = "__454_TO_LREAL";
static RISMDStdVariable const lcmd_var_CMS_IVT___454_TO_LREAL =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___454_TO_LREAL, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___454_TO_LREAL));

static char const lcmd_var_name_CMS_IVT___455_FROM_BIG_ENDIAN[] = "__455_FROM_BIG_ENDIAN";
static RISMDStdVariable const lcmd_var_CMS_IVT___455_FROM_BIG_ENDIAN =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___455_FROM_BIG_ENDIAN, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___455_FROM_BIG_ENDIAN));

static char const lcmd_var_name_CMS_IVT___456_DIV[] = "__456_DIV";
static RISMDStdVariable const lcmd_var_CMS_IVT___456_DIV =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___456_DIV, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___456_DIV));

static char const lcmd_var_name_CMS_IVT___4_NE[] = "__4_NE";
static RISMDStdVariable const lcmd_var_CMS_IVT___4_NE =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___4_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___4_NE));

static char const lcmd_var_name_CMS_IVT___54_OUTBIT[] = "__54_OUTbit";
static RISMDStdVariable const lcmd_var_CMS_IVT___54_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___54_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___54_OUTBIT));

static char const lcmd_var_name_CMS_IVT___59_NE[] = "__59_NE";
static RISMDStdVariable const lcmd_var_CMS_IVT___59_NE =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___59_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___59_NE));

static char const lcmd_var_name_CMS_IVT___61_OUTBIT[] = "__61_OUTbit";
static RISMDStdVariable const lcmd_var_CMS_IVT___61_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___61_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___61_OUTBIT));

static char const lcmd_var_name_CMS_IVT___62_OUTBIT[] = "__62_OUTbit";
static RISMDStdVariable const lcmd_var_CMS_IVT___62_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___62_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___62_OUTBIT));

static char const lcmd_var_name_CMS_IVT___63_OUTBIT[] = "__63_OUTbit";
static RISMDStdVariable const lcmd_var_CMS_IVT___63_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___63_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___63_OUTBIT));

static char const lcmd_var_name_CMS_IVT___64_OUTBIT[] = "__64_OUTbit";
static RISMDStdVariable const lcmd_var_CMS_IVT___64_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___64_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___64_OUTBIT));

static char const lcmd_var_name_CMS_IVT___65_NE[] = "__65_NE";
static RISMDStdVariable const lcmd_var_CMS_IVT___65_NE =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___65_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___65_NE));

static char const lcmd_var_name_CMS_IVT___79_OUTBIT[] = "__79_OUTbit";
static RISMDStdVariable const lcmd_var_CMS_IVT___79_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___79_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___79_OUTBIT));

static char const lcmd_var_name_CMS_IVT___80_OUTBIT[] = "__80_OUTbit";
static RISMDStdVariable const lcmd_var_CMS_IVT___80_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___80_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___80_OUTBIT));

static char const lcmd_var_name_CMS_IVT___81_OUTBIT[] = "__81_OUTbit";
static RISMDStdVariable const lcmd_var_CMS_IVT___81_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___81_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___81_OUTBIT));

static char const lcmd_var_name_CMS_IVT___82_NE[] = "__82_NE";
static RISMDStdVariable const lcmd_var_CMS_IVT___82_NE =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___82_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___82_NE));

static char const lcmd_var_name_CMS_IVT___84_OUTBIT[] = "__84_OUTbit";
static RISMDStdVariable const lcmd_var_CMS_IVT___84_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___84_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___84_OUTBIT));

static char const lcmd_var_name_CMS_IVT___89_OUTBIT[] = "__89_OUTbit";
static RISMDStdVariable const lcmd_var_CMS_IVT___89_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___89_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___89_OUTBIT));

static char const lcmd_var_name_CMS_IVT___92_OUTBIT[] = "__92_OUTbit";
static RISMDStdVariable const lcmd_var_CMS_IVT___92_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CMS_IVT___92_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CMS_IVT,LC_VD___92_OUTBIT));

static RISMDReference const lcmd_var_list_CMS_IVT[] =
{
  INIT_RISMDReference(&lcmd_var_CMS_IVT_CANRECV1),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_CANRECV2),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_CANRECV3),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_CANRECV4),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_CANRECV5),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_CANRECV6),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_CANRECV7),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_CANRECV8),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_CANRECV9),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_CANSEND1),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_CAN_CH),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_CAN_ERROR),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_CMS_ERROR),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_CURRENT_COUNTER_AH),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_CURRENT_MA),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_ENO),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_ERROR_521),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_ERROR_522),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_ERROR_523),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_ERROR_524),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_ERROR_525),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_ERROR_526),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_ERROR_527),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_ERROR_528),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_OVERALL_POWER_KWH),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_POWER_COUNTER_WH),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_POWER_KWH),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_TEMP),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_TON1),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_VOLTAGE1_MV),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_VOLTAGE2_MV),
  INIT_RISMDReference(&lcmd_var_CMS_IVT_VOLTAGE3_MV),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___113_NE),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___120_NE),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___124_NE),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___12_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___132_NE),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___147_NE),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___160_OR),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___163_NE),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___169_TO_DINT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___171_TO_DINT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___173_TO_DINT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___175_TO_DINT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___177_TO_DINT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___179_TO_DINT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___181_TO_DINT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___183_TO_DINT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___185_TO_REAL),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___186_TO_REAL),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___188_FROM_BIG_ENDIAN),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___199_TO_REAL),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___200_TO_REAL),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___219_DIV),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___220_TO_REAL),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___224_FROM_BIG_ENDIAN),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___226_TO_REAL),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___228_TO_REAL),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___230_TO_REAL),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___231_FROM_BIG_ENDIAN),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___287_NE),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___291_NE),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___295_NE),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___299_NE),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___31_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___327_OR),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___32_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___331_DIV),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___332_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___334_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___33_NE),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___349_FROM_BIG_ENDIAN),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___34_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___353_FROM_BIG_ENDIAN),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___356_FROM_BIG_ENDIAN),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___359_FROM_BIG_ENDIAN),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___362_FROM_BIG_ENDIAN),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___365_NE),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___379_DIV),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___38_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___394_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___407_OR),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___454_TO_LREAL),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___455_FROM_BIG_ENDIAN),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___456_DIV),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___4_NE),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___54_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___59_NE),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___61_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___62_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___63_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___64_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___65_NE),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___79_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___80_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___81_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___82_NE),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___84_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___89_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CMS_IVT___92_OUTBIT),
};

static char const lcmd_type_name_CMS_IVT[] = "CMS_IVT";
RISMDPOUType const lcmd_type_CMS_IVT = INIT_RISMDPOUType(lcmd_type_name_CMS_IVT, sizeof(LC_TD_FunctionBlock_CMS_IVT), 100, lcmd_var_list_CMS_IVT);
