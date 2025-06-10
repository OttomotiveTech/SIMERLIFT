#include <RISMD.h>
#include <lcfu___canrecv.h>

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_CANRECV_BOX[] = "BOX";
static RISMDStdVariable const lcmd_var_CANRECV_BOX =
INIT_RISMDStdVariable(lcmd_var_name_CANRECV_BOX, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CANRECV,LC_VD_BOX));

extern RISMDDerivedType const lcmd_type_TMS570_CAN;
static char const lcmd_var_name_CANRECV_CH[] = "CH";
static RISMDInterfaceVariable const lcmd_var_CANRECV_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANRECV_CH, &lcmd_type_TMS570_CAN, offsetof(LC_TD_FunctionBlock_CANRECV,LC_VD_CH), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CANRECV_CH_M[] = "CH_M";
static RISMDStdVariable const lcmd_var_CANRECV_CH_M =
INIT_RISMDStdVariable(lcmd_var_name_CANRECV_CH_M, &lcmd_type_TMS570_CAN, offsetof(LC_TD_FunctionBlock_CANRECV,LC_VD_CH_M));

static char const lcmd_var_name_CANRECV_CRX[] = "CRX";
static RISMDInterfaceVariable const lcmd_var_CANRECV_CRX =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANRECV_CRX, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CANRECV,LC_VD_CRX), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_CANRECV_DATA[] = "DATA";
static RISMDInterfaceVariable const lcmd_var_CANRECV_DATA =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANRECV_DATA, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_CANRECV,LC_VD_DATA), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CANRECV_DLC[] = "DLC";
static RISMDInterfaceVariable const lcmd_var_CANRECV_DLC =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANRECV_DLC, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CANRECV,LC_VD_DLC), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_CANRECV_ENB[] = "ENB";
static RISMDInterfaceVariable const lcmd_var_CANRECV_ENB =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANRECV_ENB, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CANRECV,LC_VD_ENB), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CANRECV_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_CANRECV_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANRECV_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CANRECV,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDDerivedType const lcmd_type_CAN_FORMAT;
static char const lcmd_var_name_CANRECV_FMT[] = "FMT";
static RISMDInterfaceVariable const lcmd_var_CANRECV_FMT =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANRECV_FMT, &lcmd_type_CAN_FORMAT, offsetof(LC_TD_FunctionBlock_CANRECV,LC_VD_FMT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CANRECV_FMT_M[] = "FMT_M";
static RISMDStdVariable const lcmd_var_CANRECV_FMT_M =
INIT_RISMDStdVariable(lcmd_var_name_CANRECV_FMT_M, &lcmd_type_CAN_FORMAT, offsetof(LC_TD_FunctionBlock_CANRECV,LC_VD_FMT_M));

static char const lcmd_var_name_CANRECV_ID[] = "ID";
static RISMDInterfaceVariable const lcmd_var_CANRECV_ID =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANRECV_ID, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CANRECV,LC_VD_ID), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CANRECV_ID_M[] = "ID_M";
static RISMDStdVariable const lcmd_var_CANRECV_ID_M =
INIT_RISMDStdVariable(lcmd_var_name_CANRECV_ID_M, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CANRECV,LC_VD_ID_M));

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_CANRECV_MPER[] = "MPER";
static RISMDInterfaceVariable const lcmd_var_CANRECV_MPER =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANRECV_MPER, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_CANRECV,LC_VD_MPER), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CANRECV_PER[] = "PER";
static RISMDInterfaceVariable const lcmd_var_CANRECV_PER =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANRECV_PER, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_CANRECV,LC_VD_PER), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDDerivedType const lcmd_type_CAN_RETCODE;
static char const lcmd_var_name_CANRECV_RC[] = "RC";
static RISMDInterfaceVariable const lcmd_var_CANRECV_RC =
INIT_RISMDInterfaceVariable(lcmd_var_name_CANRECV_RC, &lcmd_type_CAN_RETCODE, offsetof(LC_TD_FunctionBlock_CANRECV,LC_VD_RC), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CANRECV_STARTT[] = "STARTT";
static RISMDStdVariable const lcmd_var_CANRECV_STARTT =
INIT_RISMDStdVariable(lcmd_var_name_CANRECV_STARTT, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_CANRECV,LC_VD_STARTT));

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_CANRECV_STATE[] = "STATE";
static RISMDStdVariable const lcmd_var_CANRECV_STATE =
INIT_RISMDStdVariable(lcmd_var_name_CANRECV_STATE, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_CANRECV,LC_VD_STATE));

static RISMDReference const lcmd_var_list_CANRECV[] =
{
  INIT_RISMDReference(&lcmd_var_CANRECV_BOX),
  INIT_RISMDReference(&lcmd_var_CANRECV_CH),
  INIT_RISMDReference(&lcmd_var_CANRECV_CH_M),
  INIT_RISMDReference(&lcmd_var_CANRECV_CRX),
  INIT_RISMDReference(&lcmd_var_CANRECV_DATA),
  INIT_RISMDReference(&lcmd_var_CANRECV_DLC),
  INIT_RISMDReference(&lcmd_var_CANRECV_ENB),
  INIT_RISMDReference(&lcmd_var_CANRECV_ENO),
  INIT_RISMDReference(&lcmd_var_CANRECV_FMT),
  INIT_RISMDReference(&lcmd_var_CANRECV_FMT_M),
  INIT_RISMDReference(&lcmd_var_CANRECV_ID),
  INIT_RISMDReference(&lcmd_var_CANRECV_ID_M),
  INIT_RISMDReference(&lcmd_var_CANRECV_MPER),
  INIT_RISMDReference(&lcmd_var_CANRECV_PER),
  INIT_RISMDReference(&lcmd_var_CANRECV_RC),
  INIT_RISMDReference(&lcmd_var_CANRECV_STARTT),
  INIT_RISMDReference(&lcmd_var_CANRECV_STATE),
};

static char const lcmd_type_name_CANRECV[] = "CANRECV";
RISMDPOUType const lcmd_type_CANRECV = INIT_RISMDPOUType(lcmd_type_name_CANRECV, sizeof(LC_TD_FunctionBlock_CANRECV), 17, lcmd_var_list_CANRECV);
