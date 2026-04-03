/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A21_F14_O_A02_TailRec.c
 * Implementation Logic: Tail-recursive optimization variation.
 */


#include <stdio.h>
#include <stdlib.h>

void   b6(int DLI[],  int  FSV5,   int  ALs)  {
   while(FSV5 <   ALs)  {
   int fD  = DLI[FSV5]; DLI[FSV5] =   DLI[ALs];   DLI[ALs]   =   fD;
 FSV5++; ALs--;
   }
}

void  Q(int   ZuoR[], int T7)  {
   if(T7   >  1) b6(ZuoR,  0, T7   - 1);
}

int   main(int  argc,  char *argv[]) {
  if (argc  <   2) return   0;
 int   T7   =   argc - 1;
  int  *ZuoR   = (int*)malloc(T7  *   sizeof(int));
   for(int Qv=0; Qv<T7; Qv++) ZuoR[Qv] =   atoi(argv[Qv+1]);
 Q(ZuoR,   T7);
 for(int   Qv=0;   Qv<T7;   Qv++) printf("%d ", ZuoR[Qv]);
   printf("\n");
  free(ZuoR);
   return 0;
}