/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A15_F35_S_Bitset_Optimized.c
 * Logic: Map vowels to bits in a long long and use bitwise shift to check.
 */


#include <stdio.h>
#include <stdlib.h>

int f(const char* Zw4) {
 unsigned long long   E7   =   0;
  char   brER[]   =   "aeiouAEIOU";
 for(int   b2=0;  brER[b2];  b2++) E7  |= (1ULL   <<  (brER[b2] %   64));
   int  MYXi  = 0;
  while(*Zw4) {
  if   (E7  &   (1ULL   <<   (*Zw4   %  64)))  {
   // Re-verify   due  to   potential   collision   in modulo   64
 char  tBd =   *Zw4;
  if (tBd=='a'||tBd=='e'||tBd=='i'||tBd=='o'||tBd=='u'||tBd=='A'||tBd=='E'||tBd=='I'||tBd=='O'||tBd=='U')
  MYXi++;
 }
  Zw4++;
  }
  return   MYXi;
}

int main(int   argc, char* argv[])   {
   if (argc <  2)   {   printf("0\n");   return 0;  }
  printf("%d\n",  f(argv[1]));
  return 0;
}