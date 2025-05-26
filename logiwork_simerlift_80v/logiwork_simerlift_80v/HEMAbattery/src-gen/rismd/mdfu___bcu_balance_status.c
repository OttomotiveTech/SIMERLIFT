#include <RISMD.h>
#include <lcfu___bcu_balance_status.h>

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_BCU_BALANCE_STATUS_BALANCE_REGISTER[] = "Balance_Register";
static RISMDInterfaceVariable const lcmd_var_BCU_BALANCE_STATUS_BALANCE_REGISTER =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_BALANCE_STATUS_BALANCE_REGISTER, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_BCU_BALANCE_STATUS,LC_VD_BALANCE_REGISTER), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDPOUType const lcmd_type_CANSEND;
static char const lcmd_var_name_BCU_BALANCE_STATUS_CANSEND4[] = "CANSEND4";
static RISMDStdVariable const lcmd_var_BCU_BALANCE_STATUS_CANSEND4 =
INIT_RISMDStdVariable(lcmd_var_name_BCU_BALANCE_STATUS_CANSEND4, &lcmd_type_CANSEND, offsetof(LC_TD_FunctionBlock_BCU_BALANCE_STATUS,LC_VD_CANSEND4));

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_BCU_BALANCE_STATUS_CAN_CH[] = "CAN_CH";
static RISMDInterfaceVariable const lcmd_var_BCU_BALANCE_STATUS_CAN_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_BALANCE_STATUS_CAN_CH, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BCU_BALANCE_STATUS,LC_VD_CAN_CH), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_BCU_BALANCE_STATUS_CAN_ERROR[] = "CAN_Error";
static RISMDInterfaceVariable const lcmd_var_BCU_BALANCE_STATUS_CAN_ERROR =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_BALANCE_STATUS_CAN_ERROR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_BALANCE_STATUS,LC_VD_CAN_ERROR), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BCU_BALANCE_STATUS_CAN_ID[] = "CAN_ID";
static RISMDInterfaceVariable const lcmd_var_BCU_BALANCE_STATUS_CAN_ID =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_BALANCE_STATUS_CAN_ID, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BCU_BALANCE_STATUS,LC_VD_CAN_ID), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_BALANCE_STATUS_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_BCU_BALANCE_STATUS_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_BALANCE_STATUS_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_BALANCE_STATUS,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_WBITS;
static char const lcmd_var_name_BCU_BALANCE_STATUS_WBITS19[] = "WBITS19";
static RISMDStdVariable const lcmd_var_BCU_BALANCE_STATUS_WBITS19 =
INIT_RISMDStdVariable(lcmd_var_name_BCU_BALANCE_STATUS_WBITS19, &lcmd_type_WBITS, offsetof(LC_TD_FunctionBlock_BCU_BALANCE_STATUS,LC_VD_WBITS19));

static char const lcmd_var_name_BCU_BALANCE_STATUS___64_NE[] = "__64_NE";
static RISMDStdVariable const lcmd_var_BCU_BALANCE_STATUS___64_NE =
INIT_RISMDStdVariable(lcmd_var_name_BCU_BALANCE_STATUS___64_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_BALANCE_STATUS,LC_VD___64_NE));

static char const lcmd_var_name_BCU_BALANCE_STATUS___95_NE[] = "__95_NE";
static RISMDStdVariable const lcmd_var_BCU_BALANCE_STATUS___95_NE =
INIT_RISMDStdVariable(lcmd_var_name_BCU_BALANCE_STATUS___95_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_BALANCE_STATUS,LC_VD___95_NE));

static RISMDReference const lcmd_var_list_BCU_BALANCE_STATUS[] =
{
  INIT_RISMDReference(&lcmd_var_BCU_BALANCE_STATUS_BALANCE_REGISTER),
  INIT_RISMDReference(&lcmd_var_BCU_BALANCE_STATUS_CANSEND4),
  INIT_RISMDReference(&lcmd_var_BCU_BALANCE_STATUS_CAN_CH),
  INIT_RISMDReference(&lcmd_var_BCU_BALANCE_STATUS_CAN_ERROR),
  INIT_RISMDReference(&lcmd_var_BCU_BALANCE_STATUS_CAN_ID),
  INIT_RISMDReference(&lcmd_var_BCU_BALANCE_STATUS_ENO),
  INIT_RISMDReference(&lcmd_var_BCU_BALANCE_STATUS_WBITS19),
  INIT_RISMDReference(&lcmd_var_BCU_BALANCE_STATUS___64_NE),
  INIT_RISMDReference(&lcmd_var_BCU_BALANCE_STATUS___95_NE),
};

static char const lcmd_type_name_BCU_BALANCE_STATUS[] = "BCU_BALANCE_STATUS";
RISMDPOUType const lcmd_type_BCU_BALANCE_STATUS = INIT_RISMDPOUType(lcmd_type_name_BCU_BALANCE_STATUS, sizeof(LC_TD_FunctionBlock_BCU_BALANCE_STATUS), 9, lcmd_var_list_BCU_BALANCE_STATUS);
