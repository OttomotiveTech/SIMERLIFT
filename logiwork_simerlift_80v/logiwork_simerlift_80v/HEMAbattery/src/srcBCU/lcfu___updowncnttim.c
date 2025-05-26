#ifndef LC_PROT_LCFU___UPDOWNCNTTIM__C
#define LC_PROT_LCFU___UPDOWNCNTTIM__C

#include <lcfu___updowncnttim.h>
#include <LC3CGEdgeDetect.h>
#include "TMSboard.h"
#ifdef BUILDPLATFORM
#include "config.h"
#include "FreeRTOS.h"
#include "os_task.h"
#define V(VAR) (LC_this->LC_VD_##VAR)
#endif


/*                            FunctionBlocks                   */
void  lcfu___UPDOWNCNTTIM(LC_TD_FunctionBlock_UPDOWNCNTTIM* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM

    if( V(RST)){
        V(CV)=0;
    }

    if( V(LASTCU)!=V(CU) || V(LASTCD)!=V(CD) || V(RST)){
        V(TICK)=sysTick();
    }

    if( (V(CD) && !V(CU)) || ( V(CV)>V(PV))){
        if( isTimeout( V(TICK), V(DPER)) ){
            if( V(CV)>0){
                V(CV)--;
            }
        }
    }
    else if( V(CU) && !V(CD)){
        if( isTimeout( V(TICK), V(UPER)) ){
            if( V(CV)<V(PV)){
                V(CV)++;
            }
        }
    }

    if( V(CV)>=V(PV)){
        V(QU)=1;
    }

    if( V(CV)<=0){
        V(QD)=1;
    }

#endif
}

#endif
