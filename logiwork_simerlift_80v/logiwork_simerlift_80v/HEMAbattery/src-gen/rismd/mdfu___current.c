#include <RISMD.h>
#include <lcfu___current.h>

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_CURRENT_CHARGE_CURRENT[] = "Charge_Current";
static RISMDInterfaceVariable const lcmd_var_CURRENT_CHARGE_CURRENT =
INIT_RISMDInterfaceVariable(lcmd_var_name_CURRENT_CHARGE_CURRENT, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_CURRENT,LC_VD_CHARGE_CURRENT), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_CURRENT_CURRENT[] = "Current";
static RISMDInterfaceVariable const lcmd_var_CURRENT_CURRENT =
INIT_RISMDInterfaceVariable(lcmd_var_name_CURRENT_CURRENT, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CURRENT,LC_VD_CURRENT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CURRENT_DISCHARGE_CURRENT[] = "Discharge_Current";
static RISMDInterfaceVariable const lcmd_var_CURRENT_DISCHARGE_CURRENT =
INIT_RISMDInterfaceVariable(lcmd_var_name_CURRENT_DISCHARGE_CURRENT, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_CURRENT,LC_VD_DISCHARGE_CURRENT), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_CURRENT_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_CURRENT_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_CURRENT_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CURRENT,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CURRENT___11_GE[] = "__11_GE";
static RISMDStdVariable const lcmd_var_CURRENT___11_GE =
INIT_RISMDStdVariable(lcmd_var_name_CURRENT___11_GE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CURRENT,LC_VD___11_GE));

static char const lcmd_var_name_CURRENT___15_LT[] = "__15_LT";
static RISMDStdVariable const lcmd_var_CURRENT___15_LT =
INIT_RISMDStdVariable(lcmd_var_name_CURRENT___15_LT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CURRENT,LC_VD___15_LT));

static char const lcmd_var_name_CURRENT___19_SEL_REAL[] = "__19_SEL_REAL";
static RISMDStdVariable const lcmd_var_CURRENT___19_SEL_REAL =
INIT_RISMDStdVariable(lcmd_var_name_CURRENT___19_SEL_REAL, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CURRENT,LC_VD___19_SEL_REAL));

static char const lcmd_var_name_CURRENT___24_TO_UINT[] = "__24_TO_UINT";
static RISMDStdVariable const lcmd_var_CURRENT___24_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_CURRENT___24_TO_UINT, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_CURRENT,LC_VD___24_TO_UINT));

static char const lcmd_var_name_CURRENT___27_SEL_REAL[] = "__27_SEL_REAL";
static RISMDStdVariable const lcmd_var_CURRENT___27_SEL_REAL =
INIT_RISMDStdVariable(lcmd_var_name_CURRENT___27_SEL_REAL, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CURRENT,LC_VD___27_SEL_REAL));

static char const lcmd_var_name_CURRENT___2_DIV[] = "__2_DIV";
static RISMDStdVariable const lcmd_var_CURRENT___2_DIV =
INIT_RISMDStdVariable(lcmd_var_name_CURRENT___2_DIV, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CURRENT,LC_VD___2_DIV));

static char const lcmd_var_name_CURRENT___31_TO_UINT[] = "__31_TO_UINT";
static RISMDStdVariable const lcmd_var_CURRENT___31_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_CURRENT___31_TO_UINT, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_CURRENT,LC_VD___31_TO_UINT));

static char const lcmd_var_name_CURRENT___34_MUL[] = "__34_MUL";
static RISMDStdVariable const lcmd_var_CURRENT___34_MUL =
INIT_RISMDStdVariable(lcmd_var_name_CURRENT___34_MUL, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CURRENT,LC_VD___34_MUL));

static RISMDReference const lcmd_var_list_CURRENT[] =
{
  INIT_RISMDReference(&lcmd_var_CURRENT_CHARGE_CURRENT),
  INIT_RISMDReference(&lcmd_var_CURRENT_CURRENT),
  INIT_RISMDReference(&lcmd_var_CURRENT_DISCHARGE_CURRENT),
  INIT_RISMDReference(&lcmd_var_CURRENT_ENO),
  INIT_RISMDReference(&lcmd_var_CURRENT___11_GE),
  INIT_RISMDReference(&lcmd_var_CURRENT___15_LT),
  INIT_RISMDReference(&lcmd_var_CURRENT___19_SEL_REAL),
  INIT_RISMDReference(&lcmd_var_CURRENT___24_TO_UINT),
  INIT_RISMDReference(&lcmd_var_CURRENT___27_SEL_REAL),
  INIT_RISMDReference(&lcmd_var_CURRENT___2_DIV),
  INIT_RISMDReference(&lcmd_var_CURRENT___31_TO_UINT),
  INIT_RISMDReference(&lcmd_var_CURRENT___34_MUL),
};

static char const lcmd_type_name_CURRENT[] = "CURRENT";
RISMDPOUType const lcmd_type_CURRENT = INIT_RISMDPOUType(lcmd_type_name_CURRENT, sizeof(LC_TD_FunctionBlock_CURRENT), 12, lcmd_var_list_CURRENT);
