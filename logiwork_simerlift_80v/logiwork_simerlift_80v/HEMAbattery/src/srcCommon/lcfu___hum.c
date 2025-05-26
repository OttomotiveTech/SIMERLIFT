#ifndef LC_PROT_LCFU___HUM__C
#define LC_PROT_LCFU___HUM__C

#include <lcfu___hum.h>

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___HUM(LC_TD_FunctionBlock_HUM* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
	//double temp=(double)V(TEMP);
	//double volt=(double)V(VOLT);
	V(HUM)= (((-0.00000000192)*V(VOLT)*V(VOLT)*V(VOLT))+(0.0000144*V(VOLT)*V(VOLT))+(0.0034*V(VOLT))-12.4)/((1)+(V(TEMP)-23)*(0.0024));
}

#endif
