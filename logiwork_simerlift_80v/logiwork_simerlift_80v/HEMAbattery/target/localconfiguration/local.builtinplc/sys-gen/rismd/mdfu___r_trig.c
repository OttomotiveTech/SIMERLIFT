#include <RISMD.h>
#include <lcfu_iec61131__R_TRIG.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_R_TRIG_CLK[] = "CLK";
static RISMDInterfaceVariable const lcmd_var_R_TRIG_CLK =
INIT_RISMDInterfaceVariable(lcmd_var_name_R_TRIG_CLK, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_R_TRIG,LC_VD_CLK), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_R_TRIG_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_R_TRIG_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_R_TRIG_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_R_TRIG,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_R_TRIG_Q[] = "Q";
static RISMDInterfaceVariable const lcmd_var_R_TRIG_Q =
INIT_RISMDInterfaceVariable(lcmd_var_name_R_TRIG_Q, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_R_TRIG,LC_VD_Q), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_R_TRIG[] =
{
  INIT_RISMDReference(&lcmd_var_R_TRIG_CLK),
  INIT_RISMDReference(&lcmd_var_R_TRIG_ENO),
  INIT_RISMDReference(&lcmd_var_R_TRIG_Q),
};

static char const lcmd_type_name_R_TRIG[] = "R_TRIG";
RISMDPOUType const lcmd_type_R_TRIG = INIT_RISMDPOUType(lcmd_type_name_R_TRIG, sizeof(LC_TD_FunctionBlock_R_TRIG), 3, lcmd_var_list_R_TRIG);

