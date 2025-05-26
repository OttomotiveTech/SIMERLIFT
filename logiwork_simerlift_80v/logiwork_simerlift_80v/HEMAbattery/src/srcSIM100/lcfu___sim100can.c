#ifndef LC_PROT_LCFU___SIM100CAN__C
#define LC_PROT_LCFU___SIM100CAN__C

#include <lcfu___sim100can.h>

#include "TMS570.h"

#ifdef BUILDPLATFORM
#ifdef TMS_FREERTOS
#include "FreeRTOS.h"
#include "os_task.h"
#include "os_semphr.h"
#include "tmsOsPeripheral.h"
#endif
#include "canbus.h"
#include "can_box_deliver.h"
#include "config.h"
#endif

#define V(VAR) (LC_this->LC_VD_##VAR)

#ifdef BUILDPLATFORM

#define SIMSTATBIT_HE(BITS)  (BITS&0x80)
#define SIMSTATBIT_NE(BITS)  (BITS&0x40)
#define SIMSTATBIT_HU(BITS)  (BITS&0x20)
#define SIMSTATBIT_HV(BITS)  (BITS&0x08)
#define SIMSTATBIT_LV(BITS)  (BITS&0x04)
#define SIMSTATBIT_IS(BITS)  (BITS&0x03)

#define SIM_ISO_OK   0x0
#define SIM_ISO_NOT_AVAILABLE  0x01
#define SIM_ISO_WARNING 0x02    //<500ohm/V
#define SIM_ISO_FAULT  0x03     //<100ohm/v

typedef enum
{
    sim100CanSetup,
    simIsoDelay0,
    simCheckVbatMax,
    simSetVbatMax,
    simRestart,
    simExcitationOff,
    simIsoMonitor,
    simIsoDelay1,
    simIsoMonitorResistance,
    simIsoDelay2,
    simCheckError,
    sim100err,
}sim100handlerState;

sim100handlerState simState=sim100CanSetup;
int simRxBox=0, simTxBox=0;
uint32_t simTick;
uint8_t transmitDone=0;
int simMonitorNoResponse=0;

#endif

