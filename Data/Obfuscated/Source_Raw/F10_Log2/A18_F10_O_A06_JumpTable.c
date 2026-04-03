/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A18_F10_O_A06_JumpTable.c
 * Implementation Logic: JumpTable
 * Input Format: <integer>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  wqhg(int   c1)  {
 int geM =   -1;
   unsigned  int U =  (unsigned int)c1;
   unsigned   int f = 1;
kcwZ:
   if   (f   >  U)  return geM;
 f *=  2;
 geM++;
 if  (f   == 0) return geM;
  goto kcwZ;
}

int main(int argc,   char  *argv[])  {
   if   (argc  <  2) return 0;
 int c1  =   atoi(argv[1]);
  if  (c1 <=   0)  return   0;  
 int   oml  = wqhg(c1);
   printf("%d\n",  oml);
  return   0;
}