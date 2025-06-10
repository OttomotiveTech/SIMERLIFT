/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK      :: IO driver definitions
** NOTES     ::
*/

/***************************************************************************
** Global Includes, Defines , Types
****************************************************************************/
#include "RTIODefs.h"

struct tag_iodef_entry global_iodefs_input[] =
{
  { "" , "" , 0 , 0, (void*) 0x0 , 0 , 0 , 0 , "" , { 0,0,0,0 }, (void*) 0x0 }
};

struct tag_iodef_entry global_iodefs_output[] =
{
  { "" , "" , 0 , 0, (void*) 0x0 , 0 , 0 , 0 , "" , { 0,0,0,0 }, (void*) 0x0 }
};

int global_iodefs_input_count = 0;
int global_iodefs_output_count = 0;
