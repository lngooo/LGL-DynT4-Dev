/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A14_F41_O_A01_LongLong.c
 * Implementation Logic: Instruction substitution using long long for intermediate values to expand data width.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int LGYM(uint32_t  hv) {
  unsigned long   long NNsU  =   hv;
  int   F   =  0;
   while (NNsU  >  0)  {
  if   ((NNsU   % 2ULL)  ==  1ULL) F++;
 NNsU = NNsU   >> 1;
  }
 return F;
}

int main(int argc, char*   argv[])  {
 if (argc < 2)  return  0;
   uint32_t  ATY8 =   (uint32_t)strtoul(argv[1], NULL, 10);
  printf("%d\n",  LGYM(ATY8));
 return  0;
}