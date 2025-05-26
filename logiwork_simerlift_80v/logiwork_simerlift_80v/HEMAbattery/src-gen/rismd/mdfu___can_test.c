#include <RISMD.h>
#include <lcfu___can_test.h>

extern RISMDPOUType const lcmd_type_CANSEND;
static char const lcmd_var_name_CAN_TEST_CANSEND3[] = "CANSEND3";
static RISMDStdVariable const lcmd_var_CAN_TEST_CANSEND3 =
INIT_RISMDStdVariable(lcmd_var_name_CAN_TEST_CANSEND3, &lcmd_type_CANSEND, offsetof(LC_TD_FunctionBlock_CAN_TEST,LC_VD_CANSEND3));

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_CAN_TEST_CAN_CH[] = "CAN_CH";
static RISMDInterfaceVariable const lcmd_var_CAN_TEST_CAN_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_CAN_TEST_CAN_CH, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CAN_TEST,LC_VD_CAN_CH), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CAN_TEST_CAN_ID[] = "CAN_ID";
static RISMDInterfaceVariable const lcmd_var_CAN_TEST_CAN_ID =
INIT_RISMDInterfaceVariable(lcmd_var_name_CAN_TEST_CAN_ID, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CAN_TEST,LC_VD_CAN_ID), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_CAN_TEST_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_CAN_TEST_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_CAN_TEST_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CAN_TEST,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_CAN_TEST_IN_1[] = "IN_1";
static RISMDInterfaceVariable const lcmd_var_CAN_TEST_IN_1 =
INIT_RISMDInterfaceVariable(lcmd_var_name_CAN_TEST_IN_1, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_CAN_TEST,LC_VD_IN_1), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CAN_TEST_IN_2[] = "IN_2";
static RISMDInterfaceVariable const lcmd_var_CAN_TEST_IN_2 =
INIT_RISMDInterfaceVariable(lcmd_var_name_CAN_TEST_IN_2, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_CAN_TEST,LC_VD_IN_2), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CAN_TEST_IN_3[] = "IN_3";
static RISMDInterfaceVariable const lcmd_var_CAN_TEST_IN_3 =
INIT_RISMDInterfaceVariable(lcmd_var_name_CAN_TEST_IN_3, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_CAN_TEST,LC_VD_IN_3), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CAN_TEST_IN_4[] = "IN_4";
static RISMDInterfaceVariable const lcmd_var_CAN_TEST_IN_4 =
INIT_RISMDInterfaceVariable(lcmd_var_name_CAN_TEST_IN_4, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_CAN_TEST,LC_VD_IN_4), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_CAN_TEST___10_OUTBIT[] = "__10_OUTbit";
static RISMDStdVariable const lcmd_var_CAN_TEST___10_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CAN_TEST___10_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CAN_TEST,LC_VD___10_OUTBIT));

static char const lcmd_var_name_CAN_TEST___13_OUTBIT[] = "__13_OUTbit";
static RISMDStdVariable const lcmd_var_CAN_TEST___13_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CAN_TEST___13_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CAN_TEST,LC_VD___13_OUTBIT));

static char const lcmd_var_name_CAN_TEST___14_OUTBIT[] = "__14_OUTbit";
static RISMDStdVariable const lcmd_var_CAN_TEST___14_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CAN_TEST___14_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CAN_TEST,LC_VD___14_OUTBIT));

static char const lcmd_var_name_CAN_TEST___15_TO_LWORD[] = "__15_TO_LWORD";
static RISMDStdVariable const lcmd_var_CAN_TEST___15_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_CAN_TEST___15_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CAN_TEST,LC_VD___15_TO_LWORD));

static char const lcmd_var_name_CAN_TEST___16_TO_LWORD[] = "__16_TO_LWORD";
static RISMDStdVariable const lcmd_var_CAN_TEST___16_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_CAN_TEST___16_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CAN_TEST,LC_VD___16_TO_LWORD));

static char const lcmd_var_name_CAN_TEST___17_TO_LWORD[] = "__17_TO_LWORD";
static RISMDStdVariable const lcmd_var_CAN_TEST___17_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_CAN_TEST___17_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CAN_TEST,LC_VD___17_TO_LWORD));

static char const lcmd_var_name_CAN_TEST___18_TO_LWORD[] = "__18_TO_LWORD";
static RISMDStdVariable const lcmd_var_CAN_TEST___18_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_CAN_TEST___18_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CAN_TEST,LC_VD___18_TO_LWORD));

static char const lcmd_var_name_CAN_TEST___226_OR[] = "__226_OR";
static RISMDStdVariable const lcmd_var_CAN_TEST___226_OR =
INIT_RISMDStdVariable(lcmd_var_name_CAN_TEST___226_OR, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CAN_TEST,LC_VD___226_OR));

static char const lcmd_var_name_CAN_TEST___64_NE[] = "__64_NE";
static RISMDStdVariable const lcmd_var_CAN_TEST___64_NE =
INIT_RISMDStdVariable(lcmd_var_name_CAN_TEST___64_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CAN_TEST,LC_VD___64_NE));

static char const lcmd_var_name_CAN_TEST___8_OUTBIT[] = "__8_OUTbit";
static RISMDStdVariable const lcmd_var_CAN_TEST___8_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CAN_TEST___8_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CAN_TEST,LC_VD___8_OUTBIT));

static RISMDReference const lcmd_var_list_CAN_TEST[] =
{
  INIT_RISMDReference(&lcmd_var_CAN_TEST_CANSEND3),
  INIT_RISMDReference(&lcmd_var_CAN_TEST_CAN_CH),
  INIT_RISMDReference(&lcmd_var_CAN_TEST_CAN_ID),
  INIT_RISMDReference(&lcmd_var_CAN_TEST_ENO),
  INIT_RISMDReference(&lcmd_var_CAN_TEST_IN_1),
  INIT_RISMDReference(&lcmd_var_CAN_TEST_IN_2),
  INIT_RISMDReference(&lcmd_var_CAN_TEST_IN_3),
  INIT_RISMDReference(&lcmd_var_CAN_TEST_IN_4),
  INIT_RISMDReference(&lcmd_var_CAN_TEST___10_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CAN_TEST___13_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CAN_TEST___14_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CAN_TEST___15_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_CAN_TEST___16_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_CAN_TEST___17_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_CAN_TEST___18_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_CAN_TEST___226_OR),
  INIT_RISMDReference(&lcmd_var_CAN_TEST___64_NE),
  INIT_RISMDReference(&lcmd_var_CAN_TEST___8_OUTBIT),
};

static char const lcmd_type_name_CAN_TEST[] = "CAN_TEST";
RISMDPOUType const lcmd_type_CAN_TEST = INIT_RISMDPOUType(lcmd_type_name_CAN_TEST, sizeof(LC_TD_FunctionBlock_CAN_TEST), 18, lcmd_var_list_CAN_TEST);
