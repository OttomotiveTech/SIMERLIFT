#include <RISMD.h>
#include <lcfu___gui.h>

extern RISMDPOUType const lcmd_type_BAMTX;
static char const lcmd_var_name_GUI_BAMTX2[] = "BAMTX2";
static RISMDStdVariable const lcmd_var_GUI_BAMTX2 =
INIT_RISMDStdVariable(lcmd_var_name_GUI_BAMTX2, &lcmd_type_BAMTX, offsetof(LC_TD_FunctionBlock_GUI,LC_VD_BAMTX2));

extern RISMDPOUType const lcmd_type_BATTSTACKINFO;
static char const lcmd_var_name_GUI_BATTSTACKINFO1[] = "BATTSTACKinfo1";
static RISMDStdVariable const lcmd_var_GUI_BATTSTACKINFO1 =
INIT_RISMDStdVariable(lcmd_var_name_GUI_BATTSTACKINFO1, &lcmd_type_BATTSTACKINFO, offsetof(LC_TD_FunctionBlock_GUI,LC_VD_BATTSTACKINFO1));

extern RISMDPOUType const lcmd_type_CANRECV;
static char const lcmd_var_name_GUI_CANRECV5[] = "CANRECV5";
static RISMDStdVariable const lcmd_var_GUI_CANRECV5 =
INIT_RISMDStdVariable(lcmd_var_name_GUI_CANRECV5, &lcmd_type_CANRECV, offsetof(LC_TD_FunctionBlock_GUI,LC_VD_CANRECV5));

extern RISMDDerivedType const lcmd_type_TMS570_CAN;
static char const lcmd_var_name_GUI_CH[] = "CH";
static RISMDInterfaceVariable const lcmd_var_GUI_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUI_CH, &lcmd_type_TMS570_CAN, offsetof(LC_TD_FunctionBlock_GUI,LC_VD_CH), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_GUI_CURRENT[] = "Current";
static RISMDInterfaceVariable const lcmd_var_GUI_CURRENT =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUI_CURRENT, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_GUI,LC_VD_CURRENT), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_GUI_CYCLE[] = "Cycle";
static RISMDInterfaceVariable const lcmd_var_GUI_CYCLE =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUI_CYCLE, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_GUI,LC_VD_CYCLE), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_GUI_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_GUI_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUI_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_GUI,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_GUI_FAULT[] = "Fault";
static RISMDInterfaceVariable const lcmd_var_GUI_FAULT =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUI_FAULT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_GUI,LC_VD_FAULT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_GUI_GUIREQCOUNT[] = "guiReqCount";
static RISMDStdVariable const lcmd_var_GUI_GUIREQCOUNT =
INIT_RISMDStdVariable(lcmd_var_name_GUI_GUIREQCOUNT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_GUI,LC_VD_GUIREQCOUNT));

static char const lcmd_var_name_GUI_HUMIDITY[] = "Humidity";
static RISMDInterfaceVariable const lcmd_var_GUI_HUMIDITY =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUI_HUMIDITY, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_GUI,LC_VD_HUMIDITY), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_GUI_ID[] = "ID";
static RISMDInterfaceVariable const lcmd_var_GUI_ID =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUI_ID, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_GUI,LC_VD_ID), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_GUI_SOC[] = "SoC";
static RISMDInterfaceVariable const lcmd_var_GUI_SOC =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUI_SOC, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_GUI,LC_VD_SOC), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_GUI_SOH[] = "SoH";
static RISMDInterfaceVariable const lcmd_var_GUI_SOH =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUI_SOH, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_GUI,LC_VD_SOH), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_GUI_STATE[] = "State";
static RISMDInterfaceVariable const lcmd_var_GUI_STATE =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUI_STATE, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_GUI,LC_VD_STATE), RISMD_VARIABLE_SECTION_INPUT);

RISMDArrayType const lcmd_type_GUI_TAUXCELLS_ARR = INIT_RISMDArrayType(0,15,sizeof(LC_TD_USINT),&risMdType_USINT);
static char const lcmd_var_name_GUI_TAUXCELLS[] = "tauxCells";
static RISMDStdVariable const lcmd_var_GUI_TAUXCELLS =
INIT_RISMDStdVariable(lcmd_var_name_GUI_TAUXCELLS, &lcmd_type_GUI_TAUXCELLS_ARR, offsetof(LC_TD_FunctionBlock_GUI,LC_VD_TAUXCELLS));

