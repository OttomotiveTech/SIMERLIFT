#include <RISMD.h>
#include <lcfu___temp_can.h>

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_TEMP_CAN_CAN[] = "CAN";
static RISMDInterfaceVariable const lcmd_var_TEMP_CAN_CAN =
INIT_RISMDInterfaceVariable(lcmd_var_name_TEMP_CAN_CAN, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_TEMP_CAN,LC_VD_CAN), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_TEMP_CAN_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_TEMP_CAN_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_TEMP_CAN_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TEMP_CAN,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_LINEER_FUNCTION;
static char const lcmd_var_name_TEMP_CAN_LINEER_FUNCTION1[] = "Lineer_Function1";
static RISMDStdVariable const lcmd_var_TEMP_CAN_LINEER_FUNCTION1 =
INIT_RISMDStdVariable(lcmd_var_name_TEMP_CAN_LINEER_FUNCTION1, &lcmd_type_LINEER_FUNCTION, offsetof(LC_TD_FunctionBlock_TEMP_CAN,LC_VD_LINEER_FUNCTION1));

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_TEMP_CAN_TEMP[] = "Temp";
static RISMDInterfaceVariable const lcmd_var_TEMP_CAN_TEMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_TEMP_CAN_TEMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_TEMP_CAN,LC_VD_TEMP), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_TEMP_CAN___2_TO_USINT[] = "__2_TO_USINT";
static RISMDStdVariable const lcmd_var_TEMP_CAN___2_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_TEMP_CAN___2_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_TEMP_CAN,LC_VD___2_TO_USINT));

static RISMDReference const lcmd_var_list_TEMP_CAN[] =
{
  INIT_RISMDReference(&lcmd_var_TEMP_CAN_CAN),
  INIT_RISMDReference(&lcmd_var_TEMP_CAN_ENO),
  INIT_RISMDReference(&lcmd_var_TEMP_CAN_LINEER_FUNCTION1),
  INIT_RISMDReference(&lcmd_var_TEMP_CAN_TEMP),
  INIT_RISMDReference(&lcmd_var_TEMP_CAN___2_TO_USINT),
};

static char const lcmd_type_name_TEMP_CAN[] = "TEMP_CAN";
RISMDPOUType const lcmd_type_TEMP_CAN = INIT_RISMDPOUType(lcmd_type_name_TEMP_CAN, sizeof(LC_TD_FunctionBlock_TEMP_CAN), 5, lcmd_var_list_TEMP_CAN);
