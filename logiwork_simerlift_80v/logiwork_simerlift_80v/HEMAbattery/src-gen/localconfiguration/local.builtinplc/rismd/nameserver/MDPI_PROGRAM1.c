#include <RISMD.h>
#include <LC3EntryPoint_MD.h>

extern RISMDCompoundType const lcmd_type_HEMABATTERY;

static char const lcmd_ep_name_pi_PROGRAM1[] = "program1";
RISMDEntryPoint const lcmd_entrypoint_pi_program1 =
  INIT_RISMDEntryPoint(RISMD_MEM_TYPE_EP, 256, lcmd_ep_name_pi_PROGRAM1, &lcmd_type_HEMABATTERY, RISMD_EP_BASE_PROGRAM1);
