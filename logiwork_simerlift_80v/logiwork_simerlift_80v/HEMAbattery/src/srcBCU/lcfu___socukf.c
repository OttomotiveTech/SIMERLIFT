#ifndef LC_PROT_LCFU___SOCUKF__C
#define LC_PROT_LCFU___SOCUKF__C

#include <lcfu___socukf.h>
#include <RTAPITimer.h>
#include <LC3CGEdgeDetect.h>
#include "TMSboard.h"

#ifdef BUILDPLATFORM

#ifdef TMS_FREERTOS
#include "FreeRTOS.h"
#include "os_task.h"
#include "tmsOsPeripheral.h"
#include "os_semphr.h"
extern SemaphoreHandle_t flashMutex;
#include "flash_box_deliver.h"
#include "flash_task.h"
extern QueueHandle_t flashTaskQueueMailBox;
extern QueueHandle_t flashTaskResponse;
#endif

#include "memOpr.h"

#include "UKF.h"
#include "UKF_private.h"

#ifdef S25FL_RDY
#define NVflash_read(a,b,c)     S25FL_readMem(a,b,c)
#define NVflash_write(a,b,c)     S25FL_progMem(a,b,c)
#elif defined(IS25_RDY)
#define NVflash_read(a,b,c)    IS25_readMem(a,b,c)
#define NVflash_write(a,b,c)   IS25_progMem_reduced(a,b,c)
#endif

#define SOC_STATE_MEM_ADDR 0x00001000
#define SOC_STATE_MEM_SIGN 0xABCDEF9A

typedef struct
{
    uint32_t sign;
    DW_UKF_T ukfdw;
}ukfsysstate_mem;

ukfsysstate_mem ukfmem;
//ukfsysstate_mem ukfmemsaved;

extern ExtU_UKF_T UKF_U;
extern ExtY_UKF_T UKF_Y;
extern DW_UKF_T UKF_DW;

uint32_t tickStart;
uint32_t sampleTick;
uint32_t memTick;

float currentSum=0;
float currentAvg=0;
float voltageSum=0;
float voltageAvg=0;

int sampleCount=0;

uint32_t memsel=0;

int initialized=0;
int memTry=0;
int memOprPending=0;
uint8_t flashServiceID=0;
int checkFlashResponse=0;

#define NUM_OF_SOCocv_COLUMNS 14

float socOcvTab[][NUM_OF_SOCocv_COLUMNS]={
                                          {3.336, 3.413, 3.451, 3.535, 3.584, 3.615, 3.657, 3.742, 3.833, 3.933, 4.041, 4.102, 4.128, 4.175},
                                          {     0,    5,    10,    20,    30,    40,    50,    60,    70,    80,    90,    95,    97,   100}
};

#define inVoltRange(x,y,a)  (  ( ((a)>=(x)) && ((a)<=(y)) )  ||  ( ((a)<=(x) && (a)>=(y)) )  )
#define interpolationVolt(col1, col2, val1, val2, colx)        ( ( (val2)-(val1) ) * ( ((colx)-(col1)) / ((col2)-(col1)) ) + (val1) );

float socOcvInterpolation(float volt)
{
    int i;
    float socOcv=0;

    if( volt>=socOcvTab[0][NUM_OF_SOCocv_COLUMNS-1]){
        socOcv=100;
    }
    else{
        for(i=0; i<(NUM_OF_SOCocv_COLUMNS-1); i++)
        {
            if( inVoltRange( socOcvTab[0][i], socOcvTab[0][i+1], volt)){
                socOcv=interpolationVolt( socOcvTab[0][i], socOcvTab[0][i+1], socOcvTab[1][i], socOcvTab[1][i+1], volt);
                break;
            }
        }
    }

    return socOcv;
}
#endif

