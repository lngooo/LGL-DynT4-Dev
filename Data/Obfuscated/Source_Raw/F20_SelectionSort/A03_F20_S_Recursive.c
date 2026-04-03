/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A03_F20_S_Recursive.c
 * Implementation Logic: Recursive
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   R(int   XsA0[],   int c0)  {
  if  (c0 <=  1)  return;
  int Lns = 0;
   for (int   BkMB  =   1;  BkMB   < c0; BkMB++)   if (XsA0[BkMB] <   XsA0[Lns]) Lns  =  BkMB;
 int   sa   =  XsA0[0]; XsA0[0]   =   XsA0[Lns]; XsA0[Lns]  =   sa;
  R(XsA0   + 1,  c0 - 1);
}

int  main(int argc,  char *argv[])  {
  if (argc   <  2)   return  0;
  int  c0   =   argc  - 1;
 int   *XsA0 =   (int *)malloc(c0 *   sizeof(int));
 for (int   BkMB  =  0;  BkMB < c0;  BkMB++)  XsA0[BkMB]  = atoi(argv[BkMB  +   1]);

  R(XsA0,  c0);

  for  (int   BkMB  =  0;  BkMB   <   c0;   BkMB++) {
  printf("%d%s",   XsA0[BkMB],  (BkMB ==   c0   - 1 ?   "" : " "));
 }
  printf("\n");
   free(XsA0);
 return  0;
}