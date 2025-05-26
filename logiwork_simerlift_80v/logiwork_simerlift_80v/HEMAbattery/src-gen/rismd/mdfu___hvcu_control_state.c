#include <RISMD.h>
#include <lcfu___hvcu_control_state.h>

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_HVCU_CONTROL_STATE_BATTEY_STATE_BCU_00[] = "Battey_State_BCU_00";
static RISMDInterfaceVariable const lcmd_var_HVCU_CONTROL_STATE_BATTEY_STATE_BCU_00 =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CONTROL_STATE_BATTEY_STATE_BCU_00, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD_BATTEY_STATE_BCU_00), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_CONTROL_STATE_BATTEY_STATE_BCU_01[] = "Battey_State_BCU_01";
static RISMDInterfaceVariable const lcmd_var_HVCU_CONTROL_STATE_BATTEY_STATE_BCU_01 =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CONTROL_STATE_BATTEY_STATE_BCU_01, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD_BATTEY_STATE_BCU_01), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_CONTROL_STATE_BATTEY_STATE_BCU_02[] = "Battey_State_BCU_02";
static RISMDInterfaceVariable const lcmd_var_HVCU_CONTROL_STATE_BATTEY_STATE_BCU_02 =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CONTROL_STATE_BATTEY_STATE_BCU_02, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD_BATTEY_STATE_BCU_02), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_CONTROL_STATE_BATTEY_STATE_BCU_03[] = "Battey_State_BCU_03";
static RISMDInterfaceVariable const lcmd_var_HVCU_CONTROL_STATE_BATTEY_STATE_BCU_03 =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CONTROL_STATE_BATTEY_STATE_BCU_03, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD_BATTEY_STATE_BCU_03), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_CANRECV;
static char const lcmd_var_name_HVCU_CONTROL_STATE_CANRECV1[] = "CANRECV1";
static RISMDStdVariable const lcmd_var_HVCU_CONTROL_STATE_CANRECV1 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONTROL_STATE_CANRECV1, &lcmd_type_CANRECV, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD_CANRECV1));

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_HVCU_CONTROL_STATE_CAN_CH[] = "CAN_CH";
static RISMDInterfaceVariable const lcmd_var_HVCU_CONTROL_STATE_CAN_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CONTROL_STATE_CAN_CH, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD_CAN_CH), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_HVCU_CONTROL_STATE_CAN_ERROR[] = "CAN_Error";
static RISMDInterfaceVariable const lcmd_var_HVCU_CONTROL_STATE_CAN_ERROR =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CONTROL_STATE_CAN_ERROR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD_CAN_ERROR), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_CONTROL_STATE_CAN_ID[] = "CAN_ID";
static RISMDInterfaceVariable const lcmd_var_HVCU_CONTROL_STATE_CAN_ID =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CONTROL_STATE_CAN_ID, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD_CAN_ID), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_HVCU_CONTROL_STATE_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_HVCU_CONTROL_STATE_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CONTROL_STATE_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_CONTROL_STATE_IMDCTRL_BCU0[] = "IMDCtrl_BCU0";
static RISMDInterfaceVariable const lcmd_var_HVCU_CONTROL_STATE_IMDCTRL_BCU0 =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CONTROL_STATE_IMDCTRL_BCU0, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD_IMDCTRL_BCU0), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_HVCU_CONTROL_STATE___10_OUTBIT[] = "__10_OUTbit";
static RISMDStdVariable const lcmd_var_HVCU_CONTROL_STATE___10_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONTROL_STATE___10_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD___10_OUTBIT));

static char const lcmd_var_name_HVCU_CONTROL_STATE___13_OUTBIT[] = "__13_OUTbit";
static RISMDStdVariable const lcmd_var_HVCU_CONTROL_STATE___13_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONTROL_STATE___13_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD___13_OUTBIT));

