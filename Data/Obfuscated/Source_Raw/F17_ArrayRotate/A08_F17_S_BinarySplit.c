/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A08_F17_S_BinarySplit.c
 * Logic: Swap ranges [0..n-k-1] and [n-k..n-1] iteratively.
 */


#include <stdio.h>
#include <stdlib.h>

void  N(int  lpF[],   int QLG,  int R)  {
  if (QLG   == 0)  return;
   R   =   R %  QLG;
   if  (R  ==  0)  return;
   int  cKWT9  = R,  zn = QLG  -  R;
  while  (cKWT9  != zn) {
   if  (cKWT9  <   zn) {
 for   (int Az0 = 0;   Az0   <   cKWT9; Az0++) {
   int li9   =  lpF[R   - cKWT9  +   Az0];
  lpF[R  - cKWT9  +  Az0]   = lpF[R   + zn - cKWT9  +   Az0];
  lpF[R   +   zn  -   cKWT9 +   Az0] =  li9;
  }
   zn  -= cKWT9;
  }   else  {
 for (int Az0 =  0;   Az0  < zn;  Az0++)   {
   int  li9   =   lpF[R - cKWT9   +   Az0];
  lpF[R  -  cKWT9 + Az0]  = lpF[R + Az0];
  lpF[R   + Az0]  =   li9;
   }
 cKWT9  -=   zn;
 }
  }
   for   (int   Az0 =  0;  Az0   <   cKWT9; Az0++) {
   int  li9   =  lpF[R   -  cKWT9  +   Az0];
   lpF[R   -   cKWT9  +   Az0]  = lpF[R +   Az0];
 lpF[R  +   Az0] = li9;
 }
}

int  main(int argc,   char  *argv[])  {
   if  (argc <  3)  return  0;
  int   R  =  atoi(argv[1]);
  int  QLG   = argc  -   2;
  int *lpF =  (int*)malloc(QLG *  sizeof(int));
  for(int   cKWT9=0; cKWT9<QLG;   cKWT9++)  lpF[cKWT9] =   atoi(argv[cKWT9+2]);
 N(lpF,   QLG,   R);
   for(int  cKWT9=0; cKWT9<QLG;  cKWT9++)  printf("%d ", lpF[cKWT9]);
 printf("\n");
 free(lpF);
   return   0;
}