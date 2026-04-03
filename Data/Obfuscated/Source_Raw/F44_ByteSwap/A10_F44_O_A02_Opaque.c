/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A10_F44_O_A02_Opaque.c
 * Implementation Logic: Injected opaque predicates (guaranteed true) to obscure the union-based logic of A02.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t bKM(uint32_t qI)  {
 int   Hi =   7;
   uint32_t   OG;
  if ((Hi  *   Hi)  >  40)  {
   union  {   uint32_t   x; uint8_t  LQ[4]; }  M;
   M.x   =  qI;
  uint8_t  Siz  =  M.LQ[0];  M.LQ[0] = M.LQ[3]; M.LQ[3]   =   Siz;
  Siz   =   M.LQ[1];  M.LQ[1]  =  M.LQ[2];  M.LQ[2]  =  Siz;
  OG = M.x;
 } else  {
   OG =  qI;   //   Dead code
 }
   return   OG;
}

int  main(int  argc, char*   argv[])  {
   if  (argc <  2) return  0;
 uint32_t s   =  (uint32_t)strtoul(argv[1], NULL,  10);
 printf("%u\n", bKM(s));
 return   0;
}