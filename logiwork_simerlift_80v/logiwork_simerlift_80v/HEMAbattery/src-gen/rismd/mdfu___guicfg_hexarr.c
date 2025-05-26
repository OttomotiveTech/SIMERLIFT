#include <RISMD.h>
#include <lcfu___guicfg_hexarr.h>

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDPointerType const lcmd_type_GUICFG_HEXARR_ARR_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_GUICFG_HEXARR_ARR[] = "ARR";
static RISMDInterfaceVariable const lcmd_var_GUICFG_HEXARR_ARR =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_HEXARR_ARR, &lcmd_type_GUICFG_HEXARR_ARR_PTR, offsetof(LC_TD_FunctionBlock_GUICFG_HEXARR,LC_VD_ARR), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_GUICFG_HEXARR_BUF_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_GUICFG_HEXARR_BUF[] = "BUF";
static RISMDInterfaceVariable const lcmd_var_GUICFG_HEXARR_BUF =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_HEXARR_BUF, &lcmd_type_GUICFG_HEXARR_BUF_PTR, offsetof(LC_TD_FunctionBlock_GUICFG_HEXARR,LC_VD_BUF), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDDerivedType const lcmd_type_GUICFGCODE;
static char const lcmd_var_name_GUICFG_HEXARR_CODE[] = "CODE";
static RISMDInterfaceVariable const lcmd_var_GUICFG_HEXARR_CODE =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_HEXARR_CODE, &lcmd_type_GUICFGCODE, offsetof(LC_TD_FunctionBlock_GUICFG_HEXARR,LC_VD_CODE), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_GUICFG_HEXARR_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_GUICFG_HEXARR_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_HEXARR_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_GUICFG_HEXARR,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_GUICFG_HEXARR_LEN[] = "LEN";
static RISMDInterfaceVariable const lcmd_var_GUICFG_HEXARR_LEN =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_HEXARR_LEN, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_GUICFG_HEXARR,LC_VD_LEN), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_GUICFG_HEXARR_MAX[] = "MAX";
static RISMDInterfaceVariable const lcmd_var_GUICFG_HEXARR_MAX =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_HEXARR_MAX, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_GUICFG_HEXARR,LC_VD_MAX), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_GUICFG_HEXARR_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_GUICFG_HEXARR_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_HEXARR_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_GUICFG_HEXARR,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_GUICFG_HEXARR_R_M[] = "R_M";
static RISMDStdVariable const lcmd_var_GUICFG_HEXARR_R_M =
INIT_RISMDStdVariable(lcmd_var_name_GUICFG_HEXARR_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_GUICFG_HEXARR,LC_VD_R_M));

static RISMDReference const lcmd_var_list_GUICFG_HEXARR[] =
{
  INIT_RISMDReference(&lcmd_var_GUICFG_HEXARR_ARR),
  INIT_RISMDReference(&lcmd_var_GUICFG_HEXARR_BUF),
  INIT_RISMDReference(&lcmd_var_GUICFG_HEXARR_CODE),
  INIT_RISMDReference(&lcmd_var_GUICFG_HEXARR_ENO),
  INIT_RISMDReference(&lcmd_var_GUICFG_HEXARR_LEN),
  INIT_RISMDReference(&lcmd_var_GUICFG_HEXARR_MAX),
  INIT_RISMDReference(&lcmd_var_GUICFG_HEXARR_R),
  INIT_RISMDReference(&lcmd_var_GUICFG_HEXARR_R_M),
};

static char const lcmd_type_name_GUICFG_HEXARR[] = "GUICFG_HEXARR";
RISMDPOUType const lcmd_type_GUICFG_HEXARR = INIT_RISMDPOUType(lcmd_type_name_GUICFG_HEXARR, sizeof(LC_TD_FunctionBlock_GUICFG_HEXARR), 8, lcmd_var_list_GUICFG_HEXARR);
