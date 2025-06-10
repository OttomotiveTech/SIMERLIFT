#include <RISMD.h>
#include <lcfu_iec61131__TP.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_TP_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_TP_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_TP_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TP,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_TP_ET[] = "ET";
static RISMDInterfaceVariable const lcmd_var_TP_ET =
INIT_RISMDInterfaceVariable(lcmd_var_name_TP_ET, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_TP,LC_VD_ET), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_TP_IN[] = "IN";
static RISMDInterfaceVariable const lcmd_var_TP_IN =
INIT_RISMDInterfaceVariable(lcmd_var_name_TP_IN, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TP,LC_VD_IN), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_TP_PT[] = "PT";
static RISMDInterfaceVariable const lcmd_var_TP_PT =
INIT_RISMDInterfaceVariable(lcmd_var_name_TP_PT, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_TP,LC_VD_PT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_TP_Q[] = "Q";
static RISMDInterfaceVariable const lcmd_var_TP_Q =
INIT_RISMDInterfaceVariable(lcmd_var_name_TP_Q, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TP,LC_VD_Q), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_TP[] =
{
  INIT_RISMDReference(&lcmd_var_TP_ENO),
  INIT_RISMDReference(&lcmd_var_TP_ET),
  INIT_RISMDReference(&lcmd_var_TP_IN),
  INIT_RISMDReference(&lcmd_var_TP_PT),
  INIT_RISMDReference(&lcmd_var_TP_Q),
};

static char const lcmd_type_name_TP[] = "TP";
RISMDPOUType const lcmd_type_TP = INIT_RISMDPOUType(lcmd_type_name_TP, sizeof(LC_TD_FunctionBlock_TP), 5, lcmd_var_list_TP);

