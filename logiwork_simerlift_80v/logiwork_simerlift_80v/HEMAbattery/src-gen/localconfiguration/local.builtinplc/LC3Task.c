/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK      :: Interfaces of all Tasks of a Resource (Template)
** NOTES     ::
*/

/***************************************************************************
** Global Includes, Defines , Types
****************************************************************************/
#include <LCAPI.h>

extern LCoplck_TASK LC_vg_Task_DEFAULTTASK;

LCoplck_TASK_PTR LC_vg_TaskTable[] =
{
  &LC_vg_Task_DEFAULTTASK
};

unsigned long LCocc_queryTASKCount(void)
{
  return (sizeof(LC_vg_TaskTable)/sizeof(LC_vg_TaskTable[0]));
}

LCoplck_TASK_PTR LCocc_queryTASK
(
  unsigned long idx
)
{
  if (idx < LCocc_queryTASKCount() ) return LC_vg_TaskTable[idx];
  return 0;
}
