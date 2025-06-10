#include <RISMD.h>
#include <lcdt___plchannel.h>

static char const lcmd_type_name_PLCHANNEL[] = "PLCHANNEL";
extern RISMDSimpleNumType const risMdType_UDINT;
RISMDDerivedType const lcmd_type_PLCHANNEL = INIT_RISMDDerivedType(lcmd_type_name_PLCHANNEL, &risMdType_UDINT);
