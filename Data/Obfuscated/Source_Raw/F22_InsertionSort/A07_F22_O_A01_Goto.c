/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A07_F22_O_A01_Goto.c
 * Implementation Logic: Goto
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   jgF(int   BHbV[], int  LX)   {
 int   is =   1, oxwy,   pivW7;
yr:
 if (is >=  LX)  return;
   pivW7 =  BHbV[is];  oxwy   =   is  - 1;
hv3:
 if (oxwy   <   0  ||  BHbV[oxwy]   <=   pivW7)   goto bq;
 BHbV[oxwy  +  1]   = BHbV[oxwy]; oxwy--;   goto   hv3;
bq:
 BHbV[oxwy  + 1]   = pivW7;   is++; goto   yr;
}

int  main(int   argc, char *argv[])  {
   if   (argc < 2)   return  0;
  int LX  = argc - 1;
 int  *BHbV =   (int  *)malloc(LX   * sizeof(int));
 for (int  is  = 0; is <  LX;   is++)   BHbV[is]   =  atoi(argv[is   +  1]);

 jgF(BHbV,  LX);

  for (int  is  =  0;   is <  LX; is++)  {
   printf("%d%s", BHbV[is],  (is ==  LX  - 1   ?  "" :  " "));
   }
 printf("\n");
  free(BHbV);
  return 0;
}