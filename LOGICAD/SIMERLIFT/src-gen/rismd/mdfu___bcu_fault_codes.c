#include <RISMD.h>
#include <lcfu___bcu_fault_codes.h>

extern RISMDPOUType const lcmd_type_CANSEND;
static char const lcmd_var_name_BCU_FAULT_CODES_CANSEND4[] = "CANSEND4";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES_CANSEND4 =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES_CANSEND4, &lcmd_type_CANSEND, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_CANSEND4));

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_BCU_FAULT_CODES_CAN_CH[] = "CAN_CH";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_CAN_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_CAN_CH, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_CAN_CH), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_BCU_FAULT_CODES_CAN_ERROR[] = "CAN_Error";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_CAN_ERROR =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_CAN_ERROR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_CAN_ERROR), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_CAN_ID[] = "CAN_ID";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_CAN_ID =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_CAN_ID, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_CAN_ID), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_00[] = "Fault_00";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_00 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_00, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_00), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_01[] = "Fault_01";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_01 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_01, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_01), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_02[] = "Fault_02";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_02 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_02, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_02), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_03[] = "Fault_03";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_03 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_03, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_03), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_04[] = "Fault_04";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_04 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_04, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_04), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_05[] = "Fault_05";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_05 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_05, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_05), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_06[] = "Fault_06";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_06 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_06, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_06), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_07[] = "Fault_07";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_07 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_07, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_07), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_08[] = "Fault_08";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_08 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_08, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_08), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_09[] = "Fault_09";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_09 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_09, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_09), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_10[] = "Fault_10";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_10 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_10, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_10), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_11[] = "Fault_11";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_11 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_11, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_11), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_12[] = "Fault_12";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_12 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_12, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_12), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_13[] = "Fault_13";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_13 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_13, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_13), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_14[] = "Fault_14";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_14 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_14, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_14), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_15[] = "Fault_15";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_15 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_15, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_15), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_16[] = "Fault_16";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_16 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_16, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_16), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_17[] = "Fault_17";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_17 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_17, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_17), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_18[] = "Fault_18";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_18 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_18, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_18), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_19[] = "Fault_19";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_19 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_19, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_19), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_20[] = "Fault_20";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_20 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_20, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_20), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_21[] = "Fault_21";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_21 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_21, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_21), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_22[] = "Fault_22";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_22 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_22, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_22), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_23[] = "Fault_23";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_23 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_23, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_23), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_24[] = "Fault_24";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_24 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_24, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_24), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_25[] = "Fault_25";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_25 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_25, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_25), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_26[] = "Fault_26";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_26 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_26, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_26), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_27[] = "Fault_27";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_27 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_27, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_27), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_28[] = "Fault_28";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_28 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_28, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_28), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_29[] = "Fault_29";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_29 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_29, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_29), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_30[] = "Fault_30";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_30 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_30, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_30), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_31[] = "Fault_31";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_31 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_31, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_31), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_32[] = "Fault_32";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_32 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_32, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_32), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_33[] = "Fault_33";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_33 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_33, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_33), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_34[] = "Fault_34";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_34 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_34, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_34), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_35[] = "Fault_35";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_35 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_35, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_35), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_36[] = "Fault_36";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_36 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_36, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_36), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_37[] = "Fault_37";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_37 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_37, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_37), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_38[] = "Fault_38";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_38 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_38, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_38), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_39[] = "Fault_39";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_39 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_39, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_39), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_BYTE_5[] = "Fault_Byte_5";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_BYTE_5 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_BYTE_5, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_BYTE_5), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_BYTE_6_7[] = "Fault_Byte_6_7";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_FAULT_BYTE_6_7 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_BYTE_6_7, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_BYTE_6_7), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_CODE_BYTE_0_1[] = "Fault_Code_Byte_0_1";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES_FAULT_CODE_BYTE_0_1 =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_CODE_BYTE_0_1, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_CODE_BYTE_0_1));

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_CODE_BYTE_2_3[] = "Fault_Code_Byte_2_3";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES_FAULT_CODE_BYTE_2_3 =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_CODE_BYTE_2_3, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_CODE_BYTE_2_3));

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_CODE_BYTE_4[] = "Fault_Code_Byte_4";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES_FAULT_CODE_BYTE_4 =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_CODE_BYTE_4, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_CODE_BYTE_4));

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_CODE_BYTE_5[] = "Fault_Code_Byte_5";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES_FAULT_CODE_BYTE_5 =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_CODE_BYTE_5, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_CODE_BYTE_5));

static char const lcmd_var_name_BCU_FAULT_CODES_FAULT_CODE_BYTE_6_7[] = "Fault_Code_Byte_6_7";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES_FAULT_CODE_BYTE_6_7 =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES_FAULT_CODE_BYTE_6_7, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_FAULT_CODE_BYTE_6_7));

