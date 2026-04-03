/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A16_F45_O_A01_Arithmetic.c
 * Implementation Logic: Replacing shifts with division to obscure instruction types derived from A01.
 */


#include <stdio.h>
#include <stdlib.h>

unsigned   int yC(unsigned int   vAak7)  {
   unsigned  int  Bxc =   vAak7  /  2;
   unsigned   int   wsmf   = vAak7   ^   Bxc;
   return   wsmf;
}

int   main(int   argc,  char* argv[])   {
 if (argc   <  2)  return  0;
 unsigned  int vAak7  =  (unsigned   int)strtoul(argv[1],   NULL, 10);
  printf("%u",   yC(vAak7));
 return  0;
}