/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A07_F17_S_Cyclic.c
 * Logic: Keep track of count of elements moved to achieve O(n) in one pass.
 */


#include <stdio.h>
#include <stdlib.h>

void Jp(int  W[], int ll,  int   A)   {
   if (ll   == 0)  return;
 A =  A  %  ll;
 if   (A   ==   0) return;
   int  P = 0;
  for  (int  Si  =  0;  P  <   ll; Si++)   {
 int   BGPQ   =  Si;
  int  Axo   =   W[Si];
   do  {
 int   TvN   = (BGPQ -   A  +  ll) % ll;
   int kN   =  W[TvN];
   W[TvN]  =   Axo;
 Axo =  kN;
   BGPQ =  TvN;
 P++;
 }   while   (Si !=  BGPQ);
  }
}

int   main(int argc,  char  *argv[]) {
 if   (argc < 3)  return 0;
  int  A  = atoi(argv[1]);
   int   ll  =  argc  -   2;
  int  *W  = (int*)malloc(ll * sizeof(int));
   for(int   qp5=0;  qp5<ll; qp5++) W[qp5]   =  atoi(argv[qp5+2]);
 Jp(W, ll, A);
  for(int   qp5=0;  qp5<ll; qp5++)   printf("%d ",  W[qp5]);
   printf("\n");
  free(W);
 return 0;
}