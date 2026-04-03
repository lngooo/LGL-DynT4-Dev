/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A11_F41_S_Modulo_Math.c
 * Implementation Logic: Mathematical simulation of bit extraction using modulo 2.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int  Wi(uint32_t   tr)   {
 int   LFF =   0;
   for  (int hbV  =   0;  hbV   <  32; hbV++)   {
  if   (tr  % 2   !=   0) LFF++;
   tr   /= 2;
   }
  return   LFF;
}

int main(int  argc,  char*  argv[]) {
  if  (argc  <   2)   return   0;
 uint32_t   Uh   =  (uint32_t)strtoul(argv[1], NULL,   10);
  printf("%d\n", Wi(Uh));
 return 0;
}