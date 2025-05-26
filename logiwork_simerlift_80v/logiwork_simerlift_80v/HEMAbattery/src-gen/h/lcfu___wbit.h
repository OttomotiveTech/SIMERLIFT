#ifndef LC_PROT_LCFU___WBIT__H
#define LC_PROT_LCFU___WBIT__H

#include <LC3CGBase.h>
#include <lcfu_iec61131__ADD.h>
#include <lcfu_iec61131__AND.h>
#include <lcfu_iec61131__SHL.h>
#include <lcfu_iec61131__SHR.h>
#include <lcfu_iec61131__SUB.h>

/*                            Typedefs                         */
typedef struct _LC_TD_Function_WBIT
{
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_LWORD LC_VD_OUTBIT;
} LCCG_StructAttrib LC_TD_Function_WBIT;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_Function_WBIT(p) \
{ \
  LC_INIT_LWORD(&((p)->LC_VD_OUTBIT)); \
}

/*                            Prototype                        */
void  lcfu___WBIT(LC_TD_Function_WBIT* LC_this, LC_TD_INT LC_VD_START, LC_TD_INT LC_VD_LEN, LC_TD_LWORD LC_VD_INBIT, struct _lcoplck_epdb_1_impl* pEPDB);

#endif
