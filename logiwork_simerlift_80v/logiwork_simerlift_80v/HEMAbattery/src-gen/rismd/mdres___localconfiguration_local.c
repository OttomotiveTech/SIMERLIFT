#include <RISMD.h>
#include <LC3Globals_MD.h>
#include <LC3GlobalsDMA_MD.h>

static char const lcmd_type_name_gv[] = "gv";
RISMDCompoundType const lcmd_type_global_var = INIT_RISMDCompoundType(lcmd_type_name_gv, sizeof(LC_TD_LC3_GVType), 0, 0);
