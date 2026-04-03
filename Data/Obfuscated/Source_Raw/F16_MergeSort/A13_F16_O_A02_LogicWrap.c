/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A13_F16_O_A02_LogicWrap.c
 * Implementation Logic: LogicWrap
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  yuTJ(int IHa[],   int ui8,   int  omj)  {
  if  (ui8   <  omj) {
 int gCJ2 =  (ui8 +  omj)  / 2;
 yuTJ(IHa,  ui8,  gCJ2);
  yuTJ(IHa,  gCJ2   +  1,  omj);
  for (int eZ6 =   gCJ2   + 1;   eZ6   <= omj;   eZ6++) {
  int   kxq   = IHa[eZ6],  Qox0  = eZ6  -   1;
  while (Qox0 >= ui8 &&   IHa[Qox0]   > kxq)   {   IHa[Qox0   + 1]  =  IHa[Qox0];  Qox0--;  }
  IHa[Qox0   +   1]  = kxq;
   }
 }
}

int  main(int  argc,  char  *argv[])  {
   if  (argc < 2)  return 0;
   int  hg7  = argc  -  1;
  int   *IHa   =   (int  *)malloc(hg7 * sizeof(int));
   for (int  p  = 0;   p   <   hg7; p++)  IHa[p]   =  atoi(argv[p + 1]);

   yuTJ(IHa, 0,   hg7   - 1);

  for   (int  p   =   0; p  <   hg7; p++) {
   printf("%d%s", IHa[p], (p ==   hg7  -  1  ?   "" :  " "));
 }
  printf("\n");
   free(IHa);
 return  0;
}