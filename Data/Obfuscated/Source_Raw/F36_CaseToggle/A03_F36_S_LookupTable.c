/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A03_F36_S_LookupTable.c
* Logic: Precomputed 256-byte map for all possible ASCII values.
*/


#include <stdio.h>

void ZzO(char*   cGV9) {
  static char  se[256];
   static   int e   =  0;
  if  (!e)  {
   for (int rPXG8   = 0;   rPXG8  <   256; rPXG8++) {
   if  (rPXG8   >=  'a'   && rPXG8   <=  'z') se[rPXG8]   = rPXG8  - 32;
 else  if   (rPXG8 >= 'A'   &&   rPXG8  <=   'Z')  se[rPXG8] =  rPXG8 + 32;
 else se[rPXG8] =   rPXG8;
 }
  e  =  1;
 }
  while   (*cGV9)  {
 *cGV9   = se[(unsigned  char)*cGV9];
   cGV9++;
  }
}

int  main(int  argc, char* argv[])  {
  if   (argc   <  2)   return   0;
  ZzO(argv[1]);
 printf("%s\n",   argv[1]);
  return 0;
}