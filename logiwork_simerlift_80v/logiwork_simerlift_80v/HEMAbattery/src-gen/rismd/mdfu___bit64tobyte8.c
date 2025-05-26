#include <RISMD.h>
#include <lcfu___bit64tobyte8.h>

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_BIT64TOBYTE8_BIT64[] = "BIT64";
static RISMDInterfaceVariable const lcmd_var_BIT64TOBYTE8_BIT64 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BIT64TOBYTE8_BIT64, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BIT64TOBYTE8,LC_VD_BIT64), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDArrayType const lcmd_type_BIT64TOBYTE8_BYTES8_ARR = INIT_RISMDArrayType(0,7,sizeof(LC_TD_BYTE),&risMdType_BYTE);
static char const lcmd_var_name_BIT64TOBYTE8_BYTES8[] = "BYTES8";
static RISMDInterfaceVariable const lcmd_var_BIT64TOBYTE8_BYTES8 =
INIT_RISMDInterfaceVariable(lcmd_var_name_BIT64TOBYTE8_BYTES8, &lcmd_type_BIT64TOBYTE8_BYTES8_ARR, offsetof(LC_TD_FunctionBlock_BIT64TOBYTE8,LC_VD_BYTES8), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_BIT64TOBYTE8_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_BIT64TOBYTE8_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_BIT64TOBYTE8_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BIT64TOBYTE8,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_BIT64TOBYTE8[] =
{
  INIT_RISMDReference(&lcmd_var_BIT64TOBYTE8_BIT64),
  INIT_RISMDReference(&lcmd_var_BIT64TOBYTE8_BYTES8),
  INIT_RISMDReference(&lcmd_var_BIT64TOBYTE8_ENO),
};

static char const lcmd_type_name_BIT64TOBYTE8[] = "BIT64TOBYTE8";
RISMDPOUType const lcmd_type_BIT64TOBYTE8 = INIT_RISMDPOUType(lcmd_type_name_BIT64TOBYTE8, sizeof(LC_TD_FunctionBlock_BIT64TOBYTE8), 3, lcmd_var_list_BIT64TOBYTE8);
