#include <RISMD.h>
#include <lcfu___hvcu_status.h>

extern RISMDPOUType const lcmd_type_CANRECV;
static char const lcmd_var_name_HVCU_STATUS_CANRECV1[] = "CANRECV1";
static RISMDStdVariable const lcmd_var_HVCU_STATUS_CANRECV1 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATUS_CANRECV1, &lcmd_type_CANRECV, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD_CANRECV1));

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_HVCU_STATUS_CAN_CH[] = "CAN_CH";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATUS_CAN_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATUS_CAN_CH, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD_CAN_CH), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_HVCU_STATUS_CAN_ERROR[] = "CAN_Error";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATUS_CAN_ERROR =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATUS_CAN_ERROR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD_CAN_ERROR), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_STATUS_CAN_ID[] = "CAN_ID";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATUS_CAN_ID =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATUS_CAN_ID, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD_CAN_ID), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_HVCU_STATUS_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATUS_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATUS_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_HVCU_STATUS_HVCU_BULK_SOC[] = "HVCU_Bulk_SoC";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATUS_HVCU_BULK_SOC =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATUS_HVCU_BULK_SOC, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD_HVCU_BULK_SOC), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_HVCU_STATUS_HVCU_DMCC[] = "HVCU_DMCC";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATUS_HVCU_DMCC =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATUS_HVCU_DMCC, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD_HVCU_DMCC), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_STATUS_HVCU_DMDC[] = "HVCU_DMDC";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATUS_HVCU_DMDC =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATUS_HVCU_DMDC, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD_HVCU_DMDC), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_STATUS_HVCU_FULL_SOC[] = "HVCU_Full_SoC";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATUS_HVCU_FULL_SOC =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATUS_HVCU_FULL_SOC, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD_HVCU_FULL_SOC), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_STATUS_HVCU_SOC[] = "HVCU_SoC";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATUS_HVCU_SOC =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATUS_HVCU_SOC, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD_HVCU_SOC), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_STATUS_HVCU_SOH[] = "HVCU_SoH";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATUS_HVCU_SOH =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATUS_HVCU_SOH, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD_HVCU_SOH), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_RBITS;
static char const lcmd_var_name_HVCU_STATUS_RBITS1[] = "RBITS1";
static RISMDStdVariable const lcmd_var_HVCU_STATUS_RBITS1 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATUS_RBITS1, &lcmd_type_RBITS, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD_RBITS1));

static char const lcmd_var_name_HVCU_STATUS_RBITS2[] = "RBITS2";
static RISMDStdVariable const lcmd_var_HVCU_STATUS_RBITS2 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATUS_RBITS2, &lcmd_type_RBITS, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD_RBITS2));

static char const lcmd_var_name_HVCU_STATUS_RBITS3[] = "RBITS3";
static RISMDStdVariable const lcmd_var_HVCU_STATUS_RBITS3 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATUS_RBITS3, &lcmd_type_RBITS, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD_RBITS3));

static char const lcmd_var_name_HVCU_STATUS_RBITS4[] = "RBITS4";
static RISMDStdVariable const lcmd_var_HVCU_STATUS_RBITS4 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATUS_RBITS4, &lcmd_type_RBITS, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD_RBITS4));

static char const lcmd_var_name_HVCU_STATUS_RBITS5[] = "RBITS5";
static RISMDStdVariable const lcmd_var_HVCU_STATUS_RBITS5 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATUS_RBITS5, &lcmd_type_RBITS, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD_RBITS5));

static char const lcmd_var_name_HVCU_STATUS_RBITS6[] = "RBITS6";
static RISMDStdVariable const lcmd_var_HVCU_STATUS_RBITS6 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATUS_RBITS6, &lcmd_type_RBITS, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD_RBITS6));

static char const lcmd_var_name_HVCU_STATUS___44_TO_UINT[] = "__44_TO_UINT";
static RISMDStdVariable const lcmd_var_HVCU_STATUS___44_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATUS___44_TO_UINT, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD___44_TO_UINT));

static char const lcmd_var_name_HVCU_STATUS___45_TO_UINT[] = "__45_TO_UINT";
static RISMDStdVariable const lcmd_var_HVCU_STATUS___45_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATUS___45_TO_UINT, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD___45_TO_UINT));

static char const lcmd_var_name_HVCU_STATUS___64_NE[] = "__64_NE";
static RISMDStdVariable const lcmd_var_HVCU_STATUS___64_NE =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATUS___64_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD___64_NE));

static char const lcmd_var_name_HVCU_STATUS___73_TO_USINT[] = "__73_TO_USINT";
static RISMDStdVariable const lcmd_var_HVCU_STATUS___73_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATUS___73_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD___73_TO_USINT));

static char const lcmd_var_name_HVCU_STATUS___75_NE[] = "__75_NE";
static RISMDStdVariable const lcmd_var_HVCU_STATUS___75_NE =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATUS___75_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD___75_NE));

static char const lcmd_var_name_HVCU_STATUS___76_TO_USINT[] = "__76_TO_USINT";
static RISMDStdVariable const lcmd_var_HVCU_STATUS___76_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATUS___76_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD___76_TO_USINT));

static char const lcmd_var_name_HVCU_STATUS___77_TO_USINT[] = "__77_TO_USINT";
static RISMDStdVariable const lcmd_var_HVCU_STATUS___77_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATUS___77_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD___77_TO_USINT));

static char const lcmd_var_name_HVCU_STATUS___78_TO_USINT[] = "__78_TO_USINT";
static RISMDStdVariable const lcmd_var_HVCU_STATUS___78_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATUS___78_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_STATUS,LC_VD___78_TO_USINT));

static RISMDReference const lcmd_var_list_HVCU_STATUS[] =
{
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS_CANRECV1),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS_CAN_CH),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS_CAN_ERROR),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS_CAN_ID),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS_ENO),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS_HVCU_BULK_SOC),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS_HVCU_DMCC),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS_HVCU_DMDC),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS_HVCU_FULL_SOC),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS_HVCU_SOC),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS_HVCU_SOH),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS_RBITS1),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS_RBITS2),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS_RBITS3),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS_RBITS4),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS_RBITS5),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS_RBITS6),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS___44_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS___45_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS___64_NE),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS___73_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS___75_NE),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS___76_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS___77_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HVCU_STATUS___78_TO_USINT),
};

static char const lcmd_type_name_HVCU_STATUS[] = "HVCU_STATUS";
RISMDPOUType const lcmd_type_HVCU_STATUS = INIT_RISMDPOUType(lcmd_type_name_HVCU_STATUS, sizeof(LC_TD_FunctionBlock_HVCU_STATUS), 25, lcmd_var_list_HVCU_STATUS);
