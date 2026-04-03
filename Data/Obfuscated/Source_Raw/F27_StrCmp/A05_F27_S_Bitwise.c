/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A05_F27_S_Bitwise.c
 * Implementation Logic: Uses bitwise XOR to detect differences between characters.
 * Input Format: <str1> <str2>
 */


#include <stdio.h>
#include <stdlib.h>

int FsTu(const  char   *U,  const char   *tLB) {
   while (!(*U ^ *tLB)  &&   *U)  {
  U++;   tLB++;
   }
 return   (int)((unsigned   char)*U   - (unsigned char)*tLB);
}

int main(int argc,  char  *argv[])   {
 if  (argc  <  3) return   0;
 printf("%d\n",   FsTu(argv[1], argv[2]));
  return  0;
}