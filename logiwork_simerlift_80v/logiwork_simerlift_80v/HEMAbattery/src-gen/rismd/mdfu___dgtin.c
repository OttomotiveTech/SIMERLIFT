#include <RISMD.h>
#include <lcfu___dgtin.h>

extern RISMDPOUType const lcmd_type_ANLG;
static char const lcmd_var_name_DGTIN_ANLG4[] = "ANLG4";
static RISMDStdVariable const lcmd_var_DGTIN_ANLG4 =
INIT_RISMDStdVariable(lcmd_var_name_DGTIN_ANLG4, &lcmd_type_ANLG, offsetof(LC_TD_FunctionBlock_DGTIN,LC_VD_ANLG4));

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_DGTIN_CH[] = "ch";
static RISMDInterfaceVariable const lcmd_var_DGTIN_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_DGTIN_CH, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_DGTIN,LC_VD_CH), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_DGTIN_CURRENTSTATE[] = "currentState";
static RISMDStdVariable const lcmd_var_DGTIN_CURRENTSTATE =
INIT_RISMDStdVariable(lcmd_var_name_DGTIN_CURRENTSTATE, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_DGTIN,LC_VD_CURRENTSTATE));

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_DGTIN_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_DGTIN_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_DGTIN_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_DGTIN,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_DGTIN_INSTANTSTATE[] = "instantState";
static RISMDStdVariable const lcmd_var_DGTIN_INSTANTSTATE =
INIT_RISMDStdVariable(lcmd_var_name_DGTIN_INSTANTSTATE, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_DGTIN,LC_VD_INSTANTSTATE));

static char const lcmd_var_name_DGTIN_STAT[] = "stat";
static RISMDInterfaceVariable const lcmd_var_DGTIN_STAT =
INIT_RISMDInterfaceVariable(lcmd_var_name_DGTIN_STAT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_DGTIN,LC_VD_STAT), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_TON;
static char const lcmd_var_name_DGTIN_TON1[] = "TON1";
static RISMDStdVariable const lcmd_var_DGTIN_TON1 =
INIT_RISMDStdVariable(lcmd_var_name_DGTIN_TON1, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_DGTIN,LC_VD_TON1));

static char const lcmd_var_name_DGTIN___11_SEL[] = "__11_SEL";
static RISMDStdVariable const lcmd_var_DGTIN___11_SEL =
INIT_RISMDStdVariable(lcmd_var_name_DGTIN___11_SEL, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_DGTIN,LC_VD___11_SEL));

static char const lcmd_var_name_DGTIN___13_LE[] = "__13_LE";
static RISMDStdVariable const lcmd_var_DGTIN___13_LE =
INIT_RISMDStdVariable(lcmd_var_name_DGTIN___13_LE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_DGTIN,LC_VD___13_LE));

static char const lcmd_var_name_DGTIN___25_GT[] = "__25_GT";
static RISMDStdVariable const lcmd_var_DGTIN___25_GT =
INIT_RISMDStdVariable(lcmd_var_name_DGTIN___25_GT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_DGTIN,LC_VD___25_GT));

static char const lcmd_var_name_DGTIN___28_LT[] = "__28_LT";
static RISMDStdVariable const lcmd_var_DGTIN___28_LT =
INIT_RISMDStdVariable(lcmd_var_name_DGTIN___28_LT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_DGTIN,LC_VD___28_LT));

static char const lcmd_var_name_DGTIN___31_AND[] = "__31_AND";
static RISMDStdVariable const lcmd_var_DGTIN___31_AND =
INIT_RISMDStdVariable(lcmd_var_name_DGTIN___31_AND, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_DGTIN,LC_VD___31_AND));

static char const lcmd_var_name_DGTIN___34_SEL[] = "__34_SEL";
static RISMDStdVariable const lcmd_var_DGTIN___34_SEL =
INIT_RISMDStdVariable(lcmd_var_name_DGTIN___34_SEL, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_DGTIN,LC_VD___34_SEL));

static char const lcmd_var_name_DGTIN___3_GE[] = "__3_GE";
static RISMDStdVariable const lcmd_var_DGTIN___3_GE =
INIT_RISMDStdVariable(lcmd_var_name_DGTIN___3_GE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_DGTIN,LC_VD___3_GE));

static char const lcmd_var_name_DGTIN___44_NE[] = "__44_NE";
static RISMDStdVariable const lcmd_var_DGTIN___44_NE =
INIT_RISMDStdVariable(lcmd_var_name_DGTIN___44_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_DGTIN,LC_VD___44_NE));

static char const lcmd_var_name_DGTIN___49_SEL[] = "__49_SEL";
static RISMDStdVariable const lcmd_var_DGTIN___49_SEL =
INIT_RISMDStdVariable(lcmd_var_name_DGTIN___49_SEL, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_DGTIN,LC_VD___49_SEL));

static char const lcmd_var_name_DGTIN___7_SEL[] = "__7_SEL";
static RISMDStdVariable const lcmd_var_DGTIN___7_SEL =
INIT_RISMDStdVariable(lcmd_var_name_DGTIN___7_SEL, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_DGTIN,LC_VD___7_SEL));

static RISMDReference const lcmd_var_list_DGTIN[] =
{
  INIT_RISMDReference(&lcmd_var_DGTIN_ANLG4),
  INIT_RISMDReference(&lcmd_var_DGTIN_CH),
  INIT_RISMDReference(&lcmd_var_DGTIN_CURRENTSTATE),
  INIT_RISMDReference(&lcmd_var_DGTIN_ENO),
  INIT_RISMDReference(&lcmd_var_DGTIN_INSTANTSTATE),
  INIT_RISMDReference(&lcmd_var_DGTIN_STAT),
  INIT_RISMDReference(&lcmd_var_DGTIN_TON1),
  INIT_RISMDReference(&lcmd_var_DGTIN___11_SEL),
  INIT_RISMDReference(&lcmd_var_DGTIN___13_LE),
  INIT_RISMDReference(&lcmd_var_DGTIN___25_GT),
  INIT_RISMDReference(&lcmd_var_DGTIN___28_LT),
  INIT_RISMDReference(&lcmd_var_DGTIN___31_AND),
  INIT_RISMDReference(&lcmd_var_DGTIN___34_SEL),
  INIT_RISMDReference(&lcmd_var_DGTIN___3_GE),
  INIT_RISMDReference(&lcmd_var_DGTIN___44_NE),
  INIT_RISMDReference(&lcmd_var_DGTIN___49_SEL),
  INIT_RISMDReference(&lcmd_var_DGTIN___7_SEL),
};

static char const lcmd_type_name_DGTIN[] = "DGTIN";
RISMDPOUType const lcmd_type_DGTIN = INIT_RISMDPOUType(lcmd_type_name_DGTIN, sizeof(LC_TD_FunctionBlock_DGTIN), 17, lcmd_var_list_DGTIN);
