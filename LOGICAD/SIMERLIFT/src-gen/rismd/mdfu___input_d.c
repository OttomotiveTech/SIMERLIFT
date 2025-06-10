#include <RISMD.h>
#include <lcfu___input_d.h>

extern RISMDPOUType const lcmd_type_ANLG;
static char const lcmd_var_name_INPUT_D_ANLG1[] = "ANLG1";
static RISMDStdVariable const lcmd_var_INPUT_D_ANLG1 =
INIT_RISMDStdVariable(lcmd_var_name_INPUT_D_ANLG1, &lcmd_type_ANLG, offsetof(LC_TD_FunctionBlock_INPUT_D,LC_VD_ANLG1));

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_INPUT_D_CH[] = "CH";
static RISMDInterfaceVariable const lcmd_var_INPUT_D_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_INPUT_D_CH, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_INPUT_D,LC_VD_CH), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_INPUT_D_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_INPUT_D_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_INPUT_D_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_INPUT_D,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BYTE;
static char const lcmd_var_name_INPUT_D_O[] = "O";
static RISMDInterfaceVariable const lcmd_var_INPUT_D_O =
INIT_RISMDInterfaceVariable(lcmd_var_name_INPUT_D_O, &risMdType_BYTE, offsetof(LC_TD_FunctionBlock_INPUT_D,LC_VD_O), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_SELECT_4;
static char const lcmd_var_name_INPUT_D_SELECT_41[] = "Select_41";
static RISMDStdVariable const lcmd_var_INPUT_D_SELECT_41 =
INIT_RISMDStdVariable(lcmd_var_name_INPUT_D_SELECT_41, &lcmd_type_SELECT_4, offsetof(LC_TD_FunctionBlock_INPUT_D,LC_VD_SELECT_41));

static char const lcmd_var_name_INPUT_D___24_AND[] = "__24_AND";
static RISMDStdVariable const lcmd_var_INPUT_D___24_AND =
INIT_RISMDStdVariable(lcmd_var_name_INPUT_D___24_AND, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_INPUT_D,LC_VD___24_AND));

static char const lcmd_var_name_INPUT_D___28_TO_BYTE[] = "__28_TO_BYTE";
static RISMDStdVariable const lcmd_var_INPUT_D___28_TO_BYTE =
INIT_RISMDStdVariable(lcmd_var_name_INPUT_D___28_TO_BYTE, &risMdType_BYTE, offsetof(LC_TD_FunctionBlock_INPUT_D,LC_VD___28_TO_BYTE));

static char const lcmd_var_name_INPUT_D___34_GE[] = "__34_GE";
static RISMDStdVariable const lcmd_var_INPUT_D___34_GE =
INIT_RISMDStdVariable(lcmd_var_name_INPUT_D___34_GE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_INPUT_D,LC_VD___34_GE));

static char const lcmd_var_name_INPUT_D___5_GE[] = "__5_GE";
static RISMDStdVariable const lcmd_var_INPUT_D___5_GE =
INIT_RISMDStdVariable(lcmd_var_name_INPUT_D___5_GE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_INPUT_D,LC_VD___5_GE));

static char const lcmd_var_name_INPUT_D___6_LE[] = "__6_LE";
static RISMDStdVariable const lcmd_var_INPUT_D___6_LE =
INIT_RISMDStdVariable(lcmd_var_name_INPUT_D___6_LE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_INPUT_D,LC_VD___6_LE));

static RISMDReference const lcmd_var_list_INPUT_D[] =
{
  INIT_RISMDReference(&lcmd_var_INPUT_D_ANLG1),
  INIT_RISMDReference(&lcmd_var_INPUT_D_CH),
  INIT_RISMDReference(&lcmd_var_INPUT_D_ENO),
  INIT_RISMDReference(&lcmd_var_INPUT_D_O),
  INIT_RISMDReference(&lcmd_var_INPUT_D_SELECT_41),
  INIT_RISMDReference(&lcmd_var_INPUT_D___24_AND),
  INIT_RISMDReference(&lcmd_var_INPUT_D___28_TO_BYTE),
  INIT_RISMDReference(&lcmd_var_INPUT_D___34_GE),
  INIT_RISMDReference(&lcmd_var_INPUT_D___5_GE),
  INIT_RISMDReference(&lcmd_var_INPUT_D___6_LE),
};

static char const lcmd_type_name_INPUT_D[] = "INPUT_D";
RISMDPOUType const lcmd_type_INPUT_D = INIT_RISMDPOUType(lcmd_type_name_INPUT_D, sizeof(LC_TD_FunctionBlock_INPUT_D), 10, lcmd_var_list_INPUT_D);
