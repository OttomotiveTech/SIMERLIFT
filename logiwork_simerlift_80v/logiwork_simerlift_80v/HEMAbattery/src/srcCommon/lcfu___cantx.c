#ifndef LC_PROT_LCFU___CANTX__C
#define LC_PROT_LCFU___CANTX__C

#include <lcfu___cantx.h>
#include <RTAPITimer.h>
#include <LC3CGEdgeDetect.h>
#include "lcdt___can_retcode.h"
#include "TMS570.h"

#ifdef BUILDPLATFORM
#include "can64_bit_opr.h"
#include "can_box_deliver.h"
#include "canbus.h"

#ifdef TMS_FREERTOS
#include "FreeRTOS.h"
#include "os_task.h"
#include "tmsOsPeripheral.h"
#endif
#endif

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___CANTX(LC_TD_FunctionBlock_CANTX* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM
    LC3_MSI_EDGE( V(R), V(R_M));
	if( V(R)){
#ifdef TMS_FREERTOS
        if( tmsMutex_take( (void *)V(CH), 1)!=pdPASS){
            LC_this->LC_VD_RC=LC_ED__CAN_RETCODE__CAN_INTERFACE_STILL_IN_USE;
        }
        else
#endif
        {
            V(RC)=LC_ED__CAN_RETCODE__CAN_OK;
            if( V(CH) && V(ID) && V(FMT)){
                uint32_t ID, dir, fmt;
                uint8_t dat[8];
                if( V(BOX)){
                	ID=canbusGetBox( (canBASE_t *)V(CH_M), V(BOX), &fmt, &dir);
                	if( ID!=V(ID_M) || fmt!=V(FMT_M) || dir!=CANBUS_TRANSMIT){
                		V(RC)=LC_ED__CAN_RETCODE__CAN_NO_VALID_HANDLE;
                	}
                	else if( V(ID)!=V(ID_M) || V(FMT)!=V(FMT_M) || V(CH)!=V(CH_M) ){
	                    if( pushBoxToNode( TMS570_CAN_REG(V(CH_M)), V(BOX))){
	                    	V(BOX)=0;
	                    }
	                    else{
	                        V(RC)=LC_ED__CAN_RETCODE__CAN_NO_VALID_HANDLE;
	                    }
                	}
                }

                if( V(RC)==LC_ED__CAN_RETCODE__CAN_OK){
                	if( V(BOX)==0){
                		int handle=pullBoxFromNode((canBASE_t *)V(CH));
    		            if( handle>0){
    		                V(BOX)=handle;
    		                canbusSetBoxTx( (canBASE_t *)V(CH), V(BOX), V(ID), V(FMT));
    		                V(CH_M)=V(CH);
    		                V(ID_M)=V(ID);
    		                V(FMT_M)=V(FMT);
    		            }
    		            else{
    		                LC_this->LC_VD_RC=LC_ED__CAN_RETCODE__CAN_NO_VALID_HANDLE;
    		            }
                	}

                	if( V(RC)==LC_ED__CAN_RETCODE__CAN_OK){
                        if( V(DLC)){
                            can64toCanBytes( V(DATA), dat);
                            if( canbusSend( (canBASE_t *)V(CH_M), V(BOX), dat, V( DLC))) // DLC supported
                            {
                                if( ++V(CTX)>=16){
                                    V(CTX)=0;
                                }
                            }
                            else{
                                V(RC)=LC_ED__CAN_RETCODE__CAN_SEND_ERROR;
                            }
                        }
                	}
                }
            }
#ifdef TMS_FREERTOS
            tmsMutex_give( (void *)V(CH));
#endif
        }
	}
#endif
}

#endif
