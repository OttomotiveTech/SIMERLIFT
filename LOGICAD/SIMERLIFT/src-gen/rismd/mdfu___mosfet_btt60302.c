#include <RISMD.h>
#include <lcfu___mosfet_btt60302.h>

extern RISMDPOUType const lcmd_type_BTTDIAG;
static char const lcmd_var_name_MOSFET_BTT60302_BTTDIAG1[] = "BTTdiag1";
static RISMDStdVariable const lcmd_var_MOSFET_BTT60302_BTTDIAG1 =
INIT_RISMDStdVariable(lcmd_var_name_MOSFET_BTT60302_BTTDIAG1, &lcmd_type_BTTDIAG, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD_BTTDIAG1));

static char const lcmd_var_name_MOSFET_BTT60302_BTTDIAG2[] = "BTTdiag2";
static RISMDStdVariable const lcmd_var_MOSFET_BTT60302_BTTDIAG2 =
INIT_RISMDStdVariable(lcmd_var_name_MOSFET_BTT60302_BTTDIAG2, &lcmd_type_BTTDIAG, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD_BTTDIAG2));

extern RISMDPOUType const lcmd_type_CTU;
static char const lcmd_var_name_MOSFET_BTT60302_CTU1[] = "CTU1";
static RISMDStdVariable const lcmd_var_MOSFET_BTT60302_CTU1 =
INIT_RISMDStdVariable(lcmd_var_name_MOSFET_BTT60302_CTU1, &lcmd_type_CTU, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD_CTU1));

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_MOSFET_BTT60302_DEN[] = "DEN";
static RISMDInterfaceVariable const lcmd_var_MOSFET_BTT60302_DEN =
INIT_RISMDInterfaceVariable(lcmd_var_name_MOSFET_BTT60302_DEN, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD_DEN), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_MOSFET_BTT60302_DSEL[] = "DSEL";
static RISMDInterfaceVariable const lcmd_var_MOSFET_BTT60302_DSEL =
INIT_RISMDInterfaceVariable(lcmd_var_name_MOSFET_BTT60302_DSEL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD_DSEL), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_MOSFET_BTT60302_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_MOSFET_BTT60302_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_MOSFET_BTT60302_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_FLASH;
static char const lcmd_var_name_MOSFET_BTT60302_FLASH1[] = "FLASH1";
static RISMDStdVariable const lcmd_var_MOSFET_BTT60302_FLASH1 =
INIT_RISMDStdVariable(lcmd_var_name_MOSFET_BTT60302_FLASH1, &lcmd_type_FLASH, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD_FLASH1));

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_MOSFET_BTT60302_IMAX1[] = "Imax1";
static RISMDInterfaceVariable const lcmd_var_MOSFET_BTT60302_IMAX1 =
INIT_RISMDInterfaceVariable(lcmd_var_name_MOSFET_BTT60302_IMAX1, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD_IMAX1), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_MOSFET_BTT60302_IMAX2[] = "Imax2";
static RISMDInterfaceVariable const lcmd_var_MOSFET_BTT60302_IMAX2 =
INIT_RISMDInterfaceVariable(lcmd_var_name_MOSFET_BTT60302_IMAX2, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD_IMAX2), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_MOSFET_BTT60302_IMIN1[] = "Imin1";
static RISMDInterfaceVariable const lcmd_var_MOSFET_BTT60302_IMIN1 =
INIT_RISMDInterfaceVariable(lcmd_var_name_MOSFET_BTT60302_IMIN1, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD_IMIN1), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_MOSFET_BTT60302_IMIN2[] = "Imin2";
static RISMDInterfaceVariable const lcmd_var_MOSFET_BTT60302_IMIN2 =
INIT_RISMDInterfaceVariable(lcmd_var_name_MOSFET_BTT60302_IMIN2, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD_IMIN2), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_MOSFET_BTT60302_IN1[] = "IN1";
static RISMDInterfaceVariable const lcmd_var_MOSFET_BTT60302_IN1 =
INIT_RISMDInterfaceVariable(lcmd_var_name_MOSFET_BTT60302_IN1, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD_IN1), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_MOSFET_BTT60302_IN2[] = "IN2";
static RISMDInterfaceVariable const lcmd_var_MOSFET_BTT60302_IN2 =
INIT_RISMDInterfaceVariable(lcmd_var_name_MOSFET_BTT60302_IN2, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD_IN2), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_MOSFET_BTT60302_IOUT1[] = "Iout1";
static RISMDInterfaceVariable const lcmd_var_MOSFET_BTT60302_IOUT1 =
INIT_RISMDInterfaceVariable(lcmd_var_name_MOSFET_BTT60302_IOUT1, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD_IOUT1), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_MOSFET_BTT60302_IOUT2[] = "Iout2";
static RISMDInterfaceVariable const lcmd_var_MOSFET_BTT60302_IOUT2 =
INIT_RISMDInterfaceVariable(lcmd_var_name_MOSFET_BTT60302_IOUT2, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD_IOUT2), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_MOSFET_BTT60302_ISENS[] = "Isens";
static RISMDInterfaceVariable const lcmd_var_MOSFET_BTT60302_ISENS =
INIT_RISMDInterfaceVariable(lcmd_var_name_MOSFET_BTT60302_ISENS, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD_ISENS), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_MOSFET_BTT60302_OUT1[] = "OUT1";
static RISMDInterfaceVariable const lcmd_var_MOSFET_BTT60302_OUT1 =
INIT_RISMDInterfaceVariable(lcmd_var_name_MOSFET_BTT60302_OUT1, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD_OUT1), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BYTE;
static char const lcmd_var_name_MOSFET_BTT60302_OUT1_DIAG[] = "OUT1_Diag";
static RISMDInterfaceVariable const lcmd_var_MOSFET_BTT60302_OUT1_DIAG =
INIT_RISMDInterfaceVariable(lcmd_var_name_MOSFET_BTT60302_OUT1_DIAG, &risMdType_BYTE, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD_OUT1_DIAG), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_MOSFET_BTT60302_OUT2[] = "OUT2";
static RISMDInterfaceVariable const lcmd_var_MOSFET_BTT60302_OUT2 =
INIT_RISMDInterfaceVariable(lcmd_var_name_MOSFET_BTT60302_OUT2, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD_OUT2), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_MOSFET_BTT60302_OUT2_DIAG[] = "OUT2_Diag";
static RISMDInterfaceVariable const lcmd_var_MOSFET_BTT60302_OUT2_DIAG =
INIT_RISMDInterfaceVariable(lcmd_var_name_MOSFET_BTT60302_OUT2_DIAG, &risMdType_BYTE, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD_OUT2_DIAG), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_R_TRIG;
static char const lcmd_var_name_MOSFET_BTT60302_R_TRIG1[] = "R_TRIG1";
static RISMDStdVariable const lcmd_var_MOSFET_BTT60302_R_TRIG1 =
INIT_RISMDStdVariable(lcmd_var_name_MOSFET_BTT60302_R_TRIG1, &lcmd_type_R_TRIG, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD_R_TRIG1));

