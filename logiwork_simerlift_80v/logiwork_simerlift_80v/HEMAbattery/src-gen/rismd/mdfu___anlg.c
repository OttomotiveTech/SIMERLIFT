#include <RISMD.h>
#include <lcfu___anlg.h>

extern RISMDDerivedType const lcmd_type_TMSADC;
static char const lcmd_var_name_ANLG_ADC[] = "ADC";
static RISMDInterfaceVariable const lcmd_var_ANLG_ADC =
INIT_RISMDInterfaceVariable(lcmd_var_name_ANLG_ADC, &lcmd_type_TMSADC, offsetof(LC_TD_FunctionBlock_ANLG,LC_VD_ADC), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_ANLG_CH[] = "CH";
static RISMDInterfaceVariable const lcmd_var_ANLG_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_ANLG_CH, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_ANLG,LC_VD_CH), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_ANLG_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_ANLG_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_ANLG_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ANLG,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDDerivedType const lcmd_type_TMSADCGRP;
static char const lcmd_var_name_ANLG_GRP[] = "GRP";
static RISMDInterfaceVariable const lcmd_var_ANLG_GRP =
INIT_RISMDInterfaceVariable(lcmd_var_name_ANLG_GRP, &lcmd_type_TMSADCGRP, offsetof(LC_TD_FunctionBlock_ANLG,LC_VD_GRP), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_ANLG_VAL[] = "VAL";
static RISMDInterfaceVariable const lcmd_var_ANLG_VAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_ANLG_VAL, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_ANLG,LC_VD_VAL), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_ANLG[] =
{
  INIT_RISMDReference(&lcmd_var_ANLG_ADC),
  INIT_RISMDReference(&lcmd_var_ANLG_CH),
  INIT_RISMDReference(&lcmd_var_ANLG_ENO),
  INIT_RISMDReference(&lcmd_var_ANLG_GRP),
  INIT_RISMDReference(&lcmd_var_ANLG_VAL),
};

static char const lcmd_type_name_ANLG[] = "ANLG";
RISMDPOUType const lcmd_type_ANLG = INIT_RISMDPOUType(lcmd_type_name_ANLG, sizeof(LC_TD_FunctionBlock_ANLG), 5, lcmd_var_list_ANLG);
