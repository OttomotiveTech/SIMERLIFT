#include <RISMD.h>
#include <lcfu___tbuffer.h>

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_TBUFFER_D[] = "D";
static RISMDInterfaceVariable const lcmd_var_TBUFFER_D =
INIT_RISMDInterfaceVariable(lcmd_var_name_TBUFFER_D, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_TBUFFER,LC_VD_D), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_TBUFFER_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_TBUFFER_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_TBUFFER_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TBUFFER,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_TBUFFER_I[] = "I";
static RISMDInterfaceVariable const lcmd_var_TBUFFER_I =
INIT_RISMDInterfaceVariable(lcmd_var_name_TBUFFER_I, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TBUFFER,LC_VD_I), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_TBUFFER_O[] = "O";
static RISMDInterfaceVariable const lcmd_var_TBUFFER_O =
INIT_RISMDInterfaceVariable(lcmd_var_name_TBUFFER_O, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TBUFFER,LC_VD_O), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_TOF;
static char const lcmd_var_name_TBUFFER_TOF1[] = "TOF1";
static RISMDStdVariable const lcmd_var_TBUFFER_TOF1 =
INIT_RISMDStdVariable(lcmd_var_name_TBUFFER_TOF1, &lcmd_type_TOF, offsetof(LC_TD_FunctionBlock_TBUFFER,LC_VD_TOF1));

extern RISMDPOUType const lcmd_type_TON;
static char const lcmd_var_name_TBUFFER_TON1[] = "TON1";
static RISMDStdVariable const lcmd_var_TBUFFER_TON1 =
INIT_RISMDStdVariable(lcmd_var_name_TBUFFER_TON1, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_TBUFFER,LC_VD_TON1));

static RISMDReference const lcmd_var_list_TBUFFER[] =
{
  INIT_RISMDReference(&lcmd_var_TBUFFER_D),
  INIT_RISMDReference(&lcmd_var_TBUFFER_ENO),
  INIT_RISMDReference(&lcmd_var_TBUFFER_I),
  INIT_RISMDReference(&lcmd_var_TBUFFER_O),
  INIT_RISMDReference(&lcmd_var_TBUFFER_TOF1),
  INIT_RISMDReference(&lcmd_var_TBUFFER_TON1),
};

static char const lcmd_type_name_TBUFFER[] = "TBUFFER";
RISMDPOUType const lcmd_type_TBUFFER = INIT_RISMDPOUType(lcmd_type_name_TBUFFER, sizeof(LC_TD_FunctionBlock_TBUFFER), 6, lcmd_var_list_TBUFFER);
