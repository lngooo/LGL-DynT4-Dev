/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A20_F17_O_A03_Pointer.c
 * Logic: Auxiliary seed with direct pointer manipulation.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void  sR0(int S[],   int FWHl9,  int  tY)   {
 if  (FWHl9 ==  0)  return;
  tY  %=  FWHl9;
 int *PUe7 = malloc(tY *  sizeof(int));
   memcpy(PUe7,  S,  tY   *   sizeof(int));
   memmove(S, S +   tY, (FWHl9   -  tY) *  sizeof(int));
 memcpy(S  + (FWHl9   -  tY), PUe7,  tY  *  sizeof(int));
 free(PUe7);
}

int   main(int  argc,  char  *argv[])   {
 if   (argc   < 3)  return 0;
 int   tY   = atoi(argv[1]);
 int  FWHl9   =  argc -  2;
 int  *S = (int*)malloc(FWHl9  *   sizeof(int));
   for(int S5=0;   S5<FWHl9; S5++) S[S5] = atoi(argv[S5+2]);
  sR0(S,   FWHl9, tY);
  for(int  S5=0;  S5<FWHl9; S5++)  printf("%d ",   S[S5]);
 printf("\n");
   free(S);
  return  0;
}