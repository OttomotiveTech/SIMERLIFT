#include <RISMD.h>
#include <lcfu___socstate.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_SOCSTATE_CHARGECOMPLETE[] = "chargeComplete";
static RISMDInterfaceVariable const lcmd_var_SOCSTATE_CHARGECOMPLETE =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCSTATE_CHARGECOMPLETE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_CHARGECOMPLETE), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SOCSTATE_CHARGECOMPLETETRIG[] = "chargeCompleteTRIG";
static RISMDStdVariable const lcmd_var_SOCSTATE_CHARGECOMPLETETRIG =
INIT_RISMDStdVariable(lcmd_var_name_SOCSTATE_CHARGECOMPLETETRIG, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_CHARGECOMPLETETRIG));

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_SOCSTATE_COMPAREVALUE[] = "compareValue";
static RISMDStdVariable const lcmd_var_SOCSTATE_COMPAREVALUE =
INIT_RISMDStdVariable(lcmd_var_name_SOCSTATE_COMPAREVALUE, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_COMPAREVALUE));

static char const lcmd_var_name_SOCSTATE_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_SOCSTATE_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCSTATE_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_SOCSTATE_MEMWR[] = "memWr";
static RISMDInterfaceVariable const lcmd_var_SOCSTATE_MEMWR =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCSTATE_MEMWR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_MEMWR), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SOCSTATE_MEMWRTRIG[] = "memWrTRIG";
static RISMDStdVariable const lcmd_var_SOCSTATE_MEMWRTRIG =
INIT_RISMDStdVariable(lcmd_var_name_SOCSTATE_MEMWRTRIG, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_MEMWRTRIG));

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_SOCSTATE_PREVSTATE[] = "PREVSTATE";
static RISMDStdVariable const lcmd_var_SOCSTATE_PREVSTATE =
INIT_RISMDStdVariable(lcmd_var_name_SOCSTATE_PREVSTATE, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_PREVSTATE));

static char const lcmd_var_name_SOCSTATE_RDWH[] = "rdWh";
static RISMDInterfaceVariable const lcmd_var_SOCSTATE_RDWH =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCSTATE_RDWH, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_RDWH), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_SOCSTATE_SOC[] = "SOC";
static RISMDInterfaceVariable const lcmd_var_SOCSTATE_SOC =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCSTATE_SOC, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_SOC), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_SOCSTATE_SOCINTERVAL[] = "socInterval";
static RISMDStdVariable const lcmd_var_SOCSTATE_SOCINTERVAL =
INIT_RISMDStdVariable(lcmd_var_name_SOCSTATE_SOCINTERVAL, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_SOCINTERVAL));

static char const lcmd_var_name_SOCSTATE_SOCSTATE[] = "socState";
static RISMDInterfaceVariable const lcmd_var_SOCSTATE_SOCSTATE =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCSTATE_SOCSTATE, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_SOCSTATE), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_SOCSTATE_SOCSTATEELAPSEDTIME[] = "socSTATEELAPSEDTIME";
static RISMDStdVariable const lcmd_var_SOCSTATE_SOCSTATEELAPSEDTIME =
INIT_RISMDStdVariable(lcmd_var_name_SOCSTATE_SOCSTATEELAPSEDTIME, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_SOCSTATEELAPSEDTIME));

static char const lcmd_var_name_SOCSTATE_SOCSTATETIMEOUT[] = "socSTATETIMEOUT";
static RISMDStdVariable const lcmd_var_SOCSTATE_SOCSTATETIMEOUT =
INIT_RISMDStdVariable(lcmd_var_name_SOCSTATE_SOCSTATETIMEOUT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_SOCSTATETIMEOUT));

extern RISMDPOUType const lcmd_type_TON;
static char const lcmd_var_name_SOCSTATE_SOCTIMER[] = "socTIMER";
static RISMDStdVariable const lcmd_var_SOCSTATE_SOCTIMER =
INIT_RISMDStdVariable(lcmd_var_name_SOCSTATE_SOCTIMER, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_SOCTIMER));

