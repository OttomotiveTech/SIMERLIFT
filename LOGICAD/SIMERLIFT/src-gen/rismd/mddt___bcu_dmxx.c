#include <RISMD.h>
#include <lcdt___bcu_dmxx.h>

static char const lcmd_type_name_BCU_DMXX[] = "BCU_DMXX";
extern RISMDCompoundType const lcmd_type_BCU_DMX;
#include <lcdt___bcu_dmx.h>
RISMDArrayType const lcmd_type_BCU_DMXX_ARR = INIT_RISMDArrayType(1,10,sizeof(LC_TD_DataType_BCU_DMX),&lcmd_type_BCU_DMX);
RISMDDerivedType const lcmd_type_BCU_DMXX = INIT_RISMDDerivedType(lcmd_type_name_BCU_DMXX, &lcmd_type_BCU_DMXX_ARR);

