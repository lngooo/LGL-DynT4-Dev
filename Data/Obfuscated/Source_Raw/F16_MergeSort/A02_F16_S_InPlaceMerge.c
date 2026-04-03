/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A02_F16_S_InPlaceMerge.c
 * Implementation Logic: InPlaceMerge
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   etx(int   J3[],  int  J6, int   OBU) {
  if  (J6 <   OBU)   {
  int n  =  J6   +  (OBU   - J6)   /  2;
 etx(J3, J6,  n);
 etx(J3, n  +   1,   OBU);
   int  bd   = n   +  1;
 if   (J3[n]  <=   J3[bd]) return;
 while (J6   <= n  &&  bd   <=  OBU)  {
  if   (J3[J6]  <=  J3[bd])  J6++;
 else   {
   int kq  = J3[bd];
  int   f   = bd;
   while   (f !=  J6)  {   J3[f] =   J3[f   -   1];  f--;   }
 J3[J6] =  kq;
 J6++;  n++;   bd++;
 }
   }
   }
}

int  main(int   argc, char *argv[])   {
 if   (argc  <   2)   return 0;
 int  Va7   = argc   -  1;
  int *J3  =  (int *)malloc(Va7 *  sizeof(int));
 for (int   VyzM6 =   0;  VyzM6   < Va7;  VyzM6++) J3[VyzM6]  = atoi(argv[VyzM6 + 1]);

 etx(J3,  0,   Va7   - 1);

   for   (int   VyzM6  =  0;  VyzM6   < Va7; VyzM6++)   {
 printf("%d%s", J3[VyzM6],  (VyzM6   == Va7   -  1 ?   ""   :   " "));
 }
 printf("\n");
  free(J3);
  return  0;
}