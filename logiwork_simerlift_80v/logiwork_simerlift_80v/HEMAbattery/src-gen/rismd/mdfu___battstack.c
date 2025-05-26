#include <RISMD.h>
#include <lcfu___battstack.h>

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_BATTSTACK_ALLTRIGCOUNT[] = "ALLtrigCount";
static RISMDStdVariable const lcmd_var_BATTSTACK_ALLTRIGCOUNT =
INIT_RISMDStdVariable(lcmd_var_name_BATTSTACK_ALLTRIGCOUNT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_ALLTRIGCOUNT));

static char const lcmd_var_name_BATTSTACK_AUXTRIGCOUNT[] = "AUXtrigCount";
static RISMDStdVariable const lcmd_var_BATTSTACK_AUXTRIGCOUNT =
INIT_RISMDStdVariable(lcmd_var_name_BATTSTACK_AUXTRIGCOUNT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_AUXTRIGCOUNT));

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_BATTSTACK_BALENB[] = "BALENB";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_BALENB =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_BALENB, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_BALENB), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_BATTSTACK_BALREG[] = "BALREG";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_BALREG =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_BALREG, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_BALREG), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BATTSTACK_BALV[] = "BALV";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_BALV =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_BALV, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_BALV), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACK_BAUD[] = "BAUD";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_BAUD =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_BAUD, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_BAUD), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_BATTSTACK_BRD[] = "BRD";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_BRD =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_BRD, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_BRD), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACK_CELL[] = "CELL";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_CELL =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_CELL, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_CELL), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDDerivedType const lcmd_type_PLCHANNEL;
static char const lcmd_var_name_BATTSTACK_CH[] = "CH";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_CH, &lcmd_type_PLCHANNEL, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_CH), RISMD_VARIABLE_SECTION_INPUT);

#include <lcdt___plchannel.h>
RISMDArrayType const lcmd_type_BATTSTACK_CHSEL_ARR = INIT_RISMDArrayType(0,15,sizeof(LC_TD_DataType_PLCHANNEL),&lcmd_type_PLCHANNEL);
static char const lcmd_var_name_BATTSTACK_CHSEL[] = "CHSEL";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_CHSEL =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_CHSEL, &lcmd_type_BATTSTACK_CHSEL_ARR, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_CHSEL), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACK_ENB[] = "ENB";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_ENB =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_ENB, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_ENB), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACK_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDDerivedType const lcmd_type_BATTSTACKERR;
static char const lcmd_var_name_BATTSTACK_ERR[] = "ERR";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_ERR =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_ERR, &lcmd_type_BATTSTACKERR, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_ERR), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDDerivedType const lcmd_type_BATTSTACKFAULT;
static char const lcmd_var_name_BATTSTACK_FAULT[] = "FAULT";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_FAULT =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_FAULT, &lcmd_type_BATTSTACKFAULT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_FAULT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BATTSTACK_MAXCELLBRD[] = "MAXCELLBRD";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_MAXCELLBRD =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_MAXCELLBRD, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_MAXCELLBRD), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BATTSTACK_MAXCELLNUM[] = "MAXCELLNUM";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_MAXCELLNUM =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_MAXCELLNUM, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_MAXCELLNUM), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_BATTSTACK_MAXTEMP[] = "MAXTEMP";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_MAXTEMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_MAXTEMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_MAXTEMP), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BATTSTACK_MAXTEMPBRD[] = "MAXTEMPBRD";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_MAXTEMPBRD =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_MAXTEMPBRD, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_MAXTEMPBRD), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BATTSTACK_MAXTEMPCELL[] = "MAXTEMPCELL";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_MAXTEMPCELL =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_MAXTEMPCELL, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_MAXTEMPCELL), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BATTSTACK_MINCELLBRD[] = "MINCELLBRD";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_MINCELLBRD =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_MINCELLBRD, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_MINCELLBRD), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BATTSTACK_MINCELLNUM[] = "MINCELLNUM";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_MINCELLNUM =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_MINCELLNUM, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_MINCELLNUM), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BATTSTACK_MINTEMP[] = "MINTEMP";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_MINTEMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_MINTEMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_MINTEMP), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BATTSTACK_MINTEMPBRD[] = "MINTEMPBRD";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_MINTEMPBRD =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_MINTEMPBRD, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_MINTEMPBRD), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BATTSTACK_MINTEMPCELL[] = "MINTEMPCELL";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_MINTEMPCELL =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_MINTEMPCELL, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_MINTEMPCELL), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BATTSTACK_M_ALL_R[] = "M_ALL_R";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_M_ALL_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_M_ALL_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_M_ALL_R), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACK_M_ALL_R_M[] = "M_ALL_R_M";
static RISMDStdVariable const lcmd_var_BATTSTACK_M_ALL_R_M =
INIT_RISMDStdVariable(lcmd_var_name_BATTSTACK_M_ALL_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_M_ALL_R_M));