/*                            FunctionBlocks                   */
void  lcfu___SIM100CAN(LC_TD_FunctionBlock_SIM100CAN* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM

    uint8_t msg[8];
    uint32_t dlc;

    switch( simState)
    {
    case sim100CanSetup:
    {
        V(ISOSTAT)=SIM_ISO_NOT_AVAILABLE;

        if( tmsMutex_take( (void *)V(CH), 1)==pdPASS){
            int handle;
            handle=pullBoxFromNode((canBASE_t *)V(CH));
            if( handle>0){
                simTxBox=handle;
                handle=pullBoxFromNode((canBASE_t *)V(CH));
                if( handle>0){
                    simRxBox=handle;
                    canbusSetBoxTx( (canBASE_t *)V(CH), simTxBox, 0xA100101, CANBUS_FMT_EXT);
                    canbusSetBoxRx( (canBASE_t *)V(CH), simRxBox, 0xA100100, CANBUS_FMT_EXT, 0x1FFFFFFF);
                    transmitDone=0;
                    simState=simIsoDelay0;
                }
                else{
                    simState=sim100err;
                }
            }
            else{
                simState=sim100err;
            }
            tmsMutex_give( (void *)V(CH));
        }
        break;
    }

    case simIsoDelay0:
    {
        if( isTimeout( simTick, 4000)){
            simState=simCheckVbatMax;
            transmitDone=0;
            simTick=sysTick();
        }
        break;
    }


    case simCheckVbatMax:
    {
        if( tmsMutex_take( (void *)V(CH), 1)==pdPASS){

            if( transmitDone){

                if( canbusReceive( (canBASE_t *)V(CH), simRxBox, msg, &dlc)){
                    transmitDone=0;
                    V(NODEVICE)=0;

                    if( msg[0]==0xE4){

                        uint16_t Vb_max=((msg[5]<<8)&0xFF00) | (msg[6]&0x00FF);

                        if( Vb_max!=V(VBATMAX)){
                            simState=simSetVbatMax;
                        }
                        else if( V(ISOOFF)){
                            simState=simExcitationOff;
                        }
                        else{
                            simState=simIsoMonitor;
                        }
                    }
                    simTick=sysTick();
                }
                else if( isTimeout(simTick, 2000)){
                    transmitDone=0;
                    V(NODEVICE)=1;
                }
            }
            else{
                msg[0]=0xE4;
                canbusSend( (canBASE_t *)V(CH), simTxBox, msg, 1);
                simTick=sysTick();
                transmitDone=1;
            }
            tmsMutex_give( (void *)V(CH));
        }
        break;
    }


    case simSetVbatMax:
    {
        if( tmsMutex_take( (void *)V(CH), 1)==pdPASS){

            if( transmitDone){

                if( canbusReceive( (canBASE_t *)V(CH), simRxBox, msg, &dlc)){
                    transmitDone=0;
                    V(NODEVICE)=0;

                    if( msg[0]==0xF0){

                        uint16_t Vb_max= ((msg[1]<<8)&0xFF00) | (msg[2]&0x00FF);

                        if( Vb_max==V(VBATMAX)){
                            simState=simRestart;
                        }
                        else{
                            simState=simSetVbatMax;
                        }
                    }
                    simTick=sysTick();
                }
                else if( isTimeout(simTick, 2000)){
                    transmitDone=0;
                    V(NODEVICE)=1;
                }
            }
            else{
                msg[0]=0xF0;
                msg[1]=V(VBATMAX)>>8;
                msg[2]=V(VBATMAX);
                canbusSend( (canBASE_t *)V(CH), simTxBox, msg, 3);
                simTick=sysTick();
                transmitDone=1;
            }
            tmsMutex_give( (void *)V(CH));
        }
        break;
    }

    case simRestart:
    {
        V(ISOSTAT)=SIM_ISO_NOT_AVAILABLE;

        if( transmitDone){
            if( V(ISOOFF)){
                simState=simExcitationOff;
                transmitDone=0;
                simTick=sysTick();
            }
            else if( isTimeout( simTick, 5000)){
                simState=simIsoMonitor;
                transmitDone=0;
                simTick=sysTick();
            }
        }
        else if( tmsMutex_take( (void *)V(CH), 1)==pdPASS){

            msg[0]=0xC1;
            msg[1]=0x01;
            msg[2]=0x23;
            msg[3]=0x45;
            msg[4]=0x67;

            canbusSend( (canBASE_t *)V(CH), simTxBox, msg, 5);
            simTick=sysTick();
            transmitDone=1;
            tmsMutex_give( (void *)V(CH));
        }
        break;
    }


    case simExcitationOff:
    {
        V(ISOSTAT)=SIM_ISO_NOT_AVAILABLE;

        if( transmitDone){

            if( !(V(ISOOFF))){
                simState=simRestart;
                transmitDone=0;
                simTick=sysTick();
            }
        }
        else if( tmsMutex_take( (void *)V(CH), 1)==pdPASS){

            msg[0]=0x62;
            msg[1]=0xDE;
            msg[2]=0xAD;
            msg[3]=0xBE;
            msg[4]=0x1F;

            canbusSend( (canBASE_t *)V(CH), simTxBox, msg, 5);
            simTick=sysTick();
            transmitDone=1;
            tmsMutex_give( (void *)V(CH));
        }
        break;
    }


    case simIsoMonitor:
    {
        if( tmsMutex_take( (void *)V(CH), 1)==pdPASS){

            if( transmitDone){

                if( canbusReceive( (canBASE_t *)V(CH), simRxBox, msg, &dlc)){
                    transmitDone=0;
                    V(NODEVICE)=0;

                    if( msg[0]==0xE0){
                        simMonitorNoResponse=0;
                        V(DEVICEERR)=0;
                        if( SIMSTATBIT_HE(msg[1])){
                            V(ISOSTAT)=SIM_ISO_NOT_AVAILABLE;
                            V(DEVICEERR)=1;
                            simState=simCheckError; //simIsoDelay1;
                        }
                        else if( SIMSTATBIT_NE(msg[1]) || SIMSTATBIT_HU(msg[1]) ){   //|| SIMSTATBIT_HU(msg[1])
                            simState=simIsoDelay1;
                        }
                        /*
                        else if( SIMSTATBIT_HU(msg[1]) && msg[4]>=10){
                            simState=simIsoDelay1;
                        }
                        */
                        else if( SIMSTATBIT_HV(msg[1])){       //////??????
                            simState=simSetVbatMax;
                        }
                        else{
                            V(LOWVOLTAGE)=( SIMSTATBIT_LV(msg[1]))?1:0;
                            uint16_t electricalIsolation= ((msg[2]<<8)&0xFF00) | (msg[3]&0x00FF);
                            V(OHMPERV)=electricalIsolation;
                            V(ISOSTAT)=SIMSTATBIT_IS(msg[1]);
                            simState=simIsoDelay1;
                        }
                    }
                    simTick=sysTick();
                }
                else if( isTimeout(simTick, 2000)){
                    transmitDone=0;
                    simState=simIsoDelay1;
                    simTick=sysTick();
                    if( ++simMonitorNoResponse>5){
                        simMonitorNoResponse=10;
                        V(ISOSTAT)=SIM_ISO_NOT_AVAILABLE;
                        V(NODEVICE)=1;
                    }
                }
            }
            else{
                msg[0]=0xE0;
                canbusSend( (canBASE_t *)V(CH), simTxBox, msg, 1);
                simTick=sysTick();
                transmitDone=1;
            }
            tmsMutex_give( (void *)V(CH));
        }
        break;
    }

    case simIsoDelay1:
    {
        if( V(ISOOFF)){
            simState=simExcitationOff;
            transmitDone=0;
            simTick=sysTick();
        }
        else if( isTimeout( simTick, 501)){
            simState=simIsoMonitorResistance;
            transmitDone=0;
            simTick=sysTick();
        }
        break;
    }

    case simIsoMonitorResistance:
    {
        if( tmsMutex_take( (void *)V(CH), 1)==pdPASS){

            if( transmitDone){

                if( canbusReceive( (canBASE_t *)V(CH), simRxBox, msg, &dlc)){
                    transmitDone=0;
                    V(NODEVICE)=0;
                    simMonitorNoResponse=0;
                    if( msg[0]==0xE1){
                        V(DEVICEERR)=0;
                        if( SIMSTATBIT_HE(msg[1])){
                            V(ISOSTAT)=SIM_ISO_NOT_AVAILABLE;
                            V(DEVICEERR)=1;
                            simState=simCheckError;//simCheckError;   simIsoDelay2
                        }
                        else if( SIMSTATBIT_NE(msg[1]) || SIMSTATBIT_HU(msg[1]) ){   //|| SIMSTATBIT_HU(msg[1])
                            simState=simIsoDelay2;
                        }
                        /*
                        else if( SIMSTATBIT_HU(msg[1]) && msg[4]>=10){
                            simState=simIsoDelay2;
                        }
                        */
                        else if( SIMSTATBIT_HV(msg[1])){         //////??????
                            simState=simSetVbatMax;
                        }
                        else{
                            V(LOWVOLTAGE)=( SIMSTATBIT_LV(msg[1]))?1:0;
                            uint16_t Rp= ((msg[2]<<8)&0xFF00) | (msg[3]&0x00FF);
                            uint16_t Rn= ((msg[5]<<8)&0xFF00) | (msg[6]&0x00FF);
                            V(ISORP)=Rp;
                            V(ISORN)=Rn;
                            simState=simIsoDelay2;
                        }
                    }
                    simTick=sysTick();
                }
                else if( isTimeout(simTick, 2000)){
                    transmitDone=0;
                    simState=simIsoDelay2;
                    simTick=sysTick();
                    if( ++simMonitorNoResponse>5){
                        simMonitorNoResponse=10;
                        V(ISOSTAT)=SIM_ISO_NOT_AVAILABLE;
                        V(NODEVICE)=1;
                    }
                }
            }
            else{
                msg[0]=0xE1;
                canbusSend( (canBASE_t *)V(CH), simTxBox, msg, 1);
                simTick=sysTick();
                transmitDone=1;
            }
            tmsMutex_give( (void *)V(CH));
        }
        break;
    }

    case simIsoDelay2:
    {
        if( V(ISOOFF)){
            simState=simExcitationOff;
            transmitDone=0;
            simTick=sysTick();
        }
        else if( isTimeout( simTick, 501)){
            simState=simIsoMonitor;
            transmitDone=0;
            simTick=sysTick();
        }
        break;
    }

    case simCheckError:
    {
        if( tmsMutex_take( (void *)V(CH), 1)==pdPASS){

            if( transmitDone){

                if( canbusReceive( (canBASE_t *)V(CH), simRxBox, msg, &dlc)){
                    transmitDone=0;
                    V(NODEVICE)=0;

                    if( msg[0]==0xE5){
                        simMonitorNoResponse=0;
                        V(DEVICEERR)=0;
                        if( SIMSTATBIT_HE(msg[1])){
                            V(ISOSTAT)=SIM_ISO_NOT_AVAILABLE;
                            V(DEVICEERR)=1;
                            V(ERRCODE)=msg[2];
                            simState=simRestart;
                        }
                    }
                    simTick=sysTick();
                }
                else if( isTimeout(simTick, 2000)){
                    transmitDone=0;
                    simState=simIsoDelay1;
                    simTick=sysTick();
                    if( ++simMonitorNoResponse>5){
                        simMonitorNoResponse=10;
                        V(ISOSTAT)=SIM_ISO_NOT_AVAILABLE;
                        V(NODEVICE)=1;
                    }
                }
            }
            else{
                msg[0]=0xE5;
                canbusSend( (canBASE_t *)V(CH), simTxBox, msg, 1);
                simTick=sysTick();
                transmitDone=1;
            }
            tmsMutex_give( (void *)V(CH));
        }
        break;
    }


    }

#endif
}

#endif
