/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A13_F41_S_Byte_Sum.c
 * Implementation Logic: Processing integer as 4 separate bytes and summing their bits using a 256-entry table simulation.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int  c(uint8_t  XPd)  {
   int zq =  0;
 for(int  KVvh=0;  KVvh<8;   KVvh++)  {   if((XPd   >>  KVvh) &  1) zq++; }
 return   zq;
}

int   Si3(uint32_t qjgq4)   {
 return c((uint8_t)(qjgq4   &   0xFF)) +   
   c((uint8_t)((qjgq4 >>   8)   & 0xFF))   + 
  c((uint8_t)((qjgq4  >> 16)   &  0xFF))   +  
 c((uint8_t)((qjgq4   >> 24) & 0xFF));
}

int main(int   argc,  char*  argv[]) {
  if  (argc  <   2)  return 0;
   uint32_t ZD4  =  (uint32_t)strtoul(argv[1], NULL, 10);
  printf("%d\n", Si3(ZD4));
  return  0;
}