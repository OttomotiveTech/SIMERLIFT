#ifndef LC_PROT_LCFU___SAFETY_POWER__C
#define LC_PROT_LCFU___SAFETY_POWER__C

#include <lcfu___safety_power.h>

#include "TMS570.h"

#ifdef BUILDPLATFORM
#ifdef TMS_FREERTOS
#include "FreeRTOS.h"
#include "os_task.h"
#include "os_semphr.h"
#endif

#ifdef SAFETY_POWER

#define V(VAR) (LC_this->LC_VD_##VAR)

#include "config.h"
#include "tps65381.h"
#include "reg_het.h"

typedef enum
{
    WD_WAIT_FOR_DIAGNOSTICS,
    WD_INIT_inDIAGNOSTICS,
    WD_WINDOW1,
    WD_WINDOW2
}safetyPowerState_t;

const uint8_t tokenAnswers[16][4]={
                             {0xFF, 0x0F, 0xF0, 0x00},
                             {0xB0, 0x40, 0xBF, 0x4F},
                             {0xE9, 0x19, 0xE6, 0x16},
                             {0xA6, 0x56, 0xA9, 0x59},
                             {0x75, 0x85, 0x7A, 0x8A},
                             {0x3A, 0xCA, 0x35, 0xC5},
                             {0x63, 0x93, 0x6C, 0x9C},
                             {0x2C, 0xDC, 0x23, 0xD3},
                             {0xD2, 0x22, 0xDD, 0x2D},
                             {0x9D, 0x6D, 0x92, 0x62},
                             {0xC4, 0x34, 0xCB, 0x3B},
                             {0x8B, 0x7B, 0x84, 0x74},
                             {0x58, 0xA8, 0x57, 0xA7},
                             {0x17, 0xE7, 0x18, 0xE8},
                             {0x4E, 0xBE, 0x41, 0xB1},
                             {0x01, 0xF1, 0x0E, 0xFE}
};

safetyPowerState_t safetyPowerState=WD_WAIT_FOR_DIAGNOSTICS;
uint32_t safetyTick;
uint8_t currentTokenValue;
uint8_t tpsstate;

uint32_t testTick;

#endif

#endif