static char const lcmd_var_name_GUI_TEMP[] = "Temp";
static RISMDInterfaceVariable const lcmd_var_GUI_TEMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUI_TEMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_GUI,LC_VD_TEMP), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDPOUType const lcmd_type_TP;
static char const lcmd_var_name_GUI_TP1[] = "TP1";
static RISMDStdVariable const lcmd_var_GUI_TP1 =
INIT_RISMDStdVariable(lcmd_var_name_GUI_TP1, &lcmd_type_TP, offsetof(LC_TD_FunctionBlock_GUI,LC_VD_TP1));

static char const lcmd_var_name_GUI_VOLTAGE[] = "Voltage";
static RISMDInterfaceVariable const lcmd_var_GUI_VOLTAGE =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUI_VOLTAGE, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_GUI,LC_VD_VOLTAGE), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_GUI___12_DIV[] = "__12_DIV";
static RISMDStdVariable const lcmd_var_GUI___12_DIV =
INIT_RISMDStdVariable(lcmd_var_name_GUI___12_DIV, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_GUI,LC_VD___12_DIV));

static char const lcmd_var_name_GUI___2558_TO_USINT[] = "__2558_TO_USINT";
static RISMDStdVariable const lcmd_var_GUI___2558_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_GUI___2558_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_GUI,LC_VD___2558_TO_USINT));

static char const lcmd_var_name_GUI___2559_TO_USINT[] = "__2559_TO_USINT";
static RISMDStdVariable const lcmd_var_GUI___2559_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_GUI___2559_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_GUI,LC_VD___2559_TO_USINT));

static char const lcmd_var_name_GUI___2560_TO_UINT[] = "__2560_TO_UINT";
static RISMDStdVariable const lcmd_var_GUI___2560_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_GUI___2560_TO_UINT, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_GUI,LC_VD___2560_TO_UINT));

static char const lcmd_var_name_GUI___2564_SEL[] = "__2564_SEL";
static RISMDStdVariable const lcmd_var_GUI___2564_SEL =
INIT_RISMDStdVariable(lcmd_var_name_GUI___2564_SEL, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_GUI,LC_VD___2564_SEL));

static char const lcmd_var_name_GUI___2565_NE[] = "__2565_NE";
static RISMDStdVariable const lcmd_var_GUI___2565_NE =
INIT_RISMDStdVariable(lcmd_var_name_GUI___2565_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_GUI,LC_VD___2565_NE));

static char const lcmd_var_name_GUI___27_TO_USINT[] = "__27_TO_USINT";
static RISMDStdVariable const lcmd_var_GUI___27_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_GUI___27_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_GUI,LC_VD___27_TO_USINT));

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_GUI___29_OUTBIT[] = "__29_OUTbit";
static RISMDStdVariable const lcmd_var_GUI___29_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_GUI___29_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_GUI,LC_VD___29_OUTBIT));

static char const lcmd_var_name_GUI___31_OUTBIT[] = "__31_OUTbit";
static RISMDStdVariable const lcmd_var_GUI___31_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_GUI___31_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_GUI,LC_VD___31_OUTBIT));

static char const lcmd_var_name_GUI___35_OUTBIT[] = "__35_OUTbit";
static RISMDStdVariable const lcmd_var_GUI___35_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_GUI___35_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_GUI,LC_VD___35_OUTBIT));

static char const lcmd_var_name_GUI___36_OUTBIT[] = "__36_OUTbit";
static RISMDStdVariable const lcmd_var_GUI___36_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_GUI___36_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_GUI,LC_VD___36_OUTBIT));

static char const lcmd_var_name_GUI___774_FROM_BIG_ENDIAN[] = "__774_FROM_BIG_ENDIAN";
static RISMDStdVariable const lcmd_var_GUI___774_FROM_BIG_ENDIAN =
INIT_RISMDStdVariable(lcmd_var_name_GUI___774_FROM_BIG_ENDIAN, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_GUI,LC_VD___774_FROM_BIG_ENDIAN));

static char const lcmd_var_name_GUI___779_AND[] = "__779_AND";
static RISMDStdVariable const lcmd_var_GUI___779_AND =
INIT_RISMDStdVariable(lcmd_var_name_GUI___779_AND, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_GUI,LC_VD___779_AND));

