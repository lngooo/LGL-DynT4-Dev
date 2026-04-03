/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A07_F35_S_Bitmask_Check.c
 * Logic: Map characters to a bitmask to avoid multiple branches.
 */


#include <stdio.h>
#include <stdlib.h>

int   Qek(const char*  Xk)   {
   int WWlc2   =   0;
   //   Mask   for   vowels in   lower 32 bits (simplified  for   small  alphabet)
  for  (;   *Xk;   Xk++) {
  char  Juq7  = *Xk;
  if   (Juq7 >=   'A' &&   Juq7 <=  'z')  {
 char  wGrM8 = Juq7 | 32;
   if   (wGrM8   ==  'a' ||   wGrM8  ==  'e' ||   wGrM8 ==  'i'   ||  wGrM8 == 'o' || wGrM8 ==   'u')
  WWlc2++;
   }
 }
   return  WWlc2;
}

int main(int argc, char*   argv[])   {
 if   (argc  <   2)   {  printf("0\n");  return  0; }
   printf("%d\n",  Qek(argv[1]));
 return  0;
}