static char const lcmd_var_name_SOCSTATE_STATE[] = "state";
static RISMDStdVariable const lcmd_var_SOCSTATE_STATE =
INIT_RISMDStdVariable(lcmd_var_name_SOCSTATE_STATE, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_STATE));

extern RISMDPOUType const lcmd_type_R_TRIG;
static char const lcmd_var_name_SOCSTATE_TRIGCHARGECOMPLETE[] = "trigChargeComplete";
static RISMDStdVariable const lcmd_var_SOCSTATE_TRIGCHARGECOMPLETE =
INIT_RISMDStdVariable(lcmd_var_name_SOCSTATE_TRIGCHARGECOMPLETE, &lcmd_type_R_TRIG, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_TRIGCHARGECOMPLETE));

static char const lcmd_var_name_SOCSTATE_TRIGMEMWR[] = "trigMemWr";
static RISMDStdVariable const lcmd_var_SOCSTATE_TRIGMEMWR =
INIT_RISMDStdVariable(lcmd_var_name_SOCSTATE_TRIGMEMWR, &lcmd_type_R_TRIG, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_TRIGMEMWR));

static char const lcmd_var_name_SOCSTATE_WHCAP[] = "whCap";
static RISMDInterfaceVariable const lcmd_var_SOCSTATE_WHCAP =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCSTATE_WHCAP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_WHCAP), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SOCSTATE_WHCHANGE[] = "whChange";
static RISMDStdVariable const lcmd_var_SOCSTATE_WHCHANGE =
INIT_RISMDStdVariable(lcmd_var_name_SOCSTATE_WHCHANGE, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_WHCHANGE));

static char const lcmd_var_name_SOCSTATE_WHINSTANT[] = "whInstant";
static RISMDInterfaceVariable const lcmd_var_SOCSTATE_WHINSTANT =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCSTATE_WHINSTANT, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_WHINSTANT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SOCSTATE_WHMEM[] = "whMem";
static RISMDInterfaceVariable const lcmd_var_SOCSTATE_WHMEM =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCSTATE_WHMEM, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_WHMEM), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SOCSTATE_WHREF[] = "whRef";
static RISMDStdVariable const lcmd_var_SOCSTATE_WHREF =
INIT_RISMDStdVariable(lcmd_var_name_SOCSTATE_WHREF, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_WHREF));

static char const lcmd_var_name_SOCSTATE_WHREM[] = "whRem";
static RISMDInterfaceVariable const lcmd_var_SOCSTATE_WHREM =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCSTATE_WHREM, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_WHREM), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_SOCSTATE_WHREMLAST[] = "whRemLast";
static RISMDStdVariable const lcmd_var_SOCSTATE_WHREMLAST =
INIT_RISMDStdVariable(lcmd_var_name_SOCSTATE_WHREMLAST, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_WHREMLAST));

static char const lcmd_var_name_SOCSTATE_WRWH[] = "wrWh";
static RISMDInterfaceVariable const lcmd_var_SOCSTATE_WRWH =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCSTATE_WRWH, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SOCSTATE,LC_VD_WRWH), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_SOCSTATE[] =
{
  INIT_RISMDReference(&lcmd_var_SOCSTATE_CHARGECOMPLETE),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_CHARGECOMPLETETRIG),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_COMPAREVALUE),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_ENO),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_MEMWR),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_MEMWRTRIG),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_PREVSTATE),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_RDWH),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_SOC),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_SOCINTERVAL),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_SOCSTATE),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_SOCSTATEELAPSEDTIME),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_SOCSTATETIMEOUT),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_SOCTIMER),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_STATE),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_TRIGCHARGECOMPLETE),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_TRIGMEMWR),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_WHCAP),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_WHCHANGE),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_WHINSTANT),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_WHMEM),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_WHREF),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_WHREM),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_WHREMLAST),
  INIT_RISMDReference(&lcmd_var_SOCSTATE_WRWH),
};

static char const lcmd_type_name_SOCSTATE[] = "SOCSTATE";
RISMDPOUType const lcmd_type_SOCSTATE = INIT_RISMDPOUType(lcmd_type_name_SOCSTATE, sizeof(LC_TD_FunctionBlock_SOCSTATE), 25, lcmd_var_list_SOCSTATE);
