#include <RISMD.h>
#include <lcdt___abattpacklist.h>

static char const lcmd_type_name_ABATTPACKLIST[] = "ABATTPACKLIST";
extern RISMDSimpleNumType const risMdType_REAL;
RISMDArrayType const lcmd_type_ABATTPACKLIST_ARR = INIT_RISMDArrayType(1,10,sizeof(LC_TD_REAL),&risMdType_REAL);
RISMDDerivedType const lcmd_type_ABATTPACKLIST = INIT_RISMDDerivedType(lcmd_type_name_ABATTPACKLIST, &lcmd_type_ABATTPACKLIST_ARR);