static char const lcmd_var_name_BCU_FAULT_CODES_GUI_FAULT[] = "GUI_Fault";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_GUI_FAULT =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_GUI_FAULT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_GUI_FAULT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BCU_FAULT_CODES_SUM[] = "sum";
static RISMDInterfaceVariable const lcmd_var_BCU_FAULT_CODES_SUM =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_FAULT_CODES_SUM, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD_SUM), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BCU_FAULT_CODES___115_OUTBIT[] = "__115_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___115_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___115_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___115_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___116_OUTBIT[] = "__116_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___116_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___116_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___116_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___117_OUTBIT[] = "__117_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___117_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___117_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___117_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___118_OUTBIT[] = "__118_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___118_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___118_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___118_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___119_OUTBIT[] = "__119_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___119_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___119_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___119_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___120_OUTBIT[] = "__120_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___120_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___120_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___120_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___121_OUTBIT[] = "__121_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___121_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___121_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___121_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___122_OUTBIT[] = "__122_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___122_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___122_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___122_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___123_OUTBIT[] = "__123_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___123_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___123_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___123_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___124_OUTBIT[] = "__124_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___124_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___124_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___124_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___125_OUTBIT[] = "__125_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___125_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___125_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___125_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___126_OUTBIT[] = "__126_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___126_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___126_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___126_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___127_OUTBIT[] = "__127_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___127_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___127_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___127_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___128_OUTBIT[] = "__128_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___128_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___128_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___128_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___129_OUTBIT[] = "__129_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___129_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___129_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___129_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___12_OR[] = "__12_OR";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___12_OR =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___12_OR, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___12_OR));

static char const lcmd_var_name_BCU_FAULT_CODES___130_OUTBIT[] = "__130_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___130_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___130_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___130_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___131_OR[] = "__131_OR";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___131_OR =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___131_OR, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___131_OR));

static char const lcmd_var_name_BCU_FAULT_CODES___14_OUTBIT[] = "__14_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___14_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___14_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___14_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___15_OUTBIT[] = "__15_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___15_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___15_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___15_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___167_TO_LWORD[] = "__167_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___167_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___167_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___167_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___168_TO_LWORD[] = "__168_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___168_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___168_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___168_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___169_TO_LWORD[] = "__169_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___169_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___169_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___169_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___16_OUTBIT[] = "__16_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___16_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___16_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___16_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___170_TO_LWORD[] = "__170_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___170_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___170_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___170_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___171_TO_LWORD[] = "__171_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___171_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___171_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___171_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___172_TO_LWORD[] = "__172_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___172_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___172_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___172_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___173_TO_LWORD[] = "__173_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___173_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___173_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___173_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___174_TO_LWORD[] = "__174_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___174_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___174_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___174_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___175_TO_LWORD[] = "__175_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___175_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___175_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___175_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___176_TO_LWORD[] = "__176_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___176_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___176_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___176_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___177_TO_LWORD[] = "__177_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___177_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___177_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___177_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___178_TO_LWORD[] = "__178_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___178_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___178_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___178_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___179_TO_LWORD[] = "__179_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___179_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___179_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___179_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___180_TO_LWORD[] = "__180_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___180_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___180_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___180_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___181_TO_LWORD[] = "__181_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___181_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___181_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___181_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___212_OR[] = "__212_OR";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___212_OR =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___212_OR, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___212_OR));

static char const lcmd_var_name_BCU_FAULT_CODES___215_OUTBIT[] = "__215_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___215_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___215_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___215_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___216_TO_LWORD[] = "__216_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___216_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___216_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___216_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___219_OUTBIT[] = "__219_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___219_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___219_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___219_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___21_OUTBIT[] = "__21_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___21_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___21_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___21_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___220_OUTBIT[] = "__220_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___220_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___220_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___220_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___221_OUTBIT[] = "__221_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___221_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___221_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___221_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___222_TO_LWORD[] = "__222_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___222_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___222_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___222_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___224_OUTBIT[] = "__224_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___224_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___224_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___224_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___227_OUTBIT[] = "__227_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___227_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___227_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___227_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___228_OUTBIT[] = "__228_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___228_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___228_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___228_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___231_OUTBIT[] = "__231_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___231_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___231_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___231_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___232_OUTBIT[] = "__232_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___232_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___232_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___232_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___233_OUTBIT[] = "__233_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___233_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___233_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___233_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___23_OUTBIT[] = "__23_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___23_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___23_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___23_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___247_OR[] = "__247_OR";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___247_OR =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___247_OR, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___247_OR));

static char const lcmd_var_name_BCU_FAULT_CODES___24_OUTBIT[] = "__24_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___24_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___24_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___24_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___251_NE[] = "__251_NE";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___251_NE =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___251_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___251_NE));

static char const lcmd_var_name_BCU_FAULT_CODES___259_OR[] = "__259_OR";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___259_OR =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___259_OR, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___259_OR));

