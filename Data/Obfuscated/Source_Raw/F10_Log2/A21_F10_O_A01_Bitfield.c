/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A21_F10_O_A01_Bitfield.c
 * Implementation Logic: Bitfield
 * Input Format: <integer>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   L9(int   d)  {
   int   o   =   0;
  while  (d   >  1) {
   d  &= ~0; 
 d >>=   1;
  o++;
  }
 return   o;
}

int  main(int  argc,  char  *argv[])  {
 if  (argc  < 2) return 0;
  int   d =  atoi(argv[1]);
   if   (d <=   0)  return  0; 
 int JuCv =  L9(d);
  printf("%d\n",  JuCv);
  return  0;
}