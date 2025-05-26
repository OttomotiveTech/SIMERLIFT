#include <RISMD.h>
#include <lcdt___vbattpacklist.h>

static char const lcmd_type_name_VBATTPACKLIST[] = "VBATTPACKLIST";
extern RISMDSimpleNumType const risMdType_UINT;
RISMDArrayType const lcmd_type_VBATTPACKLIST_ARR = INIT_RISMDArrayType(1,10,sizeof(LC_TD_UINT),&risMdType_UINT);
RISMDDerivedType const lcmd_type_VBATTPACKLIST = INIT_RISMDDerivedType(lcmd_type_name_VBATTPACKLIST, &lcmd_type_VBATTPACKLIST_ARR);

