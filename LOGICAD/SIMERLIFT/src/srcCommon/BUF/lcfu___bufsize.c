#ifndef LC_PROT_LCFU___BUFSIZE__C
#define LC_PROT_LCFU___BUFSIZE__C

#include <lcfu___bufsize.h>

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___BUFSIZE(LC_TD_FunctionBlock_BUFSIZE* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
	if( V(FIN)>V(START)){
		V(SIZE)=V(FIN)-V(START);
	}
	else{
		V(SIZE)=0;
	}

}

#endif
