#include <RISMD.h>
#include <lcfu___essdisplay.h>

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_ESSDISPLAY_ALARMS[] = "alarms";
static RISMDInterfaceVariable const lcmd_var_ESSDISPLAY_ALARMS =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSDISPLAY_ALARMS, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_ESSDISPLAY,LC_VD_ALARMS), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_ESSDISPLAY_AMPR[] = "ampr";
static RISMDInterfaceVariable const lcmd_var_ESSDISPLAY_AMPR =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSDISPLAY_AMPR, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_ESSDISPLAY,LC_VD_AMPR), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_ESSDISPLAY_DUTYCYCLE[] = "dutyCycle";
static RISMDInterfaceVariable const lcmd_var_ESSDISPLAY_DUTYCYCLE =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSDISPLAY_DUTYCYCLE, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_ESSDISPLAY,LC_VD_DUTYCYCLE), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_ESSDISPLAY_EMERGSTAT[] = "emergStat";
static RISMDInterfaceVariable const lcmd_var_ESSDISPLAY_EMERGSTAT =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSDISPLAY_EMERGSTAT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSDISPLAY,LC_VD_EMERGSTAT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSDISPLAY_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_ESSDISPLAY_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSDISPLAY_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSDISPLAY,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_ESSDISPLAY_INSTALLEDCAP[] = "installedCap";
static RISMDInterfaceVariable const lcmd_var_ESSDISPLAY_INSTALLEDCAP =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSDISPLAY_INSTALLEDCAP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_ESSDISPLAY,LC_VD_INSTALLEDCAP), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_DINT;
static char const lcmd_var_name_ESSDISPLAY_MAXT[] = "maxT";
static RISMDInterfaceVariable const lcmd_var_ESSDISPLAY_MAXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSDISPLAY_MAXT, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_ESSDISPLAY,LC_VD_MAXT), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_ESSDISPLAY_MAXV[] = "maxV";
static RISMDInterfaceVariable const lcmd_var_ESSDISPLAY_MAXV =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSDISPLAY_MAXV, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_ESSDISPLAY,LC_VD_MAXV), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSDISPLAY_MINT[] = "minT";
static RISMDInterfaceVariable const lcmd_var_ESSDISPLAY_MINT =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSDISPLAY_MINT, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_ESSDISPLAY,LC_VD_MINT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSDISPLAY_MINV[] = "minV";
static RISMDInterfaceVariable const lcmd_var_ESSDISPLAY_MINV =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSDISPLAY_MINV, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_ESSDISPLAY,LC_VD_MINV), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSDISPLAY_REMAININGCAP[] = "remainingCap";
static RISMDInterfaceVariable const lcmd_var_ESSDISPLAY_REMAININGCAP =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSDISPLAY_REMAININGCAP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_ESSDISPLAY,LC_VD_REMAININGCAP), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_ESSDISPLAY_SOC[] = "SOC";
static RISMDInterfaceVariable const lcmd_var_ESSDISPLAY_SOC =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSDISPLAY_SOC, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_ESSDISPLAY,LC_VD_SOC), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSDISPLAY_STATE[] = "state";
static RISMDInterfaceVariable const lcmd_var_ESSDISPLAY_STATE =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSDISPLAY_STATE, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_ESSDISPLAY,LC_VD_STATE), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSDISPLAY_STOPSTAT[] = "stopStat";
static RISMDInterfaceVariable const lcmd_var_ESSDISPLAY_STOPSTAT =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSDISPLAY_STOPSTAT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSDISPLAY,LC_VD_STOPSTAT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSDISPLAY_VOLT[] = "volt";
static RISMDInterfaceVariable const lcmd_var_ESSDISPLAY_VOLT =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSDISPLAY_VOLT, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_ESSDISPLAY,LC_VD_VOLT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSDISPLAY_WATT[] = "WATT";
static RISMDInterfaceVariable const lcmd_var_ESSDISPLAY_WATT =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSDISPLAY_WATT, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_ESSDISPLAY,LC_VD_WATT), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_ESSDISPLAY[] =
{
  INIT_RISMDReference(&lcmd_var_ESSDISPLAY_ALARMS),
  INIT_RISMDReference(&lcmd_var_ESSDISPLAY_AMPR),
  INIT_RISMDReference(&lcmd_var_ESSDISPLAY_DUTYCYCLE),
  INIT_RISMDReference(&lcmd_var_ESSDISPLAY_EMERGSTAT),
  INIT_RISMDReference(&lcmd_var_ESSDISPLAY_ENO),
  INIT_RISMDReference(&lcmd_var_ESSDISPLAY_INSTALLEDCAP),
  INIT_RISMDReference(&lcmd_var_ESSDISPLAY_MAXT),
  INIT_RISMDReference(&lcmd_var_ESSDISPLAY_MAXV),
  INIT_RISMDReference(&lcmd_var_ESSDISPLAY_MINT),
  INIT_RISMDReference(&lcmd_var_ESSDISPLAY_MINV),
  INIT_RISMDReference(&lcmd_var_ESSDISPLAY_REMAININGCAP),
  INIT_RISMDReference(&lcmd_var_ESSDISPLAY_SOC),
  INIT_RISMDReference(&lcmd_var_ESSDISPLAY_STATE),
  INIT_RISMDReference(&lcmd_var_ESSDISPLAY_STOPSTAT),
  INIT_RISMDReference(&lcmd_var_ESSDISPLAY_VOLT),
  INIT_RISMDReference(&lcmd_var_ESSDISPLAY_WATT),
};

static char const lcmd_type_name_ESSDISPLAY[] = "ESSDISPLAY";
RISMDPOUType const lcmd_type_ESSDISPLAY = INIT_RISMDPOUType(lcmd_type_name_ESSDISPLAY, sizeof(LC_TD_FunctionBlock_ESSDISPLAY), 16, lcmd_var_list_ESSDISPLAY);