static char const lcmd_var_name_BATTSTACK_M_AUX_R[] = "M_AUX_R";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_M_AUX_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_M_AUX_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_M_AUX_R), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACK_M_AUX_R_M[] = "M_AUX_R_M";
static RISMDStdVariable const lcmd_var_BATTSTACK_M_AUX_R_M =
INIT_RISMDStdVariable(lcmd_var_name_BATTSTACK_M_AUX_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_M_AUX_R_M));

static char const lcmd_var_name_BATTSTACK_NBOARDS[] = "NBOARDS";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_NBOARDS =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_NBOARDS, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_NBOARDS), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACK_NTCBETA[] = "NTCBETA";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_NTCBETA =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_NTCBETA, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_NTCBETA), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACK_NTCNOMR_OHM[] = "NTCNOMR_OHM";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_NTCNOMR_OHM =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_NTCNOMR_OHM, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_NTCNOMR_OHM), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACK_NTCNOMT_KLV[] = "NTCNOMT_KLV";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_NTCNOMT_KLV =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_NTCNOMT_KLV, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_NTCNOMT_KLV), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACK_N_BRD[] = "N_BRD";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_N_BRD =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_N_BRD, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_N_BRD), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDArrayType const lcmd_type_BATTSTACK_N_CELLS_ARR = INIT_RISMDArrayType(0,15,sizeof(LC_TD_USINT),&risMdType_USINT);
static char const lcmd_var_name_BATTSTACK_N_CELLS[] = "N_CELLS";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_N_CELLS =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_N_CELLS, &lcmd_type_BATTSTACK_N_CELLS_ARR, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_N_CELLS), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACK_OVTHRES[] = "OVTHRES";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_OVTHRES =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_OVTHRES, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_OVTHRES), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACK_TEMPCELL[] = "TEMPCELL";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_TEMPCELL =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_TEMPCELL, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_TEMPCELL), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDArrayType const lcmd_type_BATTSTACK_T_CELLS_ARR = INIT_RISMDArrayType(0,15,sizeof(LC_TD_USINT),&risMdType_USINT);
static char const lcmd_var_name_BATTSTACK_T_CELLS[] = "T_CELLS";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_T_CELLS =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_T_CELLS, &lcmd_type_BATTSTACK_T_CELLS_ARR, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_T_CELLS), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACK_UVTHRES[] = "UVTHRES";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_UVTHRES =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_UVTHRES, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_UVTHRES), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACK_VAV[] = "VAV";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_VAV =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_VAV, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_VAV), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BATTSTACK_VCELL[] = "VCELL";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_VCELL =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_VCELL, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_VCELL), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BATTSTACK_VCH[] = "VCH";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_VCH =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_VCH, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_VCH), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BATTSTACK_VMAXCELL[] = "VMAXCELL";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_VMAXCELL =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_VMAXCELL, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_VMAXCELL), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BATTSTACK_VMINCELL[] = "VMINCELL";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_VMINCELL =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_VMINCELL, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_VMINCELL), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BATTSTACK_VSTACK[] = "VSTACK";
static RISMDInterfaceVariable const lcmd_var_BATTSTACK_VSTACK =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACK_VSTACK, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BATTSTACK,LC_VD_VSTACK), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_BATTSTACK[] =
{
  INIT_RISMDReference(&lcmd_var_BATTSTACK_ALLTRIGCOUNT),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_AUXTRIGCOUNT),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_BALENB),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_BALREG),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_BALV),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_BAUD),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_BRD),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_CELL),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_CH),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_CHSEL),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_ENB),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_ENO),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_ERR),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_FAULT),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_MAXCELLBRD),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_MAXCELLNUM),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_MAXTEMP),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_MAXTEMPBRD),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_MAXTEMPCELL),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_MINCELLBRD),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_MINCELLNUM),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_MINTEMP),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_MINTEMPBRD),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_MINTEMPCELL),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_M_ALL_R),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_M_ALL_R_M),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_M_AUX_R),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_M_AUX_R_M),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_NBOARDS),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_NTCBETA),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_NTCNOMR_OHM),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_NTCNOMT_KLV),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_N_BRD),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_N_CELLS),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_OVTHRES),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_TEMPCELL),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_T_CELLS),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_UVTHRES),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_VAV),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_VCELL),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_VCH),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_VMAXCELL),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_VMINCELL),
  INIT_RISMDReference(&lcmd_var_BATTSTACK_VSTACK),
};

static char const lcmd_type_name_BATTSTACK[] = "BATTSTACK";
RISMDPOUType const lcmd_type_BATTSTACK = INIT_RISMDPOUType(lcmd_type_name_BATTSTACK, sizeof(LC_TD_FunctionBlock_BATTSTACK), 44, lcmd_var_list_BATTSTACK);
