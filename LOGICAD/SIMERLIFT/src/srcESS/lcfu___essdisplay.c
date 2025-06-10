#ifndef LC_PROT_LCFU___ESSDISPLAY__C
#define LC_PROT_LCFU___ESSDISPLAY__C

#include <lcfu___essdisplay.h>
#include "TMSboard.h"

#ifdef BUILDPLATFORM

#ifdef TMS_FREERTOS
#include "FreeRTOS.h"
#include "os_task.h"
#include "tmsOsPeripheral.h"
#include "os_semphr.h"
#include "config.h"
uint32_t ESSdispTick;
uint32_t essdspcounter=0;
#define V(VAR) (LC_this->LC_VD_##VAR)
#endif
#endif

/*                            FunctionBlocks                   */
void  lcfu___ESSDISPLAY(LC_TD_FunctionBlock_ESSDISPLAY* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM
    int num;

    if( isTimeout( ESSdispTick, 120)){

        ESSdispTick=sysTick();

        switch(essdspcounter)
        {
        case 0:
            num=V(SOC);
            eprintf("main.x0.val=%dÿÿÿ",num);
            break;
        case 1:
            num=V(VOLT)*10;
            eprintf("main.voltagemain.val=%dÿÿÿ",num);
            break;
        case 2:
            num=V(AMPR)*10;
            eprintf ("main.currentmain.val=%dÿÿÿ",num);
            break;
        case 3:
            num=V(STATE);
            eprintf ("main.p1.val=%dÿÿÿ",num);
            break;
        case 4:
            num=V(INSTALLEDCAP)*1000;
            eprintf ("main2.energyCap.val=%dÿÿÿ",num);
            break;
        case 5:
            num=V(REMAININGCAP)*1000;
            eprintf ("main2.energyRem.val=%dÿÿÿ",num);
            break;
        case 6:
            num=V(DUTYCYCLE);
            eprintf ("main2.cycle.val=%dÿÿÿ",num);
            break;
        case 7:
            num=V(MAXT);
            eprintf ("main.maxmain.val=%dÿÿÿ", num);
            break;
        case 8:
            num=V(MINT);
            eprintf ("main.minmain.val=%dÿÿÿ",num);
            break;
        case 9:
            num=V(MAXV);
            eprintf ("main2.maxVol.val=%dÿÿÿ",num);
            break;

        case 10:
            num=V(MINV);
            eprintf ("main2.minVol.val=%dÿÿÿ",num);
            break;

        case 11:
        {
            uint32_t num1=(uint32_t)(V(ALARMS)>>32);
            uint32_t num2=(uint32_t)V(ALARMS);
            eprintf ("main2.alarm.txt=\"%.8X%.8X\"ÿÿÿ",num1,num2);
            break;
        }
        case 12:
            num=V(EMERGSTAT);
            eprintf ("main.emg.val=%dÿÿÿ",num);
            break;
        case 13:
            num=V(WATT)/100;
            eprintf ("main.instantPower.val=%dÿÿÿ",num);
            break;

        default:
            break;
        }

        essdspcounter++;
        if(essdspcounter>13){
            essdspcounter=0;
        }
    }
#endif
}

#endif


