#include <RISMD.h>
#include <lcfu___select_4.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_SELECT_4_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_SELECT_4_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_SELECT_4_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SELECT_4,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_WORD;
static char const lcmd_var_name_SELECT_4_I[] = "i";
static RISMDInterfaceVariable const lcmd_var_SELECT_4_I =
INIT_RISMDInterfaceVariable(lcmd_var_name_SELECT_4_I, &risMdType_WORD, offsetof(LC_TD_FunctionBlock_SELECT_4,LC_VD_I), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SELECT_4_IN0[] = "In0";
static RISMDInterfaceVariable const lcmd_var_SELECT_4_IN0 =
INIT_RISMDInterfaceVariable(lcmd_var_name_SELECT_4_IN0, &risMdType_WORD, offsetof(LC_TD_FunctionBlock_SELECT_4,LC_VD_IN0), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SELECT_4_IN1[] = "In1";
static RISMDInterfaceVariable const lcmd_var_SELECT_4_IN1 =
INIT_RISMDInterfaceVariable(lcmd_var_name_SELECT_4_IN1, &risMdType_WORD, offsetof(LC_TD_FunctionBlock_SELECT_4,LC_VD_IN1), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SELECT_4_IN2[] = "In2";
static RISMDInterfaceVariable const lcmd_var_SELECT_4_IN2 =
INIT_RISMDInterfaceVariable(lcmd_var_name_SELECT_4_IN2, &risMdType_WORD, offsetof(LC_TD_FunctionBlock_SELECT_4,LC_VD_IN2), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SELECT_4_IN3[] = "In3";
static RISMDInterfaceVariable const lcmd_var_SELECT_4_IN3 =
INIT_RISMDInterfaceVariable(lcmd_var_name_SELECT_4_IN3, &risMdType_WORD, offsetof(LC_TD_FunctionBlock_SELECT_4,LC_VD_IN3), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SELECT_4_Q[] = "Q";
static RISMDInterfaceVariable const lcmd_var_SELECT_4_Q =
INIT_RISMDInterfaceVariable(lcmd_var_name_SELECT_4_Q, &risMdType_WORD, offsetof(LC_TD_FunctionBlock_SELECT_4,LC_VD_Q), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_SELECT_4_S0[] = "S0";
static RISMDInterfaceVariable const lcmd_var_SELECT_4_S0 =
INIT_RISMDInterfaceVariable(lcmd_var_name_SELECT_4_S0, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SELECT_4,LC_VD_S0), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SELECT_4_S1[] = "S1";
static RISMDInterfaceVariable const lcmd_var_SELECT_4_S1 =
INIT_RISMDInterfaceVariable(lcmd_var_name_SELECT_4_S1, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SELECT_4,LC_VD_S1), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SELECT_4_S2[] = "S2";
static RISMDInterfaceVariable const lcmd_var_SELECT_4_S2 =
INIT_RISMDInterfaceVariable(lcmd_var_name_SELECT_4_S2, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SELECT_4,LC_VD_S2), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SELECT_4_S3[] = "S3";
static RISMDInterfaceVariable const lcmd_var_SELECT_4_S3 =
INIT_RISMDInterfaceVariable(lcmd_var_name_SELECT_4_S3, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SELECT_4,LC_VD_S3), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SELECT_4___19_SEL_WORD[] = "__19_SEL_WORD";
static RISMDStdVariable const lcmd_var_SELECT_4___19_SEL_WORD =
INIT_RISMDStdVariable(lcmd_var_name_SELECT_4___19_SEL_WORD, &risMdType_WORD, offsetof(LC_TD_FunctionBlock_SELECT_4,LC_VD___19_SEL_WORD));

static char const lcmd_var_name_SELECT_4___22_SEL_WORD[] = "__22_SEL_WORD";
static RISMDStdVariable const lcmd_var_SELECT_4___22_SEL_WORD =
INIT_RISMDStdVariable(lcmd_var_name_SELECT_4___22_SEL_WORD, &risMdType_WORD, offsetof(LC_TD_FunctionBlock_SELECT_4,LC_VD___22_SEL_WORD));

static char const lcmd_var_name_SELECT_4___24_SEL_WORD[] = "__24_SEL_WORD";
static RISMDStdVariable const lcmd_var_SELECT_4___24_SEL_WORD =
INIT_RISMDStdVariable(lcmd_var_name_SELECT_4___24_SEL_WORD, &risMdType_WORD, offsetof(LC_TD_FunctionBlock_SELECT_4,LC_VD___24_SEL_WORD));

static char const lcmd_var_name_SELECT_4___26_SEL_WORD[] = "__26_SEL_WORD";
static RISMDStdVariable const lcmd_var_SELECT_4___26_SEL_WORD =
INIT_RISMDStdVariable(lcmd_var_name_SELECT_4___26_SEL_WORD, &risMdType_WORD, offsetof(LC_TD_FunctionBlock_SELECT_4,LC_VD___26_SEL_WORD));

static RISMDReference const lcmd_var_list_SELECT_4[] =
{
  INIT_RISMDReference(&lcmd_var_SELECT_4_ENO),
  INIT_RISMDReference(&lcmd_var_SELECT_4_I),
  INIT_RISMDReference(&lcmd_var_SELECT_4_IN0),
  INIT_RISMDReference(&lcmd_var_SELECT_4_IN1),
  INIT_RISMDReference(&lcmd_var_SELECT_4_IN2),
  INIT_RISMDReference(&lcmd_var_SELECT_4_IN3),
  INIT_RISMDReference(&lcmd_var_SELECT_4_Q),
  INIT_RISMDReference(&lcmd_var_SELECT_4_S0),
  INIT_RISMDReference(&lcmd_var_SELECT_4_S1),
  INIT_RISMDReference(&lcmd_var_SELECT_4_S2),
  INIT_RISMDReference(&lcmd_var_SELECT_4_S3),
  INIT_RISMDReference(&lcmd_var_SELECT_4___19_SEL_WORD),
  INIT_RISMDReference(&lcmd_var_SELECT_4___22_SEL_WORD),
  INIT_RISMDReference(&lcmd_var_SELECT_4___24_SEL_WORD),
  INIT_RISMDReference(&lcmd_var_SELECT_4___26_SEL_WORD),
};

static char const lcmd_type_name_SELECT_4[] = "SELECT_4";
RISMDPOUType const lcmd_type_SELECT_4 = INIT_RISMDPOUType(lcmd_type_name_SELECT_4, sizeof(LC_TD_FunctionBlock_SELECT_4), 15, lcmd_var_list_SELECT_4);
