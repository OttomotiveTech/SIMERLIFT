#include <RISMD.h>
#include <lcfu___bcu_status2.h>

extern RISMDPOUType const lcmd_type_CANSEND;
static char const lcmd_var_name_BCU_STATUS2_CANSEND2[] = "CANSEND2";
static RISMDStdVariable const lcmd_var_BCU_STATUS2_CANSEND2 =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATUS2_CANSEND2, &lcmd_type_CANSEND, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD_CANSEND2));

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_BCU_STATUS2_CAN_CH[] = "CAN_CH";
static RISMDInterfaceVariable const lcmd_var_BCU_STATUS2_CAN_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATUS2_CAN_CH, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD_CAN_CH), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_BCU_STATUS2_CAN_ERROR[] = "CAN_Error";
static RISMDInterfaceVariable const lcmd_var_BCU_STATUS2_CAN_ERROR =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATUS2_CAN_ERROR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD_CAN_ERROR), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BCU_STATUS2_CAN_ID[] = "CAN_ID";
static RISMDInterfaceVariable const lcmd_var_BCU_STATUS2_CAN_ID =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATUS2_CAN_ID, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD_CAN_ID), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_STATUS2_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_BCU_STATUS2_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATUS2_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_BCU_STATUS2_MAX_CELL_TEMP[] = "Max_Cell_Temp";
static RISMDInterfaceVariable const lcmd_var_BCU_STATUS2_MAX_CELL_TEMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATUS2_MAX_CELL_TEMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD_MAX_CELL_TEMP), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_BCU_STATUS2_MAX_TEMP_BMU_LOC[] = "Max_Temp_BMU_Loc";
static RISMDInterfaceVariable const lcmd_var_BCU_STATUS2_MAX_TEMP_BMU_LOC =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATUS2_MAX_TEMP_BMU_LOC, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD_MAX_TEMP_BMU_LOC), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_STATUS2_MAX_TEMP_CELL_LOC[] = "Max_Temp_Cell_Loc";
static RISMDInterfaceVariable const lcmd_var_BCU_STATUS2_MAX_TEMP_CELL_LOC =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATUS2_MAX_TEMP_CELL_LOC, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD_MAX_TEMP_CELL_LOC), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_STATUS2_MIN_CELL_TEMP[] = "Min_Cell_Temp";
static RISMDInterfaceVariable const lcmd_var_BCU_STATUS2_MIN_CELL_TEMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATUS2_MIN_CELL_TEMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD_MIN_CELL_TEMP), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_STATUS2_MIN_TEMP_BMU_LOC[] = "Min_Temp_BMU_Loc";
static RISMDInterfaceVariable const lcmd_var_BCU_STATUS2_MIN_TEMP_BMU_LOC =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATUS2_MIN_TEMP_BMU_LOC, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD_MIN_TEMP_BMU_LOC), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_STATUS2_MIN_TEMP_CELL_LOC[] = "Min_Temp_Cell_Loc";
static RISMDInterfaceVariable const lcmd_var_BCU_STATUS2_MIN_TEMP_CELL_LOC =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATUS2_MIN_TEMP_CELL_LOC, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD_MIN_TEMP_CELL_LOC), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_STATUS2_OUTVOLT[] = "outVolt";
static RISMDInterfaceVariable const lcmd_var_BCU_STATUS2_OUTVOLT =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATUS2_OUTVOLT, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD_OUTVOLT), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_BCU_STATUS2___10_OUTBIT[] = "__10_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_STATUS2___10_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATUS2___10_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD___10_OUTBIT));

static char const lcmd_var_name_BCU_STATUS2___114_OR[] = "__114_OR";
static RISMDStdVariable const lcmd_var_BCU_STATUS2___114_OR =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATUS2___114_OR, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD___114_OR));

static char const lcmd_var_name_BCU_STATUS2___12_OUTBIT[] = "__12_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_STATUS2___12_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATUS2___12_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD___12_OUTBIT));

static char const lcmd_var_name_BCU_STATUS2___14_OUTBIT[] = "__14_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_STATUS2___14_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATUS2___14_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD___14_OUTBIT));

static char const lcmd_var_name_BCU_STATUS2___21_OUTBIT[] = "__21_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_STATUS2___21_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATUS2___21_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD___21_OUTBIT));

static char const lcmd_var_name_BCU_STATUS2___23_TO_LWORD[] = "__23_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_STATUS2___23_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATUS2___23_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD___23_TO_LWORD));

static char const lcmd_var_name_BCU_STATUS2___24_TO_LWORD[] = "__24_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_STATUS2___24_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATUS2___24_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD___24_TO_LWORD));

static char const lcmd_var_name_BCU_STATUS2___25_TO_LWORD[] = "__25_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_STATUS2___25_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATUS2___25_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD___25_TO_LWORD));

static char const lcmd_var_name_BCU_STATUS2___26_TO_LWORD[] = "__26_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_STATUS2___26_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATUS2___26_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD___26_TO_LWORD));

static char const lcmd_var_name_BCU_STATUS2___57_OUTBIT[] = "__57_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_STATUS2___57_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATUS2___57_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD___57_OUTBIT));

static char const lcmd_var_name_BCU_STATUS2___64_NE[] = "__64_NE";
static RISMDStdVariable const lcmd_var_BCU_STATUS2___64_NE =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATUS2___64_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD___64_NE));

static char const lcmd_var_name_BCU_STATUS2___7_OUTBIT[] = "__7_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_STATUS2___7_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATUS2___7_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD___7_OUTBIT));

static char const lcmd_var_name_BCU_STATUS2___95_NE[] = "__95_NE";
static RISMDStdVariable const lcmd_var_BCU_STATUS2___95_NE =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATUS2___95_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD___95_NE));

static char const lcmd_var_name_BCU_STATUS2___9_OUTBIT[] = "__9_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_STATUS2___9_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATUS2___9_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATUS2,LC_VD___9_OUTBIT));

static RISMDReference const lcmd_var_list_BCU_STATUS2[] =
{
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2_CANSEND2),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2_CAN_CH),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2_CAN_ERROR),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2_CAN_ID),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2_ENO),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2_MAX_CELL_TEMP),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2_MAX_TEMP_BMU_LOC),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2_MAX_TEMP_CELL_LOC),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2_MIN_CELL_TEMP),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2_MIN_TEMP_BMU_LOC),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2_MIN_TEMP_CELL_LOC),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2_OUTVOLT),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2___10_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2___114_OR),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2___12_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2___14_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2___21_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2___23_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2___24_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2___25_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2___26_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2___57_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2___64_NE),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2___7_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2___95_NE),
  INIT_RISMDReference(&lcmd_var_BCU_STATUS2___9_OUTBIT),
};

static char const lcmd_type_name_BCU_STATUS2[] = "BCU_STATUS2";
RISMDPOUType const lcmd_type_BCU_STATUS2 = INIT_RISMDPOUType(lcmd_type_name_BCU_STATUS2, sizeof(LC_TD_FunctionBlock_BCU_STATUS2), 26, lcmd_var_list_BCU_STATUS2);
