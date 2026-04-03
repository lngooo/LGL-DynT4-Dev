/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A18_F13_O_A02_WhileTrue.c
 * Implementation Logic: WhileTrue
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void udG(int   Dv[],   int   Zgvm, int VsYh) {
   if (Zgvm   >= VsYh) return;
 int   atQ =   Dv[Zgvm], l =  Zgvm - 1,   cWcm  =  VsYh +   1;
 while  (1)  {
   while  (1)   {   l++;  if (Dv[l] >=   atQ)   break; }
  while (1) {   cWcm--;   if   (Dv[cWcm]  <= atQ) break;  }
  if  (l  >=   cWcm)  break;
  int  wa8   =   Dv[l]; Dv[l] =  Dv[cWcm];  Dv[cWcm]   =   wa8;
   }
  udG(Dv,   Zgvm,  cWcm);
  udG(Dv, cWcm   + 1, VsYh);
}

int   main(int argc,   char   *argv[]) {
   if   (argc   <  2)  return   0;
  int   H =  argc  -  1;
  int  *Dv = (int   *)malloc(H   *  sizeof(int));
 for (int  l   =  0; l  <   H;  l++)  Dv[l] = atoi(argv[l  + 1]);

  udG(Dv, 0,  H   -  1);

 for  (int l  =  0;   l <  H;  l++) {
 printf("%d%s", Dv[l],  (l ==  H   -  1 ? ""  : " "));
   }
 printf("\n");
 free(Dv);
  return 0;
}