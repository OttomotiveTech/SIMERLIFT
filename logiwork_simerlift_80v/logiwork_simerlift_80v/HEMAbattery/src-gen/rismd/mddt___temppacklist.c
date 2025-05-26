#include <RISMD.h>
#include <lcdt___temppacklist.h>

static char const lcmd_type_name_TEMPPACKLIST[] = "TEMPPACKLIST";
extern RISMDSimpleNumType const risMdType_SINT;
RISMDArrayType const lcmd_type_TEMPPACKLIST_ARR = INIT_RISMDArrayType(1,10,sizeof(LC_TD_SINT),&risMdType_SINT);
RISMDDerivedType const lcmd_type_TEMPPACKLIST = INIT_RISMDDerivedType(lcmd_type_name_TEMPPACKLIST, &lcmd_type_TEMPPACKLIST_ARR);

