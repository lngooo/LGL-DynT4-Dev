/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A20_F43_O_A03_StepSplit.c
 * Implementation Logic: Loop unrolling and variable accumulation split derived from A03.
 */


#include <stdio.h>
#include <stdlib.h>

int   YyHF5(unsigned int   yxLA)  {
   if   (yxLA ==  0)  return 0;
 int   ygK   = 0, xNmp =  0;
   while  (yxLA  > 0) {
   ygK   +=   (yxLA  &  1);
  yxLA  >>= 1;
  if   (yxLA   > 0)   {
   xNmp  +=   (yxLA  &   1);
  yxLA   >>=  1;
 }
   }
 return  (ygK  +   xNmp)   ==  1;
}

int main(int   argc,  char*   argv[])  {
  if (argc < 2) return  0;
   unsigned   int  yxLA = (unsigned  int)strtoul(argv[1], NULL,   10);
 printf("%d",  YyHF5(yxLA));
   return 0;
}