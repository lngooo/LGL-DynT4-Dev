/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A08_F14_S_Iterators.c
 * Implementation Logic: Using begin/end logic with size check.
 */


#include <stdio.h>
#include <stdlib.h>

void  L(int  mNH[],  int   oD) {
  if  (oD  < 2)  return;
 int   jym   = 0;
   do  {
  int  r6 =  mNH[jym];
  mNH[jym]  = mNH[oD -  1   -   jym];
  mNH[oD -  1  -  jym]  =  r6;
   jym++;
  }   while (jym  < oD   /   2);
}

int   main(int   argc,   char  *argv[]) {
   if   (argc   <  2)   return 0;
 int  oD =   argc  -  1;
   int *mNH  = (int*)malloc(oD  *  sizeof(int));
 for(int jym=0;   jym<oD;  jym++)   mNH[jym]   =  atoi(argv[jym+1]);
 L(mNH,   oD);
   for(int   jym=0; jym<oD;  jym++)  printf("%d ", mNH[jym]);
   printf("\n");
  free(mNH);
  return   0;
}