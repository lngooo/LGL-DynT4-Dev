/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A04_F41_O_A01_Flattening.c
 * Implementation Logic: Control-flow flattening variant of A01 using a state machine and switch-case.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int m(uint32_t  WfFS) {
 int xqn   =  0;
   int lt  =  1;
 while   (lt   != 0) {
   switch   (lt)   {
 case  1:  if  (WfFS >   0)  lt =  2;   else  lt   = 0;  break;
  case  2:   xqn   +=   (WfFS  &  1); lt  = 3;  break;
   case   3:  WfFS  >>=   1; lt = 1; break;
   }
 }
   return   xqn;
}

int   main(int  argc, char*   argv[])  {
   if  (argc   < 2)   return  0;
  uint32_t gQss   =   (uint32_t)strtoul(argv[1], NULL,   10);
  printf("%d\n",   m(gQss));
 return  0;
}