#include <RISMD.h>
#include <lcfu___byte8tobit64.h>

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_BYTE8TOBIT64_BIT64[] = "BIT64";
static RISMDInterfaceVariable const lcmd_var_BYTE8TOBIT64_BIT64 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BYTE8TOBIT64_BIT64, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BYTE8TOBIT64,LC_VD_BIT64), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDArrayType const lcmd_type_BYTE8TOBIT64_BYTES8_ARR = INIT_RISMDArrayType(0,7,sizeof(LC_TD_BYTE),&risMdType_BYTE);
static char const lcmd_var_name_BYTE8TOBIT64_BYTES8[] = "BYTES8";
static RISMDInterfaceVariable const lcmd_var_BYTE8TOBIT64_BYTES8 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BYTE8TOBIT64_BYTES8, &lcmd_type_BYTE8TOBIT64_BYTES8_ARR, offsetof(LC_TD_FunctionBlock_BYTE8TOBIT64,LC_VD_BYTES8), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_BYTE8TOBIT64_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_BYTE8TOBIT64_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_BYTE8TOBIT64_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BYTE8TOBIT64,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_BYTE8TOBIT64[] =
{
  INIT_RISMDReference(&lcmd_var_BYTE8TOBIT64_BIT64),
  INIT_RISMDReference(&lcmd_var_BYTE8TOBIT64_BYTES8),
  INIT_RISMDReference(&lcmd_var_BYTE8TOBIT64_ENO),
};

static char const lcmd_type_name_BYTE8TOBIT64[] = "BYTE8TOBIT64";
RISMDPOUType const lcmd_type_BYTE8TOBIT64 = INIT_RISMDPOUType(lcmd_type_name_BYTE8TOBIT64, sizeof(LC_TD_FunctionBlock_BYTE8TOBIT64), 3, lcmd_var_list_BYTE8TOBIT64);
