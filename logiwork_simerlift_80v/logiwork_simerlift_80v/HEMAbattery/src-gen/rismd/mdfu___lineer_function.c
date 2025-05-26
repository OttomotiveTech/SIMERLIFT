#include <RISMD.h>
#include <lcfu___lineer_function.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_LINEER_FUNCTION_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_LINEER_FUNCTION_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_LINEER_FUNCTION_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_LINEER_FUNCTION,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_LINEER_FUNCTION_ERROR[] = "Error";
static RISMDInterfaceVariable const lcmd_var_LINEER_FUNCTION_ERROR =
INIT_RISMDInterfaceVariable(lcmd_var_name_LINEER_FUNCTION_ERROR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_LINEER_FUNCTION,LC_VD_ERROR), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_LREAL;
static char const lcmd_var_name_LINEER_FUNCTION_INPUT[] = "Input";
static RISMDInterfaceVariable const lcmd_var_LINEER_FUNCTION_INPUT =
INIT_RISMDInterfaceVariable(lcmd_var_name_LINEER_FUNCTION_INPUT, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_LINEER_FUNCTION,LC_VD_INPUT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_LINEER_FUNCTION_LIM_OUTPUT[] = "Lim_Output";
static RISMDInterfaceVariable const lcmd_var_LINEER_FUNCTION_LIM_OUTPUT =
INIT_RISMDInterfaceVariable(lcmd_var_name_LINEER_FUNCTION_LIM_OUTPUT, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_LINEER_FUNCTION,LC_VD_LIM_OUTPUT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_LINEER_FUNCTION_OUTPUT[] = "Output";
static RISMDInterfaceVariable const lcmd_var_LINEER_FUNCTION_OUTPUT =
INIT_RISMDInterfaceVariable(lcmd_var_name_LINEER_FUNCTION_OUTPUT, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_LINEER_FUNCTION,LC_VD_OUTPUT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_LINEER_FUNCTION_X1[] = "X1";
static RISMDInterfaceVariable const lcmd_var_LINEER_FUNCTION_X1 =
INIT_RISMDInterfaceVariable(lcmd_var_name_LINEER_FUNCTION_X1, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_LINEER_FUNCTION,LC_VD_X1), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_LINEER_FUNCTION_X2[] = "X2";
static RISMDInterfaceVariable const lcmd_var_LINEER_FUNCTION_X2 =
INIT_RISMDInterfaceVariable(lcmd_var_name_LINEER_FUNCTION_X2, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_LINEER_FUNCTION,LC_VD_X2), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_LINEER_FUNCTION_Y1[] = "Y1";
static RISMDInterfaceVariable const lcmd_var_LINEER_FUNCTION_Y1 =
INIT_RISMDInterfaceVariable(lcmd_var_name_LINEER_FUNCTION_Y1, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_LINEER_FUNCTION,LC_VD_Y1), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_LINEER_FUNCTION_Y2[] = "Y2";
static RISMDInterfaceVariable const lcmd_var_LINEER_FUNCTION_Y2 =
INIT_RISMDInterfaceVariable(lcmd_var_name_LINEER_FUNCTION_Y2, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_LINEER_FUNCTION,LC_VD_Y2), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_LINEER_FUNCTION___33_LIMIT[] = "__33_LIMIT";
static RISMDStdVariable const lcmd_var_LINEER_FUNCTION___33_LIMIT =
INIT_RISMDStdVariable(lcmd_var_name_LINEER_FUNCTION___33_LIMIT, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_LINEER_FUNCTION,LC_VD___33_LIMIT));

static char const lcmd_var_name_LINEER_FUNCTION___35_DIV[] = "__35_DIV";
static RISMDStdVariable const lcmd_var_LINEER_FUNCTION___35_DIV =
INIT_RISMDStdVariable(lcmd_var_name_LINEER_FUNCTION___35_DIV, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_LINEER_FUNCTION,LC_VD___35_DIV));

static char const lcmd_var_name_LINEER_FUNCTION___56_MUL[] = "__56_MUL";
static RISMDStdVariable const lcmd_var_LINEER_FUNCTION___56_MUL =
INIT_RISMDStdVariable(lcmd_var_name_LINEER_FUNCTION___56_MUL, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_LINEER_FUNCTION,LC_VD___56_MUL));

