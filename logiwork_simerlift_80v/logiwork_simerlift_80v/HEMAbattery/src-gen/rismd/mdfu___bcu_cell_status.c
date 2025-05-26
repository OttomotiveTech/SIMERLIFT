#include <RISMD.h>
#include <lcfu___bcu_cell_status.h>

extern RISMDPOUType const lcmd_type_CANSEND;
static char const lcmd_var_name_BCU_CELL_STATUS_CANSEND3[] = "CANSEND3";
static RISMDStdVariable const lcmd_var_BCU_CELL_STATUS_CANSEND3 =
INIT_RISMDStdVariable(lcmd_var_name_BCU_CELL_STATUS_CANSEND3, &lcmd_type_CANSEND, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD_CANSEND3));

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_BCU_CELL_STATUS_CAN_CH[] = "CAN_CH";
static RISMDInterfaceVariable const lcmd_var_BCU_CELL_STATUS_CAN_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_CELL_STATUS_CAN_CH, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD_CAN_CH), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_BCU_CELL_STATUS_CAN_ERROR[] = "CAN_Error";
static RISMDInterfaceVariable const lcmd_var_BCU_CELL_STATUS_CAN_ERROR =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_CELL_STATUS_CAN_ERROR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD_CAN_ERROR), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BCU_CELL_STATUS_CAN_ID[] = "CAN_ID";
static RISMDInterfaceVariable const lcmd_var_BCU_CELL_STATUS_CAN_ID =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_CELL_STATUS_CAN_ID, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD_CAN_ID), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_BCU_CELL_STATUS_CELL_TEMP[] = "Cell_Temp";
static RISMDInterfaceVariable const lcmd_var_BCU_CELL_STATUS_CELL_TEMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_CELL_STATUS_CELL_TEMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD_CELL_TEMP), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_CELL_STATUS_CELL_VOLTAGE[] = "Cell_Voltage";
static RISMDInterfaceVariable const lcmd_var_BCU_CELL_STATUS_CELL_VOLTAGE =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_CELL_STATUS_CELL_VOLTAGE, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD_CELL_VOLTAGE), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_CELL_STATUS_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_BCU_CELL_STATUS_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_CELL_STATUS_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BCU_CELL_STATUS_INSTANT_CURRENT[] = "Instant_Current";
static RISMDInterfaceVariable const lcmd_var_BCU_CELL_STATUS_INSTANT_CURRENT =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_CELL_STATUS_INSTANT_CURRENT, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD_INSTANT_CURRENT), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_BCU_CELL_STATUS_SELECTED_BMU_LOC[] = "Selected_BMU_Loc";
static RISMDInterfaceVariable const lcmd_var_BCU_CELL_STATUS_SELECTED_BMU_LOC =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_CELL_STATUS_SELECTED_BMU_LOC, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD_SELECTED_BMU_LOC), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_CELL_STATUS_SELECTED_CELL_LOC[] = "Selected_Cell_Loc";
static RISMDInterfaceVariable const lcmd_var_BCU_CELL_STATUS_SELECTED_CELL_LOC =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_CELL_STATUS_SELECTED_CELL_LOC, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD_SELECTED_CELL_LOC), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_CELL_STATUS_TOTAL_VOLTAGE[] = "Total_Voltage";
static RISMDInterfaceVariable const lcmd_var_BCU_CELL_STATUS_TOTAL_VOLTAGE =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_CELL_STATUS_TOTAL_VOLTAGE, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD_TOTAL_VOLTAGE), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_BCU_CELL_STATUS___14_OUTBIT[] = "__14_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_CELL_STATUS___14_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_CELL_STATUS___14_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD___14_OUTBIT));

static char const lcmd_var_name_BCU_CELL_STATUS___15_OUTBIT[] = "__15_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_CELL_STATUS___15_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_CELL_STATUS___15_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD___15_OUTBIT));

static char const lcmd_var_name_BCU_CELL_STATUS___16_OUTBIT[] = "__16_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_CELL_STATUS___16_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_CELL_STATUS___16_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD___16_OUTBIT));

static char const lcmd_var_name_BCU_CELL_STATUS___17_OUTBIT[] = "__17_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_CELL_STATUS___17_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_CELL_STATUS___17_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD___17_OUTBIT));

static char const lcmd_var_name_BCU_CELL_STATUS___20_OUTBIT[] = "__20_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_CELL_STATUS___20_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_CELL_STATUS___20_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD___20_OUTBIT));

static char const lcmd_var_name_BCU_CELL_STATUS___226_OR[] = "__226_OR";
static RISMDStdVariable const lcmd_var_BCU_CELL_STATUS___226_OR =
INIT_RISMDStdVariable(lcmd_var_name_BCU_CELL_STATUS___226_OR, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD___226_OR));

static char const lcmd_var_name_BCU_CELL_STATUS___44_TO_LWORD[] = "__44_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_CELL_STATUS___44_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_CELL_STATUS___44_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD___44_TO_LWORD));

static char const lcmd_var_name_BCU_CELL_STATUS___47_TO_LWORD[] = "__47_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_CELL_STATUS___47_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_CELL_STATUS___47_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD___47_TO_LWORD));

static char const lcmd_var_name_BCU_CELL_STATUS___48_TO_LWORD[] = "__48_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_CELL_STATUS___48_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_CELL_STATUS___48_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD___48_TO_LWORD));

static char const lcmd_var_name_BCU_CELL_STATUS___64_NE[] = "__64_NE";
static RISMDStdVariable const lcmd_var_BCU_CELL_STATUS___64_NE =
INIT_RISMDStdVariable(lcmd_var_name_BCU_CELL_STATUS___64_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD___64_NE));

static char const lcmd_var_name_BCU_CELL_STATUS___7_OUTBIT[] = "__7_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_CELL_STATUS___7_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_CELL_STATUS___7_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD___7_OUTBIT));

static char const lcmd_var_name_BCU_CELL_STATUS___95_NE[] = "__95_NE";
static RISMDStdVariable const lcmd_var_BCU_CELL_STATUS___95_NE =
INIT_RISMDStdVariable(lcmd_var_name_BCU_CELL_STATUS___95_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_CELL_STATUS,LC_VD___95_NE));

static RISMDReference const lcmd_var_list_BCU_CELL_STATUS[] =
{
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS_CANSEND3),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS_CAN_CH),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS_CAN_ERROR),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS_CAN_ID),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS_CELL_TEMP),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS_CELL_VOLTAGE),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS_ENO),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS_INSTANT_CURRENT),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS_SELECTED_BMU_LOC),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS_SELECTED_CELL_LOC),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS_TOTAL_VOLTAGE),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS___14_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS___15_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS___16_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS___17_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS___20_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS___226_OR),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS___44_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS___47_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS___48_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS___64_NE),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS___7_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_CELL_STATUS___95_NE),
};

static char const lcmd_type_name_BCU_CELL_STATUS[] = "BCU_CELL_STATUS";
RISMDPOUType const lcmd_type_BCU_CELL_STATUS = INIT_RISMDPOUType(lcmd_type_name_BCU_CELL_STATUS, sizeof(LC_TD_FunctionBlock_BCU_CELL_STATUS), 23, lcmd_var_list_BCU_CELL_STATUS);
