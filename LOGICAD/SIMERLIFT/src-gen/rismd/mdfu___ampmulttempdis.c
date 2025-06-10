#include <RISMD.h>
#include <lcfu___ampmulttempdis.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_AMPMULTTEMPDIS_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_AMPMULTTEMPDIS_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_AMPMULTTEMPDIS_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AMPMULTTEMPDIS,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_AMPMULTTEMPDIS_INSTANTMULT[] = "instantMult";
static RISMDStdVariable const lcmd_var_AMPMULTTEMPDIS_INSTANTMULT =
INIT_RISMDStdVariable(lcmd_var_name_AMPMULTTEMPDIS_INSTANTMULT, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AMPMULTTEMPDIS,LC_VD_INSTANTMULT));

static char const lcmd_var_name_AMPMULTTEMPDIS_LASTMULT[] = "lastMult";
static RISMDStdVariable const lcmd_var_AMPMULTTEMPDIS_LASTMULT =
INIT_RISMDStdVariable(lcmd_var_name_AMPMULTTEMPDIS_LASTMULT, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AMPMULTTEMPDIS,LC_VD_LASTMULT));

static char const lcmd_var_name_AMPMULTTEMPDIS_MULT[] = "mult";
static RISMDInterfaceVariable const lcmd_var_AMPMULTTEMPDIS_MULT =
INIT_RISMDInterfaceVariable(lcmd_var_name_AMPMULTTEMPDIS_MULT, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AMPMULTTEMPDIS,LC_VD_MULT), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_TON;
static char const lcmd_var_name_AMPMULTTEMPDIS_RSTTIMER[] = "rstTimer";
static RISMDStdVariable const lcmd_var_AMPMULTTEMPDIS_RSTTIMER =
INIT_RISMDStdVariable(lcmd_var_name_AMPMULTTEMPDIS_RSTTIMER, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_AMPMULTTEMPDIS,LC_VD_RSTTIMER));

static char const lcmd_var_name_AMPMULTTEMPDIS_TEMP[] = "temp";
static RISMDInterfaceVariable const lcmd_var_AMPMULTTEMPDIS_TEMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_AMPMULTTEMPDIS_TEMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AMPMULTTEMPDIS,LC_VD_TEMP), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AMPMULTTEMPDIS_TIMEOUT[] = "timeout";
static RISMDStdVariable const lcmd_var_AMPMULTTEMPDIS_TIMEOUT =
INIT_RISMDStdVariable(lcmd_var_name_AMPMULTTEMPDIS_TIMEOUT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AMPMULTTEMPDIS,LC_VD_TIMEOUT));

static RISMDReference const lcmd_var_list_AMPMULTTEMPDIS[] =
{
  INIT_RISMDReference(&lcmd_var_AMPMULTTEMPDIS_ENO),
  INIT_RISMDReference(&lcmd_var_AMPMULTTEMPDIS_INSTANTMULT),
  INIT_RISMDReference(&lcmd_var_AMPMULTTEMPDIS_LASTMULT),
  INIT_RISMDReference(&lcmd_var_AMPMULTTEMPDIS_MULT),
  INIT_RISMDReference(&lcmd_var_AMPMULTTEMPDIS_RSTTIMER),
  INIT_RISMDReference(&lcmd_var_AMPMULTTEMPDIS_TEMP),
  INIT_RISMDReference(&lcmd_var_AMPMULTTEMPDIS_TIMEOUT),
};

static char const lcmd_type_name_AMPMULTTEMPDIS[] = "AMPMULTTEMPDIS";
RISMDPOUType const lcmd_type_AMPMULTTEMPDIS = INIT_RISMDPOUType(lcmd_type_name_AMPMULTTEMPDIS, sizeof(LC_TD_FunctionBlock_AMPMULTTEMPDIS), 7, lcmd_var_list_AMPMULTTEMPDIS);