static char const lcmd_var_name_GUI___789_EQ[] = "__789_EQ";
static RISMDStdVariable const lcmd_var_GUI___789_EQ =
INIT_RISMDStdVariable(lcmd_var_name_GUI___789_EQ, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_GUI,LC_VD___789_EQ));

extern RISMDSimpleNumType const risMdType_SINT;
static char const lcmd_var_name_GUI___799_TO_SINT[] = "__799_TO_SINT";
static RISMDStdVariable const lcmd_var_GUI___799_TO_SINT =
INIT_RISMDStdVariable(lcmd_var_name_GUI___799_TO_SINT, &risMdType_SINT, offsetof(LC_TD_FunctionBlock_GUI,LC_VD___799_TO_SINT));

static char const lcmd_var_name_GUI___820_TO_USINT[] = "__820_TO_USINT";
static RISMDStdVariable const lcmd_var_GUI___820_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_GUI___820_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_GUI,LC_VD___820_TO_USINT));

static char const lcmd_var_name_GUI___988_DIV[] = "__988_DIV";
static RISMDStdVariable const lcmd_var_GUI___988_DIV =
INIT_RISMDStdVariable(lcmd_var_name_GUI___988_DIV, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_GUI,LC_VD___988_DIV));

static RISMDReference const lcmd_var_list_GUI[] =
{
  INIT_RISMDReference(&lcmd_var_GUI_BAMTX2),
  INIT_RISMDReference(&lcmd_var_GUI_BATTSTACKINFO1),
  INIT_RISMDReference(&lcmd_var_GUI_CANRECV5),
  INIT_RISMDReference(&lcmd_var_GUI_CH),
  INIT_RISMDReference(&lcmd_var_GUI_CURRENT),
  INIT_RISMDReference(&lcmd_var_GUI_CYCLE),
  INIT_RISMDReference(&lcmd_var_GUI_ENO),
  INIT_RISMDReference(&lcmd_var_GUI_FAULT),
  INIT_RISMDReference(&lcmd_var_GUI_GUIREQCOUNT),
  INIT_RISMDReference(&lcmd_var_GUI_HUMIDITY),
  INIT_RISMDReference(&lcmd_var_GUI_ID),
  INIT_RISMDReference(&lcmd_var_GUI_SOC),
  INIT_RISMDReference(&lcmd_var_GUI_SOH),
  INIT_RISMDReference(&lcmd_var_GUI_STATE),
  INIT_RISMDReference(&lcmd_var_GUI_TAUXCELLS),
  INIT_RISMDReference(&lcmd_var_GUI_TEMP),
  INIT_RISMDReference(&lcmd_var_GUI_TP1),
  INIT_RISMDReference(&lcmd_var_GUI_VOLTAGE),
  INIT_RISMDReference(&lcmd_var_GUI___12_DIV),
  INIT_RISMDReference(&lcmd_var_GUI___2558_TO_USINT),
  INIT_RISMDReference(&lcmd_var_GUI___2559_TO_USINT),
  INIT_RISMDReference(&lcmd_var_GUI___2560_TO_UINT),
  INIT_RISMDReference(&lcmd_var_GUI___2564_SEL),
  INIT_RISMDReference(&lcmd_var_GUI___2565_NE),
  INIT_RISMDReference(&lcmd_var_GUI___27_TO_USINT),
  INIT_RISMDReference(&lcmd_var_GUI___29_OUTBIT),
  INIT_RISMDReference(&lcmd_var_GUI___31_OUTBIT),
  INIT_RISMDReference(&lcmd_var_GUI___35_OUTBIT),
  INIT_RISMDReference(&lcmd_var_GUI___36_OUTBIT),
  INIT_RISMDReference(&lcmd_var_GUI___774_FROM_BIG_ENDIAN),
  INIT_RISMDReference(&lcmd_var_GUI___779_AND),
  INIT_RISMDReference(&lcmd_var_GUI___789_EQ),
  INIT_RISMDReference(&lcmd_var_GUI___799_TO_SINT),
  INIT_RISMDReference(&lcmd_var_GUI___820_TO_USINT),
  INIT_RISMDReference(&lcmd_var_GUI___988_DIV),
};

static char const lcmd_type_name_GUI[] = "GUI";
RISMDPOUType const lcmd_type_GUI = INIT_RISMDPOUType(lcmd_type_name_GUI, sizeof(LC_TD_FunctionBlock_GUI), 35, lcmd_var_list_GUI);
