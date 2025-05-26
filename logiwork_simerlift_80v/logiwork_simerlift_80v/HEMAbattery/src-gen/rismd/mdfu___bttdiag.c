#include <RISMD.h>
#include <lcfu___bttdiag.h>

extern RISMDSimpleNumType const risMdType_BYTE;
static char const lcmd_var_name_BTTDIAG_DIAG[] = "DIAG";
static RISMDInterfaceVariable const lcmd_var_BTTDIAG_DIAG =
INIT_RISMDInterfaceVariable(lcmd_var_name_BTTDIAG_DIAG, &risMdType_BYTE, offsetof(LC_TD_FunctionBlock_BTTDIAG,LC_VD_DIAG), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_BTTDIAG_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_BTTDIAG_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_BTTDIAG_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BTTDIAG,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_BTTDIAG_IMAX[] = "Imax";
static RISMDInterfaceVariable const lcmd_var_BTTDIAG_IMAX =
INIT_RISMDInterfaceVariable(lcmd_var_name_BTTDIAG_IMAX, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_BTTDIAG,LC_VD_IMAX), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BTTDIAG_IMIN[] = "Imin";
static RISMDInterfaceVariable const lcmd_var_BTTDIAG_IMIN =
INIT_RISMDInterfaceVariable(lcmd_var_name_BTTDIAG_IMIN, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_BTTDIAG,LC_VD_IMIN), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BTTDIAG_IN[] = "IN";
static RISMDInterfaceVariable const lcmd_var_BTTDIAG_IN =
INIT_RISMDInterfaceVariable(lcmd_var_name_BTTDIAG_IN, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BTTDIAG,LC_VD_IN), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BTTDIAG_IOUT[] = "Iout";
static RISMDInterfaceVariable const lcmd_var_BTTDIAG_IOUT =
INIT_RISMDInterfaceVariable(lcmd_var_name_BTTDIAG_IOUT, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_BTTDIAG,LC_VD_IOUT), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_BTTDIAG[] =
{
  INIT_RISMDReference(&lcmd_var_BTTDIAG_DIAG),
  INIT_RISMDReference(&lcmd_var_BTTDIAG_ENO),
  INIT_RISMDReference(&lcmd_var_BTTDIAG_IMAX),
  INIT_RISMDReference(&lcmd_var_BTTDIAG_IMIN),
  INIT_RISMDReference(&lcmd_var_BTTDIAG_IN),
  INIT_RISMDReference(&lcmd_var_BTTDIAG_IOUT),
};

static char const lcmd_type_name_BTTDIAG[] = "BTTDIAG";
RISMDPOUType const lcmd_type_BTTDIAG = INIT_RISMDPOUType(lcmd_type_name_BTTDIAG, sizeof(LC_TD_FunctionBlock_BTTDIAG), 6, lcmd_var_list_BTTDIAG);
