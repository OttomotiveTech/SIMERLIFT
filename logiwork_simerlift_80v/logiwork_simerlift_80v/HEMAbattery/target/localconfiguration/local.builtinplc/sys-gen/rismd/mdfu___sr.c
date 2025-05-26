#include <RISMD.h>
#include <lcfu_iec61131__SR.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_SR_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_SR_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_SR_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SR,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_SR_Q1[] = "Q1";
static RISMDInterfaceVariable const lcmd_var_SR_Q1 =
INIT_RISMDInterfaceVariable(lcmd_var_name_SR_Q1, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SR,LC_VD_Q1), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_SR_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_SR_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_SR_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SR,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SR_S1[] = "S1";
static RISMDInterfaceVariable const lcmd_var_SR_S1 =
INIT_RISMDInterfaceVariable(lcmd_var_name_SR_S1, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SR,LC_VD_S1), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_SR[] =
{
  INIT_RISMDReference(&lcmd_var_SR_ENO),
  INIT_RISMDReference(&lcmd_var_SR_Q1),
  INIT_RISMDReference(&lcmd_var_SR_R),
  INIT_RISMDReference(&lcmd_var_SR_S1),
};

static char const lcmd_type_name_SR[] = "SR";
RISMDPOUType const lcmd_type_SR = INIT_RISMDPOUType(lcmd_type_name_SR, sizeof(LC_TD_FunctionBlock_SR), 4, lcmd_var_list_SR);

