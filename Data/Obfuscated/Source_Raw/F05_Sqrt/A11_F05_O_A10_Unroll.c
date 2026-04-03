/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A11_F05_O_A10_Unroll.c
 * Implementation Logic: Linear scan with loop unrolling to alter CFG.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int  WLdk(int  hJ)   {
 if  (hJ   <   0) return  -1;
 long vSVG = 0;
 for (;;  vSVG  +=  2)   {
  if  ((vSVG   + 1) * (vSVG  + 1) >  hJ)  return   (int)vSVG;
   if ((vSVG   + 2)   *  (vSVG + 2) >  hJ)   return  (int)(vSVG +  1);
  }
}

int   main(int   argc, char  *argv[])   {
 if (argc <   2)   return   1;
 printf("%d\n",   WLdk(atoi(argv[1])));
   return   0;
}