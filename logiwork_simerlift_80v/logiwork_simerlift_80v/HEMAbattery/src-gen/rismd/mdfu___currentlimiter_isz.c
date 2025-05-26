#include <RISMD.h>
#include <lcfu___currentlimiter_isz.h>

extern RISMDPOUType const lcmd_type_COUNTIMR;
static char const lcmd_var_name_CURRENTLIMITER_ISZ_COUNTIMR1[] = "CounTimR1";
static RISMDStdVariable const lcmd_var_CURRENTLIMITER_ISZ_COUNTIMR1 =
INIT_RISMDStdVariable(lcmd_var_name_CURRENTLIMITER_ISZ_COUNTIMR1, &lcmd_type_COUNTIMR, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD_COUNTIMR1));

extern RISMDPOUType const lcmd_type_CTUD;
static char const lcmd_var_name_CURRENTLIMITER_ISZ_CTUD2[] = "CTUD2";
static RISMDStdVariable const lcmd_var_CURRENTLIMITER_ISZ_CTUD2 =
INIT_RISMDStdVariable(lcmd_var_name_CURRENTLIMITER_ISZ_CTUD2, &lcmd_type_CTUD, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD_CTUD2));

extern RISMDSimpleNumType const risMdType_INT;
static char const lcmd_var_name_CURRENTLIMITER_ISZ_CURRENT[] = "Current";
static RISMDInterfaceVariable const lcmd_var_CURRENTLIMITER_ISZ_CURRENT =
INIT_RISMDInterfaceVariable(lcmd_var_name_CURRENTLIMITER_ISZ_CURRENT, &risMdType_INT, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD_CURRENT), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_CURRENTLIMITER_ISZ_DERATINGTOCONT[] = "deratingToCont";
static RISMDStdVariable const lcmd_var_CURRENTLIMITER_ISZ_DERATINGTOCONT =
INIT_RISMDStdVariable(lcmd_var_name_CURRENTLIMITER_ISZ_DERATINGTOCONT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD_DERATINGTOCONT));

static char const lcmd_var_name_CURRENTLIMITER_ISZ_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_CURRENTLIMITER_ISZ_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_CURRENTLIMITER_ISZ_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CURRENTLIMITER_ISZ_EXCEED30S[] = "exceed30s";
static RISMDStdVariable const lcmd_var_CURRENTLIMITER_ISZ_EXCEED30S =
INIT_RISMDStdVariable(lcmd_var_name_CURRENTLIMITER_ISZ_EXCEED30S, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD_EXCEED30S));

extern RISMDPOUType const lcmd_type_FLASH;
static char const lcmd_var_name_CURRENTLIMITER_ISZ_FLASH5[] = "FLASH5";
static RISMDStdVariable const lcmd_var_CURRENTLIMITER_ISZ_FLASH5 =
INIT_RISMDStdVariable(lcmd_var_name_CURRENTLIMITER_ISZ_FLASH5, &lcmd_type_FLASH, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD_FLASH5));

static char const lcmd_var_name_CURRENTLIMITER_ISZ_FLASH6[] = "FLASH6";
static RISMDStdVariable const lcmd_var_CURRENTLIMITER_ISZ_FLASH6 =
INIT_RISMDStdVariable(lcmd_var_name_CURRENTLIMITER_ISZ_FLASH6, &lcmd_type_FLASH, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD_FLASH6));

static char const lcmd_var_name_CURRENTLIMITER_ISZ_LIM[] = "Lim";
static RISMDInterfaceVariable const lcmd_var_CURRENTLIMITER_ISZ_LIM =
INIT_RISMDInterfaceVariable(lcmd_var_name_CURRENTLIMITER_ISZ_LIM, &risMdType_INT, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD_LIM), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CURRENTLIMITER_ISZ_LIM30S[] = "Lim30s";
static RISMDInterfaceVariable const lcmd_var_CURRENTLIMITER_ISZ_LIM30S =
INIT_RISMDInterfaceVariable(lcmd_var_name_CURRENTLIMITER_ISZ_LIM30S, &risMdType_INT, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD_LIM30S), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CURRENTLIMITER_ISZ_LIMCONT[] = "LimCont";
static RISMDInterfaceVariable const lcmd_var_CURRENTLIMITER_ISZ_LIMCONT =
INIT_RISMDInterfaceVariable(lcmd_var_name_CURRENTLIMITER_ISZ_LIMCONT, &risMdType_INT, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD_LIMCONT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CURRENTLIMITER_ISZ_MAXCURRENT[] = "maxCurrent";
static RISMDStdVariable const lcmd_var_CURRENTLIMITER_ISZ_MAXCURRENT =
INIT_RISMDStdVariable(lcmd_var_name_CURRENTLIMITER_ISZ_MAXCURRENT, &risMdType_INT, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD_MAXCURRENT));

static char const lcmd_var_name_CURRENTLIMITER_ISZ_OVERCURRENT[] = "overCurrent";
static RISMDInterfaceVariable const lcmd_var_CURRENTLIMITER_ISZ_OVERCURRENT =
INIT_RISMDInterfaceVariable(lcmd_var_name_CURRENTLIMITER_ISZ_OVERCURRENT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD_OVERCURRENT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CURRENTLIMITER_ISZ_OVERCURRENT10SEC[] = "OverCurrent10sec";
static RISMDStdVariable const lcmd_var_CURRENTLIMITER_ISZ_OVERCURRENT10SEC =
INIT_RISMDStdVariable(lcmd_var_name_CURRENTLIMITER_ISZ_OVERCURRENT10SEC, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD_OVERCURRENT10SEC));

