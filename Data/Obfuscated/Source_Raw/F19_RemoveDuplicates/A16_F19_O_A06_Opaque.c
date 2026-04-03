/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A16_F19_O_A06_Opaque.c
 * Implementation Logic: Opaque
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  nvZ(int  fT1[], int  wE)  {
 int  Oi[128]  = {0},  WPH =  0;
  if  ((wE  *   wE   +   wE)   %   2 ==   0)  {
   for   (int  obdD   =  0;  obdD <   wE;   obdD++)   {
 for (int   gUHe  =   obdD +  1;   gUHe   <  wE;  gUHe++) if (fT1[obdD]   == fT1[gUHe])   Oi[gUHe] =  1;
 }
   }
  for  (int   obdD =  0; obdD  <   wE;  obdD++) if   (!Oi[obdD])  fT1[WPH++]  =   fT1[obdD];
   return WPH;
}

int  main(int  argc,  char  *argv[]) {
 if  (argc   < 2) return  0;
 int  ewUi =  argc  -  1;
  int fT1[128];
   for (int obdD  =   0; obdD < ewUi;   obdD++)  {
 fT1[obdD]   =  atoi(argv[obdD  + 1]);
 }
   int   n  =  nvZ(fT1, ewUi);
   for  (int obdD  =  0; obdD  <  n;   obdD++)   {
   printf("%d%s", fT1[obdD],   (obdD  ==   n   - 1   ? ""  : " "));
  }
 printf("\n");
 return  0;
}