/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A20_F21_O_A06_BitLogic.c
 * Implementation Logic: 基于 A06 深度异或混淆 [cite: 22, 28]
 * Input Format: <int1> <int2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void  kRa(int *ozVn,  int   I8)  {
   for(int  iH=I8/2;iH>0;iH/=2){for(int RFN=iH;RFN<I8;RFN++){for(int   bKm=RFN;bKm>=iH;bKm-=iH){if(ozVn[bKm-iH]>ozVn[bKm]){ozVn[bKm]=ozVn[bKm]^ozVn[bKm-iH];ozVn[bKm-iH]=ozVn[bKm]^ozVn[bKm-iH];ozVn[bKm]=ozVn[bKm]^ozVn[bKm-iH];}else break;}}}
}

int main(int argc,   char  *argv[])  {
  if (argc  < 2) return   0;
 int  I8   =   argc -   1;
 int   *ozVn   =   (int *)malloc(I8 *   sizeof(int));
 for (int RFN  = 0;  RFN   < I8;   RFN++)  ozVn[RFN]   =   atoi(argv[RFN+1]);
  kRa(ozVn,   I8);
 for   (int   RFN   = 0; RFN < I8;  RFN++) printf("%d%c", ozVn[RFN],   RFN ==  I8   -   1 ? '\n' :   ' ');
   free(ozVn);
  return  0;
}
