#include <RISMD.h>
#include <lcfu___hvcu_state.h>

extern RISMDPOUType const lcmd_type_CANRECV;
static char const lcmd_var_name_HVCU_STATE_CANRECV1[] = "CANRECV1";
static RISMDStdVariable const lcmd_var_HVCU_STATE_CANRECV1 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATE_CANRECV1, &lcmd_type_CANRECV, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_CANRECV1));

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_HVCU_STATE_CAN_CH[] = "CAN_CH";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATE_CAN_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATE_CAN_CH, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_CAN_CH), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_HVCU_STATE_CAN_ERROR[] = "CAN_Error";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATE_CAN_ERROR =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATE_CAN_ERROR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_CAN_ERROR), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_STATE_CAN_ID[] = "CAN_ID";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATE_CAN_ID =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATE_CAN_ID, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_CAN_ID), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_HVCU_STATE_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATE_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATE_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_HVCU_STATE_HVCU_ISOLATION_NEGATIVE[] = "HVCU_Isolation_Negative";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATE_HVCU_ISOLATION_NEGATIVE =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATE_HVCU_ISOLATION_NEGATIVE, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_HVCU_ISOLATION_NEGATIVE), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_STATE_HVCU_ISOLATION_POSITIVE[] = "HVCU_Isolation_Positive";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATE_HVCU_ISOLATION_POSITIVE =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATE_HVCU_ISOLATION_POSITIVE, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_HVCU_ISOLATION_POSITIVE), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_STATE_HVCU_SOFTWARE_VERSION[] = "HVCU_Software_Version";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATE_HVCU_SOFTWARE_VERSION =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATE_HVCU_SOFTWARE_VERSION, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_HVCU_SOFTWARE_VERSION), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_STATE_HVCU_STATE[] = "HVCU_State";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATE_HVCU_STATE =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATE_HVCU_STATE, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_HVCU_STATE), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_STATE_PDU_CHARGE_CONTACTOR[] = "PDU_Charge_Contactor";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATE_PDU_CHARGE_CONTACTOR =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATE_PDU_CHARGE_CONTACTOR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_PDU_CHARGE_CONTACTOR), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_STATE_PDU_CONTACTOR_STATUS[] = "PDU_Contactor_Status";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATE_PDU_CONTACTOR_STATUS =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATE_PDU_CONTACTOR_STATUS, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_PDU_CONTACTOR_STATUS), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_STATE_PDU_NEGATIVE_CONTACTOR[] = "PDU_Negative_Contactor";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATE_PDU_NEGATIVE_CONTACTOR =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATE_PDU_NEGATIVE_CONTACTOR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_PDU_NEGATIVE_CONTACTOR), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_STATE_PDU_POSITIVE_CONTACTOR[] = "PDU_Positive_Contactor";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATE_PDU_POSITIVE_CONTACTOR =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATE_PDU_POSITIVE_CONTACTOR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_PDU_POSITIVE_CONTACTOR), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_STATE_PDU_PRECHARGE_CONTACTOR[] = "PDU_Precharge_Contactor";
static RISMDInterfaceVariable const lcmd_var_HVCU_STATE_PDU_PRECHARGE_CONTACTOR =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_STATE_PDU_PRECHARGE_CONTACTOR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_PDU_PRECHARGE_CONTACTOR), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_RBITS;
static char const lcmd_var_name_HVCU_STATE_RBITS1[] = "RBITS1";
static RISMDStdVariable const lcmd_var_HVCU_STATE_RBITS1 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATE_RBITS1, &lcmd_type_RBITS, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_RBITS1));

static char const lcmd_var_name_HVCU_STATE_RBITS2[] = "RBITS2";
static RISMDStdVariable const lcmd_var_HVCU_STATE_RBITS2 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATE_RBITS2, &lcmd_type_RBITS, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_RBITS2));

static char const lcmd_var_name_HVCU_STATE_RBITS3[] = "RBITS3";
static RISMDStdVariable const lcmd_var_HVCU_STATE_RBITS3 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATE_RBITS3, &lcmd_type_RBITS, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_RBITS3));

static char const lcmd_var_name_HVCU_STATE_RBITS4[] = "RBITS4";
static RISMDStdVariable const lcmd_var_HVCU_STATE_RBITS4 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATE_RBITS4, &lcmd_type_RBITS, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_RBITS4));

static char const lcmd_var_name_HVCU_STATE_RBITS5[] = "RBITS5";
static RISMDStdVariable const lcmd_var_HVCU_STATE_RBITS5 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATE_RBITS5, &lcmd_type_RBITS, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_RBITS5));

static char const lcmd_var_name_HVCU_STATE_RBITS6[] = "RBITS6";
static RISMDStdVariable const lcmd_var_HVCU_STATE_RBITS6 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATE_RBITS6, &lcmd_type_RBITS, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_RBITS6));

