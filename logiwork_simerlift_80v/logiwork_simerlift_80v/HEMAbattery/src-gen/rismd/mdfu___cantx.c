#include <RISMD.h>
#include <lcfu___cantx.h>

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_CANTX_BOX[] = "BOX";
static RISMDStdVariable const lcmd_var_CANTX_BOX =
INIT_RISMDStdVariable(lcmd_var_name_CANTX_BOX, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CANTX,LC_VD_BOX));

extern RISMDDerivedType const lcmd_type_TMS570_CAN;
static char const lcmd_var_name_CANTX_CH[] = "CH";
static RISMDInterfaceVariable const lcmd_var_CANTX_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANTX_CH, &lcmd_type_TMS570_CAN, offsetof(LC_TD_FunctionBlock_CANTX,LC_VD_CH), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CANTX_CH_M[] = "CH_M";
static RISMDStdVariable const lcmd_var_CANTX_CH_M =
INIT_RISMDStdVariable(lcmd_var_name_CANTX_CH_M, &lcmd_type_TMS570_CAN, offsetof(LC_TD_FunctionBlock_CANTX,LC_VD_CH_M));

static char const lcmd_var_name_CANTX_CTX[] = "CTX";
static RISMDInterfaceVariable const lcmd_var_CANTX_CTX =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANTX_CTX, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CANTX,LC_VD_CTX), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_CANTX_DATA[] = "DATA";
static RISMDInterfaceVariable const lcmd_var_CANTX_DATA =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANTX_DATA, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CANTX,LC_VD_DATA), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CANTX_DLC[] = "DLC";
static RISMDInterfaceVariable const lcmd_var_CANTX_DLC =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANTX_DLC, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CANTX,LC_VD_DLC), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_CANTX_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_CANTX_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANTX_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CANTX,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDDerivedType const lcmd_type_CAN_FORMAT;
static char const lcmd_var_name_CANTX_FMT[] = "FMT";
static RISMDInterfaceVariable const lcmd_var_CANTX_FMT =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANTX_FMT, &lcmd_type_CAN_FORMAT, offsetof(LC_TD_FunctionBlock_CANTX,LC_VD_FMT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CANTX_FMT_M[] = "FMT_M";
static RISMDStdVariable const lcmd_var_CANTX_FMT_M =
INIT_RISMDStdVariable(lcmd_var_name_CANTX_FMT_M, &lcmd_type_CAN_FORMAT, offsetof(LC_TD_FunctionBlock_CANTX,LC_VD_FMT_M));

static char const lcmd_var_name_CANTX_ID[] = "ID";
static RISMDInterfaceVariable const lcmd_var_CANTX_ID =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANTX_ID, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CANTX,LC_VD_ID), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CANTX_ID_M[] = "ID_M";
static RISMDStdVariable const lcmd_var_CANTX_ID_M =
INIT_RISMDStdVariable(lcmd_var_name_CANTX_ID_M, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CANTX,LC_VD_ID_M));

static char const lcmd_var_name_CANTX_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_CANTX_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANTX_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CANTX,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDDerivedType const lcmd_type_CAN_RETCODE;
static char const lcmd_var_name_CANTX_RC[] = "RC";
static RISMDInterfaceVariable const lcmd_var_CANTX_RC =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANTX_RC, &lcmd_type_CAN_RETCODE, offsetof(LC_TD_FunctionBlock_CANTX,LC_VD_RC), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CANTX_R_M[] = "R_M";
static RISMDStdVariable const lcmd_var_CANTX_R_M =
INIT_RISMDStdVariable(lcmd_var_name_CANTX_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CANTX,LC_VD_R_M));

static RISMDReference const lcmd_var_list_CANTX[] =
{
  INIT_RISMDReference(&lcmd_var_CANTX_BOX),
  INIT_RISMDReference(&lcmd_var_CANTX_CH),
  INIT_RISMDReference(&lcmd_var_CANTX_CH_M),
  INIT_RISMDReference(&lcmd_var_CANTX_CTX),
  INIT_RISMDReference(&lcmd_var_CANTX_DATA),
  INIT_RISMDReference(&lcmd_var_CANTX_DLC),
  INIT_RISMDReference(&lcmd_var_CANTX_ENO),
  INIT_RISMDReference(&lcmd_var_CANTX_FMT),
  INIT_RISMDReference(&lcmd_var_CANTX_FMT_M),
  INIT_RISMDReference(&lcmd_var_CANTX_ID),
  INIT_RISMDReference(&lcmd_var_CANTX_ID_M),
  INIT_RISMDReference(&lcmd_var_CANTX_R),
  INIT_RISMDReference(&lcmd_var_CANTX_RC),
  INIT_RISMDReference(&lcmd_var_CANTX_R_M),
};

static char const lcmd_type_name_CANTX[] = "CANTX";
RISMDPOUType const lcmd_type_CANTX = INIT_RISMDPOUType(lcmd_type_name_CANTX, sizeof(LC_TD_FunctionBlock_CANTX), 14, lcmd_var_list_CANTX);