#define SOC_UKF_SAMPLE_PERms   25
#define SOC_UKF_PERms          1000
#define SOC_UKF_MEM_PERms      20000

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___SOCUKF(LC_TD_FunctionBlock_SOCUKF* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM
/*
    LC3_MSI_EDGE( V(WMEM), V(WMEM_M));

    if(V(WMEM)){
        memTick=sysTick();
        ukfmem.ukfdw=UKF_DW;
        memOprPending=1;
    }
*/
    if( !initialized){
#ifdef TMS_FREERTOS
        if( xSemaphoreTake( flashMutex, 0)==pdPASS)
#endif
        {
            NVflash_read( SOC_STATE_MEM_ADDR, (uint8_t *)&ukfmem, sizeof(ukfsysstate_mem));

            if( ukfmem.sign!=SOC_STATE_MEM_SIGN){
                //try the second sector
                //delayMs(10);
                memsel=0;
                NVflash_read( SOC_STATE_MEM_ADDR+0x00001000, (uint8_t *)&ukfmem, sizeof(ukfsysstate_mem));
            }
            else{
                memsel=1;
            }
#ifdef TMS_FREERTOS
            xSemaphoreGive( flashMutex);

            if( flashServiceID==0){
                flashServiceID=pullBoxFromFlash();
                if( flashServiceID==0){
                    initialized=0;
                }
            }
#endif
            if( ukfmem.sign==SOC_STATE_MEM_SIGN){
                UKF_DW=ukfmem.ukfdw;
                initialized=1;
            }
            else if( memTry>8){

                if(V(ENB) &&  (V(AMP)<(float)500.0 && V(AMP)>(float)-500.0)  &&  (V(VOLT)<(float)4.4 && V(VOLT)>(float)2.6)  &&  (V(TEMP)<(float)80.0 && V(TEMP)>(float)-30.0) ){
                    /* states (dwork) */
                    (void) memset((void *)&UKF_DW, 0, sizeof(DW_UKF_T));
                    /* external inputs */
                    (void)memset(&UKF_U, 0, sizeof(ExtU_UKF_T));
                    /* external outputs */
                    (void) memset(&UKF_Y.x[0], 0, 4U*sizeof(real_T));
                    memcpy(&UKF_DW.P[0], &rtCP_DataStoreMemoryP_InitialVa[0], sizeof(real_T) << 4U);

                    UKF_DW.x[0] = socOcvInterpolation( V(VOLT)) / 100.0;
                    UKF_DW.x[1] = 0.0;
                    UKF_DW.x[2] = 0.0;
                    UKF_DW.x[3] = 0.0;

                    ukfmem.sign=SOC_STATE_MEM_SIGN;
                    ukfmem.ukfdw=UKF_DW;

#ifdef TMS_FREERTOS
                    if( flashServiceID!=0){
                        flashConfig_t flashTxMessage = {0};
                        //ukfmemsaved=ukfmem;
                        flashTxMessage.buffer=(uint8_t *)&ukfmem;//ukfmemsaved;
                        flashTxMessage.id = flashServiceID;
                        flashTxMessage.address = SOC_STATE_MEM_ADDR;
                        flashTxMessage.dataSize = sizeof(ukfsysstate_mem);

                        if( xQueueSend( flashTaskQueueMailBox, &flashTxMessage, pdMS_TO_TICKS(2)) == pdPASS){
                            checkFlashResponse=1;
                            initialized=1;
                        }
                        else{
                            initialized=0;
                        }
                    }
#else
                    S25FL_progMem( SOC_STATE_MEM_ADDR, (uint8_t *)&ukfmem, sizeof(ukfsysstate_mem));
                    initialized=1;
#endif
                }
            }
            else{
                initialized=0;
                ++memTry;
            }

            if( initialized){
                memTry=0;

                float socinit=(float)UKF_DW.x[0]*100;
                if( socinit<0){
                    socinit=0;
                }
                else if( socinit>100){
                    socinit=100;
                }
                V(SOC)=socinit;

                currentSum=0;
                currentAvg=0;
                voltageSum=0;
                voltageAvg=0;
                tickStart=sysTick();
                sampleTick=tickStart;
                memTick=tickStart;
            }
        }
    }
    else{

        if( isTimeout( sampleTick, SOC_UKF_SAMPLE_PERms)){
            sampleTick=sysTick();
            voltageSum+=V(VOLT);
            currentSum+=V(AMP);
            ++sampleCount;
        }

        if( isTimeout( tickStart, SOC_UKF_PERms)){

            tickStart=sysTick();
            sampleTick=sysTick();

            if( sampleCount){
                currentAvg=currentSum/(float)sampleCount;
                voltageAvg=voltageSum/(float)sampleCount;
                sampleCount=0;
                currentSum=0;
                voltageSum=0;
            }

            UKF_U.I= (double)currentAvg;
            UKF_U.V= (double)voltageAvg;
            UKF_U.T= (double)V(TEMP)+273.15;

            if( V(ENB) &&  (UKF_U.I<500.0 && UKF_U.I>-500.0)  &&  (UKF_U.V<4.4 && UKF_U.V>2.6)  &&  (UKF_U.T<353.15 && UKF_U.T>243.15) ){
                UKF_step();
            }
            else{
                __nop();
            }

            float soc=(float)UKF_DW.x[0]*100;

            if( soc<0){
                soc=0;
            }
            else if( soc>100){
                soc=100;
            }

            V(SOC)=soc;

            if( isTimeout( memTick, SOC_UKF_MEM_PERms) && !checkFlashResponse){
                memTick=sysTick();
                ukfmem.ukfdw=UKF_DW;
                memOprPending=1;
            }

        }

        if( checkFlashResponse){
#ifdef TMS_FREERTOS
            flashResponse_t fResponseRxMessage = {0};

            if( xQueuePeek( flashTaskResponse, &fResponseRxMessage, 0) == pdPASS)
            {
                if(fResponseRxMessage.rId == flashServiceID)
                {
                    if( xQueueReceive(flashTaskResponse, &fResponseRxMessage, 0)==pdPASS){
                        checkFlashResponse=0;
                    }
                }
            }
#endif
        }
        else if( memOprPending){
#ifdef TMS_FREERTOS
            flashConfig_t flashTxMessage = {0};

            //ukfmemsaved=ukfmem;
            flashTxMessage.buffer=(uint8_t *)&ukfmem;  //ukfmemsaved
            flashTxMessage.id = flashServiceID;
            flashTxMessage.address = SOC_STATE_MEM_ADDR+memsel*0x00001000;
            flashTxMessage.dataSize = sizeof(ukfsysstate_mem);

            if( xQueueSend( flashTaskQueueMailBox, &flashTxMessage, pdMS_TO_TICKS(2)) == pdPASS){
                checkFlashResponse=1;
                memOprPending=0;
            }

            memsel=memsel>0?0:1;
#else
            S25FL_progMem( SOC_STATE_MEM_ADDR, (uint8_t *)&ukfmem, sizeof(ukfsysstate_mem));
            memOprPending=0;
#endif
        }
    }
#endif
}

#endif
