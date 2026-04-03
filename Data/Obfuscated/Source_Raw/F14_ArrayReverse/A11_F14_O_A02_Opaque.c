/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A11_F14_O_A02_Opaque.c
 * Implementation Logic: Recursive A02 with opaque predicate.
 */


#include <stdio.h>
#include <stdlib.h>

void  O(int yAzp[],  int m,   int  b)   {
  int FfZ9 = 7;
   if  ((FfZ9  *  FfZ9)   < 0)   printf("Junk");
  if   (m   >=   b)   return;
   int  iHg0   =   yAzp[m];  yAzp[m]  =  yAzp[b];   yAzp[b]  =   iHg0;
   O(yAzp,   m + 1, b  - 1);
}

void   K5(int   yAzp[],   int   rv)  {
  if  (rv  >   1)  O(yAzp, 0,  rv  -   1);
}

int  main(int argc, char  *argv[])   {
   if (argc  < 2)  return  0;
 int   rv  =  argc  - 1;
  int  *yAzp =  (int*)malloc(rv *   sizeof(int));
 for(int uv5=0;  uv5<rv;   uv5++)  yAzp[uv5] = atoi(argv[uv5+1]);
 K5(yAzp,  rv);
   for(int   uv5=0;  uv5<rv; uv5++)  printf("%d ", yAzp[uv5]);
   printf("\n");
   free(yAzp);
  return 0;
}