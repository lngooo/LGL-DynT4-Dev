/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A09_F16_O_A06_Bitwise.c
 * Implementation Logic: Bitwise
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  Ls(int   q[],   int   uv,   int LXFH)  {
  if  (uv  <  LXFH) {
   int   Z9   =   (uv  + LXFH) >>  1;
   Ls(q,   uv,   Z9);
  Ls(q,  Z9  + 1, LXFH);
   int   NKi =  Z9   - uv  +   1, Wk   =   LXFH  -  Z9;
   int   Rtr[64], TI[64];
  for(int  IneW9=0; IneW9<NKi;   IneW9++)   Rtr[IneW9] =  q[uv+IneW9];
 for(int   PU=0; PU<Wk;  PU++) TI[PU] = q[Z9+1+PU];
   Rtr[NKi] = ~(1   <<   31); TI[Wk] =  ~(1  << 31);
  int IneW9   =  0, PU   =  0;
  for(int   wbas=uv;   wbas<=LXFH;   wbas++)   {
 int TQyg = (Rtr[IneW9] <= TI[PU]);
   q[wbas]   =   TQyg   ? Rtr[IneW9++]   : TI[PU++];
   }
  }
}

int   main(int  argc,   char   *argv[]) {
   if   (argc   <   2)  return  0;
 int u   = argc - 1;
  int   *q  =   (int *)malloc(u  *   sizeof(int));
  for   (int IneW9   =  0;  IneW9  <   u;  IneW9++) q[IneW9]   = atoi(argv[IneW9 + 1]);

   Ls(q,   0, u - 1);

  for (int IneW9   =   0;  IneW9  < u;  IneW9++)  {
 printf("%d%s",   q[IneW9],   (IneW9   ==   u - 1 ? ""  :  " "));
 }
   printf("\n");
   free(q);
  return   0;
}