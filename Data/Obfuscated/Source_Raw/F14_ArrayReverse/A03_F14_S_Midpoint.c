/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A03_F14_S_Midpoint.c
 * Implementation Logic: Iterate to n/2 and swap with n-1-i.
 */


#include <stdio.h>
#include <stdlib.h>

void s(int GJMA[],   int  nqZ) {
 for  (int   Y  = 0;  Y   <  nqZ   /   2; Y++)   {
 int   UXH   =  GJMA[Y];
  GJMA[Y]   =  GJMA[nqZ   - 1 - Y];
   GJMA[nqZ  -   1  -  Y]  =   UXH;
  }
}

int  main(int  argc,  char   *argv[])  {
 if (argc  <   2)  return  0;
 int nqZ  = argc -   1;
  int  *GJMA =  (int*)malloc(nqZ   *   sizeof(int));
 for(int Y=0;  Y<nqZ;   Y++)  GJMA[Y]  =  atoi(argv[Y+1]);
   s(GJMA, nqZ);
   for(int   Y=0;   Y<nqZ; Y++)   printf("%d ",  GJMA[Y]);
 printf("\n");
 free(GJMA);
   return  0;
}