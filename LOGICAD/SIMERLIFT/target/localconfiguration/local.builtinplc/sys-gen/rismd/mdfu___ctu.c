#include <RISMD.h>
#include <lcfu_iec61131__CTU.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_CTU_CU[] = "CU";
static RISMDInterfaceVariable const lcmd_var_CTU_CU =
INIT_RISMDInterfaceVariable(lcmd_var_name_CTU_CU, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CTU,LC_VD_CU), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_INT;
static char const lcmd_var_name_CTU_CV[] = "CV";
static RISMDInterfaceVariable const lcmd_var_CTU_CV =
INIT_RISMDInterfaceVariable(lcmd_var_name_CTU_CV, &risMdType_INT, offsetof(LC_TD_FunctionBlock_CTU,LC_VD_CV), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CTU_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_CTU_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_CTU_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CTU,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CTU_PV[] = "PV";
static RISMDInterfaceVariable const lcmd_var_CTU_PV =
INIT_RISMDInterfaceVariable(lcmd_var_name_CTU_PV, &risMdType_INT, offsetof(LC_TD_FunctionBlock_CTU,LC_VD_PV), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CTU_Q[] = "Q";
static RISMDInterfaceVariable const lcmd_var_CTU_Q =
INIT_RISMDInterfaceVariable(lcmd_var_name_CTU_Q, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CTU,LC_VD_Q), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CTU_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_CTU_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_CTU_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CTU,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_CTU[] =
{
  INIT_RISMDReference(&lcmd_var_CTU_CU),
  INIT_RISMDReference(&lcmd_var_CTU_CV),
  INIT_RISMDReference(&lcmd_var_CTU_ENO),
  INIT_RISMDReference(&lcmd_var_CTU_PV),
  INIT_RISMDReference(&lcmd_var_CTU_Q),
  INIT_RISMDReference(&lcmd_var_CTU_R),
};

static char const lcmd_type_name_CTU[] = "CTU";
RISMDPOUType const lcmd_type_CTU = INIT_RISMDPOUType(lcmd_type_name_CTU, sizeof(LC_TD_FunctionBlock_CTU), 6, lcmd_var_list_CTU);

