#ifndef LC_PROT_LCFU___NTC__C
#define LC_PROT_LCFU___NTC__C

#include <lcfu___ntc.h>
#include <math.h>

#define V(VAR) (LC_this->LC_VD_##VAR)

#define STEINHART_COEFF_A  8.54942E-04
#define STEINHART_COEFF_B  2.57305E-04
#define STEINHART_COEFF_C  1.65368E-07

/*                            FunctionBlocks                   */
void  lcfu___NTC(LC_TD_FunctionBlock_NTC* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
	float rNTC=( V(RS)*V(VOLT)) / (V(VSUP)-V(VOLT));
	//V(TEMP)= ( V(BETA) / ( (V(BETA)/V(TNOM))+log((double)rNTC/(double)V(RNOM))) ) -  273.0;                                       // I.  method
	V(TEMP)=( 1/ ( STEINHART_COEFF_A + STEINHART_COEFF_B*log(rNTC) + STEINHART_COEFF_C*log(rNTC)*log(rNTC)*log(rNTC) ) )-273.0;   // II. method more accurate
}

#endif
