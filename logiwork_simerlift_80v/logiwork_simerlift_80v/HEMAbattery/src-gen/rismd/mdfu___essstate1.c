#include <RISMD.h>
#include <lcfu___essstate1.h>

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_ESSSTATE1_BATSTATEELAPSEDTIME[] = "BATSTATEELAPSEDTIME";
static RISMDStdVariable const lcmd_var_ESSSTATE1_BATSTATEELAPSEDTIME =
INIT_RISMDStdVariable(lcmd_var_name_ESSSTATE1_BATSTATEELAPSEDTIME, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_BATSTATEELAPSEDTIME));

static char const lcmd_var_name_ESSSTATE1_BATSTATEINTERVAL[] = "BATSTATEINTERVAL";
static RISMDStdVariable const lcmd_var_ESSSTATE1_BATSTATEINTERVAL =
INIT_RISMDStdVariable(lcmd_var_name_ESSSTATE1_BATSTATEINTERVAL, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_BATSTATEINTERVAL));

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_ESSSTATE1_BATSTATETIMEOUT[] = "BATSTATETIMEOUT";
static RISMDStdVariable const lcmd_var_ESSSTATE1_BATSTATETIMEOUT =
INIT_RISMDStdVariable(lcmd_var_name_ESSSTATE1_BATSTATETIMEOUT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_BATSTATETIMEOUT));

extern RISMDDerivedType const lcmd_type_BATTSTATE;
static char const lcmd_var_name_ESSSTATE1_BATTERYSTATE[] = "BATTERYSTATE";
static RISMDStdVariable const lcmd_var_ESSSTATE1_BATTERYSTATE =
INIT_RISMDStdVariable(lcmd_var_name_ESSSTATE1_BATTERYSTATE, &lcmd_type_BATTSTATE, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_BATTERYSTATE));

extern RISMDPOUType const lcmd_type_TON;
static char const lcmd_var_name_ESSSTATE1_BATTIMER[] = "BATTIMER";
static RISMDStdVariable const lcmd_var_ESSSTATE1_BATTIMER =
INIT_RISMDStdVariable(lcmd_var_name_ESSSTATE1_BATTIMER, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_BATTIMER));

static char const lcmd_var_name_ESSSTATE1_CHARGE[] = "charge";
static RISMDInterfaceVariable const lcmd_var_ESSSTATE1_CHARGE =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSSTATE1_CHARGE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_CHARGE), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSSTATE1_CHARGEPROTECT[] = "chargeProtect";
static RISMDInterfaceVariable const lcmd_var_ESSSTATE1_CHARGEPROTECT =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSSTATE1_CHARGEPROTECT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_CHARGEPROTECT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSSTATE1_CONTACT[] = "contact";
static RISMDInterfaceVariable const lcmd_var_ESSSTATE1_CONTACT =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSSTATE1_CONTACT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_CONTACT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_ESSSTATE1_CONTACTFBK[] = "contactFbk";
static RISMDInterfaceVariable const lcmd_var_ESSSTATE1_CONTACTFBK =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSSTATE1_CONTACTFBK, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_CONTACTFBK), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSSTATE1_CONTACTFBKNEG[] = "contactFbkNeg";
static RISMDInterfaceVariable const lcmd_var_ESSSTATE1_CONTACTFBKNEG =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSSTATE1_CONTACTFBKNEG, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_CONTACTFBKNEG), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSSTATE1_CONTACTFBKTIMER[] = "contactFbkTimer";
static RISMDStdVariable const lcmd_var_ESSSTATE1_CONTACTFBKTIMER =
INIT_RISMDStdVariable(lcmd_var_name_ESSSTATE1_CONTACTFBKTIMER, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_CONTACTFBKTIMER));

