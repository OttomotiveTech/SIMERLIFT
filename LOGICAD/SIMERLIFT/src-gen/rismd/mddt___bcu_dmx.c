#include <RISMD.h>
#include <lcdt___bcu_dmx.h>

extern RISMDSimpleNumType const risMdType_LREAL;
static char const lcmd_var_name_BCU_DMX_DMCC[] = "DMCC";
static RISMDStdVariable const lcmd_var_BCU_DMX_DMCC =
INIT_RISMDStdVariable(lcmd_var_name_BCU_DMX_DMCC, &risMdType_LREAL, offsetof(LC_TD_DataType_BCU_DMX,LC_VD_DMCC));

static char const lcmd_var_name_BCU_DMX_DMDC[] = "DMDC";
static RISMDStdVariable const lcmd_var_BCU_DMX_DMDC =
INIT_RISMDStdVariable(lcmd_var_name_BCU_DMX_DMDC, &risMdType_LREAL, offsetof(LC_TD_DataType_BCU_DMX,LC_VD_DMDC));

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_BCU_DMX_STATE[] = "STATE";
static RISMDStdVariable const lcmd_var_BCU_DMX_STATE =
INIT_RISMDStdVariable(lcmd_var_name_BCU_DMX_STATE, &risMdType_USINT, offsetof(LC_TD_DataType_BCU_DMX,LC_VD_STATE));

static RISMDReference const lcmd_var_list_BCU_DMX[] =
{
  INIT_RISMDReference(&lcmd_var_BCU_DMX_DMCC),
  INIT_RISMDReference(&lcmd_var_BCU_DMX_DMDC),
  INIT_RISMDReference(&lcmd_var_BCU_DMX_STATE),
};

static char const lcmd_type_name_BCU_DMX[] = "BCU_DMX";
RISMDCompoundType const lcmd_type_BCU_DMX = INIT_RISMDCompoundType(lcmd_type_name_BCU_DMX, sizeof(LC_TD_DataType_BCU_DMX), 3, lcmd_var_list_BCU_DMX);
