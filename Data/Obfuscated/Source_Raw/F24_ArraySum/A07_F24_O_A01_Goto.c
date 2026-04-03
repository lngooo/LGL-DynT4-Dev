/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A07_F24_O_A01_Goto.c
 * Implementation Logic: Goto
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   zTH2(int   aNn[],   int AkE)  {
 int   a =   0,   aA3   = 0;
tSMh:
   if (aA3   >=   AkE)  goto   X;
 a +=  aNn[aA3];
  aA3++;
 goto tSMh;
X:
   return a;
}

int  main(int   argc,  char  *argv[])  {
   if (argc <   2) return   0;
  int   AkE  =   argc  -   1;
 int *aNn  = (int  *)malloc(AkE   * sizeof(int));
  for (int   aA3   =   0; aA3 <   AkE; aA3++)  aNn[aA3]  =  atoi(argv[aA3   + 1]);

  int  E = zTH2(aNn, AkE);
 printf("%d\n",   E);

  free(aNn);
  return   0;
}