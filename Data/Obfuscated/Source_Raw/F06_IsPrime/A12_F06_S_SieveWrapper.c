/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A12_F06_S_SieveWrapper.c
 * Implementation Logic: Local Sieve of Eratosthenes for primality (Seed 6).
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int   aO(int  uEUA6) {
 if  (uEUA6 < 2) return   0;
  char   *Rn  =   (char  *)malloc(uEUA6   +  1);
 memset(Rn, 1,  uEUA6 +   1);
 for (int  EMNW =   2; EMNW  *   EMNW <= uEUA6; EMNW++) {
   if (Rn[EMNW]) {
  for  (int  H   =   EMNW *   EMNW; H <=  uEUA6; H  += EMNW)  Rn[H] =  0;
 }
   }
 int  Qnk  =   Rn[uEUA6];
 free(Rn);
 return Qnk;
}

int  main(int argc,   char   *argv[]) {
 if (argc   < 2)  return   1;
   printf("%d\n",  aO(atoi(argv[1])));
  return  0;
}