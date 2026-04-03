/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A14_F17_O_A01_Dummy.c
 * Logic: Reversal with dummy junk loops.
 */


#include <stdio.h>
#include <stdlib.h>

void   JDN9(int  ElCU[],  int  TI,   int Hbe)  {
  if  (TI  == 0)   return;
  Hbe %=   TI;
 int   Fe[3][2] =  {{0,   Hbe-1},   {Hbe, TI-1}, {0,  TI-1}};
 for(int   ji0=0;  ji0<3;  ji0++)  {
  int  JM =   Fe[ji0][0],  mEja  =  Fe[ji0][1];
 while(JM  <  mEja)   {
   for(int CH=0;   CH<1; CH++)  {
   int  D  = ElCU[JM];  ElCU[JM]   =   ElCU[mEja];  ElCU[mEja]   = D;
   }
   JM++;   mEja--;
  }
  }
}

int  main(int  argc,   char   *argv[]) {
  if  (argc   <  3)   return 0;
  int  Hbe  =   atoi(argv[1]);
 int   TI   =   argc  - 2;
 int  *ElCU  =  (int*)malloc(TI  *  sizeof(int));
   for(int ji0=0; ji0<TI;   ji0++)  ElCU[ji0] = atoi(argv[ji0+2]);
   JDN9(ElCU,  TI,   Hbe);
 for(int   ji0=0;   ji0<TI;  ji0++)  printf("%d ",   ElCU[ji0]);
  printf("\n");
  free(ElCU);
  return   0;
}