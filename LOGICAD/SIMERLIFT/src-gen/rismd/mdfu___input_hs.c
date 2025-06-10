#include <RISMD.h>
#include <lcfu___input_hs.h>

extern RISMDPOUType const lcmd_type_ANLG;
static char const lcmd_var_name_INPUT_HS_ANLG1[] = "ANLG1";
static RISMDStdVariable const lcmd_var_INPUT_HS_ANLG1 =
INIT_RISMDStdVariable(lcmd_var_name_INPUT_HS_ANLG1, &lcmd_type_ANLG, offsetof(LC_TD_FunctionBlock_INPUT_HS,LC_VD_ANLG1));

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_INPUT_HS_CH[] = "CH";
static RISMDInterfaceVariable const lcmd_var_INPUT_HS_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_INPUT_HS_CH, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_INPUT_HS,LC_VD_CH), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_INPUT_HS_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_INPUT_HS_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_INPUT_HS_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_INPUT_HS,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_INPUT_HS_O[] = "O";
static RISMDInterfaceVariable const lcmd_var_INPUT_HS_O =
INIT_RISMDInterfaceVariable(lcmd_var_name_INPUT_HS_O, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_INPUT_HS,LC_VD_O), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_INPUT_HS___5_GE[] = "__5_GE";
static RISMDStdVariable const lcmd_var_INPUT_HS___5_GE =
INIT_RISMDStdVariable(lcmd_var_name_INPUT_HS___5_GE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_INPUT_HS,LC_VD___5_GE));

static RISMDReference const lcmd_var_list_INPUT_HS[] =
{
  INIT_RISMDReference(&lcmd_var_INPUT_HS_ANLG1),
  INIT_RISMDReference(&lcmd_var_INPUT_HS_CH),
  INIT_RISMDReference(&lcmd_var_INPUT_HS_ENO),
  INIT_RISMDReference(&lcmd_var_INPUT_HS_O),
  INIT_RISMDReference(&lcmd_var_INPUT_HS___5_GE),
};

static char const lcmd_type_name_INPUT_HS[] = "INPUT_HS";
RISMDPOUType const lcmd_type_INPUT_HS = INIT_RISMDPOUType(lcmd_type_name_INPUT_HS, sizeof(LC_TD_FunctionBlock_INPUT_HS), 5, lcmd_var_list_INPUT_HS);