static char const lcmd_var_name_LINEER_FUNCTION___57_LE[] = "__57_LE";
static RISMDStdVariable const lcmd_var_LINEER_FUNCTION___57_LE =
INIT_RISMDStdVariable(lcmd_var_name_LINEER_FUNCTION___57_LE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_LINEER_FUNCTION,LC_VD___57_LE));

static char const lcmd_var_name_LINEER_FUNCTION___58_SUB[] = "__58_SUB";
static RISMDStdVariable const lcmd_var_LINEER_FUNCTION___58_SUB =
INIT_RISMDStdVariable(lcmd_var_name_LINEER_FUNCTION___58_SUB, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_LINEER_FUNCTION,LC_VD___58_SUB));

static char const lcmd_var_name_LINEER_FUNCTION___59_SUB[] = "__59_SUB";
static RISMDStdVariable const lcmd_var_LINEER_FUNCTION___59_SUB =
INIT_RISMDStdVariable(lcmd_var_name_LINEER_FUNCTION___59_SUB, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_LINEER_FUNCTION,LC_VD___59_SUB));

static char const lcmd_var_name_LINEER_FUNCTION___60_MUL[] = "__60_MUL";
static RISMDStdVariable const lcmd_var_LINEER_FUNCTION___60_MUL =
INIT_RISMDStdVariable(lcmd_var_name_LINEER_FUNCTION___60_MUL, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_LINEER_FUNCTION,LC_VD___60_MUL));

static char const lcmd_var_name_LINEER_FUNCTION___61_SUB[] = "__61_SUB";
static RISMDStdVariable const lcmd_var_LINEER_FUNCTION___61_SUB =
INIT_RISMDStdVariable(lcmd_var_name_LINEER_FUNCTION___61_SUB, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_LINEER_FUNCTION,LC_VD___61_SUB));

static char const lcmd_var_name_LINEER_FUNCTION___62_ADD[] = "__62_ADD";
static RISMDStdVariable const lcmd_var_LINEER_FUNCTION___62_ADD =
INIT_RISMDStdVariable(lcmd_var_name_LINEER_FUNCTION___62_ADD, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_LINEER_FUNCTION,LC_VD___62_ADD));

static RISMDReference const lcmd_var_list_LINEER_FUNCTION[] =
{
  INIT_RISMDReference(&lcmd_var_LINEER_FUNCTION_ENO),
  INIT_RISMDReference(&lcmd_var_LINEER_FUNCTION_ERROR),
  INIT_RISMDReference(&lcmd_var_LINEER_FUNCTION_INPUT),
  INIT_RISMDReference(&lcmd_var_LINEER_FUNCTION_LIM_OUTPUT),
  INIT_RISMDReference(&lcmd_var_LINEER_FUNCTION_OUTPUT),
  INIT_RISMDReference(&lcmd_var_LINEER_FUNCTION_X1),
  INIT_RISMDReference(&lcmd_var_LINEER_FUNCTION_X2),
  INIT_RISMDReference(&lcmd_var_LINEER_FUNCTION_Y1),
  INIT_RISMDReference(&lcmd_var_LINEER_FUNCTION_Y2),
  INIT_RISMDReference(&lcmd_var_LINEER_FUNCTION___33_LIMIT),
  INIT_RISMDReference(&lcmd_var_LINEER_FUNCTION___35_DIV),
  INIT_RISMDReference(&lcmd_var_LINEER_FUNCTION___56_MUL),
  INIT_RISMDReference(&lcmd_var_LINEER_FUNCTION___57_LE),
  INIT_RISMDReference(&lcmd_var_LINEER_FUNCTION___58_SUB),
  INIT_RISMDReference(&lcmd_var_LINEER_FUNCTION___59_SUB),
  INIT_RISMDReference(&lcmd_var_LINEER_FUNCTION___60_MUL),
  INIT_RISMDReference(&lcmd_var_LINEER_FUNCTION___61_SUB),
  INIT_RISMDReference(&lcmd_var_LINEER_FUNCTION___62_ADD),
};

static char const lcmd_type_name_LINEER_FUNCTION[] = "LINEER_FUNCTION";
RISMDPOUType const lcmd_type_LINEER_FUNCTION = INIT_RISMDPOUType(lcmd_type_name_LINEER_FUNCTION, sizeof(LC_TD_FunctionBlock_LINEER_FUNCTION), 18, lcmd_var_list_LINEER_FUNCTION);
