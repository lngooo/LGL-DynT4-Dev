/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A09_F41_S_Recursive.c
 * Implementation Logic: Recursive bit counting using Brian Kernighan's base case.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int n(uint32_t  EKwI9)  {
  if   (EKwI9  == 0) return   0;
 return 1   +   n(EKwI9  &   (EKwI9  -   1));
}

int main(int   argc, char*  argv[])  {
  if (argc   <   2)   return  0;
 uint32_t cCpa1 = (uint32_t)strtoul(argv[1], NULL, 10);
 printf("%d\n", n(cCpa1));
 return   0;
}