#include <RISMD.h>
#include <lcfu___can_test_2.h>

extern RISMDPOUType const lcmd_type_CANSEND;
static char const lcmd_var_name_CAN_TEST_2_CANSEND3[] = "CANSEND3";
static RISMDStdVariable const lcmd_var_CAN_TEST_2_CANSEND3 =
INIT_RISMDStdVariable(lcmd_var_name_CAN_TEST_2_CANSEND3, &lcmd_type_CANSEND, offsetof(LC_TD_FunctionBlock_CAN_TEST_2,LC_VD_CANSEND3));

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_CAN_TEST_2_CAN_CH[] = "CAN_CH";
static RISMDInterfaceVariable const lcmd_var_CAN_TEST_2_CAN_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_CAN_TEST_2_CAN_CH, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CAN_TEST_2,LC_VD_CAN_CH), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CAN_TEST_2_CAN_ID[] = "CAN_ID";
static RISMDInterfaceVariable const lcmd_var_CAN_TEST_2_CAN_ID =
INIT_RISMDInterfaceVariable(lcmd_var_name_CAN_TEST_2_CAN_ID, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CAN_TEST_2,LC_VD_CAN_ID), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_CAN_TEST_2_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_CAN_TEST_2_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_CAN_TEST_2_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CAN_TEST_2,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CAN_TEST_2_IN_1[] = "IN_1";
static RISMDInterfaceVariable const lcmd_var_CAN_TEST_2_IN_1 =
INIT_RISMDInterfaceVariable(lcmd_var_name_CAN_TEST_2_IN_1, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CAN_TEST_2,LC_VD_IN_1), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CAN_TEST_2_IN_2[] = "IN_2";
static RISMDInterfaceVariable const lcmd_var_CAN_TEST_2_IN_2 =
INIT_RISMDInterfaceVariable(lcmd_var_name_CAN_TEST_2_IN_2, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CAN_TEST_2,LC_VD_IN_2), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_CAN_TEST_2___16_TO_LWORD[] = "__16_TO_LWORD";
static RISMDStdVariable const lcmd_var_CAN_TEST_2___16_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_CAN_TEST_2___16_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CAN_TEST_2,LC_VD___16_TO_LWORD));

static char const lcmd_var_name_CAN_TEST_2___18_TO_LWORD[] = "__18_TO_LWORD";
static RISMDStdVariable const lcmd_var_CAN_TEST_2___18_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_CAN_TEST_2___18_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CAN_TEST_2,LC_VD___18_TO_LWORD));

static char const lcmd_var_name_CAN_TEST_2___542_OR[] = "__542_OR";
static RISMDStdVariable const lcmd_var_CAN_TEST_2___542_OR =
INIT_RISMDStdVariable(lcmd_var_name_CAN_TEST_2___542_OR, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CAN_TEST_2,LC_VD___542_OR));

static char const lcmd_var_name_CAN_TEST_2___5_OUTBIT[] = "__5_OUTbit";
static RISMDStdVariable const lcmd_var_CAN_TEST_2___5_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CAN_TEST_2___5_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CAN_TEST_2,LC_VD___5_OUTBIT));

static char const lcmd_var_name_CAN_TEST_2___64_NE[] = "__64_NE";
static RISMDStdVariable const lcmd_var_CAN_TEST_2___64_NE =
INIT_RISMDStdVariable(lcmd_var_name_CAN_TEST_2___64_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CAN_TEST_2,LC_VD___64_NE));

static char const lcmd_var_name_CAN_TEST_2___6_OUTBIT[] = "__6_OUTbit";
static RISMDStdVariable const lcmd_var_CAN_TEST_2___6_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_CAN_TEST_2___6_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CAN_TEST_2,LC_VD___6_OUTBIT));

static RISMDReference const lcmd_var_list_CAN_TEST_2[] =
{
  INIT_RISMDReference(&lcmd_var_CAN_TEST_2_CANSEND3),
  INIT_RISMDReference(&lcmd_var_CAN_TEST_2_CAN_CH),
  INIT_RISMDReference(&lcmd_var_CAN_TEST_2_CAN_ID),
  INIT_RISMDReference(&lcmd_var_CAN_TEST_2_ENO),
  INIT_RISMDReference(&lcmd_var_CAN_TEST_2_IN_1),
  INIT_RISMDReference(&lcmd_var_CAN_TEST_2_IN_2),
  INIT_RISMDReference(&lcmd_var_CAN_TEST_2___16_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_CAN_TEST_2___18_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_CAN_TEST_2___542_OR),
  INIT_RISMDReference(&lcmd_var_CAN_TEST_2___5_OUTBIT),
  INIT_RISMDReference(&lcmd_var_CAN_TEST_2___64_NE),
  INIT_RISMDReference(&lcmd_var_CAN_TEST_2___6_OUTBIT),
};

static char const lcmd_type_name_CAN_TEST_2[] = "CAN_TEST_2";
RISMDPOUType const lcmd_type_CAN_TEST_2 = INIT_RISMDPOUType(lcmd_type_name_CAN_TEST_2, sizeof(LC_TD_FunctionBlock_CAN_TEST_2), 12, lcmd_var_list_CAN_TEST_2);
