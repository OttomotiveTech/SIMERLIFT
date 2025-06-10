#include <RISMD.h>
#include <lcfu___chargestate.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_CHARGESTATE_AMPERLOW[] = "amperLow";
static RISMDStdVariable const lcmd_var_CHARGESTATE_AMPERLOW =
INIT_RISMDStdVariable(lcmd_var_name_CHARGESTATE_AMPERLOW, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_AMPERLOW));

static char const lcmd_var_name_CHARGESTATE_AMPERLOW_MID[] = "amperLow_mid";
static RISMDStdVariable const lcmd_var_CHARGESTATE_AMPERLOW_MID =
INIT_RISMDStdVariable(lcmd_var_name_CHARGESTATE_AMPERLOW_MID, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_AMPERLOW_MID));

extern RISMDPOUType const lcmd_type_TON;
static char const lcmd_var_name_CHARGESTATE_AMPERTIMERHIGH[] = "amperTIMERhigh";
static RISMDStdVariable const lcmd_var_CHARGESTATE_AMPERTIMERHIGH =
INIT_RISMDStdVariable(lcmd_var_name_CHARGESTATE_AMPERTIMERHIGH, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_AMPERTIMERHIGH));

extern RISMDPOUType const lcmd_type_TOF;
static char const lcmd_var_name_CHARGESTATE_AMPERTIMERLOW[] = "amperTIMERlow";
static RISMDStdVariable const lcmd_var_CHARGESTATE_AMPERTIMERLOW =
INIT_RISMDStdVariable(lcmd_var_name_CHARGESTATE_AMPERTIMERLOW, &lcmd_type_TOF, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_AMPERTIMERLOW));

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_CHARGESTATE_BALAMPR[] = "balAmpr";
static RISMDInterfaceVariable const lcmd_var_CHARGESTATE_BALAMPR =
INIT_RISMDInterfaceVariable(lcmd_var_name_CHARGESTATE_BALAMPR, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_BALAMPR), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CHARGESTATE_BALANCE[] = "balance";
static RISMDInterfaceVariable const lcmd_var_CHARGESTATE_BALANCE =
INIT_RISMDInterfaceVariable(lcmd_var_name_CHARGESTATE_BALANCE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_BALANCE), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CHARGESTATE_BALANCEOK[] = "balanceOK";
static RISMDStdVariable const lcmd_var_CHARGESTATE_BALANCEOK =
INIT_RISMDStdVariable(lcmd_var_name_CHARGESTATE_BALANCEOK, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_BALANCEOK));

static char const lcmd_var_name_CHARGESTATE_BALANCEOK_MID[] = "balanceOK_mid";
static RISMDStdVariable const lcmd_var_CHARGESTATE_BALANCEOK_MID =
INIT_RISMDStdVariable(lcmd_var_name_CHARGESTATE_BALANCEOK_MID, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_BALANCEOK_MID));

static char const lcmd_var_name_CHARGESTATE_BALANCETIMERHIGH[] = "balanceTIMERhigh";
static RISMDStdVariable const lcmd_var_CHARGESTATE_BALANCETIMERHIGH =
INIT_RISMDStdVariable(lcmd_var_name_CHARGESTATE_BALANCETIMERHIGH, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_BALANCETIMERHIGH));

static char const lcmd_var_name_CHARGESTATE_BALANCETIMERLOW[] = "balanceTIMERlow";
static RISMDStdVariable const lcmd_var_CHARGESTATE_BALANCETIMERLOW =
INIT_RISMDStdVariable(lcmd_var_name_CHARGESTATE_BALANCETIMERLOW, &lcmd_type_TOF, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_BALANCETIMERLOW));

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_CHARGESTATE_BALDIFF[] = "balDiff";
static RISMDInterfaceVariable const lcmd_var_CHARGESTATE_BALDIFF =
INIT_RISMDInterfaceVariable(lcmd_var_name_CHARGESTATE_BALDIFF, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_BALDIFF), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CHARGESTATE_BALDIFFTOL[] = "balDiffTol";
static RISMDStdVariable const lcmd_var_CHARGESTATE_BALDIFFTOL =
INIT_RISMDStdVariable(lcmd_var_name_CHARGESTATE_BALDIFFTOL, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_BALDIFFTOL));

static char const lcmd_var_name_CHARGESTATE_BATTAMPR[] = "battAmpr";
static RISMDInterfaceVariable const lcmd_var_CHARGESTATE_BATTAMPR =
INIT_RISMDInterfaceVariable(lcmd_var_name_CHARGESTATE_BATTAMPR, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_BATTAMPR), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CHARGESTATE_CHARGEAMPR[] = "chargeAmpr";
static RISMDInterfaceVariable const lcmd_var_CHARGESTATE_CHARGEAMPR =
INIT_RISMDInterfaceVariable(lcmd_var_name_CHARGESTATE_CHARGEAMPR, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_CHARGEAMPR), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_CHARGESTATE_CHARGEINTERVAL[] = "chargeInterval";
static RISMDStdVariable const lcmd_var_CHARGESTATE_CHARGEINTERVAL =
INIT_RISMDStdVariable(lcmd_var_name_CHARGESTATE_CHARGEINTERVAL, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_CHARGEINTERVAL));

