/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A17_F41_S_Sideways_Add.c
 * Implementation Logic: Sideways addition logic using a series of specific bitwise constants.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int   xiA5(uint32_t   q4)   {
 q4 =  (q4 & 0x55555555) +  ((q4 >>  1) &  0x55555555);
 q4   =  (q4  &   0x33333333)   +   ((q4   >>  2)   &   0x33333333);
 q4   =   (q4  &  0x0F0F0F0F)   +   ((q4  >>   4)  &  0x0F0F0F0F);
  q4 =  (q4 &   0x00FF00FF)  +  ((q4  >>   8)   &  0x00FF00FF);
  q4   = (q4   &   0x0000FFFF) +   ((q4   >> 16)   &   0x0000FFFF);
   return   (int)q4;
}

int   main(int argc,   char*  argv[]) {
  if  (argc   <  2)  return   0;
  uint32_t Mh   = (uint32_t)strtoul(argv[1],   NULL,   10);
   printf("%d\n", xiA5(Mh));
  return   0;
}