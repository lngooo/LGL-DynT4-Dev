/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A08_F28_O_A01_CFP_Switch.c
 * Implementation Logic: Switch derived from seed.
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int   TJ(char   *yF) {
  int  jt  = 0; while (yF[jt])  jt++;
 int qL   =  0,   VC =   jt - 1,  DFjZ1  = 0;
   while  (DFjZ1  != 3)  {
   switch(DFjZ1) {
   case 0:   DFjZ1  = (qL   < VC) ?  1   : 2; break;
 case  1: if (yF[qL] !=   yF[VC]) return   0; qL++;   VC--;   DFjZ1 = 0;  break;
  case   2:  return   1;
  }
  }
   return  1;
}

int   main(int argc, char *argv[]) {
  if (argc   <   2)  return 1;
   char   *yF =  argv[1];
  int Ul =  TJ(yF);
  printf("%d\n",   Ul);
   return  0;
}