/*                            FunctionBlocks                   */
void  lcfu___SAFETY_POWER(LC_TD_FunctionBlock_SAFETY_POWER* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM
#ifdef SAFETY_POWER

    if( isTimeout( testTick, 250)){
        testTick=sysTick();
        if( !(tps65381_readWrite( TPS_RD_DEV_STAT, 0)&IGN) && V(SLEEP_RDY)){
            // good bye!!
            tps65381_readWrite( TPS_WR_SENS_CTRL, tps65381_readWrite( TPS_RD_SENS_CTRL, 0) & (~VSOUT1_EN));
        }
    }

    switch( safetyPowerState)
    {
    case WD_WAIT_FOR_DIAGNOSTICS:
        tpsstate= tps65381_readWrite( TPS_RD_SAFETY_STAT_5, 0);
        if( tpsstate==TPS65381_DIAGNOSTIC){
            safetyPowerState=WD_INIT_inDIAGNOSTICS;
        }
        else if( tpsstate==TPS65381_ACTIVE){
            safetyPowerState=WD_WINDOW1;
        }
        else if( isTimeout( safetyTick, 20)){
            safetyPowerState=WD_INIT_inDIAGNOSTICS;
        }

        if( safetyPowerState!=WD_WAIT_FOR_DIAGNOSTICS){
            tps65381_readWrite( TPS_WR_SENS_CTRL, tps65381_readWrite( TPS_RD_SENS_CTRL, 0) | VSOUT1_EN);
        }

        break;
    case WD_INIT_inDIAGNOSTICS:

        //delayMs(20);
        //while( tps65381_readWrite( TPS_RD_SAFETY_STAT_5, 0)!=TPS65381_DIAGNOSTIC); // wait for diagnostics state
        //tps65381_readWrite( TPS_WR_SAFETY_CHECK_CTRL, tps65381_readWrite( TPS_RD_SAFETY_CHECK_CTRL, 0) | DIAG_EXIT_MASK);  // disable exiting diagnostics
        tps65381_readWrite( TPS_SW_UNLOCK, 0x55);   // unlock write access
        tps65381_readWrite( TPS_WR_SAFETY_FUNC_CFG, tps65381_readWrite( TPS_RD_SAFETY_FUNC_CFG, 0) | WD_CFG );    // select Q&A for WD      |IGN_PWRL
        tps65381_readWrite( TPS_WR_WD_WIN1_CFG, 0x7F);  // set window time intervals    //64ms for WD1
        tps65381_readWrite( TPS_WR_WD_WIN2_CFG, 0x1F);                                  //16ms for WD2
        safetyTick=sysTick(); //synch the WD
        tps65381_readWrite( TPS_WR_SAFETY_ERR_STAT, 0);  // clear errors for transition to active state
        tps65381_readWrite( TPS_WR_SAFETY_CHECK_CTRL, tps65381_readWrite( TPS_RD_SAFETY_CHECK_CTRL, 0) & (~DIAG_EXIT_MASK));  //enable exiting diagnostics
        //tps65381_readWrite( TPS_WR_SENS_CTRL, tps65381_readWrite( TPS_RD_SENS_CTRL, 0) | VSOUT1_EN);      //enable VSout1 for sensors etc.
        tps65381_readWrite( TPS_SW_LOCK, 0xAA);   // lock write access
        tps65381_readWrite( TPS_WR_SAFETY_CHECK_CTRL, tps65381_readWrite( TPS_RD_SAFETY_CHECK_CTRL, 0) | DIAG_EXIT);   // exit diagnostics
        //while( tps65381_readWrite( TPS_RD_SAFETY_STAT_5, 0)!=TPS65381_ACTIVE);  //wait for active state

        safetyPowerState=WD_WINDOW1;
        break;

    case WD_WINDOW1:
        if( isTimeout( safetyTick, 5)){
            currentTokenValue=tps65381_readWrite( TPS_RD_WD_TOKEN_VALUE, 0)&0x0F;
            tps65381_readWrite( TPS_WR_WD_ANSWER, tokenAnswers[currentTokenValue][0]); // ans3
            tps65381_readWrite( TPS_WR_WD_ANSWER, tokenAnswers[currentTokenValue][1]); // ans2
            tps65381_readWrite( TPS_WR_WD_ANSWER, tokenAnswers[currentTokenValue][2]); // ans1

            safetyPowerState=WD_WINDOW2;
        }
        break;

    case WD_WINDOW2:
        if( isTimeout( safetyTick, 75)){

            tps65381_readWrite( TPS_WR_WD_ANSWER, tokenAnswers[currentTokenValue][3]); // ans0

            if( !(tps65381_readWrite( TPS_RD_SAFETY_CHECK_CTRL, 0)&ENABLE_DRV) ){
                if( (tps65381_readWrite( TPS_RD_SAFETY_STAT_2, 0)&0x07) < 5 ){
                    tps65381_readWrite( TPS_WR_SAFETY_CHECK_CTRL, tps65381_readWrite( TPS_RD_SAFETY_CHECK_CTRL, 0) | ENABLE_DRV);
                }
            }
            safetyTick=sysTick();

            safetyPowerState=WD_WINDOW1;
        }
        break;

    default:break;
    }

#endif
#endif
}

#endif



