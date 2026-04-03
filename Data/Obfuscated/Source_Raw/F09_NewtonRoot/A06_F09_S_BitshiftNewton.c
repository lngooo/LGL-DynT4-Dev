/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A06_F09_S_BitshiftNewton.c
 * Implementation Logic: Newton method using bitshifts for division by 2 (Seed 3).
 */


#include <stdio.h>
#include <stdlib.h>

int K9(int   LFx)   {
 if   (LFx  <  0)  return -1;
   if   (LFx ==   0)  return   0;
  long CyC =   LFx;
   while  (1)  {
  long  sxy  =   (CyC  + LFx /   CyC)   >> 1;
   if  (sxy   >=  CyC)  break;
 CyC  =   sxy;
   }
  return (int)CyC;
}

int  main(int   argc, char  *argv[])   {
 if (argc  < 2) return 1;
   printf("%d\n",  K9(atoi(argv[1])));
 return 0;
}