#include <RISMD.h>
#include <lcfu___timer.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_TIMER_ENABLE[] = "Enable";
static RISMDInterfaceVariable const lcmd_var_TIMER_ENABLE =
INIT_RISMDInterfaceVariable(lcmd_var_name_TIMER_ENABLE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TIMER,LC_VD_ENABLE), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_TIMER_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_TIMER_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_TIMER_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TIMER,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_TIMER_PULSE[] = "Pulse";
static RISMDInterfaceVariable const lcmd_var_TIMER_PULSE =
INIT_RISMDInterfaceVariable(lcmd_var_name_TIMER_PULSE, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_TIMER,LC_VD_PULSE), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_TIMER_P_Q[] = "P_Q";
static RISMDInterfaceVariable const lcmd_var_TIMER_P_Q =
INIT_RISMDInterfaceVariable(lcmd_var_name_TIMER_P_Q, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TIMER,LC_VD_P_Q), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_TON;
static char const lcmd_var_name_TIMER_TON3[] = "TON3";
static RISMDStdVariable const lcmd_var_TIMER_TON3 =
INIT_RISMDStdVariable(lcmd_var_name_TIMER_TON3, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_TIMER,LC_VD_TON3));

static char const lcmd_var_name_TIMER_TON4[] = "TON4";
static RISMDStdVariable const lcmd_var_TIMER_TON4 =
INIT_RISMDStdVariable(lcmd_var_name_TIMER_TON4, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_TIMER,LC_VD_TON4));

static char const lcmd_var_name_TIMER_TON5[] = "TON5";
static RISMDStdVariable const lcmd_var_TIMER_TON5 =
INIT_RISMDStdVariable(lcmd_var_name_TIMER_TON5, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_TIMER,LC_VD_TON5));

static char const lcmd_var_name_TIMER_TON6[] = "TON6";
static RISMDStdVariable const lcmd_var_TIMER_TON6 =
INIT_RISMDStdVariable(lcmd_var_name_TIMER_TON6, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_TIMER,LC_VD_TON6));

static char const lcmd_var_name_TIMER_T_H[] = "T_H";
static RISMDInterfaceVariable const lcmd_var_TIMER_T_H =
INIT_RISMDInterfaceVariable(lcmd_var_name_TIMER_T_H, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_TIMER,LC_VD_T_H), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_TIMER_T_L[] = "T_L";
static RISMDInterfaceVariable const lcmd_var_TIMER_T_L =
INIT_RISMDInterfaceVariable(lcmd_var_name_TIMER_T_L, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_TIMER,LC_VD_T_L), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_TIMER_T_Q[] = "T_Q";
static RISMDInterfaceVariable const lcmd_var_TIMER_T_Q =
INIT_RISMDInterfaceVariable(lcmd_var_name_TIMER_T_Q, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TIMER,LC_VD_T_Q), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_TIMER___33_NOT[] = "__33_NOT";
static RISMDStdVariable const lcmd_var_TIMER___33_NOT =
INIT_RISMDStdVariable(lcmd_var_name_TIMER___33_NOT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TIMER,LC_VD___33_NOT));

static char const lcmd_var_name_TIMER___34_AND[] = "__34_AND";
static RISMDStdVariable const lcmd_var_TIMER___34_AND =
INIT_RISMDStdVariable(lcmd_var_name_TIMER___34_AND, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TIMER,LC_VD___34_AND));

static char const lcmd_var_name_TIMER___62_NOT[] = "__62_NOT";
static RISMDStdVariable const lcmd_var_TIMER___62_NOT =
INIT_RISMDStdVariable(lcmd_var_name_TIMER___62_NOT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TIMER,LC_VD___62_NOT));

static char const lcmd_var_name_TIMER___63_AND[] = "__63_AND";
static RISMDStdVariable const lcmd_var_TIMER___63_AND =
INIT_RISMDStdVariable(lcmd_var_name_TIMER___63_AND, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TIMER,LC_VD___63_AND));

static char const lcmd_var_name_TIMER___64_DIV_TIME[] = "__64_DIV_TIME";
static RISMDStdVariable const lcmd_var_TIMER___64_DIV_TIME =
INIT_RISMDStdVariable(lcmd_var_name_TIMER___64_DIV_TIME, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_TIMER,LC_VD___64_DIV_TIME));

static RISMDReference const lcmd_var_list_TIMER[] =
{
  INIT_RISMDReference(&lcmd_var_TIMER_ENABLE),
  INIT_RISMDReference(&lcmd_var_TIMER_ENO),
  INIT_RISMDReference(&lcmd_var_TIMER_PULSE),
  INIT_RISMDReference(&lcmd_var_TIMER_P_Q),
  INIT_RISMDReference(&lcmd_var_TIMER_TON3),
  INIT_RISMDReference(&lcmd_var_TIMER_TON4),
  INIT_RISMDReference(&lcmd_var_TIMER_TON5),
  INIT_RISMDReference(&lcmd_var_TIMER_TON6),
  INIT_RISMDReference(&lcmd_var_TIMER_T_H),
  INIT_RISMDReference(&lcmd_var_TIMER_T_L),
  INIT_RISMDReference(&lcmd_var_TIMER_T_Q),
  INIT_RISMDReference(&lcmd_var_TIMER___33_NOT),
  INIT_RISMDReference(&lcmd_var_TIMER___34_AND),
  INIT_RISMDReference(&lcmd_var_TIMER___62_NOT),
  INIT_RISMDReference(&lcmd_var_TIMER___63_AND),
  INIT_RISMDReference(&lcmd_var_TIMER___64_DIV_TIME),
};

static char const lcmd_type_name_TIMER[] = "TIMER";
RISMDPOUType const lcmd_type_TIMER = INIT_RISMDPOUType(lcmd_type_name_TIMER, sizeof(LC_TD_FunctionBlock_TIMER), 16, lcmd_var_list_TIMER);
