#include <RISMD.h>
#include <lcfu___avg.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_AVG_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_AVG_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_AVG_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AVG,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_LREAL;
static char const lcmd_var_name_AVG_IN[] = "In";
static RISMDInterfaceVariable const lcmd_var_AVG_IN =
INIT_RISMDInterfaceVariable(lcmd_var_name_AVG_IN, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_AVG,LC_VD_IN), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AVG_OUT[] = "Out";
static RISMDInterfaceVariable const lcmd_var_AVG_OUT =
INIT_RISMDInterfaceVariable(lcmd_var_name_AVG_OUT, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_AVG,LC_VD_OUT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_AVG_OUT_BUFF[] = "Out_Buff";
static RISMDStdVariable const lcmd_var_AVG_OUT_BUFF =
INIT_RISMDStdVariable(lcmd_var_name_AVG_OUT_BUFF, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_AVG,LC_VD_OUT_BUFF));

static char const lcmd_var_name_AVG___4_MUL[] = "__4_MUL";
static RISMDStdVariable const lcmd_var_AVG___4_MUL =
INIT_RISMDStdVariable(lcmd_var_name_AVG___4_MUL, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_AVG,LC_VD___4_MUL));

static char const lcmd_var_name_AVG___6_ADD[] = "__6_ADD";
static RISMDStdVariable const lcmd_var_AVG___6_ADD =
INIT_RISMDStdVariable(lcmd_var_name_AVG___6_ADD, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_AVG,LC_VD___6_ADD));

static char const lcmd_var_name_AVG___9_MUL[] = "__9_MUL";
static RISMDStdVariable const lcmd_var_AVG___9_MUL =
INIT_RISMDStdVariable(lcmd_var_name_AVG___9_MUL, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_AVG,LC_VD___9_MUL));

static RISMDReference const lcmd_var_list_AVG[] =
{
  INIT_RISMDReference(&lcmd_var_AVG_ENO),
  INIT_RISMDReference(&lcmd_var_AVG_IN),
  INIT_RISMDReference(&lcmd_var_AVG_OUT),
  INIT_RISMDReference(&lcmd_var_AVG_OUT_BUFF),
  INIT_RISMDReference(&lcmd_var_AVG___4_MUL),
  INIT_RISMDReference(&lcmd_var_AVG___6_ADD),
  INIT_RISMDReference(&lcmd_var_AVG___9_MUL),
};

static char const lcmd_type_name_AVG[] = "AVG";
RISMDPOUType const lcmd_type_AVG = INIT_RISMDPOUType(lcmd_type_name_AVG, sizeof(LC_TD_FunctionBlock_AVG), 7, lcmd_var_list_AVG);
