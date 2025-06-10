#include <RISMD.h>
#include <lcfu___numofcells.h>

extern RISMDSimpleNumType const risMdType_USINT;
RISMDArrayType const lcmd_type_NUMOFCELLS_CELLMAP_ARR = INIT_RISMDArrayType(0,15,sizeof(LC_TD_USINT),&risMdType_USINT);
static char const lcmd_var_name_NUMOFCELLS_CELLMAP[] = "cellMap";
static RISMDInterfaceVariable const lcmd_var_NUMOFCELLS_CELLMAP =
INIT_RISMDInterfaceVariable(lcmd_var_name_NUMOFCELLS_CELLMAP, &lcmd_type_NUMOFCELLS_CELLMAP_ARR, offsetof(LC_TD_FunctionBlock_NUMOFCELLS,LC_VD_CELLMAP), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_NUMOFCELLS_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_NUMOFCELLS_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_NUMOFCELLS_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_NUMOFCELLS,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_NUMOFCELLS_I[] = "i";
static RISMDStdVariable const lcmd_var_NUMOFCELLS_I =
INIT_RISMDStdVariable(lcmd_var_name_NUMOFCELLS_I, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_NUMOFCELLS,LC_VD_I));

static char const lcmd_var_name_NUMOFCELLS_NUMOFBMU[] = "numofBMU";
static RISMDInterfaceVariable const lcmd_var_NUMOFCELLS_NUMOFBMU =
INIT_RISMDInterfaceVariable(lcmd_var_name_NUMOFCELLS_NUMOFBMU, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_NUMOFCELLS,LC_VD_NUMOFBMU), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_NUMOFCELLS_NUMOFCELL[] = "numofCell";
static RISMDInterfaceVariable const lcmd_var_NUMOFCELLS_NUMOFCELL =
INIT_RISMDInterfaceVariable(lcmd_var_name_NUMOFCELLS_NUMOFCELL, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_NUMOFCELLS,LC_VD_NUMOFCELL), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_NUMOFCELLS[] =
{
  INIT_RISMDReference(&lcmd_var_NUMOFCELLS_CELLMAP),
  INIT_RISMDReference(&lcmd_var_NUMOFCELLS_ENO),
  INIT_RISMDReference(&lcmd_var_NUMOFCELLS_I),
  INIT_RISMDReference(&lcmd_var_NUMOFCELLS_NUMOFBMU),
  INIT_RISMDReference(&lcmd_var_NUMOFCELLS_NUMOFCELL),
};

static char const lcmd_type_name_NUMOFCELLS[] = "NUMOFCELLS";
RISMDPOUType const lcmd_type_NUMOFCELLS = INIT_RISMDPOUType(lcmd_type_name_NUMOFCELLS, sizeof(LC_TD_FunctionBlock_NUMOFCELLS), 5, lcmd_var_list_NUMOFCELLS);