static char const lcmd_var_name_HVCU_CONTROL_STATE___14_OUTBIT[] = "__14_OUTbit";
static RISMDStdVariable const lcmd_var_HVCU_CONTROL_STATE___14_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONTROL_STATE___14_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD___14_OUTBIT));

static char const lcmd_var_name_HVCU_CONTROL_STATE___17_OUTBIT[] = "__17_OUTbit";
static RISMDStdVariable const lcmd_var_HVCU_CONTROL_STATE___17_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONTROL_STATE___17_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD___17_OUTBIT));

static char const lcmd_var_name_HVCU_CONTROL_STATE___32_TO_BOOL[] = "__32_TO_BOOL";
static RISMDStdVariable const lcmd_var_HVCU_CONTROL_STATE___32_TO_BOOL =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONTROL_STATE___32_TO_BOOL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD___32_TO_BOOL));

static char const lcmd_var_name_HVCU_CONTROL_STATE___56_TO_USINT[] = "__56_TO_USINT";
static RISMDStdVariable const lcmd_var_HVCU_CONTROL_STATE___56_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONTROL_STATE___56_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD___56_TO_USINT));

static char const lcmd_var_name_HVCU_CONTROL_STATE___64_NE[] = "__64_NE";
static RISMDStdVariable const lcmd_var_HVCU_CONTROL_STATE___64_NE =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONTROL_STATE___64_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD___64_NE));

static char const lcmd_var_name_HVCU_CONTROL_STATE___73_TO_USINT[] = "__73_TO_USINT";
static RISMDStdVariable const lcmd_var_HVCU_CONTROL_STATE___73_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONTROL_STATE___73_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD___73_TO_USINT));

static char const lcmd_var_name_HVCU_CONTROL_STATE___76_TO_USINT[] = "__76_TO_USINT";
static RISMDStdVariable const lcmd_var_HVCU_CONTROL_STATE___76_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONTROL_STATE___76_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD___76_TO_USINT));

static char const lcmd_var_name_HVCU_CONTROL_STATE___92_TO_USINT[] = "__92_TO_USINT";
static RISMDStdVariable const lcmd_var_HVCU_CONTROL_STATE___92_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONTROL_STATE___92_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD___92_TO_USINT));

static char const lcmd_var_name_HVCU_CONTROL_STATE___95_NE[] = "__95_NE";
static RISMDStdVariable const lcmd_var_HVCU_CONTROL_STATE___95_NE =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONTROL_STATE___95_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD___95_NE));

static char const lcmd_var_name_HVCU_CONTROL_STATE___9_OUTBIT[] = "__9_OUTbit";
static RISMDStdVariable const lcmd_var_HVCU_CONTROL_STATE___9_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONTROL_STATE___9_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE,LC_VD___9_OUTBIT));

static RISMDReference const lcmd_var_list_HVCU_CONTROL_STATE[] =
{
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE_BATTEY_STATE_BCU_00),
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE_BATTEY_STATE_BCU_01),
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE_BATTEY_STATE_BCU_02),
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE_BATTEY_STATE_BCU_03),
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE_CANRECV1),
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE_CAN_CH),
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE_CAN_ERROR),
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE_CAN_ID),
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE_ENO),
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE_IMDCTRL_BCU0),
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE___10_OUTBIT),
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE___13_OUTBIT),
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE___14_OUTBIT),
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE___17_OUTBIT),
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE___32_TO_BOOL),
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE___56_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE___64_NE),
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE___73_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE___76_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE___92_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE___95_NE),
  INIT_RISMDReference(&lcmd_var_HVCU_CONTROL_STATE___9_OUTBIT),
};

static char const lcmd_type_name_HVCU_CONTROL_STATE[] = "HVCU_CONTROL_STATE";
RISMDPOUType const lcmd_type_HVCU_CONTROL_STATE = INIT_RISMDPOUType(lcmd_type_name_HVCU_CONTROL_STATE, sizeof(LC_TD_FunctionBlock_HVCU_CONTROL_STATE), 22, lcmd_var_list_HVCU_CONTROL_STATE);
