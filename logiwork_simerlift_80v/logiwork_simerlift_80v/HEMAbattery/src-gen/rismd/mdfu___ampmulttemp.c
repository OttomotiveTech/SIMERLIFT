#include <RISMD.h>
#include <lcfu___ampmulttemp.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_AMPMULTTEMP_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_AMPMULTTEMP_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_AMPMULTTEMP_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AMPMULTTEMP,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_AMPMULTTEMP_INSTANTMULT[] = "instantMult";
static RISMDStdVariable const lcmd_var_AMPMULTTEMP_INSTANTMULT =
INIT_RISMDStdVariable(lcmd_var_name_AMPMULTTEMP_INSTANTMULT, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AMPMULTTEMP,LC_VD_INSTANTMULT));

static char const lcmd_var_name_AMPMULTTEMP_LASTMULT[] = "lastMult";
static RISMDStdVariable const lcmd_var_AMPMULTTEMP_LASTMULT =
INIT_RISMDStdVariable(lcmd_var_name_AMPMULTTEMP_LASTMULT, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AMPMULTTEMP,LC_VD_LASTMULT));

static char const lcmd_var_name_AMPMULTTEMP_MULT[] = "mult";
static RISMDInterfaceVariable const lcmd_var_AMPMULTTEMP_MULT =
INIT_RISMDInterfaceVariable(lcmd_var_name_AMPMULTTEMP_MULT, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AMPMULTTEMP,LC_VD_MULT), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_TON;
static char const lcmd_var_name_AMPMULTTEMP_RSTTIMER[] = "rstTimer";
static RISMDStdVariable const lcmd_var_AMPMULTTEMP_RSTTIMER =
INIT_RISMDStdVariable(lcmd_var_name_AMPMULTTEMP_RSTTIMER, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_AMPMULTTEMP,LC_VD_RSTTIMER));

static char const lcmd_var_name_AMPMULTTEMP_TEMP[] = "temp";
static RISMDInterfaceVariable const lcmd_var_AMPMULTTEMP_TEMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_AMPMULTTEMP_TEMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AMPMULTTEMP,LC_VD_TEMP), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AMPMULTTEMP_TIMEOUT[] = "timeout";
static RISMDStdVariable const lcmd_var_AMPMULTTEMP_TIMEOUT =
INIT_RISMDStdVariable(lcmd_var_name_AMPMULTTEMP_TIMEOUT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AMPMULTTEMP,LC_VD_TIMEOUT));

static RISMDReference const lcmd_var_list_AMPMULTTEMP[] =
{
  INIT_RISMDReference(&lcmd_var_AMPMULTTEMP_ENO),
  INIT_RISMDReference(&lcmd_var_AMPMULTTEMP_INSTANTMULT),
  INIT_RISMDReference(&lcmd_var_AMPMULTTEMP_LASTMULT),
  INIT_RISMDReference(&lcmd_var_AMPMULTTEMP_MULT),
  INIT_RISMDReference(&lcmd_var_AMPMULTTEMP_RSTTIMER),
  INIT_RISMDReference(&lcmd_var_AMPMULTTEMP_TEMP),
  INIT_RISMDReference(&lcmd_var_AMPMULTTEMP_TIMEOUT),
};

static char const lcmd_type_name_AMPMULTTEMP[] = "AMPMULTTEMP";
RISMDPOUType const lcmd_type_AMPMULTTEMP = INIT_RISMDPOUType(lcmd_type_name_AMPMULTTEMP, sizeof(LC_TD_FunctionBlock_AMPMULTTEMP), 7, lcmd_var_list_AMPMULTTEMP);
