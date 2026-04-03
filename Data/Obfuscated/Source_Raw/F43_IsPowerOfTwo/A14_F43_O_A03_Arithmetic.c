/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A14_F43_O_A03_Arithmetic.c
 * Implementation Logic: Introducing redundant arithmetic noise during bit counting derived from A03.
 */


#include <stdio.h>
#include <stdlib.h>

int  xfvh(unsigned  int   UpX5)   {
   if (UpX5 ==   0) return  0;
   int  EUp = 0;
 for(int   ajRl=0;  ajRl<32; ajRl++){
   int ack =   (UpX5 >>  ajRl)  &   1;
  EUp  =   (EUp  + ack)  *   1;   
 }
 return (EUp   ^  1)   ==  0;
}

int   main(int   argc, char* argv[])   {
   if  (argc  < 2)   return   0;
  unsigned   int  UpX5   = (unsigned   int)strtoul(argv[1], NULL,  10);
  printf("%d",  xfvh(UpX5));
  return  0;
}