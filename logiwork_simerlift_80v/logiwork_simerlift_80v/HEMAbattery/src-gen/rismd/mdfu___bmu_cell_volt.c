#include <RISMD.h>
#include <lcfu___bmu_cell_volt.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_BMU_CELL_VOLT_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_BMU_CELL_VOLT_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_BMU_CELL_VOLT_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BMU_CELL_VOLT,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_BMU_CELL_VOLT[] =
{
  INIT_RISMDReference(&lcmd_var_BMU_CELL_VOLT_ENO),
};

static char const lcmd_type_name_BMU_CELL_VOLT[] = "BMU_CELL_VOLT";
RISMDPOUType const lcmd_type_BMU_CELL_VOLT = INIT_RISMDPOUType(lcmd_type_name_BMU_CELL_VOLT, sizeof(LC_TD_FunctionBlock_BMU_CELL_VOLT), 1, lcmd_var_list_BMU_CELL_VOLT);