static char const lcmd_var_name_ESSSTATE1_CONTACTNEG[] = "contactNeg";
static RISMDInterfaceVariable const lcmd_var_ESSSTATE1_CONTACTNEG =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSSTATE1_CONTACTNEG, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_CONTACTNEG), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_ESSSTATE1_DISCHARGE[] = "discharge";
static RISMDInterfaceVariable const lcmd_var_ESSSTATE1_DISCHARGE =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSSTATE1_DISCHARGE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_DISCHARGE), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSSTATE1_DISCHARGEPROTECT[] = "dischargeProtect";
static RISMDInterfaceVariable const lcmd_var_ESSSTATE1_DISCHARGEPROTECT =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSSTATE1_DISCHARGEPROTECT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_DISCHARGEPROTECT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSSTATE1_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_ESSSTATE1_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSSTATE1_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_ESSSTATE1_FAULT[] = "fault";
static RISMDInterfaceVariable const lcmd_var_ESSSTATE1_FAULT =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSSTATE1_FAULT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_FAULT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSSTATE1_PRECHARGEOK[] = "prechargeOk";
static RISMDInterfaceVariable const lcmd_var_ESSSTATE1_PRECHARGEOK =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSSTATE1_PRECHARGEOK, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_PRECHARGEOK), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSSTATE1_PRECHARGEON[] = "prechargeOn";
static RISMDInterfaceVariable const lcmd_var_ESSSTATE1_PRECHARGEON =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSSTATE1_PRECHARGEON, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_PRECHARGEON), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_ESSSTATE1_PREVSTATE[] = "PREVSTATE";
static RISMDStdVariable const lcmd_var_ESSSTATE1_PREVSTATE =
INIT_RISMDStdVariable(lcmd_var_name_ESSSTATE1_PREVSTATE, &lcmd_type_BATTSTATE, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_PREVSTATE));

static char const lcmd_var_name_ESSSTATE1_SHUTDOWN[] = "shutdown";
static RISMDInterfaceVariable const lcmd_var_ESSSTATE1_SHUTDOWN =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSSTATE1_SHUTDOWN, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_SHUTDOWN), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSSTATE1_SHUTDOWNCOMPLETE[] = "shutdownComplete";
static RISMDInterfaceVariable const lcmd_var_ESSSTATE1_SHUTDOWNCOMPLETE =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSSTATE1_SHUTDOWNCOMPLETE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_SHUTDOWNCOMPLETE), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSSTATE1_STANDBYINTERVAL[] = "STANDBYINTERVAL";
static RISMDStdVariable const lcmd_var_ESSSTATE1_STANDBYINTERVAL =
INIT_RISMDStdVariable(lcmd_var_name_ESSSTATE1_STANDBYINTERVAL, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_STANDBYINTERVAL));

static char const lcmd_var_name_ESSSTATE1_STATE[] = "STATE";
static RISMDInterfaceVariable const lcmd_var_ESSSTATE1_STATE =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSSTATE1_STATE, &lcmd_type_BATTSTATE, offsetof(LC_TD_FunctionBlock_ESSSTATE1,LC_VD_STATE), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_ESSSTATE1[] =
{
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_BATSTATEELAPSEDTIME),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_BATSTATEINTERVAL),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_BATSTATETIMEOUT),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_BATTERYSTATE),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_BATTIMER),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_CHARGE),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_CHARGEPROTECT),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_CONTACT),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_CONTACTFBK),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_CONTACTFBKNEG),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_CONTACTFBKTIMER),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_CONTACTNEG),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_DISCHARGE),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_DISCHARGEPROTECT),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_ENO),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_FAULT),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_PRECHARGEOK),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_PRECHARGEON),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_PREVSTATE),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_SHUTDOWN),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_SHUTDOWNCOMPLETE),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_STANDBYINTERVAL),
  INIT_RISMDReference(&lcmd_var_ESSSTATE1_STATE),
};

static char const lcmd_type_name_ESSSTATE1[] = "ESSSTATE1";
RISMDPOUType const lcmd_type_ESSSTATE1 = INIT_RISMDPOUType(lcmd_type_name_ESSSTATE1, sizeof(LC_TD_FunctionBlock_ESSSTATE1), 23, lcmd_var_list_ESSSTATE1);
