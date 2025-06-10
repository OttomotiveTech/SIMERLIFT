#include <RISMD.h>
#include <lcfu___demux_2.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_DEMUX_2_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_DEMUX_2_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_DEMUX_2_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_DEMUX_2,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_DEMUX_2_IN[] = "IN";
static RISMDInterfaceVariable const lcmd_var_DEMUX_2_IN =
INIT_RISMDInterfaceVariable(lcmd_var_name_DEMUX_2_IN, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_2,LC_VD_IN), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_DEMUX_2_OUT_0[] = "OUT_0";
static RISMDInterfaceVariable const lcmd_var_DEMUX_2_OUT_0 =
INIT_RISMDInterfaceVariable(lcmd_var_name_DEMUX_2_OUT_0, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_2,LC_VD_OUT_0), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_DEMUX_2_OUT_1[] = "OUT_1";
static RISMDInterfaceVariable const lcmd_var_DEMUX_2_OUT_1 =
INIT_RISMDInterfaceVariable(lcmd_var_name_DEMUX_2_OUT_1, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_2,LC_VD_OUT_1), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_DEMUX_2_SELECT[] = "Select";
static RISMDInterfaceVariable const lcmd_var_DEMUX_2_SELECT =
INIT_RISMDInterfaceVariable(lcmd_var_name_DEMUX_2_SELECT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_DEMUX_2,LC_VD_SELECT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_DEMUX_2___11_EQ[] = "__11_EQ";
static RISMDStdVariable const lcmd_var_DEMUX_2___11_EQ =
INIT_RISMDStdVariable(lcmd_var_name_DEMUX_2___11_EQ, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_DEMUX_2,LC_VD___11_EQ));

static char const lcmd_var_name_DEMUX_2___14_EQ[] = "__14_EQ";
static RISMDStdVariable const lcmd_var_DEMUX_2___14_EQ =
INIT_RISMDStdVariable(lcmd_var_name_DEMUX_2___14_EQ, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_DEMUX_2,LC_VD___14_EQ));

static char const lcmd_var_name_DEMUX_2___42_SEL_UDINT[] = "__42_SEL_UDINT";
static RISMDStdVariable const lcmd_var_DEMUX_2___42_SEL_UDINT =
INIT_RISMDStdVariable(lcmd_var_name_DEMUX_2___42_SEL_UDINT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_2,LC_VD___42_SEL_UDINT));

static char const lcmd_var_name_DEMUX_2___48_SEL_UDINT[] = "__48_SEL_UDINT";
static RISMDStdVariable const lcmd_var_DEMUX_2___48_SEL_UDINT =
INIT_RISMDStdVariable(lcmd_var_name_DEMUX_2___48_SEL_UDINT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_DEMUX_2,LC_VD___48_SEL_UDINT));

static RISMDReference const lcmd_var_list_DEMUX_2[] =
{
  INIT_RISMDReference(&lcmd_var_DEMUX_2_ENO),
  INIT_RISMDReference(&lcmd_var_DEMUX_2_IN),
  INIT_RISMDReference(&lcmd_var_DEMUX_2_OUT_0),
  INIT_RISMDReference(&lcmd_var_DEMUX_2_OUT_1),
  INIT_RISMDReference(&lcmd_var_DEMUX_2_SELECT),
  INIT_RISMDReference(&lcmd_var_DEMUX_2___11_EQ),
  INIT_RISMDReference(&lcmd_var_DEMUX_2___14_EQ),
  INIT_RISMDReference(&lcmd_var_DEMUX_2___42_SEL_UDINT),
  INIT_RISMDReference(&lcmd_var_DEMUX_2___48_SEL_UDINT),
};

static char const lcmd_type_name_DEMUX_2[] = "DEMUX_2";
RISMDPOUType const lcmd_type_DEMUX_2 = INIT_RISMDPOUType(lcmd_type_name_DEMUX_2, sizeof(LC_TD_FunctionBlock_DEMUX_2), 9, lcmd_var_list_DEMUX_2);
