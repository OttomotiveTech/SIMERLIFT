#include <RISMD.h>
#include <lcfu___hvcu_charge.h>

extern RISMDPOUType const lcmd_type_CANRECV;
static char const lcmd_var_name_HVCU_CHARGE_CANRECV1[] = "CANRECV1";
static RISMDStdVariable const lcmd_var_HVCU_CHARGE_CANRECV1 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CHARGE_CANRECV1, &lcmd_type_CANRECV, offsetof(LC_TD_FunctionBlock_HVCU_CHARGE,LC_VD_CANRECV1));

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_HVCU_CHARGE_CAN_CH[] = "CAN_CH";
static RISMDInterfaceVariable const lcmd_var_HVCU_CHARGE_CAN_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CHARGE_CAN_CH, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_HVCU_CHARGE,LC_VD_CAN_CH), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_HVCU_CHARGE_CAN_ERROR[] = "CAN_Error";
static RISMDInterfaceVariable const lcmd_var_HVCU_CHARGE_CAN_ERROR =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CHARGE_CAN_ERROR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_CHARGE,LC_VD_CAN_ERROR), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_CHARGE_CAN_ID[] = "CAN_ID";
static RISMDInterfaceVariable const lcmd_var_HVCU_CHARGE_CAN_ID =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CHARGE_CAN_ID, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_HVCU_CHARGE,LC_VD_CAN_ID), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_HVCU_CHARGE_CHARGE_MAX_CURRENT[] = "Charge_Max_Current";
static RISMDInterfaceVariable const lcmd_var_HVCU_CHARGE_CHARGE_MAX_CURRENT =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CHARGE_CHARGE_MAX_CURRENT, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_HVCU_CHARGE,LC_VD_CHARGE_MAX_CURRENT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_CHARGE_CHARGE_MAX_VOLTAGE[] = "Charge_Max_Voltage";
static RISMDInterfaceVariable const lcmd_var_HVCU_CHARGE_CHARGE_MAX_VOLTAGE =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CHARGE_CHARGE_MAX_VOLTAGE, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_HVCU_CHARGE,LC_VD_CHARGE_MAX_VOLTAGE), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_CHARGE_CHARGE_TARGET_CURRENT[] = "Charge_Target_Current";
static RISMDInterfaceVariable const lcmd_var_HVCU_CHARGE_CHARGE_TARGET_CURRENT =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CHARGE_CHARGE_TARGET_CURRENT, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_HVCU_CHARGE,LC_VD_CHARGE_TARGET_CURRENT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_CHARGE_CHARGE_TARGET_VOLTAGE[] = "Charge_Target_Voltage";
static RISMDInterfaceVariable const lcmd_var_HVCU_CHARGE_CHARGE_TARGET_VOLTAGE =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CHARGE_CHARGE_TARGET_VOLTAGE, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_HVCU_CHARGE,LC_VD_CHARGE_TARGET_VOLTAGE), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_CHARGE_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_HVCU_CHARGE_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CHARGE_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_CHARGE,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_RBITS;
static char const lcmd_var_name_HVCU_CHARGE_RBITS1[] = "RBITS1";
static RISMDStdVariable const lcmd_var_HVCU_CHARGE_RBITS1 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CHARGE_RBITS1, &lcmd_type_RBITS, offsetof(LC_TD_FunctionBlock_HVCU_CHARGE,LC_VD_RBITS1));

static char const lcmd_var_name_HVCU_CHARGE_RBITS2[] = "RBITS2";
static RISMDStdVariable const lcmd_var_HVCU_CHARGE_RBITS2 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CHARGE_RBITS2, &lcmd_type_RBITS, offsetof(LC_TD_FunctionBlock_HVCU_CHARGE,LC_VD_RBITS2));

static char const lcmd_var_name_HVCU_CHARGE_RBITS3[] = "RBITS3";
static RISMDStdVariable const lcmd_var_HVCU_CHARGE_RBITS3 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CHARGE_RBITS3, &lcmd_type_RBITS, offsetof(LC_TD_FunctionBlock_HVCU_CHARGE,LC_VD_RBITS3));

