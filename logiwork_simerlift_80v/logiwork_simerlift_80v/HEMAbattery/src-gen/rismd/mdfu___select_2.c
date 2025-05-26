#include <RISMD.h>
#include <lcfu___select_2.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_SELECT_2_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_SELECT_2_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_SELECT_2_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SELECT_2,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BYTE;
static char const lcmd_var_name_SELECT_2_I[] = "i";
static RISMDInterfaceVariable const lcmd_var_SELECT_2_I =
INIT_RISMDInterfaceVariable(lcmd_var_name_SELECT_2_I, &risMdType_BYTE, offsetof(LC_TD_FunctionBlock_SELECT_2,LC_VD_I), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_WORD;
static char const lcmd_var_name_SELECT_2_IN0[] = "In0";
static RISMDInterfaceVariable const lcmd_var_SELECT_2_IN0 =
INIT_RISMDInterfaceVariable(lcmd_var_name_SELECT_2_IN0, &risMdType_WORD, offsetof(LC_TD_FunctionBlock_SELECT_2,LC_VD_IN0), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SELECT_2_IN1[] = "In1";
static RISMDInterfaceVariable const lcmd_var_SELECT_2_IN1 =
INIT_RISMDInterfaceVariable(lcmd_var_name_SELECT_2_IN1, &risMdType_WORD, offsetof(LC_TD_FunctionBlock_SELECT_2,LC_VD_IN1), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SELECT_2_Q[] = "Q";
static RISMDInterfaceVariable const lcmd_var_SELECT_2_Q =
INIT_RISMDInterfaceVariable(lcmd_var_name_SELECT_2_Q, &risMdType_WORD, offsetof(LC_TD_FunctionBlock_SELECT_2,LC_VD_Q), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_SELECT_2_S0[] = "S0";
static RISMDInterfaceVariable const lcmd_var_SELECT_2_S0 =
INIT_RISMDInterfaceVariable(lcmd_var_name_SELECT_2_S0, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SELECT_2,LC_VD_S0), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SELECT_2_S1[] = "S1";
static RISMDInterfaceVariable const lcmd_var_SELECT_2_S1 =
INIT_RISMDInterfaceVariable(lcmd_var_name_SELECT_2_S1, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SELECT_2,LC_VD_S1), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SELECT_2___19_SEL_WORD[] = "__19_SEL_WORD";
static RISMDStdVariable const lcmd_var_SELECT_2___19_SEL_WORD =
INIT_RISMDStdVariable(lcmd_var_name_SELECT_2___19_SEL_WORD, &risMdType_WORD, offsetof(LC_TD_FunctionBlock_SELECT_2,LC_VD___19_SEL_WORD));

static char const lcmd_var_name_SELECT_2___22_SEL_WORD[] = "__22_SEL_WORD";
static RISMDStdVariable const lcmd_var_SELECT_2___22_SEL_WORD =
INIT_RISMDStdVariable(lcmd_var_name_SELECT_2___22_SEL_WORD, &risMdType_WORD, offsetof(LC_TD_FunctionBlock_SELECT_2,LC_VD___22_SEL_WORD));

static RISMDReference const lcmd_var_list_SELECT_2[] =
{
  INIT_RISMDReference(&lcmd_var_SELECT_2_ENO),
  INIT_RISMDReference(&lcmd_var_SELECT_2_I),
  INIT_RISMDReference(&lcmd_var_SELECT_2_IN0),
  INIT_RISMDReference(&lcmd_var_SELECT_2_IN1),
  INIT_RISMDReference(&lcmd_var_SELECT_2_Q),
  INIT_RISMDReference(&lcmd_var_SELECT_2_S0),
  INIT_RISMDReference(&lcmd_var_SELECT_2_S1),
  INIT_RISMDReference(&lcmd_var_SELECT_2___19_SEL_WORD),
  INIT_RISMDReference(&lcmd_var_SELECT_2___22_SEL_WORD),
};

static char const lcmd_type_name_SELECT_2[] = "SELECT_2";
RISMDPOUType const lcmd_type_SELECT_2 = INIT_RISMDPOUType(lcmd_type_name_SELECT_2, sizeof(LC_TD_FunctionBlock_SELECT_2), 9, lcmd_var_list_SELECT_2);
