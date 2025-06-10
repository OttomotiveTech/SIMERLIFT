#include <RISMD.h>
#include <lcfu___guicfg_intarr.h>

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDPointerType const lcmd_type_GUICFG_INTARR_ARR_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_GUICFG_INTARR_ARR[] = "ARR";
static RISMDInterfaceVariable const lcmd_var_GUICFG_INTARR_ARR =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_INTARR_ARR, &lcmd_type_GUICFG_INTARR_ARR_PTR, offsetof(LC_TD_FunctionBlock_GUICFG_INTARR,LC_VD_ARR), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_GUICFG_INTARR_BUF_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_GUICFG_INTARR_BUF[] = "BUF";
static RISMDInterfaceVariable const lcmd_var_GUICFG_INTARR_BUF =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_INTARR_BUF, &lcmd_type_GUICFG_INTARR_BUF_PTR, offsetof(LC_TD_FunctionBlock_GUICFG_INTARR,LC_VD_BUF), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDDerivedType const lcmd_type_GUICFGCODE;
static char const lcmd_var_name_GUICFG_INTARR_CODE[] = "CODE";
static RISMDInterfaceVariable const lcmd_var_GUICFG_INTARR_CODE =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_INTARR_CODE, &lcmd_type_GUICFGCODE, offsetof(LC_TD_FunctionBlock_GUICFG_INTARR,LC_VD_CODE), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_GUICFG_INTARR_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_GUICFG_INTARR_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_INTARR_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_GUICFG_INTARR,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_GUICFG_INTARR_LEN[] = "LEN";
static RISMDInterfaceVariable const lcmd_var_GUICFG_INTARR_LEN =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_INTARR_LEN, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_GUICFG_INTARR,LC_VD_LEN), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_GUICFG_INTARR_MAX[] = "MAX";
static RISMDInterfaceVariable const lcmd_var_GUICFG_INTARR_MAX =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_INTARR_MAX, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_GUICFG_INTARR,LC_VD_MAX), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_GUICFG_INTARR_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_GUICFG_INTARR_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_INTARR_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_GUICFG_INTARR,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_GUICFG_INTARR_R_M[] = "R_M";
static RISMDStdVariable const lcmd_var_GUICFG_INTARR_R_M =
INIT_RISMDStdVariable(lcmd_var_name_GUICFG_INTARR_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_GUICFG_INTARR,LC_VD_R_M));

static RISMDReference const lcmd_var_list_GUICFG_INTARR[] =
{
  INIT_RISMDReference(&lcmd_var_GUICFG_INTARR_ARR),
  INIT_RISMDReference(&lcmd_var_GUICFG_INTARR_BUF),
  INIT_RISMDReference(&lcmd_var_GUICFG_INTARR_CODE),
  INIT_RISMDReference(&lcmd_var_GUICFG_INTARR_ENO),
  INIT_RISMDReference(&lcmd_var_GUICFG_INTARR_LEN),
  INIT_RISMDReference(&lcmd_var_GUICFG_INTARR_MAX),
  INIT_RISMDReference(&lcmd_var_GUICFG_INTARR_R),
  INIT_RISMDReference(&lcmd_var_GUICFG_INTARR_R_M),
};

static char const lcmd_type_name_GUICFG_INTARR[] = "GUICFG_INTARR";
RISMDPOUType const lcmd_type_GUICFG_INTARR = INIT_RISMDPOUType(lcmd_type_name_GUICFG_INTARR, sizeof(LC_TD_FunctionBlock_GUICFG_INTARR), 8, lcmd_var_list_GUICFG_INTARR);
