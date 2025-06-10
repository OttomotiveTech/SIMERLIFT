#include <RISMD.h>
#include <lcdt___faultpacklist.h>

static char const lcmd_type_name_FAULTPACKLIST[] = "FAULTPACKLIST";
extern RISMDSimpleNumType const risMdType_LWORD;
RISMDArrayType const lcmd_type_FAULTPACKLIST_ARR = INIT_RISMDArrayType(1,10,sizeof(LC_TD_LWORD),&risMdType_LWORD);
RISMDDerivedType const lcmd_type_FAULTPACKLIST = INIT_RISMDDerivedType(lcmd_type_name_FAULTPACKLIST, &lcmd_type_FAULTPACKLIST_ARR);

