#include <LCAPI.h>
#include <LC3Globals.h>
#include <lcpu___hemabattery.h>

#ifndef LC3_PT_INIT_volatile
#define LC3_PT_INIT_volatile
#endif

unsigned LC_PT_Init_HEMABATTERY(LCoplck_EPDB * pEPDB,LCoplck_StartMode s)
{
  LC3_PT_INIT_volatile LC_TD_Program_HEMABATTERY* LC_this = (LC_TD_Program_HEMABATTERY *)(pEPDB->thisData);

  if (s==LCoplck_ColdStart)
  {
    LC_INIT_Program_HEMABATTERY(LC_this);
  }
  else if (s==LCoplck_WarmStart)
  {
    LC_WINIT_Program_HEMABATTERY(LC_this,0);
  }

  switch (s)
  {
    case LCoplck_ColdStart :
    case LCoplck_WarmStart :
    case LCoplck_ReloadStart :
    case LCoplck_Continue :
    case LCoplck_CycleStart :
    LC_this->LC_VD_ENO = 1;
    break;
    case LCoplck_Disable :
    case LCoplck_Stop :
    case LCoplck_Kill :
    LC_this->LC_VD_ENO = 0;
    break;
    case LCoplck_NOTStarted :
    case LCoplck_Unload :
    case LCoplck_Load :
    case LCoplck_SM_InitCycle:
    case LCoplck_SM_StopStart:
    case LCoplck_SM_StopCycle:
    case LCoplck_UnknownSM :
    case LCoplck_SM_unused :
    break;
  }
  return 0;
}

uint8_t LC_PT_Exec_HEMABATTERY(LCoplck_EPDB_PTR pEPDB)
{
  /* call ProgramType */
  lcpu___HEMABATTERY( (LC_TD_Program_HEMABATTERY *)(pEPDB->thisData) ,pEPDB );
  return (((LC_TD_Program_HEMABATTERY *)(pEPDB->thisData))->LC_VD_ENO) == LC_EL_false ? 0 : 1;
}
