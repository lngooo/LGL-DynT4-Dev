/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A15_F30_O_A01_LoopUnroll.c
* Implementation Logic: Partial loop unrolling of the inner comparison derived from A01.
*/


#include <stdio.h>
#include <string.h>

int E2(char*  bW1, char*  yLy3) {
  int hcKl   =  strlen(bW1), ud  = strlen(yLy3);
 if   (ud   ==  0)   return  0;
   for (int  EAS  =   0; EAS  <=  hcKl   - ud;  EAS++)   {
   int ViB   =   1;
  int   qMD4 = 0;
  while  (qMD4   <  ud   -   1) {
 if  (bW1[EAS+qMD4]  != yLy3[qMD4]   ||   bW1[EAS+qMD4+1] !=  yLy3[qMD4+1]) {   ViB  =   0;  break;  }
  qMD4  += 2;
   }
  if   (ViB   &&   qMD4 ==   ud  -  1) if  (bW1[EAS+qMD4] !=  yLy3[qMD4])  ViB  =   0;
   if (ViB)   return   EAS;
  }
  return   -1;
}

int main(int  argc, char*  argv[]) {
   if (argc  <  3) return 0;
  printf("%d\n",  E2(argv[1],  argv[2]));
  return   0;
}