static char const lcmd_var_name_BCU_FAULT_CODES___263_TO_UDINT[] = "__263_TO_UDINT";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___263_TO_UDINT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___263_TO_UDINT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___263_TO_UDINT));

static char const lcmd_var_name_BCU_FAULT_CODES___2_OUTBIT[] = "__2_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___2_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___2_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___2_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___31_OUTBIT[] = "__31_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___31_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___31_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___31_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___32_OUTBIT[] = "__32_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___32_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___32_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___32_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___39_OUTBIT[] = "__39_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___39_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___39_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___39_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___3_OUTBIT[] = "__3_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___3_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___3_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___3_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___40_OUTBIT[] = "__40_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___40_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___40_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___40_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___41_OUTBIT[] = "__41_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___41_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___41_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___41_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___44_TO_LWORD[] = "__44_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___44_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___44_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___44_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___45_TO_LWORD[] = "__45_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___45_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___45_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___45_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___46_TO_LWORD[] = "__46_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___46_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___46_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___46_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___47_TO_LWORD[] = "__47_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___47_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___47_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___47_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___48_TO_LWORD[] = "__48_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___48_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___48_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___48_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___49_TO_LWORD[] = "__49_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___49_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___49_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___49_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___4_OUTBIT[] = "__4_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___4_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___4_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___4_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___50_TO_LWORD[] = "__50_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___50_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___50_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___50_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___51_TO_LWORD[] = "__51_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___51_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___51_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___51_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___52_TO_LWORD[] = "__52_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___52_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___52_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___52_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___53_TO_LWORD[] = "__53_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___53_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___53_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___53_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___56_TO_LWORD[] = "__56_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___56_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___56_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___56_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___57_TO_LWORD[] = "__57_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___57_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___57_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___57_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___59_TO_LWORD[] = "__59_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___59_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___59_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___59_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___5_OUTBIT[] = "__5_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___5_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___5_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___5_OUTBIT));

static char const lcmd_var_name_BCU_FAULT_CODES___60_TO_LWORD[] = "__60_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___60_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___60_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___60_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___61_TO_LWORD[] = "__61_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___61_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___61_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___61_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___62_TO_LWORD[] = "__62_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___62_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___62_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___62_TO_LWORD));

static char const lcmd_var_name_BCU_FAULT_CODES___64_NE[] = "__64_NE";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___64_NE =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___64_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___64_NE));

static char const lcmd_var_name_BCU_FAULT_CODES___6_OUTBIT[] = "__6_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_FAULT_CODES___6_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_FAULT_CODES___6_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_FAULT_CODES,LC_VD___6_OUTBIT));

static RISMDReference const lcmd_var_list_BCU_FAULT_CODES[] =
{
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_CANSEND4),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_CAN_CH),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_CAN_ERROR),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_CAN_ID),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_ENO),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_00),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_01),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_02),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_03),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_04),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_05),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_06),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_07),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_08),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_09),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_10),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_11),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_12),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_13),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_14),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_15),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_16),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_17),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_18),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_19),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_20),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_21),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_22),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_23),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_24),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_25),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_26),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_27),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_28),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_29),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_30),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_31),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_32),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_33),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_34),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_35),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_36),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_37),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_38),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_39),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_BYTE_5),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_BYTE_6_7),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_CODE_BYTE_0_1),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_CODE_BYTE_2_3),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_CODE_BYTE_4),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_CODE_BYTE_5),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_FAULT_CODE_BYTE_6_7),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_GUI_FAULT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES_SUM),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___115_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___116_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___117_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___118_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___119_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___120_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___121_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___122_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___123_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___124_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___125_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___126_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___127_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___128_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___129_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___12_OR),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___130_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___131_OR),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___14_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___15_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___167_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___168_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___169_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___16_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___170_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___171_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___172_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___173_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___174_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___175_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___176_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___177_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___178_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___179_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___180_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___181_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___212_OR),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___215_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___216_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___219_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___21_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___220_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___221_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___222_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___224_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___227_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___228_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___231_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___232_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___233_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___23_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___247_OR),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___24_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___251_NE),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___259_OR),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___263_TO_UDINT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___2_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___31_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___32_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___39_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___3_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___40_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___41_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___44_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___45_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___46_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___47_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___48_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___49_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___4_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___50_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___51_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___52_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___53_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___56_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___57_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___59_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___5_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___60_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___61_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___62_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___64_NE),
  INIT_RISMDReference(&lcmd_var_BCU_FAULT_CODES___6_OUTBIT),
};

static char const lcmd_type_name_BCU_FAULT_CODES[] = "BCU_FAULT_CODES";
RISMDPOUType const lcmd_type_BCU_FAULT_CODES = INIT_RISMDPOUType(lcmd_type_name_BCU_FAULT_CODES, sizeof(LC_TD_FunctionBlock_BCU_FAULT_CODES), 137, lcmd_var_list_BCU_FAULT_CODES);
