#include <RISMD.h>
#include <lcfu_iec61131__TOF.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_TOF_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_TOF_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_TOF_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TOF,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_TOF_ET[] = "ET";
static RISMDInterfaceVariable const lcmd_var_TOF_ET =
INIT_RISMDInterfaceVariable(lcmd_var_name_TOF_ET, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_TOF,LC_VD_ET), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_TOF_IN[] = "IN";
static RISMDInterfaceVariable const lcmd_var_TOF_IN =
INIT_RISMDInterfaceVariable(lcmd_var_name_TOF_IN, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TOF,LC_VD_IN), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_TOF_PT[] = "PT";
static RISMDInterfaceVariable const lcmd_var_TOF_PT =
INIT_RISMDInterfaceVariable(lcmd_var_name_TOF_PT, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_TOF,LC_VD_PT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_TOF_Q[] = "Q";
static RISMDInterfaceVariable const lcmd_var_TOF_Q =
INIT_RISMDInterfaceVariable(lcmd_var_name_TOF_Q, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TOF,LC_VD_Q), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_TOF[] =
{
  INIT_RISMDReference(&lcmd_var_TOF_ENO),
  INIT_RISMDReference(&lcmd_var_TOF_ET),
  INIT_RISMDReference(&lcmd_var_TOF_IN),
  INIT_RISMDReference(&lcmd_var_TOF_PT),
  INIT_RISMDReference(&lcmd_var_TOF_Q),
};

static char const lcmd_type_name_TOF[] = "TOF";
RISMDPOUType const lcmd_type_TOF = INIT_RISMDPOUType(lcmd_type_name_TOF, sizeof(LC_TD_FunctionBlock_TOF), 5, lcmd_var_list_TOF);

