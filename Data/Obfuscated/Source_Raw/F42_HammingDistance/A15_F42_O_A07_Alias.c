/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A15_F42_O_A07_Alias.c
 * Implementation Logic: Using pointer aliasing to access the bytes of the XOR result derived from A07.
 * Input Format: <uint1> <uint2>
 */


#include <stdio.h>
#include <stdlib.h>

static const unsigned   char  mNFY[256] =   {
 0, 1,   1,   2,  1,  2, 2, 3,   1, 2,   2,   3, 2,   3,  3,  4,   1,   2,  2,  3,   2,  3,  3,   4, 2,   3, 3, 4,   3, 4, 4, 5,
   1,  2,  2, 3, 2, 3,   3,   4, 2, 3,   3, 4,  3,   4,   4,   5, 2,  3,   3,  4,  3, 4,  4, 5,  3, 4, 4,   5, 4,  5,  5,   6,
   1,   2, 2,   3,  2,   3, 3,   4,   2, 3, 3,  4,   3,  4, 4,   5, 2,  3,  3,   4,  3, 4,  4,   5,   3, 4,  4,  5,  4,   5,  5, 6,
 2, 3, 3,   4, 3,  4,   4, 5, 3,   4, 4, 5, 4, 5, 5,   6,  3,   4,   4,   5,   4,   5,   5, 6, 4,  5,  5, 6,  5,   6,   6, 7,
  1,   2,   2,  3, 2,  3,   3,  4, 2, 3,  3,  4,  3,  4, 4,   5, 2,  3, 3,   4,  3,  4,  4,  5,   3,  4, 4,   5, 4, 5, 5,   6,
  2,   3,   3,   4,   3, 4,  4,   5, 3, 4, 4,  5, 4,  5,   5, 6,   3,  4,  4, 5, 4,   5,   5,   6,  4, 5, 5,   6, 5,  6,  6,  7,
  2,   3,   3,   4,  3,  4, 4,  5,  3,  4,  4,  5,   4,  5,   5, 6, 3, 4,   4,   5,   4,   5,  5,  6, 4, 5,   5,  6, 5,  6,  6,  7,
   3,   4, 4,  5, 4, 5, 5,  6,  4, 5,  5,  6,  5,   6, 6,  7, 4,  5,   5,   6,   5, 6,  6, 7, 5,   6,  6, 7, 6, 7,  7, 8
};

int KCY(unsigned  int IC, unsigned   int   nW)   {
   unsigned   int V =   IC  ^ nW;
 unsigned  char *PRzL5   = (unsigned char  *)&V;
  int   xGr2 =   0;
   for (int  QzH = 0; QzH   < 4; QzH++) {
  xGr2 +=   mNFY[PRzL5[QzH]];
 }
 return  xGr2;
}

int main(int argc, char*  argv[])   {
   if  (argc  <  3)  return 0;
  unsigned int BUC   =  (unsigned  int)strtoul(argv[1],   NULL,   10);
   unsigned  int R  =  (unsigned  int)strtoul(argv[2],   NULL, 10);
 printf("%d",  KCY(BUC,  R));
   return 0;
}