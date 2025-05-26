#include <RISMD.h>
#include <LCAPI.h>

extern RISMDNameserver_V1 const lcmd_nameserver;
extern RISMDFingerprint const lcmd_fingerprint;

RISMDReference const lcmd_root_md_list[] =
{
  INIT_RISMDReference(&lcmd_nameserver),
  INIT_RISMDReference(&lcmd_fingerprint),
};

RISMDRoot const risMdRoot = INIT_RISMDRoot(2,lcmd_root_md_list);

void const *lc_get_ris_md_root(void)
{
  return &risMdRoot;
}