static char const lcmd_var_name_CHARGESTATE_CHARGEON[] = "chargeOn";
static RISMDInterfaceVariable const lcmd_var_CHARGESTATE_CHARGEON =
INIT_RISMDInterfaceVariable(lcmd_var_name_CHARGESTATE_CHARGEON, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_CHARGEON), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CHARGESTATE_CHARGESTATEELAPSEDTIME[] = "chargeSTATEELAPSEDTIME";
static RISMDStdVariable const lcmd_var_CHARGESTATE_CHARGESTATEELAPSEDTIME =
INIT_RISMDStdVariable(lcmd_var_name_CHARGESTATE_CHARGESTATEELAPSEDTIME, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_CHARGESTATEELAPSEDTIME));

static char const lcmd_var_name_CHARGESTATE_CHARGESTATETIMEOUT[] = "chargeSTATETIMEOUT";
static RISMDStdVariable const lcmd_var_CHARGESTATE_CHARGESTATETIMEOUT =
INIT_RISMDStdVariable(lcmd_var_name_CHARGESTATE_CHARGESTATETIMEOUT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_CHARGESTATETIMEOUT));

static char const lcmd_var_name_CHARGESTATE_CHARGETIMER[] = "chargeTIMER";
static RISMDStdVariable const lcmd_var_CHARGESTATE_CHARGETIMER =
INIT_RISMDStdVariable(lcmd_var_name_CHARGESTATE_CHARGETIMER, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_CHARGETIMER));

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_CHARGESTATE_CHSTATE[] = "chState";
static RISMDInterfaceVariable const lcmd_var_CHARGESTATE_CHSTATE =
INIT_RISMDInterfaceVariable(lcmd_var_name_CHARGESTATE_CHSTATE, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_CHSTATE), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CHARGESTATE_COMPLETE[] = "complete";
static RISMDInterfaceVariable const lcmd_var_CHARGESTATE_COMPLETE =
INIT_RISMDInterfaceVariable(lcmd_var_name_CHARGESTATE_COMPLETE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_COMPLETE), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CHARGESTATE_DMCC[] = "dmcc";
static RISMDInterfaceVariable const lcmd_var_CHARGESTATE_DMCC =
INIT_RISMDInterfaceVariable(lcmd_var_name_CHARGESTATE_DMCC, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_DMCC), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CHARGESTATE_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_CHARGESTATE_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_CHARGESTATE_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CHARGESTATE_MAINCOMPLETE[] = "mainComplete";
static RISMDInterfaceVariable const lcmd_var_CHARGESTATE_MAINCOMPLETE =
INIT_RISMDInterfaceVariable(lcmd_var_name_CHARGESTATE_MAINCOMPLETE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_MAINCOMPLETE), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CHARGESTATE_MAXCELL[] = "maxCell";
static RISMDInterfaceVariable const lcmd_var_CHARGESTATE_MAXCELL =
INIT_RISMDInterfaceVariable(lcmd_var_name_CHARGESTATE_MAXCELL, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_MAXCELL), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CHARGESTATE_MINCELL[] = "minCell";
static RISMDInterfaceVariable const lcmd_var_CHARGESTATE_MINCELL =
INIT_RISMDInterfaceVariable(lcmd_var_name_CHARGESTATE_MINCELL, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_MINCELL), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CHARGESTATE_PREVSTATE[] = "PREVSTATE";
static RISMDStdVariable const lcmd_var_CHARGESTATE_PREVSTATE =
INIT_RISMDStdVariable(lcmd_var_name_CHARGESTATE_PREVSTATE, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_PREVSTATE));

static char const lcmd_var_name_CHARGESTATE_STATE[] = "state";
static RISMDStdVariable const lcmd_var_CHARGESTATE_STATE =
INIT_RISMDStdVariable(lcmd_var_name_CHARGESTATE_STATE, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_CHARGESTATE,LC_VD_STATE));

static RISMDReference const lcmd_var_list_CHARGESTATE[] =
{
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_AMPERLOW),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_AMPERLOW_MID),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_AMPERTIMERHIGH),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_AMPERTIMERLOW),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_BALAMPR),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_BALANCE),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_BALANCEOK),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_BALANCEOK_MID),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_BALANCETIMERHIGH),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_BALANCETIMERLOW),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_BALDIFF),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_BALDIFFTOL),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_BATTAMPR),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_CHARGEAMPR),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_CHARGEINTERVAL),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_CHARGEON),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_CHARGESTATEELAPSEDTIME),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_CHARGESTATETIMEOUT),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_CHARGETIMER),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_CHSTATE),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_COMPLETE),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_DMCC),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_ENO),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_MAINCOMPLETE),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_MAXCELL),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_MINCELL),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_PREVSTATE),
  INIT_RISMDReference(&lcmd_var_CHARGESTATE_STATE),
};

static char const lcmd_type_name_CHARGESTATE[] = "CHARGESTATE";
RISMDPOUType const lcmd_type_CHARGESTATE = INIT_RISMDPOUType(lcmd_type_name_CHARGESTATE, sizeof(LC_TD_FunctionBlock_CHARGESTATE), 28, lcmd_var_list_CHARGESTATE);
