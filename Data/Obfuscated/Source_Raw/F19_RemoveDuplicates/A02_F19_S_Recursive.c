/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A02_F19_S_Recursive.c
 * Implementation Logic: Recursive
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  iCVq3(int  wcJ[],   int kD)   {
 if  (kD <=  1)   return   kD;
 int   jFHp = iCVq3(wcJ, kD -   1);
   int ue0  =  0;
 for  (int  ufi = 0;   ufi  <  jFHp;  ufi++)  {
 if  (wcJ[ufi] ==   wcJ[kD   -  1])  {   ue0  = 1; break;   }
  }
 if (!ue0)   {
 wcJ[jFHp]   =  wcJ[kD   -  1];
 return jFHp  +   1;
  }
   return jFHp;
}

int   main(int   argc, char *argv[])  {
 if  (argc  <   2) return   0;
 int  Aa  =   argc   -  1;
 int   wcJ[128];
   for   (int ufi   =  0; ufi  <  Aa; ufi++) {
  wcJ[ufi]  =   atoi(argv[ufi  +   1]);
   }
  int  qcQo  = iCVq3(wcJ, Aa);
 for  (int  ufi = 0;   ufi  < qcQo; ufi++)   {
   printf("%d%s", wcJ[ufi],  (ufi  ==   qcQo  - 1  ? "" :   " "));
 }
   printf("\n");
  return 0;
}