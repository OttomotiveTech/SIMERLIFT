#ifndef LC_PROT_LCFU___CANRECV__C
#define LC_PROT_LCFU___CANRECV__C

#include <lcfu___canrecv.h>
#include <RTAPITimer.h>
#include "lcdt___can_retcode.h"
#include "TMS570.h"

#ifdef BUILDPLATFORM
#include "can64_bit_opr.h"
#include "can_box_deliver.h"

#ifdef TMS_FREERTOS
#include "FreeRTOS.h"
#include "os_task.h"
#include "tmsOsPeripheral.h"
#endif

#ifndef USE_CAN_HALC
#include "canbus.h"
#endif

#define elapsed(current, start) (((current)>=(start)) ? ((current)-(start)) : (0xFFFFFFFF-((start)-(current))))

#endif

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___CANRECV(LC_TD_FunctionBlock_CANRECV* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
#ifdef BUILDPLATFORM
/* Vendor Code */
    uint32_t ID;
	switch( V(STATE))
	{
	case 0: // initialize
		if( V(ENB) && V(CH) && V(ID) && V(FMT)){
#ifdef TMS_FREERTOS
            if( tmsMutex_take( (void *)V(CH), 1)!=pdPASS){
                LC_this->LC_VD_RC=LC_ED__CAN_RETCODE__CAN_INTERFACE_STILL_IN_USE;
            }
            else
#endif
            {
                int handle;
                handle=pullBoxFromNode((canBASE_t *)V(CH));
                if( handle>0){
                    V(BOX)=handle;
#ifdef USE_CAN_HALC
                    ID= V(FMT)==LC_ED__CAN_FORMAT__STANDARD ? ((V(ID)<<18) | 0x00000000): ((V(ID)<<0) | 0x40000000);
                    canUpdateID( TMS570_CAN_REG( V(CH)), V(BOX), ID);
#else
                    // put custom driver
                    canbusSetBoxRx( (canBASE_t *)V(CH), V(BOX), V(ID), V(FMT), 0x1FFFFFFF);
#endif
                    V(CH_M)=V(CH);
                    V(ID_M)=V(ID);
                    V(FMT_M)=V(FMT);
                    V(STARTT)=LC_MF_CURRENT_TIME_API;
                    V(STATE)=1;
                    V(RC)=LC_ED__CAN_RETCODE__CAN_OK;
                }
                else{
                    V(RC)=LC_ED__CAN_RETCODE__CAN_NO_VALID_HANDLE;
                    V(BOX)=0;
                }
#ifdef TMS_FREERTOS
                tmsMutex_give( (void *)V(CH));
#endif
            }

		}
		break;
	case 1: // operation
		if( V(ID)!=V(ID_M) || V(FMT)!=V(FMT_M) || V(CH)!=V(CH_M) || V(ENB)==0){
#ifdef TMS_FREERTOS
            if( tmsMutex_take( (void *)V(CH), 1)!=pdPASS){
                LC_this->LC_VD_RC=LC_ED__CAN_RETCODE__CAN_INTERFACE_STILL_IN_USE;
            }
            else
#endif
            {
                V(MPER)=0xFFFFFFFFFFFFFFFF;
                V(CRX)=0;
                V(DLC)=0;
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
                        //this error is reset after re-initialization delay
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
		else{
			uint8_t dat[8];
			uint8_t msgRec=0;
			uint32_t result=0;
#ifdef TMS_FREERTOS
            if( tmsMutex_take( (void *)V(CH), 1)!=pdPASS){
                LC_this->LC_VD_RC=LC_ED__CAN_RETCODE__CAN_INTERFACE_STILL_IN_USE;
            }
            else
#endif
            {
#ifdef USE_CAN_HALC
                result=canGetData( (canBASE_t *)V(CH_M), V(BOX), dat);
#else
                result=canbusReceive( (canBASE_t *)V(CH_M), V(BOX), dat, &V(DLC));
#endif
                if( result){
                    // a message received, validate
#ifdef USE_CAN_HALC
                    ID=canGetID( (canBASE_t *)V(CH_M), V(BOX));
                    ID=V(FMT_M)==LC_ED__CAN_FORMAT__STANDARD?ID>>18:ID;
#else
                    ID=canbusGetBox( (canBASE_t *)V(CH_M), V(BOX), NULL, NULL);
#endif
                    if( ID==V(ID_M)){
                        canBytesToCan64( dat, &LC_this->LC_VD_DATA);
#ifdef USE_CAN_HALC
                        V(DLC)=8;
#endif
                        ++V(CRX);
                        msgRec=1;
                    }
                    else{
                        V(RC)=LC_ED__CAN_RETCODE__CAN_NO_VALID_HANDLE;
                    }
                }
#ifdef TMS_FREERTOS
                tmsMutex_give( (void *)V(CH));
#endif
            }

			if( elapsed(LC_MF_CURRENT_TIME_API, V(STARTT))>V(PER)){
				V(RC)=LC_ED__CAN_RETCODE__CAN_RX_TIMEOUT;

				if( msgRec){
					V(MPER)=LC_MF_CURRENT_TIME_API-V(STARTT);
					V(STARTT)=LC_MF_CURRENT_TIME_API;
				}
				/*
				else{

					V(DLC)=0;
					if( V(FMT)==LC_ED__CAN_FORMAT__STANDARD){
						V(DATA)=0;
					}
					else{
						V(DATA)=0xFFFFFFFFFFFFFFFF;
					}

				}
				*/
			}
			else if( msgRec){
				V(RC)=LC_ED__CAN_RETCODE__CAN_OK;
				if( result==3){
					//V(RC)=LC_ED__CAN_RETCODE__CAN_RX_MISSED_DATA;
				}
				V(MPER)=LC_MF_CURRENT_TIME_API-V(STARTT);
				V(STARTT)=LC_MF_CURRENT_TIME_API;
			}

		}
		break;
	case 2: // time gap before reinitialize
		if( elapsed(LC_MF_CURRENT_TIME_API, V(STARTT))>=2){
			V(RC)=LC_ED__CAN_RETCODE__CAN_OK;
			V(STATE)=0;
		}
		break;
	default:
		break;
	}
#endif
}

#endif
