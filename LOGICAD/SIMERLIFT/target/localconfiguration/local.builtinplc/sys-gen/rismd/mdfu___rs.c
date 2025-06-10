#include <RISMD.h>
#include <lcfu_iec61131__RS.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_RS_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_RS_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_RS_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RS,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_RS_Q1[] = "Q1";
static RISMDInterfaceVariable const lcmd_var_RS_Q1 =
INIT_RISMDInterfaceVariable(lcmd_var_name_RS_Q1, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RS,LC_VD_Q1), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_RS_R1[] = "R1";
static RISMDInterfaceVariable const lcmd_var_RS_R1 =
INIT_RISMDInterfaceVariable(lcmd_var_name_RS_R1, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RS,LC_VD_R1), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_RS_S[] = "S";
static RISMDInterfaceVariable const lcmd_var_RS_S =
INIT_RISMDInterfaceVariable(lcmd_var_name_RS_S, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RS,LC_VD_S), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_RS[] =
{
  INIT_RISMDReference(&lcmd_var_RS_ENO),
  INIT_RISMDReference(&lcmd_var_RS_Q1),
  INIT_RISMDReference(&lcmd_var_RS_R1),
  INIT_RISMDReference(&lcmd_var_RS_S),
};

static char const lcmd_type_name_RS[] = "RS";
RISMDPOUType const lcmd_type_RS = INIT_RISMDPOUType(lcmd_type_name_RS, sizeof(LC_TD_FunctionBlock_RS), 4, lcmd_var_list_RS);

