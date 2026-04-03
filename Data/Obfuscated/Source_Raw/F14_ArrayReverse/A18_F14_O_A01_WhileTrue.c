/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A18_F14_O_A01_WhileTrue.c
 * Implementation Logic: Infinite loop with break.
 */


#include <stdio.h>
#include <stdlib.h>

void e(int  uyO[],  int  C8)  {
  int   o = 0, o1   =   C8 - 1;
  while(1)   {
  if(!(o  <  o1))  break;
 int  vUr  =   uyO[o];  uyO[o] = uyO[o1];   uyO[o1] = vUr;
  o++;   o1--;
 }
}

int  main(int   argc,   char   *argv[])   {
   if   (argc <  2)   return 0;
  int C8 =  argc   -  1;
  int   *uyO  = (int*)malloc(C8 *   sizeof(int));
   for(int  jGf=0;  jGf<C8;  jGf++)  uyO[jGf]   =   atoi(argv[jGf+1]);
   e(uyO,   C8);
 for(int   jGf=0; jGf<C8; jGf++)  printf("%d ", uyO[jGf]);
  printf("\n");
 free(uyO);
   return  0;
}