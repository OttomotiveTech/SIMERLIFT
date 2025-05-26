#ifndef LC_PROT_LCFU___BAMTX__C
#define LC_PROT_LCFU___BAMTX__C

#include <lcfu___bamtx.h>
#include <LC3CGEdgeDetect.h>
#include "lcdt___bamretcode.h"
#include <string.h>
#include <RTAPITimer.h>
#include "lcdt___can_retcode.h"
#include "lcdt___can_format.h"
#include "TMS570.h"

#ifdef BUILDPLATFORM
#ifdef TMS_FREERTOS
#include "FreeRTOS.h"
#include "os_task.h"
#include "tmsOsPeripheral.h"
#endif
#ifndef USE_CAN_HALC
#include "canbus.h"
#endif
#include "config.h"
#include "can_box_deliver.h"
#include "can64_bit_opr.h"

enum
{
    BAMTX_IDLE,
    BAMTX_SENDDT
};
#endif


#define V(VAR) (LC_this->LC_VD_##VAR)



/*                            FunctionBlocks                   */
void  lcfu___BAMTX(LC_TD_FunctionBlock_BAMTX* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM
    LC3_MSI_EDGE( V(R), V(R_M));

    if( V(R)){
        V(PENDING)=1;
    }

    V(R_END)=0;

    switch( V(STATE))
    {
    case BAMTX_IDLE:

        if( V(PENDING)){

            if( V(DATA) && V(TPDT) && V(TPCM) && V(LEN)<=sizeof(V(BUFF)) && V(LEN) /* && V(PGN) */){
#ifdef TMS_FREERTOS
            if( tmsMutex_take( (void *)V(CH), 1)!=pdPASS){
                V(RC)=LC_ED__BAMRETCODE__BAM_HW_BUSY;
            }
            else
#endif
            {
                V(PENDING)=0;

                V(RC)=LC_ED__BAMRETCODE__BAM_OK;

                if( V(BOX) && V(CH)!=V(CH_M) ){
                    if( pushBoxToNode( TMS570_CAN_REG(V(CH_M)), V(BOX))){
                        V(BOX)=0;
                    }
                    else{
                        V(RC)=LC_ED__BAMRETCODE__BAM_HW_BUSY;
                    }
                }

                if( V(RC)==LC_ED__BAMRETCODE__BAM_OK){

                    if( !V(BOX)){
                        int handle;
                        handle=pullBoxFromNode( (canBASE_t *)V(CH));
                        if( handle>0){
                            V(BOX)=handle;
                            V(CH_M)=V(CH);
                            V(RC)=LC_ED__BAMRETCODE__BAM_OK;
                        }
                        else{
                            V(RC)=LC_ED__BAMRETCODE__BAM_NO_HW_HANDLE;
                            V(BOX)=0;
                        }
                    }

                    if( V(RC)==LC_ED__BAMRETCODE__BAM_OK){

                    	uint8_t cm[8];

                        V(STARTT)=LC_MF_CURRENT_TIME_API;

                        V(TPDT_M)=V(TPDT);
                        V(PGN_M)=V(PGN);
                        memcpy(V(BUFF), V(DATA), V(LEN));
                        V(BYTES)=V(LEN);
                        V(PACKETS)=V(BYTES)/7;

                        if( V(PACKETS)*7<V(BYTES)){
                            V(PACKETS)++;
                        }

                        cm[0]=32;
                        cm[1]=V(BYTES);
                        cm[2]=V(BYTES)>>8;
                        cm[3]=V(PACKETS);
                        cm[4]=0;
                        cm[5]=V(PGN_M);
                        cm[6]=V(PGN_M)>>8;
                        cm[7]=0;

                        if( canbusTx(  (canBASE_t *)V(CH_M), V(BOX),  V(TPCM), LC_ED__CAN_FORMAT__EXTENDED, cm, 8)){
                            V(INDEX)=0;
                            V(NEXTPACKET)=1;
                            V(STATE)=BAMTX_SENDDT;
                        }
                        else{
                            V(RC)=LC_ED__BAMRETCODE__BAM_SEND_ERR;
                        }
                    }
                }
#ifdef TMS_FREERTOS
                tmsMutex_give( (void *)V(CH));
#endif
            }
            }
            else{
                V(PENDING)=0;
                V(RC)=LC_ED__BAMRETCODE__BAM_ILLEGAL_INPUT;
            }
        }
        break;


    case BAMTX_SENDDT:

        if( isTimeout( V(STARTT), V(FRMPER) )){
#ifdef TMS_FREERTOS
            if( tmsMutex_take( (void *)V(CH_M), pdMS_TO_TICKS(1))!=pdPASS){
                V(RC)=LC_ED__BAMRETCODE__BAM_HW_BUSY;
            }
            else
#endif
            {
            	uint8_t dt[8];
            	uint8_t frmDlc;

                V(STARTT)=LC_MF_CURRENT_TIME_API;

                memset(dt, 0, 8);
                dt[0]=V(NEXTPACKET);
                V(PACKETS)--;

                if( V(BYTES)>7){
                    frmDlc=8;
                    memcpy( &dt[1], &(V(BUFF)[V(INDEX)]), 7);
                    V(INDEX)+=7;
                    V(BYTES)-=7;
                    V(NEXTPACKET)++;

                }
                else{
                    frmDlc=V(BYTES)+1;
                    memcpy(&dt[1], &(V(BUFF)[V(INDEX)]), V(BYTES));
                    memset(&dt[V(BYTES)+1], 0xFF, 7-V(BYTES));
                    //frmDlc=8;
                    V(BYTES)=0;
                    V(STATE)=BAMTX_IDLE;
                }

                if( canbusTx(  (canBASE_t *)V(CH_M), V(BOX),  V(TPDT_M), LC_ED__CAN_FORMAT__EXTENDED, dt, frmDlc)){
                    if(V(BYTES)==0){
                        V(R_END)=1;
                        V(CTX)++;
                    }
                    V(RC)=LC_ED__BAMRETCODE__BAM_OK;
                }
                else{
                    V(RC)=LC_ED__BAMRETCODE__BAM_SEND_ERR;
                    V(STATE)=BAMTX_IDLE;
                }
#ifdef TMS_FREERTOS
                tmsMutex_give( (void *)V(CH_M));
#endif
            }
        }
        break;

    default:break;
    }
#endif
}

#endif
