#include <RISMD.h>
#include <lcfu___demux_8.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_DEMUX_8_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_DEMUX_8_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_DEMUX_8_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_DEMUX_8_IN[] = "IN";
static RISMDInterfaceVariable const lcmd_var_DEMUX_8_IN =
INIT_RISMDInterfaceVariable(lcmd_var_name_DEMUX_8_IN, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD_IN), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_DEMUX_8_OUT_0[] = "OUT_0";
static RISMDInterfaceVariable const lcmd_var_DEMUX_8_OUT_0 =
INIT_RISMDInterfaceVariable(lcmd_var_name_DEMUX_8_OUT_0, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD_OUT_0), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_DEMUX_8_OUT_1[] = "OUT_1";
static RISMDInterfaceVariable const lcmd_var_DEMUX_8_OUT_1 =
INIT_RISMDInterfaceVariable(lcmd_var_name_DEMUX_8_OUT_1, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD_OUT_1), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_DEMUX_8_OUT_2[] = "OUT_2";
static RISMDInterfaceVariable const lcmd_var_DEMUX_8_OUT_2 =
INIT_RISMDInterfaceVariable(lcmd_var_name_DEMUX_8_OUT_2, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD_OUT_2), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_DEMUX_8_OUT_3[] = "OUT_3";
static RISMDInterfaceVariable const lcmd_var_DEMUX_8_OUT_3 =
INIT_RISMDInterfaceVariable(lcmd_var_name_DEMUX_8_OUT_3, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD_OUT_3), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_DEMUX_8_OUT_4[] = "OUT_4";
static RISMDInterfaceVariable const lcmd_var_DEMUX_8_OUT_4 =
INIT_RISMDInterfaceVariable(lcmd_var_name_DEMUX_8_OUT_4, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD_OUT_4), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_DEMUX_8_OUT_5[] = "OUT_5";
static RISMDInterfaceVariable const lcmd_var_DEMUX_8_OUT_5 =
INIT_RISMDInterfaceVariable(lcmd_var_name_DEMUX_8_OUT_5, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD_OUT_5), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_DEMUX_8_OUT_6[] = "OUT_6";
static RISMDInterfaceVariable const lcmd_var_DEMUX_8_OUT_6 =
INIT_RISMDInterfaceVariable(lcmd_var_name_DEMUX_8_OUT_6, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD_OUT_6), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_DEMUX_8_OUT_7[] = "OUT_7";
static RISMDInterfaceVariable const lcmd_var_DEMUX_8_OUT_7 =
INIT_RISMDInterfaceVariable(lcmd_var_name_DEMUX_8_OUT_7, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD_OUT_7), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BYTE;
static char const lcmd_var_name_DEMUX_8_SELECT[] = "Select";
static RISMDInterfaceVariable const lcmd_var_DEMUX_8_SELECT =
INIT_RISMDInterfaceVariable(lcmd_var_name_DEMUX_8_SELECT, &risMdType_BYTE, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD_SELECT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_DEMUX_8___11_EQ[] = "__11_EQ";
static RISMDStdVariable const lcmd_var_DEMUX_8___11_EQ =
INIT_RISMDStdVariable(lcmd_var_name_DEMUX_8___11_EQ, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD___11_EQ));

static char const lcmd_var_name_DEMUX_8___14_EQ[] = "__14_EQ";
static RISMDStdVariable const lcmd_var_DEMUX_8___14_EQ =
INIT_RISMDStdVariable(lcmd_var_name_DEMUX_8___14_EQ, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD___14_EQ));

static char const lcmd_var_name_DEMUX_8___18_EQ[] = "__18_EQ";
static RISMDStdVariable const lcmd_var_DEMUX_8___18_EQ =
INIT_RISMDStdVariable(lcmd_var_name_DEMUX_8___18_EQ, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD___18_EQ));

static char const lcmd_var_name_DEMUX_8___21_EQ[] = "__21_EQ";
static RISMDStdVariable const lcmd_var_DEMUX_8___21_EQ =
INIT_RISMDStdVariable(lcmd_var_name_DEMUX_8___21_EQ, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD___21_EQ));

static char const lcmd_var_name_DEMUX_8___24_EQ[] = "__24_EQ";
static RISMDStdVariable const lcmd_var_DEMUX_8___24_EQ =
INIT_RISMDStdVariable(lcmd_var_name_DEMUX_8___24_EQ, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD___24_EQ));

static char const lcmd_var_name_DEMUX_8___27_EQ[] = "__27_EQ";
static RISMDStdVariable const lcmd_var_DEMUX_8___27_EQ =
INIT_RISMDStdVariable(lcmd_var_name_DEMUX_8___27_EQ, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD___27_EQ));

static char const lcmd_var_name_DEMUX_8___30_EQ[] = "__30_EQ";
static RISMDStdVariable const lcmd_var_DEMUX_8___30_EQ =
INIT_RISMDStdVariable(lcmd_var_name_DEMUX_8___30_EQ, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD___30_EQ));

static char const lcmd_var_name_DEMUX_8___33_EQ[] = "__33_EQ";
static RISMDStdVariable const lcmd_var_DEMUX_8___33_EQ =
INIT_RISMDStdVariable(lcmd_var_name_DEMUX_8___33_EQ, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD___33_EQ));

static char const lcmd_var_name_DEMUX_8___42_SEL_UDINT[] = "__42_SEL_UDINT";
static RISMDStdVariable const lcmd_var_DEMUX_8___42_SEL_UDINT =
INIT_RISMDStdVariable(lcmd_var_name_DEMUX_8___42_SEL_UDINT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD___42_SEL_UDINT));

