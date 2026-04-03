/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A14_F22_O_A01_DummyLoop.c
 * Implementation Logic: DummyLoop
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void KUGX(int   C[],   int   UR)  {
 for (int  zp =   1;   zp < UR;   zp++)   {
 int  f  =  C[zp],   kOBr =  zp -  1;
   for   (int   iMlW  =   0;   iMlW   <   1;   iMlW++)   {
   while   (kOBr  >=  0  && C[kOBr]   > f)   { C[kOBr+1] =  C[kOBr];  kOBr--;   }
   }
   C[kOBr+1] = f;
  }
}

int  main(int  argc,   char   *argv[])  {
  if (argc   <  2) return  0;
  int UR   =  argc   -   1;
   int  *C  =   (int *)malloc(UR  *  sizeof(int));
   for  (int   zp = 0;  zp <   UR;   zp++) C[zp] =   atoi(argv[zp +  1]);

 KUGX(C, UR);

  for (int  zp  =  0; zp  <  UR; zp++) {
  printf("%d%s",  C[zp],   (zp == UR -   1 ?   ""  : " "));
  }
 printf("\n");
   free(C);
 return  0;
}