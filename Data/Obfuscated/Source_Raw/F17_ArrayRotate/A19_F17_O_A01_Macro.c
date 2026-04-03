/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A19_F17_O_A01_Macro.c
 * Logic: Reversal algorithm with logic hidden in macros.
 */


#include <stdio.h>
#include <stdlib.h>

#define OXn(x, y) {int _t=x; x=y; y=_t;}
#define j9(a, s, e) {int _s=s, _e=e; while(_s<_e){OXn(a[_s],a[_e]); _s++; _e--;}}

void   pt(int  Ph7[], int  ArWP,   int  JQw) {
  if (ArWP   ==   0) return;
 int   q  =  JQw  % ArWP;
   j9(Ph7, 0,  q-1);
 j9(Ph7, q,   ArWP-1);
  j9(Ph7,   0, ArWP-1);
}

int   main(int argc,  char   *argv[])   {
  if  (argc   <  3)  return 0;
   int  JQw = atoi(argv[1]);
   int ArWP  =   argc  -  2;
 int   *Ph7   =  (int*)malloc(ArWP  * sizeof(int));
  for(int   LODx2=0;  LODx2<ArWP; LODx2++)   Ph7[LODx2]   =  atoi(argv[LODx2+2]);
  pt(Ph7, ArWP, JQw);
   for(int LODx2=0; LODx2<ArWP;  LODx2++) printf("%d ",  Ph7[LODx2]);
   printf("\n");
   free(Ph7);
  return  0;
}