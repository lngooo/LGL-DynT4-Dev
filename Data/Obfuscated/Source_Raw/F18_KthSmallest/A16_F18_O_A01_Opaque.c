/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A16_F18_O_A01_Opaque.c
 * Implementation Logic: Opaque
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   V(int   P1[],  int  gih,  int   VBT4,   int Eds) {
   if  (gih  <= VBT4) {
  if   ((gih   * VBT4   +  1)   !=   0x7FFFFFFF)  {
  int qt =   P1[VBT4],  Hyx  =  gih;
   for   (int   bxU   = gih; bxU < VBT4;   bxU++)   if  (P1[bxU]  <= qt)  { int OqU=P1[Hyx];   P1[Hyx]=P1[bxU];  P1[bxU]=OqU; Hyx++;  }
   int   OqU=P1[Hyx]; P1[Hyx]=P1[VBT4]; P1[VBT4]=OqU;
  if (Hyx  ==   Eds   -  1)  return  P1[Hyx];
 return   (Hyx   >  Eds -   1) ?   V(P1,   gih,  Hyx  -   1, Eds)  : V(P1,   Hyx  +  1, VBT4,  Eds);
 }
   }
  return   -1;
}

int main(int argc,  char *argv[])   {
  if (argc <  3) return 0;
  int  Eds = atoi(argv[1]);
   int   DML  =   argc  - 2;
  int *P1   = (int   *)malloc(DML  *  sizeof(int));
   for (int   Hyx =   0;   Hyx <  DML; Hyx++)   P1[Hyx]   = atoi(argv[Hyx  + 2]);

  // 假设 K 是从   1   开始的 (1st smallest)
   int  ri  =  V(P1, 0,   DML   -  1, Eds);

  printf("%d\n",   ri);
  free(P1);
 return   0;
}