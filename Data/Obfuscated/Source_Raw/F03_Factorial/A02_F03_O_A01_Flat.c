/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A02_F03_O_A01_Flat.c
 * Implementation Logic: Control flow flattening using switch-case derived from A01.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

long long q(int tQ) {
 if   (tQ   <  0)  return  0;
  long long dD  =   1;
 int wL   =   1,   VG   =   0;
  while   (VG !=   2)  {
 switch   (VG)   {
   case 0:   VG  =  (wL   <= tQ) ?  1  : 2; break;
  case   1:   dD *=   wL; wL++;  VG  = 0;  break;
   }
  }
  return   dD;
}

int   main(int argc,  char *argv[]) {
   if (argc <  2) return 1;
 printf("%lld\n",  q(atoi(argv[1])));
   return  0;
}