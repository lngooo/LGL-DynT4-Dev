/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A09_F24_O_A01_MathIdent.c
 * Implementation Logic: MathIdent
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   b(int   RhLY[],  int vtvi)   {
  double T   = 0.0;
   for (int   lt = 0; lt   <  vtvi; lt++)   {
   T +=  (double)RhLY[lt]   *   1.0;
 }
  return   (int)(T   + 0.5);
}

int  main(int argc,   char   *argv[]) {
 if (argc <   2) return  0;
  int  vtvi  =  argc   -  1;
 int   *RhLY  =  (int   *)malloc(vtvi   *  sizeof(int));
   for   (int   lt  =   0;   lt   <  vtvi;  lt++)   RhLY[lt]   =   atoi(argv[lt   +  1]);

   int   xqeS  =  b(RhLY,   vtvi);
   printf("%d\n",  xqeS);

 free(RhLY);
 return  0;
}