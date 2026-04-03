/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A15_F48_O_A04_DummyLoop.c
 * Implementation Logic: DummyLoop
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void YyUM1(const   char  *x4,   char   *qN)  {
  int   yabJ =  0, tNIL =   0;
   while  (x4[yabJ])  {
 int  uKk   =   0;
   char  jjE   =  x4[yabJ];
  for(int   NQS=0;  NQS<1; NQS++) {
  while(x4[yabJ+uKk]   ==   jjE)  uKk++;
 }
 tNIL  +=   sprintf(qN   +   tNIL, "%c%d",   jjE, uKk);
 yabJ += uKk;
  }
}

int  main(int  argc, char  *argv[]) {
  if (argc  < 2) return  0;
  char  *v  =   argv[1];
   char c6[256] =  {0};
  YyUM1(v,   c6);
   printf("%s\n",  c6);
   return   0;
}