#include <RISMD.h>
#include <lcdt___soxpacklist.h>

static char const lcmd_type_name_SOXPACKLIST[] = "SOXPACKLIST";
extern RISMDSimpleNumType const risMdType_USINT;
RISMDArrayType const lcmd_type_SOXPACKLIST_ARR = INIT_RISMDArrayType(1,10,sizeof(LC_TD_USINT),&risMdType_USINT);
RISMDDerivedType const lcmd_type_SOXPACKLIST = INIT_RISMDDerivedType(lcmd_type_name_SOXPACKLIST, &lcmd_type_SOXPACKLIST_ARR);

