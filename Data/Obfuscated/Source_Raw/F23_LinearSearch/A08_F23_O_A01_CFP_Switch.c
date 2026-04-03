/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A08_F23_O_A01_CFP_Switch.c
 * Implementation Logic: Switch
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  gEK(int  VeU[], int idn,  int   E)  {
   int   hVCX  =  0, q   =   0;
 while   (hVCX !=  3)   {
   switch  (hVCX) {
   case  0: hVCX  = (q <  idn)  ? 1  :   2; break;
  case 1:   if   (VeU[q] ==  E) return   q; q++;   hVCX = 0; break;
   case 2:  return -1;
   }
 }
   return -1;
}

int main(int argc,   char   *argv[])  {
 if (argc   < 3)  return  1;
  int   E  = atoi(argv[1]);
   int   iIz =   argc  -  2;
  int VeU[100];
 for  (int   q =   0;   q <  iIz;   q++)  {
  VeU[q]  =   atoi(argv[q  +  2]);
  }
   int  k7  = gEK(VeU,  iIz, E);
 printf("%d\n", k7);
 return   0;
}