#include <RISMD.h>
#include <lcfu___ampmultvoltdisc.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_AMPMULTVOLTDISC_DISCON[] = "discOn";
static RISMDInterfaceVariable const lcmd_var_AMPMULTVOLTDISC_DISCON =
INIT_RISMDInterfaceVariable(lcmd_var_name_AMPMULTVOLTDISC_DISCON, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AMPMULTVOLTDISC,LC_VD_DISCON), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AMPMULTVOLTDISC_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_AMPMULTVOLTDISC_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_AMPMULTVOLTDISC_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AMPMULTVOLTDISC,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_AMPMULTVOLTDISC_MINCELL[] = "minCell";
static RISMDInterfaceVariable const lcmd_var_AMPMULTVOLTDISC_MINCELL =
INIT_RISMDInterfaceVariable(lcmd_var_name_AMPMULTVOLTDISC_MINCELL, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_AMPMULTVOLTDISC,LC_VD_MINCELL), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_AMPMULTVOLTDISC_MULT[] = "mult";
static RISMDInterfaceVariable const lcmd_var_AMPMULTVOLTDISC_MULT =
INIT_RISMDInterfaceVariable(lcmd_var_name_AMPMULTVOLTDISC_MULT, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AMPMULTVOLTDISC,LC_VD_MULT), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_AMPMULTVOLTDISC_STATE[] = "state";
static RISMDStdVariable const lcmd_var_AMPMULTVOLTDISC_STATE =
INIT_RISMDStdVariable(lcmd_var_name_AMPMULTVOLTDISC_STATE, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_AMPMULTVOLTDISC,LC_VD_STATE));

static RISMDReference const lcmd_var_list_AMPMULTVOLTDISC[] =
{
  INIT_RISMDReference(&lcmd_var_AMPMULTVOLTDISC_DISCON),
  INIT_RISMDReference(&lcmd_var_AMPMULTVOLTDISC_ENO),
  INIT_RISMDReference(&lcmd_var_AMPMULTVOLTDISC_MINCELL),
  INIT_RISMDReference(&lcmd_var_AMPMULTVOLTDISC_MULT),
  INIT_RISMDReference(&lcmd_var_AMPMULTVOLTDISC_STATE),
};

static char const lcmd_type_name_AMPMULTVOLTDISC[] = "AMPMULTVOLTDISC";
RISMDPOUType const lcmd_type_AMPMULTVOLTDISC = INIT_RISMDPOUType(lcmd_type_name_AMPMULTVOLTDISC, sizeof(LC_TD_FunctionBlock_AMPMULTVOLTDISC), 5, lcmd_var_list_AMPMULTVOLTDISC);
