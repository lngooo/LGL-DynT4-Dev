/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A04_F24_S_DivideAndConquer.c
 * Implementation Logic: DivideAndConquer
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   pLJL(int  Tso[], int   CE)   {
  if (CE <= 0) return 0;
  if   (CE   ==   1)  return Tso[0];
 int  gAE  =   CE  /  2;
  return pLJL(Tso,   gAE)   +   pLJL(Tso +   gAE,  CE  -   gAE);
}

int   main(int   argc,  char  *argv[]) {
   if  (argc   < 2) return 0;
   int  CE =   argc - 1;
   int   *Tso   = (int   *)malloc(CE  *   sizeof(int));
  for (int   Hr  =   0; Hr   <  CE;  Hr++)   Tso[Hr] =  atoi(argv[Hr  +   1]);

   int jP = pLJL(Tso,  CE);
 printf("%d\n",  jP);

  free(Tso);
   return   0;
}