static char const lcmd_var_name_CURRENTLIMITER_ISZ_OVERCURRENT30SEC[] = "OverCurrent30sec";
static RISMDStdVariable const lcmd_var_CURRENTLIMITER_ISZ_OVERCURRENT30SEC =
INIT_RISMDStdVariable(lcmd_var_name_CURRENTLIMITER_ISZ_OVERCURRENT30SEC, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD_OVERCURRENT30SEC));

static char const lcmd_var_name_CURRENTLIMITER_ISZ_OVERCURRENTCONT[] = "OverCurrentCont";
static RISMDStdVariable const lcmd_var_CURRENTLIMITER_ISZ_OVERCURRENTCONT =
INIT_RISMDStdVariable(lcmd_var_name_CURRENTLIMITER_ISZ_OVERCURRENTCONT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD_OVERCURRENTCONT));

extern RISMDPOUType const lcmd_type_RS;
static char const lcmd_var_name_CURRENTLIMITER_ISZ_RS2[] = "RS2";
static RISMDStdVariable const lcmd_var_CURRENTLIMITER_ISZ_RS2 =
INIT_RISMDStdVariable(lcmd_var_name_CURRENTLIMITER_ISZ_RS2, &lcmd_type_RS, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD_RS2));

extern RISMDPOUType const lcmd_type_SR;
static char const lcmd_var_name_CURRENTLIMITER_ISZ_SR1[] = "SR1";
static RISMDStdVariable const lcmd_var_CURRENTLIMITER_ISZ_SR1 =
INIT_RISMDStdVariable(lcmd_var_name_CURRENTLIMITER_ISZ_SR1, &lcmd_type_SR, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD_SR1));

static char const lcmd_var_name_CURRENTLIMITER_ISZ___173_TO_INT[] = "__173_TO_INT";
static RISMDStdVariable const lcmd_var_CURRENTLIMITER_ISZ___173_TO_INT =
INIT_RISMDStdVariable(lcmd_var_name_CURRENTLIMITER_ISZ___173_TO_INT, &risMdType_INT, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD___173_TO_INT));

static char const lcmd_var_name_CURRENTLIMITER_ISZ___18_GE[] = "__18_GE";
static RISMDStdVariable const lcmd_var_CURRENTLIMITER_ISZ___18_GE =
INIT_RISMDStdVariable(lcmd_var_name_CURRENTLIMITER_ISZ___18_GE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD___18_GE));

static char const lcmd_var_name_CURRENTLIMITER_ISZ___19_GT[] = "__19_GT";
static RISMDStdVariable const lcmd_var_CURRENTLIMITER_ISZ___19_GT =
INIT_RISMDStdVariable(lcmd_var_name_CURRENTLIMITER_ISZ___19_GT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD___19_GT));

static char const lcmd_var_name_CURRENTLIMITER_ISZ___20_GT[] = "__20_GT";
static RISMDStdVariable const lcmd_var_CURRENTLIMITER_ISZ___20_GT =
INIT_RISMDStdVariable(lcmd_var_name_CURRENTLIMITER_ISZ___20_GT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD___20_GT));

static char const lcmd_var_name_CURRENTLIMITER_ISZ___31_OR[] = "__31_OR";
static RISMDStdVariable const lcmd_var_CURRENTLIMITER_ISZ___31_OR =
INIT_RISMDStdVariable(lcmd_var_name_CURRENTLIMITER_ISZ___31_OR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD___31_OR));

static char const lcmd_var_name_CURRENTLIMITER_ISZ___79_SEL[] = "__79_SEL";
static RISMDStdVariable const lcmd_var_CURRENTLIMITER_ISZ___79_SEL =
INIT_RISMDStdVariable(lcmd_var_name_CURRENTLIMITER_ISZ___79_SEL, &risMdType_INT, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD___79_SEL));

static char const lcmd_var_name_CURRENTLIMITER_ISZ___95_GT[] = "__95_GT";
static RISMDStdVariable const lcmd_var_CURRENTLIMITER_ISZ___95_GT =
INIT_RISMDStdVariable(lcmd_var_name_CURRENTLIMITER_ISZ___95_GT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD___95_GT));

static char const lcmd_var_name_CURRENTLIMITER_ISZ___98_LT[] = "__98_LT";
static RISMDStdVariable const lcmd_var_CURRENTLIMITER_ISZ___98_LT =
INIT_RISMDStdVariable(lcmd_var_name_CURRENTLIMITER_ISZ___98_LT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ,LC_VD___98_LT));

static RISMDReference const lcmd_var_list_CURRENTLIMITER_ISZ[] =
{
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ_COUNTIMR1),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ_CTUD2),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ_CURRENT),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ_DERATINGTOCONT),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ_ENO),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ_EXCEED30S),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ_FLASH5),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ_FLASH6),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ_LIM),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ_LIM30S),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ_LIMCONT),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ_MAXCURRENT),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ_OVERCURRENT),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ_OVERCURRENT10SEC),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ_OVERCURRENT30SEC),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ_OVERCURRENTCONT),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ_RS2),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ_SR1),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ___173_TO_INT),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ___18_GE),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ___19_GT),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ___20_GT),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ___31_OR),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ___79_SEL),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ___95_GT),
  INIT_RISMDReference(&lcmd_var_CURRENTLIMITER_ISZ___98_LT),
};

static char const lcmd_type_name_CURRENTLIMITER_ISZ[] = "CURRENTLIMITER_ISZ";
RISMDPOUType const lcmd_type_CURRENTLIMITER_ISZ = INIT_RISMDPOUType(lcmd_type_name_CURRENTLIMITER_ISZ, sizeof(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ), 26, lcmd_var_list_CURRENTLIMITER_ISZ);
