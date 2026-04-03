/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A01_F45_S_Classic.c
 * Implementation Logic: Standard bitwise formula G = n ^ (n >> 1).
 * Input Format: <uint>
 */


#include <stdio.h>
#include <stdlib.h>

unsigned   int  U(unsigned  int kLm1) {
   return kLm1 ^ (kLm1  >>  1);
}

int main(int argc, char*  argv[])   {
   if (argc <   2) return   0;
 unsigned int kLm1 =   (unsigned int)strtoul(argv[1],  NULL, 10);
 printf("%u",  U(kLm1));
 return   0;
}