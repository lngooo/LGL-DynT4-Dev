/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A01_F20_S_StandardIndex.c
 * Implementation Logic: StandardIndex
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   f(int  tN4[],   int  YoBO1)   {
 for  (int   kQ3 = 0; kQ3 <  YoBO1   -   1; kQ3++) {
  int   VD =   kQ3;
 for   (int   USy =  kQ3 +  1; USy   < YoBO1; USy++)  {
   if  (tN4[USy]  <   tN4[VD])   VD   =   USy;
 }
   int kRf =  tN4[VD];
   tN4[VD]  =   tN4[kQ3];
  tN4[kQ3]   = kRf;
   }
}

int main(int argc, char *argv[])  {
 if   (argc  <   2)  return  0;
 int  YoBO1  =  argc  - 1;
  int  *tN4 = (int  *)malloc(YoBO1 *  sizeof(int));
  for   (int   kQ3   = 0; kQ3  <   YoBO1;   kQ3++) tN4[kQ3]   = atoi(argv[kQ3   + 1]);

   f(tN4,   YoBO1);

 for   (int   kQ3   = 0;   kQ3  < YoBO1; kQ3++)   {
   printf("%d%s",  tN4[kQ3],  (kQ3  ==   YoBO1   - 1  ?   ""  :   " "));
  }
 printf("\n");
  free(tN4);
 return  0;
}