#ifndef LC_PROT_LCFU___TIMESTAMP_ELAPSED__C
#define LC_PROT_LCFU___TIMESTAMP_ELAPSED__C

#include <lcfu___timestamp_elapsed.h>
#include <RTAPITimer.h>

#define V(VAR) (LC_this->LC_VD_##VAR)
#define elapsed(current, start) (((current)>=(start)) ? ((current)-(start)) : (0xFFFFFFFF-((start)-(current))))

/*                            FunctionBlocks                   */
void  lcfu___TIMESTAMP_ELAPSED(LC_TD_FunctionBlock_TIMESTAMP_ELAPSED* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
    V(ELAPSED)=elapsed( LC_MF_CURRENT_TIME_API , V(START));
}

#endif
