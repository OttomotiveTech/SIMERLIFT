#include <RISMD.h>
#include <LC3EntryPoint_MD.h>
#include<LC3Globals_MD.h>

extern RISMDCompoundType const lcmd_type_global_var;

static char const lcmd_ep_name_global_var[] = "VAR_GLOBAL";
RISMDEntryPoint const lcmd_entrypoint_gvinstance =
  INIT_RISMDEntryPoint(LC_MD_EP_TYPE_LC3_GVINSTANCE, LC_MD_EP_ID_LC3_GVINSTANCE, lcmd_ep_name_global_var, &lcmd_type_global_var, 0);
