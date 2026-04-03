/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A13_F13_O_A01_Unroll.c
 * Implementation Logic: Unroll
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void pOez5(int   OPAu9[], int  i,   int MtN)  {
   if  (i <  MtN)  {
   int   o  =   OPAu9[MtN], AM0  = i  -   1,   E5  =  i;
 for  (; E5  <   MtN  - 1;   E5  +=   2)  {
  if  (OPAu9[E5]  <  o) {   AM0++;  int zXj  =   OPAu9[AM0]; OPAu9[AM0]  =   OPAu9[E5];  OPAu9[E5]   = zXj;   }
  if   (OPAu9[E5+1]   <   o)   { AM0++; int zXj  =  OPAu9[AM0];   OPAu9[AM0] =   OPAu9[E5+1]; OPAu9[E5+1] =   zXj;  }
  }
 for   (;  E5   <   MtN;  E5++) {
  if (OPAu9[E5]  <  o)  { AM0++;  int zXj =   OPAu9[AM0]; OPAu9[AM0]  =  OPAu9[E5];  OPAu9[E5]   =   zXj; }
 }
 int  zXj  =   OPAu9[AM0+1];  OPAu9[AM0+1]   = OPAu9[MtN]; OPAu9[MtN]  =  zXj;
   pOez5(OPAu9, i,   AM0);
 pOez5(OPAu9, AM0   + 2,  MtN);
  }
}

int  main(int   argc,   char  *argv[]) {
   if (argc   <  2)   return   0;
   int  mOF  = argc   -  1;
   int   *OPAu9 =  (int  *)malloc(mOF *   sizeof(int));
  for (int  AM0   = 0;   AM0   <   mOF;   AM0++)   OPAu9[AM0]  =  atoi(argv[AM0 +   1]);

  pOez5(OPAu9,   0,  mOF -   1);

   for  (int   AM0 = 0; AM0   <  mOF; AM0++)  {
   printf("%d%s",   OPAu9[AM0],  (AM0   == mOF   -  1   ?   ""  : " "));
  }
  printf("\n");
 free(OPAu9);
 return 0;
}