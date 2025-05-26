#include <RISMD.h>
#include <lcfu___ampmultvoltchar.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_AMPMULTVOLTCHAR_CHARGEON[] = "chargeOn";
static RISMDInterfaceVariable const lcmd_var_AMPMULTVOLTCHAR_CHARGEON =
INIT_RISMDInterfaceVariable(lcmd_var_name_AMPMULTVOLTCHAR_CHARGEON, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AMPMULTVOLTCHAR,LC_VD_CHARGEON), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AMPMULTVOLTCHAR_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_AMPMULTVOLTCHAR_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_AMPMULTVOLTCHAR_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AMPMULTVOLTCHAR,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_AMPMULTVOLTCHAR_MAXCELL[] = "maxCell";
static RISMDInterfaceVariable const lcmd_var_AMPMULTVOLTCHAR_MAXCELL =
INIT_RISMDInterfaceVariable(lcmd_var_name_AMPMULTVOLTCHAR_MAXCELL, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_AMPMULTVOLTCHAR,LC_VD_MAXCELL), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_AMPMULTVOLTCHAR_MULT[] = "mult";
static RISMDInterfaceVariable const lcmd_var_AMPMULTVOLTCHAR_MULT =
INIT_RISMDInterfaceVariable(lcmd_var_name_AMPMULTVOLTCHAR_MULT, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AMPMULTVOLTCHAR,LC_VD_MULT), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_AMPMULTVOLTCHAR_STATE[] = "state";
static RISMDStdVariable const lcmd_var_AMPMULTVOLTCHAR_STATE =
INIT_RISMDStdVariable(lcmd_var_name_AMPMULTVOLTCHAR_STATE, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_AMPMULTVOLTCHAR,LC_VD_STATE));

static RISMDReference const lcmd_var_list_AMPMULTVOLTCHAR[] =
{
  INIT_RISMDReference(&lcmd_var_AMPMULTVOLTCHAR_CHARGEON),
  INIT_RISMDReference(&lcmd_var_AMPMULTVOLTCHAR_ENO),
  INIT_RISMDReference(&lcmd_var_AMPMULTVOLTCHAR_MAXCELL),
  INIT_RISMDReference(&lcmd_var_AMPMULTVOLTCHAR_MULT),
  INIT_RISMDReference(&lcmd_var_AMPMULTVOLTCHAR_STATE),
};

static char const lcmd_type_name_AMPMULTVOLTCHAR[] = "AMPMULTVOLTCHAR";
RISMDPOUType const lcmd_type_AMPMULTVOLTCHAR = INIT_RISMDPOUType(lcmd_type_name_AMPMULTVOLTCHAR, sizeof(LC_TD_FunctionBlock_AMPMULTVOLTCHAR), 5, lcmd_var_list_AMPMULTVOLTCHAR);
