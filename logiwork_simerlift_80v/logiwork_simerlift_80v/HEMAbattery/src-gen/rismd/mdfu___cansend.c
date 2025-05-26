#include <RISMD.h>
#include <lcfu___cansend.h>

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_CANSEND_BOX[] = "BOX";
static RISMDStdVariable const lcmd_var_CANSEND_BOX =
INIT_RISMDStdVariable(lcmd_var_name_CANSEND_BOX, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CANSEND,LC_VD_BOX));

extern RISMDDerivedType const lcmd_type_TMS570_CAN;
static char const lcmd_var_name_CANSEND_CH[] = "CH";
static RISMDInterfaceVariable const lcmd_var_CANSEND_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANSEND_CH, &lcmd_type_TMS570_CAN, offsetof(LC_TD_FunctionBlock_CANSEND,LC_VD_CH), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CANSEND_CH_M[] = "CH_M";
static RISMDStdVariable const lcmd_var_CANSEND_CH_M =
INIT_RISMDStdVariable(lcmd_var_name_CANSEND_CH_M, &lcmd_type_TMS570_CAN, offsetof(LC_TD_FunctionBlock_CANSEND,LC_VD_CH_M));

static char const lcmd_var_name_CANSEND_CTX[] = "CTX";
static RISMDInterfaceVariable const lcmd_var_CANSEND_CTX =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANSEND_CTX, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CANSEND,LC_VD_CTX), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_CANSEND_DATA[] = "DATA";
static RISMDInterfaceVariable const lcmd_var_CANSEND_DATA =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANSEND_DATA, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CANSEND,LC_VD_DATA), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CANSEND_DLC[] = "DLC";
static RISMDInterfaceVariable const lcmd_var_CANSEND_DLC =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANSEND_DLC, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CANSEND,LC_VD_DLC), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_CANSEND_ENB[] = "ENB";
static RISMDInterfaceVariable const lcmd_var_CANSEND_ENB =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANSEND_ENB, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CANSEND,LC_VD_ENB), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CANSEND_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_CANSEND_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANSEND_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CANSEND,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDDerivedType const lcmd_type_CAN_FORMAT;
static char const lcmd_var_name_CANSEND_FMT[] = "FMT";
static RISMDInterfaceVariable const lcmd_var_CANSEND_FMT =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANSEND_FMT, &lcmd_type_CAN_FORMAT, offsetof(LC_TD_FunctionBlock_CANSEND,LC_VD_FMT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CANSEND_FMT_M[] = "FMT_M";
static RISMDStdVariable const lcmd_var_CANSEND_FMT_M =
INIT_RISMDStdVariable(lcmd_var_name_CANSEND_FMT_M, &lcmd_type_CAN_FORMAT, offsetof(LC_TD_FunctionBlock_CANSEND,LC_VD_FMT_M));

static char const lcmd_var_name_CANSEND_ID[] = "ID";
static RISMDInterfaceVariable const lcmd_var_CANSEND_ID =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANSEND_ID, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CANSEND,LC_VD_ID), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CANSEND_ID_M[] = "ID_M";
static RISMDStdVariable const lcmd_var_CANSEND_ID_M =
INIT_RISMDStdVariable(lcmd_var_name_CANSEND_ID_M, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CANSEND,LC_VD_ID_M));

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_CANSEND_PER[] = "PER";
static RISMDInterfaceVariable const lcmd_var_CANSEND_PER =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANSEND_PER, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_CANSEND,LC_VD_PER), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDDerivedType const lcmd_type_CAN_RETCODE;
static char const lcmd_var_name_CANSEND_RC[] = "RC";
static RISMDInterfaceVariable const lcmd_var_CANSEND_RC =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANSEND_RC, &lcmd_type_CAN_RETCODE, offsetof(LC_TD_FunctionBlock_CANSEND,LC_VD_RC), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CANSEND_STARTT[] = "STARTT";
static RISMDStdVariable const lcmd_var_CANSEND_STARTT =
INIT_RISMDStdVariable(lcmd_var_name_CANSEND_STARTT, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_CANSEND,LC_VD_STARTT));

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_CANSEND_STATE[] = "STATE";
static RISMDStdVariable const lcmd_var_CANSEND_STATE =
INIT_RISMDStdVariable(lcmd_var_name_CANSEND_STATE, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_CANSEND,LC_VD_STATE));

static RISMDReference const lcmd_var_list_CANSEND[] =
{
  INIT_RISMDReference(&lcmd_var_CANSEND_BOX),
  INIT_RISMDReference(&lcmd_var_CANSEND_CH),
  INIT_RISMDReference(&lcmd_var_CANSEND_CH_M),
  INIT_RISMDReference(&lcmd_var_CANSEND_CTX),
  INIT_RISMDReference(&lcmd_var_CANSEND_DATA),
  INIT_RISMDReference(&lcmd_var_CANSEND_DLC),
  INIT_RISMDReference(&lcmd_var_CANSEND_ENB),
  INIT_RISMDReference(&lcmd_var_CANSEND_ENO),
  INIT_RISMDReference(&lcmd_var_CANSEND_FMT),
  INIT_RISMDReference(&lcmd_var_CANSEND_FMT_M),
  INIT_RISMDReference(&lcmd_var_CANSEND_ID),
  INIT_RISMDReference(&lcmd_var_CANSEND_ID_M),
  INIT_RISMDReference(&lcmd_var_CANSEND_PER),
  INIT_RISMDReference(&lcmd_var_CANSEND_RC),
  INIT_RISMDReference(&lcmd_var_CANSEND_STARTT),
  INIT_RISMDReference(&lcmd_var_CANSEND_STATE),
};

static char const lcmd_type_name_CANSEND[] = "CANSEND";
RISMDPOUType const lcmd_type_CANSEND = INIT_RISMDPOUType(lcmd_type_name_CANSEND, sizeof(LC_TD_FunctionBlock_CANSEND), 16, lcmd_var_list_CANSEND);