static char const lcmd_var_name_DEMUX_8___48_SEL_UDINT[] = "__48_SEL_UDINT";
static RISMDStdVariable const lcmd_var_DEMUX_8___48_SEL_UDINT =
INIT_RISMDStdVariable(lcmd_var_name_DEMUX_8___48_SEL_UDINT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD___48_SEL_UDINT));

static char const lcmd_var_name_DEMUX_8___53_SEL_UDINT[] = "__53_SEL_UDINT";
static RISMDStdVariable const lcmd_var_DEMUX_8___53_SEL_UDINT =
INIT_RISMDStdVariable(lcmd_var_name_DEMUX_8___53_SEL_UDINT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD___53_SEL_UDINT));

static char const lcmd_var_name_DEMUX_8___54_SEL_UDINT[] = "__54_SEL_UDINT";
static RISMDStdVariable const lcmd_var_DEMUX_8___54_SEL_UDINT =
INIT_RISMDStdVariable(lcmd_var_name_DEMUX_8___54_SEL_UDINT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD___54_SEL_UDINT));

static char const lcmd_var_name_DEMUX_8___63_SEL_UDINT[] = "__63_SEL_UDINT";
static RISMDStdVariable const lcmd_var_DEMUX_8___63_SEL_UDINT =
INIT_RISMDStdVariable(lcmd_var_name_DEMUX_8___63_SEL_UDINT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD___63_SEL_UDINT));

static char const lcmd_var_name_DEMUX_8___64_SEL_UDINT[] = "__64_SEL_UDINT";
static RISMDStdVariable const lcmd_var_DEMUX_8___64_SEL_UDINT =
INIT_RISMDStdVariable(lcmd_var_name_DEMUX_8___64_SEL_UDINT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD___64_SEL_UDINT));

static char const lcmd_var_name_DEMUX_8___65_SEL_UDINT[] = "__65_SEL_UDINT";
static RISMDStdVariable const lcmd_var_DEMUX_8___65_SEL_UDINT =
INIT_RISMDStdVariable(lcmd_var_name_DEMUX_8___65_SEL_UDINT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD___65_SEL_UDINT));

static char const lcmd_var_name_DEMUX_8___66_SEL_UDINT[] = "__66_SEL_UDINT";
static RISMDStdVariable const lcmd_var_DEMUX_8___66_SEL_UDINT =
INIT_RISMDStdVariable(lcmd_var_name_DEMUX_8___66_SEL_UDINT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_8,LC_VD___66_SEL_UDINT));

static RISMDReference const lcmd_var_list_DEMUX_8[] =
{
  INIT_RISMDReference(&lcmd_var_DEMUX_8_ENO),
  INIT_RISMDReference(&lcmd_var_DEMUX_8_IN),
  INIT_RISMDReference(&lcmd_var_DEMUX_8_OUT_0),
  INIT_RISMDReference(&lcmd_var_DEMUX_8_OUT_1),
  INIT_RISMDReference(&lcmd_var_DEMUX_8_OUT_2),
  INIT_RISMDReference(&lcmd_var_DEMUX_8_OUT_3),
  INIT_RISMDReference(&lcmd_var_DEMUX_8_OUT_4),
  INIT_RISMDReference(&lcmd_var_DEMUX_8_OUT_5),
  INIT_RISMDReference(&lcmd_var_DEMUX_8_OUT_6),
  INIT_RISMDReference(&lcmd_var_DEMUX_8_OUT_7),
  INIT_RISMDReference(&lcmd_var_DEMUX_8_SELECT),
  INIT_RISMDReference(&lcmd_var_DEMUX_8___11_EQ),
  INIT_RISMDReference(&lcmd_var_DEMUX_8___14_EQ),
  INIT_RISMDReference(&lcmd_var_DEMUX_8___18_EQ),
  INIT_RISMDReference(&lcmd_var_DEMUX_8___21_EQ),
  INIT_RISMDReference(&lcmd_var_DEMUX_8___24_EQ),
  INIT_RISMDReference(&lcmd_var_DEMUX_8___27_EQ),
  INIT_RISMDReference(&lcmd_var_DEMUX_8___30_EQ),
  INIT_RISMDReference(&lcmd_var_DEMUX_8___33_EQ),
  INIT_RISMDReference(&lcmd_var_DEMUX_8___42_SEL_UDINT),
  INIT_RISMDReference(&lcmd_var_DEMUX_8___48_SEL_UDINT),
  INIT_RISMDReference(&lcmd_var_DEMUX_8___53_SEL_UDINT),
  INIT_RISMDReference(&lcmd_var_DEMUX_8___54_SEL_UDINT),
  INIT_RISMDReference(&lcmd_var_DEMUX_8___63_SEL_UDINT),
  INIT_RISMDReference(&lcmd_var_DEMUX_8___64_SEL_UDINT),
  INIT_RISMDReference(&lcmd_var_DEMUX_8___65_SEL_UDINT),
  INIT_RISMDReference(&lcmd_var_DEMUX_8___66_SEL_UDINT),
};

static char const lcmd_type_name_DEMUX_8[] = "DEMUX_8";
RISMDPOUType const lcmd_type_DEMUX_8 = INIT_RISMDPOUType(lcmd_type_name_DEMUX_8, sizeof(LC_TD_FunctionBlock_DEMUX_8), 27, lcmd_var_list_DEMUX_8);
