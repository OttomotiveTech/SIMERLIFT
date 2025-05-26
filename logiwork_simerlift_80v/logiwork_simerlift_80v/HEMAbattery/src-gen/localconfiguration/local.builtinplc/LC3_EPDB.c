/* Copyright (C) logi.cals GmbH. All rights reserved. */

#include <LCAPI.h>

extern LCoplck_EPDB LC_vg_GV_EPDB;
extern LCoplck_EPDB LC_vg_PI_EPDB_PROGRAM1;

LCoplck_EPDB_PTR LC_vg_EPDBTable[] =
{
  &LC_vg_PI_EPDB_PROGRAM1
  ,&LC_vg_GV_EPDB
};

LCoplck_EPDB_PTR LCocc_queryEP
(
  unsigned long idx
)
{
  if (idx >= LCocc_queryEPCount() ) return 0;
  return (LC_vg_EPDBTable[idx]);
}

unsigned long LCocc_queryEPCount(void)
{
  return sizeof(LC_vg_EPDBTable) / sizeof(LCoplck_EPDB_PTR) ;
}
