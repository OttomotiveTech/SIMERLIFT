#include <RISMD.h>
#include <lcfu___socisz.h>

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_SOCISZ_CAPACITYWH[] = "capacityWh";
static RISMDInterfaceVariable const lcmd_var_SOCISZ_CAPACITYWH =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCISZ_CAPACITYWH, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_SOCISZ,LC_VD_CAPACITYWH), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_SOCISZ_CHARGECOMPLETED[] = "chargeCompleted";
static RISMDInterfaceVariable const lcmd_var_SOCISZ_CHARGECOMPLETED =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCISZ_CHARGECOMPLETED, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SOCISZ,LC_VD_CHARGECOMPLETED), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SOCISZ_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_SOCISZ_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCISZ_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SOCISZ,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_FMEMW_REAL;
static char const lcmd_var_name_SOCISZ_FMEMW_REAL1[] = "fMemW_REAL1";
static RISMDStdVariable const lcmd_var_SOCISZ_FMEMW_REAL1 =
INIT_RISMDStdVariable(lcmd_var_name_SOCISZ_FMEMW_REAL1, &lcmd_type_FMEMW_REAL, offsetof(LC_TD_FunctionBlock_SOCISZ,LC_VD_FMEMW_REAL1));

static char const lcmd_var_name_SOCISZ_INSTANTWH[] = "instantWh";
static RISMDInterfaceVariable const lcmd_var_SOCISZ_INSTANTWH =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCISZ_INSTANTWH, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_SOCISZ,LC_VD_INSTANTWH), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SOCISZ_MEMORYWRITE[] = "memoryWrite";
static RISMDInterfaceVariable const lcmd_var_SOCISZ_MEMORYWRITE =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCISZ_MEMORYWRITE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SOCISZ,LC_VD_MEMORYWRITE), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SOCISZ_MEMREADWH[] = "memReadWh";
static RISMDStdVariable const lcmd_var_SOCISZ_MEMREADWH =
INIT_RISMDStdVariable(lcmd_var_name_SOCISZ_MEMREADWH, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_SOCISZ,LC_VD_MEMREADWH));

static char const lcmd_var_name_SOCISZ_REMAININGWH[] = "remainingWh";
static RISMDInterfaceVariable const lcmd_var_SOCISZ_REMAININGWH =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCISZ_REMAININGWH, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_SOCISZ,LC_VD_REMAININGWH), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_RMEM_REAL;
static char const lcmd_var_name_SOCISZ_RMEM_REAL1[] = "RMEM_REAL1";
static RISMDStdVariable const lcmd_var_SOCISZ_RMEM_REAL1 =
INIT_RISMDStdVariable(lcmd_var_name_SOCISZ_RMEM_REAL1, &lcmd_type_RMEM_REAL, offsetof(LC_TD_FunctionBlock_SOCISZ,LC_VD_RMEM_REAL1));

static char const lcmd_var_name_SOCISZ_SOC[] = "SOC";
static RISMDInterfaceVariable const lcmd_var_SOCISZ_SOC =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCISZ_SOC, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_SOCISZ,LC_VD_SOC), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_SOCSTATE;
static char const lcmd_var_name_SOCISZ_SOCSTATE1[] = "socState1";
static RISMDStdVariable const lcmd_var_SOCISZ_SOCSTATE1 =
INIT_RISMDStdVariable(lcmd_var_name_SOCISZ_SOCSTATE1, &lcmd_type_SOCSTATE, offsetof(LC_TD_FunctionBlock_SOCISZ,LC_VD_SOCSTATE1));

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_SOCISZ_STATE[] = "state";
static RISMDInterfaceVariable const lcmd_var_SOCISZ_STATE =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCISZ_STATE, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_SOCISZ,LC_VD_STATE), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_SOCISZ[] =
{
  INIT_RISMDReference(&lcmd_var_SOCISZ_CAPACITYWH),
  INIT_RISMDReference(&lcmd_var_SOCISZ_CHARGECOMPLETED),
  INIT_RISMDReference(&lcmd_var_SOCISZ_ENO),
  INIT_RISMDReference(&lcmd_var_SOCISZ_FMEMW_REAL1),
  INIT_RISMDReference(&lcmd_var_SOCISZ_INSTANTWH),
  INIT_RISMDReference(&lcmd_var_SOCISZ_MEMORYWRITE),
  INIT_RISMDReference(&lcmd_var_SOCISZ_MEMREADWH),
  INIT_RISMDReference(&lcmd_var_SOCISZ_REMAININGWH),
  INIT_RISMDReference(&lcmd_var_SOCISZ_RMEM_REAL1),
  INIT_RISMDReference(&lcmd_var_SOCISZ_SOC),
  INIT_RISMDReference(&lcmd_var_SOCISZ_SOCSTATE1),
  INIT_RISMDReference(&lcmd_var_SOCISZ_STATE),
};

static char const lcmd_type_name_SOCISZ[] = "SOCISZ";
RISMDPOUType const lcmd_type_SOCISZ = INIT_RISMDPOUType(lcmd_type_name_SOCISZ, sizeof(LC_TD_FunctionBlock_SOCISZ), 12, lcmd_var_list_SOCISZ);