static char const lcmd_var_name_HVCU_CHARGE_RBITS4[] = "RBITS4";
static RISMDStdVariable const lcmd_var_HVCU_CHARGE_RBITS4 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CHARGE_RBITS4, &lcmd_type_RBITS, offsetof(LC_TD_FunctionBlock_HVCU_CHARGE,LC_VD_RBITS4));

static char const lcmd_var_name_HVCU_CHARGE___34_TO_UINT[] = "__34_TO_UINT";
static RISMDStdVariable const lcmd_var_HVCU_CHARGE___34_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CHARGE___34_TO_UINT, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_HVCU_CHARGE,LC_VD___34_TO_UINT));

static char const lcmd_var_name_HVCU_CHARGE___35_TO_UINT[] = "__35_TO_UINT";
static RISMDStdVariable const lcmd_var_HVCU_CHARGE___35_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CHARGE___35_TO_UINT, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_HVCU_CHARGE,LC_VD___35_TO_UINT));

static char const lcmd_var_name_HVCU_CHARGE___36_TO_UINT[] = "__36_TO_UINT";
static RISMDStdVariable const lcmd_var_HVCU_CHARGE___36_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CHARGE___36_TO_UINT, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_HVCU_CHARGE,LC_VD___36_TO_UINT));

static char const lcmd_var_name_HVCU_CHARGE___37_TO_UINT[] = "__37_TO_UINT";
static RISMDStdVariable const lcmd_var_HVCU_CHARGE___37_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CHARGE___37_TO_UINT, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_HVCU_CHARGE,LC_VD___37_TO_UINT));

static char const lcmd_var_name_HVCU_CHARGE___51_NE[] = "__51_NE";
static RISMDStdVariable const lcmd_var_HVCU_CHARGE___51_NE =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CHARGE___51_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_CHARGE,LC_VD___51_NE));

static char const lcmd_var_name_HVCU_CHARGE___64_NE[] = "__64_NE";
static RISMDStdVariable const lcmd_var_HVCU_CHARGE___64_NE =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CHARGE___64_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_CHARGE,LC_VD___64_NE));

static RISMDReference const lcmd_var_list_HVCU_CHARGE[] =
{
  INIT_RISMDReference(&lcmd_var_HVCU_CHARGE_CANRECV1),
  INIT_RISMDReference(&lcmd_var_HVCU_CHARGE_CAN_CH),
  INIT_RISMDReference(&lcmd_var_HVCU_CHARGE_CAN_ERROR),
  INIT_RISMDReference(&lcmd_var_HVCU_CHARGE_CAN_ID),
  INIT_RISMDReference(&lcmd_var_HVCU_CHARGE_CHARGE_MAX_CURRENT),
  INIT_RISMDReference(&lcmd_var_HVCU_CHARGE_CHARGE_MAX_VOLTAGE),
  INIT_RISMDReference(&lcmd_var_HVCU_CHARGE_CHARGE_TARGET_CURRENT),
  INIT_RISMDReference(&lcmd_var_HVCU_CHARGE_CHARGE_TARGET_VOLTAGE),
  INIT_RISMDReference(&lcmd_var_HVCU_CHARGE_ENO),
  INIT_RISMDReference(&lcmd_var_HVCU_CHARGE_RBITS1),
  INIT_RISMDReference(&lcmd_var_HVCU_CHARGE_RBITS2),
  INIT_RISMDReference(&lcmd_var_HVCU_CHARGE_RBITS3),
  INIT_RISMDReference(&lcmd_var_HVCU_CHARGE_RBITS4),
  INIT_RISMDReference(&lcmd_var_HVCU_CHARGE___34_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HVCU_CHARGE___35_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HVCU_CHARGE___36_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HVCU_CHARGE___37_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HVCU_CHARGE___51_NE),
  INIT_RISMDReference(&lcmd_var_HVCU_CHARGE___64_NE),
};

static char const lcmd_type_name_HVCU_CHARGE[] = "HVCU_CHARGE";
RISMDPOUType const lcmd_type_HVCU_CHARGE = INIT_RISMDPOUType(lcmd_type_name_HVCU_CHARGE, sizeof(LC_TD_FunctionBlock_HVCU_CHARGE), 19, lcmd_var_list_HVCU_CHARGE);
