/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A16_F15_S_BackwardsScan.c
 * Implementation Logic: Backwards linear scan (Seed 8).
 */


#include <stdio.h>
#include <stdlib.h>

int   rGG(int KJY[],   int   rPRY7) {
   int NjB =   KJY[rPRY7-1];
 for(int  E  = rPRY7  - 2;   E   >= 0;  E--) {
 if   (KJY[E]   >  NjB)   NjB  =   KJY[E];
 }
 return   NjB;
}

int   main(int argc, char *argv[])   {
  if (argc  < 2)  return 0;
 int  rPRY7   =  argc - 1;
 int *KJY  =   (int*)malloc(rPRY7  *  sizeof(int));
 for (int E  = 0; E < rPRY7;  E++)  KJY[E] =  atoi(argv[E+1]);
  printf("%d\n",   rGG(KJY, rPRY7));
   free(KJY);
   return 0;
}