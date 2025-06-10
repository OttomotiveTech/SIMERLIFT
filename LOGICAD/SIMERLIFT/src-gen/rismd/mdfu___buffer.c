#include <RISMD.h>
#include <lcfu___buffer.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_BUFFER_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_BUFFER_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_BUFFER_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BUFFER,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BUFFER_I[] = "I";
static RISMDInterfaceVariable const lcmd_var_BUFFER_I =
INIT_RISMDInterfaceVariable(lcmd_var_name_BUFFER_I, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BUFFER,LC_VD_I), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BUFFER_O[] = "O";
static RISMDInterfaceVariable const lcmd_var_BUFFER_O =
INIT_RISMDInterfaceVariable(lcmd_var_name_BUFFER_O, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BUFFER,LC_VD_O), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_TOF;
static char const lcmd_var_name_BUFFER_TOF1[] = "TOF1";
static RISMDStdVariable const lcmd_var_BUFFER_TOF1 =
INIT_RISMDStdVariable(lcmd_var_name_BUFFER_TOF1, &lcmd_type_TOF, offsetof(LC_TD_FunctionBlock_BUFFER,LC_VD_TOF1));

extern RISMDPOUType const lcmd_type_TON;
static char const lcmd_var_name_BUFFER_TON1[] = "TON1";
static RISMDStdVariable const lcmd_var_BUFFER_TON1 =
INIT_RISMDStdVariable(lcmd_var_name_BUFFER_TON1, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_BUFFER,LC_VD_TON1));

static RISMDReference const lcmd_var_list_BUFFER[] =
{
  INIT_RISMDReference(&lcmd_var_BUFFER_ENO),
  INIT_RISMDReference(&lcmd_var_BUFFER_I),
  INIT_RISMDReference(&lcmd_var_BUFFER_O),
  INIT_RISMDReference(&lcmd_var_BUFFER_TOF1),
  INIT_RISMDReference(&lcmd_var_BUFFER_TON1),
};

static char const lcmd_type_name_BUFFER[] = "BUFFER";
RISMDPOUType const lcmd_type_BUFFER = INIT_RISMDPOUType(lcmd_type_name_BUFFER, sizeof(LC_TD_FunctionBlock_BUFFER), 5, lcmd_var_list_BUFFER);
