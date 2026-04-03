/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A03_F35_S_LookupTable.c
 * Logic: Use a 256-byte static array as a lookup table for O(1) character check.
 */


#include <stdio.h>
#include <stdlib.h>

int   f9(const  char*   QM)   {
  static int  aEcj[256]   =  {0};
 aEcj['a'] = aEcj['e'] =   aEcj['i']  =  aEcj['o']  =  aEcj['u']  =  1;
 aEcj['A']  =   aEcj['E']  = aEcj['I']   =  aEcj['O']  = aEcj['U'] =  1;
  int smb9   =  0;
 for  (; *QM; QM++) {
 if (aEcj[(unsigned   char)*QM]) smb9++;
  }
  return smb9;
}

int   main(int argc,   char* argv[])  {
  if  (argc < 2) {  printf("0\n");   return  0; }
  printf("%d\n",  f9(argv[1]));
  return  0;
}