///////////IN DIAGNOSTICS
/*

        safetfuncreg=tps65381_readWrite( TPS_RD_DEV_CFG2, 0);
        tps65381_readWrite( TPS_WR_DEV_CFG2, tps65381_readWrite( TPS_RD_DEV_CFG2, 0)| POST_RUN_RST);
        safetfuncreg=tps65381_readWrite( TPS_RD_DEV_CFG2, 0);





// staying in diagnostics
tpsReg=tps65381_readWrite( TPS_RD_SAFETY_CHECK_CTRL, 0);
tps65381_readWrite( TPS_WR_SAFETY_CHECK_CTRL, tpsReg | DIAG_EXIT_MASK);
tpsReg=tps65381_readWrite( TPS_RD_SAFETY_CHECK_CTRL, 0);

//unlock write
tps65381_readWrite( TPS_SW_UNLOCK, 0x55);

// select QA for WD
tpsReg=tps65381_readWrite( TPS_RD_SAFETY_FUNC_CFG, 0);
tps65381_readWrite( TPS_WR_SAFETY_FUNC_CFG, tpsReg | WD_CFG);

// set window time intervals
tps65381_readWrite( TPS_WR_WD_WIN1_CFG, 0x7F);   //64ms
tps65381_readWrite( TPS_WR_WD_WIN2_CFG, 0x1F);   //16ms


while(1)
{
    //read token value
    tokenValue=tps65381_readWrite( TPS_RD_WD_TOKEN_VALUE, 0);
    tokenValue= tokenValue & 0x0F;
    tps65381_readWrite( TPS_WR_WD_ANSWER, tokenAnswers[tokenValue][0]);
    tps65381_readWrite( TPS_WR_WD_ANSWER, tokenAnswers[tokenValue][1]);
    tps65381_readWrite( TPS_WR_WD_ANSWER, tokenAnswers[tokenValue][2]);

}


// clear ERROR_PIN_FAIL and WD_FAIL
tps65381_readWrite( TPS_WR_SAFETY_ERR_STAT, 0);

//enable exiting diagnostics
tpsReg=tps65381_readWrite( TPS_RD_SAFETY_CHECK_CTRL, 0);
tps65381_readWrite( TPS_WR_SAFETY_CHECK_CTRL, tpsReg & (~DIAG_EXIT_MASK));

// exit diagnostics
tpsReg=tps65381_readWrite( TPS_RD_SAFETY_CHECK_CTRL, 0);
tps65381_readWrite( TPS_WR_SAFETY_CHECK_CTRL, tpsReg | DIAG_EXIT);

deviceState=tps65381_readWrite( TPS_RD_SAFETY_STAT_5, 0);
__nop();
while( tps65381_readWrite( TPS_RD_SAFETY_STAT_5, 0)!=TPS65381_ACTIVE);

tpsReg=tps65381_readWrite( TPS_RD_SAFETY_CHECK_CTRL, 0);
tps65381_readWrite( TPS_WR_SAFETY_CHECK_CTRL, tpsReg | ENABLE_DRV);

tpsReg=tps65381_readWrite( TPS_RD_SAFETY_STAT_2, 0);
if( (tpsReg&0x07) >=5){
    hetPORT1->DIR |=0x1<<28;
        gioSetBit( hetPORT1, 28, 0);
}






    switch( safetyPowerState)
    {
    case 0:
        // assuming the device is in diagnostics
        tps65381_readWrite( TPS_SW_UNLOCK, 0x55);

        // select QA for WD
        tpsReg=tps65381_readWrite( TPS_RD_SAFETY_FUNC_CFG, 0);
        tps65381_readWrite( TPS_WR_SAFETY_FUNC_CFG, tpsReg | WD_CFG);

        // set window time intervals
        tps65381_readWrite( TPS_WR_WD_WIN1_CFG, 0x7F);   //64ms for WD1
        tps65381_readWrite( TPS_WR_WD_WIN2_CFG, 0x1F);   //16ms for WD2
        safetyTick=sysTick();
        delayMs(5);
        //read token
        lastTokenValue=tps65381_readWrite( TPS_RD_WD_TOKEN_VALUE, 0);
        lastTokenValue&=0x0F;
        //write ans3 ans2 an1
        tps65381_readWrite( TPS_WR_WD_ANSWER, tokenAnswers[lastTokenValue][0]);
        tps65381_readWrite( TPS_WR_WD_ANSWER, tokenAnswers[lastTokenValue][1]);
        tps65381_readWrite( TPS_WR_WD_ANSWER, tokenAnswers[lastTokenValue][2]);
        safetyPowerState=1;
        break;

    case 1:
        // WD1 65.835... 73.3425
        // WD2 16.72 ....18.48
        // SUM  82.555          91.8225
        if( isTimeout( safetyTick, 78)){

            // write last answer
            tps65381_readWrite( TPS_WR_WD_ANSWER, tokenAnswers[lastTokenValue][3]);

            // clear ERROR_PIN_FAIL and WD_FAIL
            tps65381_readWrite( TPS_WR_SAFETY_ERR_STAT, 0);
            //tpsReg=tps65381_readWrite( TPS_RD_SAFETY_ERR_STAT, 0);
            //tps65381_readWrite( TPS_WR_SAFETY_ERR_STAT, tpsReg&(~(ERROR_PIN_FAIL|WD_FAIL)));

            //enable exiting diagnostics
            tpsReg=tps65381_readWrite( TPS_RD_SAFETY_CHECK_CTRL, 0);
            tps65381_readWrite( TPS_WR_SAFETY_CHECK_CTRL, tpsReg & (~DIAG_EXIT_MASK));

            //enable VSout1
            tpsReg=tps65381_readWrite( TPS_RD_SENS_CTRL, 0);
            tps65381_readWrite( TPS_WR_SENS_CTRL, tpsReg | VSOUT1_EN);

            // exit diagnostics
            tpsReg=tps65381_readWrite( TPS_RD_SAFETY_CHECK_CTRL, 0);
            tps65381_readWrite( TPS_WR_SAFETY_CHECK_CTRL, tpsReg | DIAG_EXIT);
            while( tps65381_readWrite( TPS_RD_SAFETY_STAT_5, 0)!=TPS65381_ACTIVE);
            safetyTick=sysTick();
            safetyPowerState=2;
        }
        break;

    case 2:
        //check WD fail count
        tpsReg=tps65381_readWrite( TPS_RD_SAFETY_STAT_2, 0);
        deviceState=tps65381_readWrite( TPS_RD_SAFETY_STAT_5, 0);

        if( (tpsReg&0x07) < 5 && deviceState==TPS65381_ACTIVE){
            //hetPORT1->DIR|=BIT(28);
            //hetPORT1->DOUT &=~BIT(28);
            tpsReg=tps65381_readWrite( TPS_RD_SAFETY_CHECK_CTRL, 0);
            if( !(tpsReg&ENABLE_DRV)){
                tps65381_readWrite( TPS_WR_SAFETY_CHECK_CTRL, tpsReg | ENABLE_DRV);
            }

            //else{
                // endrv_err
                //tpsReg=tps65381_readWrite( TPS_RD_SAFETY_STAT_4, 0);
                //V(DRV_STAT)= (tpsReg&BIT(1))?0:1;
            //}

        }

        //else{
            //hetPORT1->DIR|=BIT(28);
            //hetPORT1->DOUT|=BIT(28);
            //while(1);
        //}

        safetyTick=sysTick();
        newTokenTick=sysTick();
        safetyPowerState=3;
        break;

    case 3:
        if( isTimeout( safetyTick, 2)){
            uint8_t tokenValue;
            tokenValue=tps65381_readWrite( TPS_RD_WD_TOKEN_VALUE, 0);
            tokenValue&=0x0F;

            //if( tokenValue!=lastTokenValue || isTimeout( newTokenTick, 16)){
                //lastTokenValue=tokenValue;
                //safetyPowerState=4;
            //}

            lastTokenValue=tokenValue;
            safetyTick=sysTick();
            safetyPowerState=4;
        }
        break;

    case 4:
        if( isTimeout( safetyTick, 5)){
            tps65381_readWrite( TPS_WR_WD_ANSWER, tokenAnswers[lastTokenValue][0]); // ans3
            tps65381_readWrite( TPS_WR_WD_ANSWER, tokenAnswers[lastTokenValue][1]); // ans2
            tps65381_readWrite( TPS_WR_WD_ANSWER, tokenAnswers[lastTokenValue][2]); // ans1
            safetyPowerState=5;
        }
        break;
    case 5:
        if( isTimeout( safetyTick, 75)){
            tps65381_readWrite( TPS_WR_WD_ANSWER, tokenAnswers[lastTokenValue][3]); // ans0
            safetyTick=sysTick();
            safetyPowerState=2;
        }
        break;

    default:break;
    }




*/
