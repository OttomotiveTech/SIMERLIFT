#ifndef LC_PROT_LCFU___CANSEND__C
#define LC_PROT_LCFU___CANSEND__C

//#define USE_CAN_HALC

#include <lcfu___cansend.h>
#include <RTAPITimer.h>
#include "lcdt___can_retcode.h"
#include "TMS570.h"

#ifdef BUILDPLATFORM
#include "can_box_deliver.h"

#ifdef TMS_FREERTOS
#include "can64_bit_opr.h"
#include "FreeRTOS.h"
#include "os_task.h"
#include "tmsOsPeripheral.h"
#endif

#ifndef USE_CAN_HALC
#include "canbus.h"
#endif

#define V(VAR) (LC_this->LC_VD_##VAR)
#define elapsed(current, start) (((current)>=(start)) ? ((current)-(start)) : (0xFFFFFFFF-((start)-(current))))

#endif
/*                            FunctionBlocks                   */
void  lcfu___CANSEND(LC_TD_FunctionBlock_CANSEND* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
#ifdef BUILDPLATFORM
/* Vendor Code */
    int handle;
    uint32_t ID;
    uint8_t dat[8];

	switch( V(STATE))
	{

	case 0:
		if( V(ENB) && V(CH) && V(ID) && V(FMT)){
#ifdef TMS_FREERTOS
		    if( tmsMutex_take( (void *)V(CH), 1)!=pdPASS){
		        LC_this->LC_VD_RC=LC_ED__CAN_RETCODE__CAN_INTERFACE_STILL_IN_USE;
		    }
		    else
#endif
		    {
	            handle=pullBoxFromNode((canBASE_t *)V(CH));
	            if( handle>0){
	                V(BOX)=handle;
#ifdef USE_CAN_HALC
	                ID= V(FMT)==LC_ED__CAN_FORMAT__STANDARD ? ((V(ID)<<18) | 0x00000000): ((V(ID)<<0) | 0x40000000);
	                ID |= 0x20000000;
	                canUpdateID( TMS570_CAN_REG( V(CH)), V(BOX), ID);
#else
	                canbusSetBoxTx( (canBASE_t *)V(CH), V(BOX), V(ID), V(FMT));
#endif
	                V(CH_M)=V(CH);
	                V(ID_M)=V(ID);
	                V(FMT_M)=V(FMT);
	                LC_this->LC_VD_STARTT=LC_MF_CURRENT_TIME_API;
	                V(STATE)=1;
	                V(RC)=LC_ED__CAN_RETCODE__CAN_OK;
	            }
	            else{
	                LC_this->LC_VD_RC=LC_ED__CAN_RETCODE__CAN_NO_VALID_HANDLE;
	                V(BOX)=0;
	            }
#ifdef TMS_FREERTOS
	            tmsMutex_give( (void *)V(CH));
#endif
		    }
		}
		break;

	case 1:
		if( V(ID)!=V(ID_M) || V(FMT)!=V(FMT_M) || V(CH)!=V(CH_M) || V(ENB)==0){
#ifdef TMS_FREERTOS
            if( tmsMutex_take( (void *)V(CH), 1)!=pdPASS){
                LC_this->LC_VD_RC=LC_ED__CAN_RETCODE__CAN_INTERFACE_STILL_IN_USE;
            }
            else
#endif
            {
#ifdef USE_CAN_HALC
                ID=canGetID( (canBASE_t *)V(CH_M), V(BOX));
                ID=V(FMT_M)==LC_ED__CAN_FORMAT__STANDARD?ID>>18:ID;
#else
                ID=canbusGetBox( (canBASE_t *)V(CH_M), V(BOX), NULL, NULL);
#endif
                if( ID==V(ID_M)){
                    if( pushBoxToNode( TMS570_CAN_REG(V(CH_M)), V(BOX))){
                        V(RC)=LC_ED__CAN_RETCODE__CAN_OK;
                    }
                    else{
                        V(RC)=LC_ED__CAN_RETCODE__CAN_NO_VALID_HANDLE;
                    }
                }
                else{
                    V(RC)=LC_ED__CAN_RETCODE__CAN_NO_VALID_HANDLE;
                }
                V(STATE)=2;
                V(STARTT)=LC_MF_CURRENT_TIME_API;
#ifdef TMS_FREERTOS
                tmsMutex_give( (void *)V(CH));
#endif
            }
		}
		else if( elapsed(LC_MF_CURRENT_TIME_API,V(STARTT))>=V(PER)){
#ifdef TMS_FREERTOS
            if( tmsMutex_take( (void *)V(CH), 1)!=pdPASS){
                LC_this->LC_VD_RC=LC_ED__CAN_RETCODE__CAN_INTERFACE_STILL_IN_USE;
            }
            else
#endif
            {
                V(STARTT)=LC_MF_CURRENT_TIME_API;
#ifdef USE_CAN_HALC
                ID=canGetID( (canBASE_t *)V(CH_M), V(BOX));
                ID=V(FMT_M)==LC_ED__CAN_FORMAT__STANDARD?ID>>18:ID;
#else
                ID=canbusGetBox( (canBASE_t *)V(CH_M), V(BOX), NULL, NULL);
#endif
                if( ID==V(ID)){
                    if( V( DLC)){
                        can64toCanBytes( V(DATA), dat);
#ifdef USE_CAN_HALC
                        if( canTransmit( (canBASE_t *)V(CH_M), V(BOX), dat)==1)
#else
                        if( canbusSend( (canBASE_t *)V(CH_M), V(BOX), dat, V( DLC))) // DLC supported
#endif
                        {
                            if( ++V(CTX)>=16){
                                V(CTX)=0;
                            }
                            V(RC)=LC_ED__CAN_RETCODE__CAN_OK;
                        }
                        else{
                            V(RC)=LC_ED__CAN_RETCODE__CAN_SEND_ERROR;
                        }
                    }
                    else{
                        V(RC)=LC_ED__CAN_RETCODE__CAN_OK;
                    }
                }
                else{
                    V(RC)=LC_ED__CAN_RETCODE__CAN_NO_VALID_HANDLE;
                }
                if(V(RC)!=LC_ED__CAN_RETCODE__CAN_OK){

                }
#ifdef TMS_FREERTOS
                tmsMutex_give( (void *)V(CH));
#endif
            }
		}
		break;

	case 2:
		if( elapsed(LC_MF_CURRENT_TIME_API,V(STARTT))>=2){
			V(STATE)=0;
		}
		break;

	default:
		break;
	}
#endif
}

#endif