extern RISMDSimpleNumType const risMdType_INT;
static char const lcmd_var_name_MOSFET_BTT60302___106_IAND[] = "__106_IAND";
static RISMDStdVariable const lcmd_var_MOSFET_BTT60302___106_IAND =
INIT_RISMDStdVariable(lcmd_var_name_MOSFET_BTT60302___106_IAND, &risMdType_INT, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD___106_IAND));

static char const lcmd_var_name_MOSFET_BTT60302___10_XOR[] = "__10_XOR";
static RISMDStdVariable const lcmd_var_MOSFET_BTT60302___10_XOR =
INIT_RISMDStdVariable(lcmd_var_name_MOSFET_BTT60302___10_XOR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD___10_XOR));

static char const lcmd_var_name_MOSFET_BTT60302___13_SEL[] = "__13_SEL";
static RISMDStdVariable const lcmd_var_MOSFET_BTT60302___13_SEL =
INIT_RISMDStdVariable(lcmd_var_name_MOSFET_BTT60302___13_SEL, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD___13_SEL));

static char const lcmd_var_name_MOSFET_BTT60302___18_MUL[] = "__18_MUL";
static RISMDStdVariable const lcmd_var_MOSFET_BTT60302___18_MUL =
INIT_RISMDStdVariable(lcmd_var_name_MOSFET_BTT60302___18_MUL, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD___18_MUL));

static char const lcmd_var_name_MOSFET_BTT60302___19_EQ[] = "__19_EQ";
static RISMDStdVariable const lcmd_var_MOSFET_BTT60302___19_EQ =
INIT_RISMDStdVariable(lcmd_var_name_MOSFET_BTT60302___19_EQ, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD___19_EQ));

static char const lcmd_var_name_MOSFET_BTT60302___25_EQ[] = "__25_EQ";
static RISMDStdVariable const lcmd_var_MOSFET_BTT60302___25_EQ =
INIT_RISMDStdVariable(lcmd_var_name_MOSFET_BTT60302___25_EQ, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD___25_EQ));

static char const lcmd_var_name_MOSFET_BTT60302___26_SEL[] = "__26_SEL";
static RISMDStdVariable const lcmd_var_MOSFET_BTT60302___26_SEL =
INIT_RISMDStdVariable(lcmd_var_name_MOSFET_BTT60302___26_SEL, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD___26_SEL));

static char const lcmd_var_name_MOSFET_BTT60302___29_TO_UINT[] = "__29_TO_UINT";
static RISMDStdVariable const lcmd_var_MOSFET_BTT60302___29_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_MOSFET_BTT60302___29_TO_UINT, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD___29_TO_UINT));

static char const lcmd_var_name_MOSFET_BTT60302___92_TO_BOOL[] = "__92_TO_BOOL";
static RISMDStdVariable const lcmd_var_MOSFET_BTT60302___92_TO_BOOL =
INIT_RISMDStdVariable(lcmd_var_name_MOSFET_BTT60302___92_TO_BOOL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_MOSFET_BTT60302,LC_VD___92_TO_BOOL));

static RISMDReference const lcmd_var_list_MOSFET_BTT60302[] =
{
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302_BTTDIAG1),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302_BTTDIAG2),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302_CTU1),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302_DEN),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302_DSEL),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302_ENO),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302_FLASH1),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302_IMAX1),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302_IMAX2),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302_IMIN1),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302_IMIN2),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302_IN1),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302_IN2),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302_IOUT1),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302_IOUT2),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302_ISENS),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302_OUT1),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302_OUT1_DIAG),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302_OUT2),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302_OUT2_DIAG),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302_R_TRIG1),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302___106_IAND),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302___10_XOR),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302___13_SEL),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302___18_MUL),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302___19_EQ),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302___25_EQ),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302___26_SEL),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302___29_TO_UINT),
  INIT_RISMDReference(&lcmd_var_MOSFET_BTT60302___92_TO_BOOL),
};

static char const lcmd_type_name_MOSFET_BTT60302[] = "MOSFET_BTT60302";
RISMDPOUType const lcmd_type_MOSFET_BTT60302 = INIT_RISMDPOUType(lcmd_type_name_MOSFET_BTT60302, sizeof(LC_TD_FunctionBlock_MOSFET_BTT60302), 30, lcmd_var_list_MOSFET_BTT60302);