static char const lcmd_var_name_HVCU_STATE_RBITS7[] = "RBITS7";
static RISMDStdVariable const lcmd_var_HVCU_STATE_RBITS7 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATE_RBITS7, &lcmd_type_RBITS, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_RBITS7));

static char const lcmd_var_name_HVCU_STATE_RBITS8[] = "RBITS8";
static RISMDStdVariable const lcmd_var_HVCU_STATE_RBITS8 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATE_RBITS8, &lcmd_type_RBITS, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_RBITS8));

static char const lcmd_var_name_HVCU_STATE_RBITS9[] = "RBITS9";
static RISMDStdVariable const lcmd_var_HVCU_STATE_RBITS9 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATE_RBITS9, &lcmd_type_RBITS, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD_RBITS9));

static char const lcmd_var_name_HVCU_STATE___119_NE[] = "__119_NE";
static RISMDStdVariable const lcmd_var_HVCU_STATE___119_NE =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATE___119_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD___119_NE));

static char const lcmd_var_name_HVCU_STATE___64_NE[] = "__64_NE";
static RISMDStdVariable const lcmd_var_HVCU_STATE___64_NE =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATE___64_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD___64_NE));

static char const lcmd_var_name_HVCU_STATE___73_TO_USINT[] = "__73_TO_USINT";
static RISMDStdVariable const lcmd_var_HVCU_STATE___73_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATE___73_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD___73_TO_USINT));

static char const lcmd_var_name_HVCU_STATE___76_TO_USINT[] = "__76_TO_USINT";
static RISMDStdVariable const lcmd_var_HVCU_STATE___76_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATE___76_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD___76_TO_USINT));

static char const lcmd_var_name_HVCU_STATE___78_EQ[] = "__78_EQ";
static RISMDStdVariable const lcmd_var_HVCU_STATE___78_EQ =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATE___78_EQ, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD___78_EQ));

static char const lcmd_var_name_HVCU_STATE___81_TO_USINT[] = "__81_TO_USINT";
static RISMDStdVariable const lcmd_var_HVCU_STATE___81_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATE___81_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD___81_TO_USINT));

static char const lcmd_var_name_HVCU_STATE___82_TO_USINT[] = "__82_TO_USINT";
static RISMDStdVariable const lcmd_var_HVCU_STATE___82_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATE___82_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD___82_TO_USINT));

static char const lcmd_var_name_HVCU_STATE___85_EQ[] = "__85_EQ";
static RISMDStdVariable const lcmd_var_HVCU_STATE___85_EQ =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATE___85_EQ, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD___85_EQ));

static char const lcmd_var_name_HVCU_STATE___89_EQ[] = "__89_EQ";
static RISMDStdVariable const lcmd_var_HVCU_STATE___89_EQ =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATE___89_EQ, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD___89_EQ));

static char const lcmd_var_name_HVCU_STATE___92_TO_USINT[] = "__92_TO_USINT";
static RISMDStdVariable const lcmd_var_HVCU_STATE___92_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATE___92_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD___92_TO_USINT));

static char const lcmd_var_name_HVCU_STATE___98_EQ[] = "__98_EQ";
static RISMDStdVariable const lcmd_var_HVCU_STATE___98_EQ =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_STATE___98_EQ, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_STATE,LC_VD___98_EQ));

static RISMDReference const lcmd_var_list_HVCU_STATE[] =
{
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_CANRECV1),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_CAN_CH),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_CAN_ERROR),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_CAN_ID),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_ENO),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_HVCU_ISOLATION_NEGATIVE),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_HVCU_ISOLATION_POSITIVE),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_HVCU_SOFTWARE_VERSION),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_HVCU_STATE),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_PDU_CHARGE_CONTACTOR),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_PDU_CONTACTOR_STATUS),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_PDU_NEGATIVE_CONTACTOR),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_PDU_POSITIVE_CONTACTOR),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_PDU_PRECHARGE_CONTACTOR),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_RBITS1),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_RBITS2),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_RBITS3),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_RBITS4),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_RBITS5),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_RBITS6),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_RBITS7),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_RBITS8),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE_RBITS9),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE___119_NE),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE___64_NE),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE___73_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE___76_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE___78_EQ),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE___81_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE___82_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE___85_EQ),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE___89_EQ),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE___92_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HVCU_STATE___98_EQ),
};

static char const lcmd_type_name_HVCU_STATE[] = "HVCU_STATE";
RISMDPOUType const lcmd_type_HVCU_STATE = INIT_RISMDPOUType(lcmd_type_name_HVCU_STATE, sizeof(LC_TD_FunctionBlock_HVCU_STATE), 34, lcmd_var_list_HVCU_STATE);
