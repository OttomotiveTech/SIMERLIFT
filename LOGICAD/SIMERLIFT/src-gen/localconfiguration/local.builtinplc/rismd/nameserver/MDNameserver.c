#include <RISMD.h>

extern const RISMDEntryPoint lcmd_entrypoint_pi_program1;
extern const RISMDEntryPoint lcmd_entrypoint_gvinstance;
RISMDReference const lcmd_nameserver_ep_list[] =
{
  INIT_RISMDReference(&lcmd_entrypoint_pi_program1),
  INIT_RISMDReference(&lcmd_entrypoint_gvinstance),
};
RISMDNameserver_V1 const lcmd_nameserver = INIT_RISMDNameserver_V1(2,lcmd_nameserver_ep_list);

