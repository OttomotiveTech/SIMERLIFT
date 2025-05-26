#ifndef LC_PROT_LCFU___RFLT__H
#define LC_PROT_LCFU___RFLT__H

#include <LC3CGBase.h>
#include <lcfu_iec61131__ADD.h>
#include <lcfu_iec61131__AND.h>
#include <lcfu_iec61131__CONVERT.h>
#include <lcfu_iec61131__MUL.h>
#include <lcfu_iec61131__SHR.h>
#include <lcfu_iec61131__SUB.h>

/*                            Typedefs                         */
typedef struct _LC_TD_Function_RFLT
{
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_LREAL LC_VD_OUT;
} LCCG_StructAttrib LC_TD_Function_RFLT;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_Function_RFLT(p) \
{ \
  LC_INIT_LREAL(&((p)->LC_VD_OUT)); \
}

/*                            Prototype                        */
void  lcfu___RFLT(LC_TD_Function_RFLT* LC_this, LC_TD_INT LC_VD_START, LC_TD_INT LC_VD_LEN, LC_TD_LREAL LC_VD_OFS, LC_TD_LREAL LC_VD_RES, LC_TD_LWORD LC_VD_INBITS, struct _lcoplck_epdb_1_impl* pEPDB);

#endif
