#include <RISMD.h>
#include <lcfu_iec61131__TON.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_TON_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_TON_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_TON_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TON,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_TON_ET[] = "ET";
static RISMDInterfaceVariable const lcmd_var_TON_ET =
INIT_RISMDInterfaceVariable(lcmd_var_name_TON_ET, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_TON,LC_VD_ET), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_TON_IN[] = "IN";
static RISMDInterfaceVariable const lcmd_var_TON_IN =
INIT_RISMDInterfaceVariable(lcmd_var_name_TON_IN, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TON,LC_VD_IN), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_TON_PT[] = "PT";
static RISMDInterfaceVariable const lcmd_var_TON_PT =
INIT_RISMDInterfaceVariable(lcmd_var_name_TON_PT, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_TON,LC_VD_PT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_TON_Q[] = "Q";
static RISMDInterfaceVariable const lcmd_var_TON_Q =
INIT_RISMDInterfaceVariable(lcmd_var_name_TON_Q, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TON,LC_VD_Q), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_TON[] =
{
  INIT_RISMDReference(&lcmd_var_TON_ENO),
  INIT_RISMDReference(&lcmd_var_TON_ET),
  INIT_RISMDReference(&lcmd_var_TON_IN),
  INIT_RISMDReference(&lcmd_var_TON_PT),
  INIT_RISMDReference(&lcmd_var_TON_Q),
};

static char const lcmd_type_name_TON[] = "TON";
RISMDPOUType const lcmd_type_TON = INIT_RISMDPOUType(lcmd_type_name_TON, sizeof(LC_TD_FunctionBlock_TON), 5, lcmd_var_list_TON);

