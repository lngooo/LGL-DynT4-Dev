/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A02_F24_S_PointerArithmetic.c
 * Implementation Logic: PointerArithmetic
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   HjL(int  HS6[],  int  NUD)   {
  int  CC   =   0, *hm   = HS6;
 while   (NUD--)   CC   += *hm++;
 return CC;
}

int main(int   argc,  char   *argv[])  {
 if   (argc <  2)   return  0;
  int NUD =  argc - 1;
 int  *HS6   =   (int *)malloc(NUD   *  sizeof(int));
 for (int Llu  = 0;   Llu  < NUD;   Llu++) HS6[Llu] =  atoi(argv[Llu   +  1]);

   int  ZO  = HjL(HS6,   NUD);
 printf("%d\n",  ZO);

 free(HS6);
   return  0;
}