/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A19_F36_O_A01_LongLong.c
* Logic: Uses 64-bit integer casts for character math derived from A01.
*/


#include <stdio.h>

void   bHG8(char* rQA) {
   for (int   hZ7  = 0; rQA[hZ7]; hZ7++)  {
   long   long  R  =  (long   long)rQA[hZ7];
   if   (R >= 97LL  &&  R   <= 122LL)  R   -=   32LL;
  else  if  (R   >= 65LL   &&   R  <=  90LL)   R   += 32LL;
 rQA[hZ7]   =   (char)R;
 }
}

int main(int   argc,   char* argv[])   {
   if (argc   <  2)   return  0;
   bHG8(argv[1]);
  printf("%s\n",   argv[1]);
  return  0;
}