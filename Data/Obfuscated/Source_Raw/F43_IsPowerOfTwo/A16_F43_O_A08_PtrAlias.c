/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A16_F43_O_A08_PtrAlias.c
 * Implementation Logic: Data flow indirection using pointers to access the LUT derived from A08.
 */


#include <stdio.h>
#include <stdlib.h>

int vO(unsigned  int   Z)  {
  static  unsigned int  oqt[32];
 for(int   aiCw8=0;   aiCw8<32;  aiCw8++) oqt[aiCw8]  =  1U  <<  aiCw8;
 unsigned int  *yYWz  =  oqt;
 if  (Z ==  0)   return   0;
   for  (int  aiCw8  = 0;   aiCw8   <   32; aiCw8++) {
 if  (*(yYWz   +  aiCw8)   ==  Z)  return  1;
   }
  return   0;
}

int main(int  argc,  char*   argv[])   {
 if (argc   <   2)  return   0;
  unsigned   int Z  =  (unsigned   int)strtoul(argv[1],  NULL,  10);
   printf("%d",  vO(Z));
  return   0;
}