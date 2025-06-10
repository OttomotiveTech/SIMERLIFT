#include <RISMD.h>
#include <lcfu___isabelinit.h>

extern RISMDDerivedType const lcmd_type_TMS570_CAN;
static char const lcmd_var_name_ISABELINIT_CH[] = "CH";
static RISMDInterfaceVariable const lcmd_var_ISABELINIT_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_ISABELINIT_CH, &lcmd_type_TMS570_CAN, offsetof(LC_TD_FunctionBlock_ISABELINIT,LC_VD_CH), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_ISABELINIT_ENB[] = "ENB";
static RISMDInterfaceVariable const lcmd_var_ISABELINIT_ENB =
INIT_RISMDInterfaceVariable(lcmd_var_name_ISABELINIT_ENB, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ISABELINIT,LC_VD_ENB), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ISABELINIT_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_ISABELINIT_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_ISABELINIT_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ISABELINIT,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_INT;
static char const lcmd_var_name_ISABELINIT_ERR[] = "ERR";
static RISMDInterfaceVariable const lcmd_var_ISABELINIT_ERR =
INIT_RISMDInterfaceVariable(lcmd_var_name_ISABELINIT_ERR, &risMdType_INT, offsetof(LC_TD_FunctionBlock_ISABELINIT,LC_VD_ERR), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_ISABELINIT_STAT[] = "STAT";
static RISMDStdVariable const lcmd_var_ISABELINIT_STAT =
INIT_RISMDStdVariable(lcmd_var_name_ISABELINIT_STAT, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_ISABELINIT,LC_VD_STAT));

static char const lcmd_var_name_ISABELINIT_TRY[] = "TRY";
static RISMDStdVariable const lcmd_var_ISABELINIT_TRY =
INIT_RISMDStdVariable(lcmd_var_name_ISABELINIT_TRY, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_ISABELINIT,LC_VD_TRY));

static RISMDReference const lcmd_var_list_ISABELINIT[] =
{
  INIT_RISMDReference(&lcmd_var_ISABELINIT_CH),
  INIT_RISMDReference(&lcmd_var_ISABELINIT_ENB),
  INIT_RISMDReference(&lcmd_var_ISABELINIT_ENO),
  INIT_RISMDReference(&lcmd_var_ISABELINIT_ERR),
  INIT_RISMDReference(&lcmd_var_ISABELINIT_STAT),
  INIT_RISMDReference(&lcmd_var_ISABELINIT_TRY),
};

static char const lcmd_type_name_ISABELINIT[] = "ISABELINIT";
RISMDPOUType const lcmd_type_ISABELINIT = INIT_RISMDPOUType(lcmd_type_name_ISABELINIT, sizeof(LC_TD_FunctionBlock_ISABELINIT), 6, lcmd_var_list_ISABELINIT);
