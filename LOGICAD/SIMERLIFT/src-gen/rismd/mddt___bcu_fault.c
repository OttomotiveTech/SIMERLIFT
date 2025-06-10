#include <RISMD.h>
#include <lcdt___bcu_fault.h>

static char const lcmd_type_name_BCU_FAULT[] = "BCU_FAULT";
extern RISMDCompoundType const lcmd_type_BCU_FAULT_TYPES;
#include <lcdt___bcu_fault_types.h>
RISMDArrayType const lcmd_type_BCU_FAULT_ARR = INIT_RISMDArrayType(1,10,sizeof(LC_TD_DataType_BCU_FAULT_TYPES),&lcmd_type_BCU_FAULT_TYPES);
RISMDDerivedType const lcmd_type_BCU_FAULT = INIT_RISMDDerivedType(lcmd_type_name_BCU_FAULT, &lcmd_type_BCU_FAULT_ARR);

