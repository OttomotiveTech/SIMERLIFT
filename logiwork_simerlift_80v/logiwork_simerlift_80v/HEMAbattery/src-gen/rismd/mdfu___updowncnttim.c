#include <RISMD.h>
#include <lcfu___updowncnttim.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_UPDOWNCNTTIM_CD[] = "CD";
static RISMDInterfaceVariable const lcmd_var_UPDOWNCNTTIM_CD =
INIT_RISMDInterfaceVariable(lcmd_var_name_UPDOWNCNTTIM_CD, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_UPDOWNCNTTIM,LC_VD_CD), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_UPDOWNCNTTIM_CU[] = "CU";
static RISMDInterfaceVariable const lcmd_var_UPDOWNCNTTIM_CU =
INIT_RISMDInterfaceVariable(lcmd_var_name_UPDOWNCNTTIM_CU, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_UPDOWNCNTTIM,LC_VD_CU), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_INT;
static char const lcmd_var_name_UPDOWNCNTTIM_CV[] = "CV";
static RISMDInterfaceVariable const lcmd_var_UPDOWNCNTTIM_CV =
INIT_RISMDInterfaceVariable(lcmd_var_name_UPDOWNCNTTIM_CV, &risMdType_INT, offsetof(LC_TD_FunctionBlock_UPDOWNCNTTIM,LC_VD_CV), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_UPDOWNCNTTIM_DPER[] = "dPer";
static RISMDInterfaceVariable const lcmd_var_UPDOWNCNTTIM_DPER =
INIT_RISMDInterfaceVariable(lcmd_var_name_UPDOWNCNTTIM_DPER, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_UPDOWNCNTTIM,LC_VD_DPER), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_UPDOWNCNTTIM_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_UPDOWNCNTTIM_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_UPDOWNCNTTIM_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_UPDOWNCNTTIM,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_UPDOWNCNTTIM_LASTCD[] = "lastCD";
static RISMDStdVariable const lcmd_var_UPDOWNCNTTIM_LASTCD =
INIT_RISMDStdVariable(lcmd_var_name_UPDOWNCNTTIM_LASTCD, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_UPDOWNCNTTIM,LC_VD_LASTCD));

static char const lcmd_var_name_UPDOWNCNTTIM_LASTCU[] = "lastCU";
static RISMDStdVariable const lcmd_var_UPDOWNCNTTIM_LASTCU =
INIT_RISMDStdVariable(lcmd_var_name_UPDOWNCNTTIM_LASTCU, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_UPDOWNCNTTIM,LC_VD_LASTCU));

static char const lcmd_var_name_UPDOWNCNTTIM_PV[] = "PV";
static RISMDInterfaceVariable const lcmd_var_UPDOWNCNTTIM_PV =
INIT_RISMDInterfaceVariable(lcmd_var_name_UPDOWNCNTTIM_PV, &risMdType_INT, offsetof(LC_TD_FunctionBlock_UPDOWNCNTTIM,LC_VD_PV), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_UPDOWNCNTTIM_QD[] = "QD";
static RISMDInterfaceVariable const lcmd_var_UPDOWNCNTTIM_QD =
INIT_RISMDInterfaceVariable(lcmd_var_name_UPDOWNCNTTIM_QD, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_UPDOWNCNTTIM,LC_VD_QD), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_UPDOWNCNTTIM_QU[] = "QU";
static RISMDInterfaceVariable const lcmd_var_UPDOWNCNTTIM_QU =
INIT_RISMDInterfaceVariable(lcmd_var_name_UPDOWNCNTTIM_QU, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_UPDOWNCNTTIM,LC_VD_QU), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_UPDOWNCNTTIM_RST[] = "RST";
static RISMDInterfaceVariable const lcmd_var_UPDOWNCNTTIM_RST =
INIT_RISMDInterfaceVariable(lcmd_var_name_UPDOWNCNTTIM_RST, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_UPDOWNCNTTIM,LC_VD_RST), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_UPDOWNCNTTIM_TICK[] = "TICK";
static RISMDStdVariable const lcmd_var_UPDOWNCNTTIM_TICK =
INIT_RISMDStdVariable(lcmd_var_name_UPDOWNCNTTIM_TICK, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_UPDOWNCNTTIM,LC_VD_TICK));

static char const lcmd_var_name_UPDOWNCNTTIM_UPER[] = "uPer";
static RISMDInterfaceVariable const lcmd_var_UPDOWNCNTTIM_UPER =
INIT_RISMDInterfaceVariable(lcmd_var_name_UPDOWNCNTTIM_UPER, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_UPDOWNCNTTIM,LC_VD_UPER), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_UPDOWNCNTTIM[] =
{
  INIT_RISMDReference(&lcmd_var_UPDOWNCNTTIM_CD),
  INIT_RISMDReference(&lcmd_var_UPDOWNCNTTIM_CU),
  INIT_RISMDReference(&lcmd_var_UPDOWNCNTTIM_CV),
  INIT_RISMDReference(&lcmd_var_UPDOWNCNTTIM_DPER),
  INIT_RISMDReference(&lcmd_var_UPDOWNCNTTIM_ENO),
  INIT_RISMDReference(&lcmd_var_UPDOWNCNTTIM_LASTCD),
  INIT_RISMDReference(&lcmd_var_UPDOWNCNTTIM_LASTCU),
  INIT_RISMDReference(&lcmd_var_UPDOWNCNTTIM_PV),
  INIT_RISMDReference(&lcmd_var_UPDOWNCNTTIM_QD),
  INIT_RISMDReference(&lcmd_var_UPDOWNCNTTIM_QU),
  INIT_RISMDReference(&lcmd_var_UPDOWNCNTTIM_RST),
  INIT_RISMDReference(&lcmd_var_UPDOWNCNTTIM_TICK),
  INIT_RISMDReference(&lcmd_var_UPDOWNCNTTIM_UPER),
};

static char const lcmd_type_name_UPDOWNCNTTIM[] = "UPDOWNCNTTIM";
RISMDPOUType const lcmd_type_UPDOWNCNTTIM = INIT_RISMDPOUType(lcmd_type_name_UPDOWNCNTTIM, sizeof(LC_TD_FunctionBlock_UPDOWNCNTTIM), 13, lcmd_var_list_UPDOWNCNTTIM);
