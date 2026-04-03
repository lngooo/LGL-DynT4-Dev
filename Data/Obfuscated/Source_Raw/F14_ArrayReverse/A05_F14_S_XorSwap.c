/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A05_F14_S_XorSwap.c
 * Implementation Logic: In-place reversal using XOR swap algorithm.
 */


#include <stdio.h>
#include <stdlib.h>

void D(int   KjDj[],   int gMZv)  {
   for   (int   h = 0, VoQV2   =  gMZv  -   1; h  <  VoQV2;  h++,   VoQV2--)   {
 KjDj[h] ^=  KjDj[VoQV2];
  KjDj[VoQV2]   ^= KjDj[h];
  KjDj[h] ^=   KjDj[VoQV2];
  }
}

int  main(int  argc, char  *argv[])  {
 if   (argc < 2) return  0;
 int  gMZv  =  argc  -  1;
  int *KjDj  = (int*)malloc(gMZv *   sizeof(int));
  for(int h=0;  h<gMZv; h++)  KjDj[h] = atoi(argv[h+1]);
   D(KjDj,   gMZv);
  for(int   h=0;   h<gMZv;  h++)   printf("%d ",   KjDj[h]);
  printf("\n");
  free(KjDj);
   return 0;
}