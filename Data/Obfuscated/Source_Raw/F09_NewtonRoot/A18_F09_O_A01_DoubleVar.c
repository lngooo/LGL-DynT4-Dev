/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A18_F09_O_A01_DoubleVar.c
 * Implementation Logic: Standard Newton with split variables and redundant ops.
 */


#include <stdio.h>
#include <stdlib.h>

int  oO(int   NiD) {
  if (NiD  <   0)  return  -1;
  long  MNO7  = NiD, r  = NiD;
 long qp   =  (MNO7   +   1)   /   2;
  while   (qp   < r)  {
   r   = qp;
 long H =   NiD   /   r;
  qp  = (r   +  H)   /  2;
  }
 return  (int)r;
}

int main(int   argc,  char   *argv[])   {
 if  (argc <  2) return 1;
   printf("%d\n", oO(atoi(argv[1])));
   return  0;
}