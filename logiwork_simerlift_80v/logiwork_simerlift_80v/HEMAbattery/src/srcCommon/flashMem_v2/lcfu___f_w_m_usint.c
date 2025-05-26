#ifndef LC_PROT_LCFU___F_W_M_USINT__C
#define LC_PROT_LCFU___F_W_M_USINT__C

#include <lcfu___f_w_m_usint.h>
#include "TMS570.h"

#ifdef BUILDPLATFORM
#include <RTAPITimer.h>
#include <LC3CGEdgeDetect.h>
#include "flash_box_deliver.h"
#include "flash_task.h"

extern QueueHandle_t flashTaskQueueMailBox;
extern QueueHandle_t flashTaskResponse;

#define V(VAR) (LC_this->LC_VD_##VAR)
#endif

/*                            FunctionBlocks                   */
void  lcfu___F_W_M_USINT(LC_TD_FunctionBlock_F_W_M_USINT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM
    LC3_MSI_EDGE(V(R), V(R_M));

    if( V(R)){
        V(PENDING)=1;
    }

    switch(V(STATE))
    {

    case 0:
    {
        if( V(PENDING))
        {
            if(V(ID) == 0){
                V(ID) = pullBoxFromFlash();
            }

            if( V(ID)>0){
                flashConfig_t flashTxMessage = {0};

                V(OK) = 0;

                flashTxMessage.buffer=NULL;
                flashTxMessage.id = V(ID);
                flashTxMessage.address = V(ADDR);
                flashTxMessage.data[0] = V(VAL);
                flashTxMessage.dataSize = 1;

                if( xQueueSend( flashTaskQueueMailBox, &flashTxMessage, pdMS_TO_TICKS(2)) == pdPASS){
                    V(PENDING)=0;
                    V(STARTT)=LC_MF_CURRENT_TIME_API;
                    V(STATE) = 1;
                }
                else{
                    V(STATE) = 0;
                }
            }
            else{
                V(STATE) = 0;
            }
        }
        else if( isTimeout( V(STARTT), 1000)){

            flashResponse_t fResponseRxMessage = {0};

            if( xQueuePeek(flashTaskResponse, &fResponseRxMessage, 0) == pdPASS)
            {
                if(fResponseRxMessage.rId == V(ID))
                {
                    if( xQueueReceive(flashTaskResponse, &fResponseRxMessage, pdMS_TO_TICKS(1))==pdPASS){
                        V(STARTT)=LC_MF_CURRENT_TIME_API;
                    }
                }
            }
        }

        break;
    }

    case 1:
    {
        flashResponse_t fResponseRxMessage = {0};

        if( isTimeout( V(STARTT), 10000)){
            V(STARTT)=LC_MF_CURRENT_TIME_API;
            V(STATE) = 0;
        }
        else if( xQueuePeek(flashTaskResponse, &fResponseRxMessage, pdMS_TO_TICKS(1)) == pdPASS)
        {
            if(fResponseRxMessage.rId == V(ID))
            {
                if(fResponseRxMessage.rState)
                {
                    V(OK) = 1;
                    V(RET) = V(ADDR);
                    V(NXT) = V(ADDR) + 1;
                }
                else
                {
                    V(OK) = 0;
                }

                if( xQueueReceive(flashTaskResponse, &fResponseRxMessage, pdMS_TO_TICKS(2))==pdPASS){
                    V(STATE) = 0;
                    V(STARTT)=LC_MF_CURRENT_TIME_API;
                }
            }
        }

        break;
    }

    default:
        V(STATE) = 0;
        break;

    }
#endif
}


#endif
