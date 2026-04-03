/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A10_F16_O_A01_MathIdent.c
 * Implementation Logic: MathIdent
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void v(int  aml[],   int  L,  int Yh)  {
  if   (L  <   Yh)   {
   int   UH =   L  +   (int)floor((Yh -  L)   /  2.0);
   v(aml, L, UH);
  v(aml,   UH +   1, Yh);
 int   VjUm   =  L,  Rij9 =  UH + 1,  NnJo =   0,  NLwf  =   Yh - L + 1;
  int   *d  = (int*)malloc(NLwf   * sizeof(int));
 while   (NnJo  <  NLwf)   {
   if   (VjUm   <=  UH  && (Rij9   >  Yh   || (double)aml[VjUm]   <=  (double)aml[Rij9]))  d[NnJo++]   =  aml[VjUm++];
  else d[NnJo++]   =   aml[Rij9++];
 }
  for   (VjUm  =  0;   VjUm < NLwf; VjUm++)  aml[L   + VjUm]  =  d[VjUm];
 free(d);
 }
}

int   main(int   argc,  char *argv[])  {
  if   (argc  <  2) return 0;
 int  lw8   =  argc   - 1;
 int *aml = (int   *)malloc(lw8 *  sizeof(int));
  for (int VjUm   =   0;   VjUm <   lw8; VjUm++)   aml[VjUm]  =   atoi(argv[VjUm   + 1]);

   v(aml,  0, lw8 - 1);

 for  (int   VjUm   =   0;   VjUm < lw8; VjUm++)   {
  printf("%d%s", aml[VjUm],   (VjUm  ==  lw8  -   1  ? "" : " "));
  }
 printf("\n");
 free(aml);
 return   0;
}