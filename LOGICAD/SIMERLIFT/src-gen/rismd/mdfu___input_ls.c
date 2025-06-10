#include <RISMD.h>
#include <lcfu___input_ls.h>

extern RISMDPOUType const lcmd_type_ANLG;
static char const lcmd_var_name_INPUT_LS_ANLG1[] = "ANLG1";
static RISMDStdVariable const lcmd_var_INPUT_LS_ANLG1 =
INIT_RISMDStdVariable(lcmd_var_name_INPUT_LS_ANLG1, &lcmd_type_ANLG, offsetof(LC_TD_FunctionBlock_INPUT_LS,LC_VD_ANLG1));

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_INPUT_LS_CH[] = "CH";
static RISMDInterfaceVariable const lcmd_var_INPUT_LS_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_INPUT_LS_CH, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_INPUT_LS,LC_VD_CH), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_INPUT_LS_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_INPUT_LS_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_INPUT_LS_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_INPUT_LS,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_INPUT_LS_O[] = "O";
static RISMDInterfaceVariable const lcmd_var_INPUT_LS_O =
INIT_RISMDInterfaceVariable(lcmd_var_name_INPUT_LS_O, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_INPUT_LS,LC_VD_O), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_INPUT_LS___6_LE[] = "__6_LE";
static RISMDStdVariable const lcmd_var_INPUT_LS___6_LE =
INIT_RISMDStdVariable(lcmd_var_name_INPUT_LS___6_LE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_INPUT_LS,LC_VD___6_LE));

static RISMDReference const lcmd_var_list_INPUT_LS[] =
{
  INIT_RISMDReference(&lcmd_var_INPUT_LS_ANLG1),
  INIT_RISMDReference(&lcmd_var_INPUT_LS_CH),
  INIT_RISMDReference(&lcmd_var_INPUT_LS_ENO),
  INIT_RISMDReference(&lcmd_var_INPUT_LS_O),
  INIT_RISMDReference(&lcmd_var_INPUT_LS___6_LE),
};

static char const lcmd_type_name_INPUT_LS[] = "INPUT_LS";
RISMDPOUType const lcmd_type_INPUT_LS = INIT_RISMDPOUType(lcmd_type_name_INPUT_LS, sizeof(LC_TD_FunctionBlock_INPUT_LS), 5, lcmd_var_list_INPUT_LS);
