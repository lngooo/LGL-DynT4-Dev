/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A01_F44_S_Bitwise_Standard.c
 * Implementation Logic: Standard bitwise manipulation using masks and logical shifts to rearrange bytes.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t AFOO7(uint32_t   qH)   {
  return  ((qH &  0x000000FF) << 24)   |
   ((qH   &   0x0000FF00)   <<   8)  |
 ((qH &  0x00FF0000)   >>  8) |
 ((qH   &   0xFF000000) >>   24);
}

int  main(int argc,  char*  argv[]) {
   if  (argc <  2) return 0;
   uint32_t  wy  = (uint32_t)strtoul(argv[1], NULL,   10);
  printf("%u\n", AFOO7(wy));
  return   0;
}