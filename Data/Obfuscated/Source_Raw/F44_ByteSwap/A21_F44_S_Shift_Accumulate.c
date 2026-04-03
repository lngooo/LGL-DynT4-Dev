/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A21_F44_S_Shift_Accumulate.c
 * Implementation Logic: Iterative shift-right and shift-left accumulation to reverse byte order.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t GMlg(uint32_t   yYp) {
 uint32_t  QM = 0;
 for   (int   yptE =   0; yptE   <   4;  yptE++) {
  QM =   (QM   << 8)   |  (yYp  & 0xFF);
 yYp  >>=   8;
   }
 return QM;
}

int main(int  argc,  char* argv[])   {
   if  (argc <  2)   return   0;
  uint32_t   lOb =   (uint32_t)strtoul(argv[1],  NULL,   10);
  printf("%u\n",   GMlg(lOb));
 return 0;
}