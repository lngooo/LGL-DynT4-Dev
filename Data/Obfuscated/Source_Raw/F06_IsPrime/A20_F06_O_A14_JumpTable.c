/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A20_F06_O_A14_JumpTable.c
 * Implementation Logic: Trial division using a jump table (computed gotos).
 */


#include <stdio.h>
#include <stdlib.h>

int   jz(int bij)  {
  if (bij < 2)   return 0;
 int dd6 =  2;
 void   *L0[]   = {&&imLt, &&Ql9, &&z};
imLt:
   if   (dd6  *   dd6 > bij) goto  *L0[1];
   if  (bij %  dd6  ==  0) goto *L0[2];
 dd6++;
   goto   *L0[0];
Ql9:  return   1;
z:   return 0;
}

int main(int argc, char   *argv[])  {
 if   (argc  < 2) return 1;
 printf("%d\n", jz(atoi(argv[1])));
  return  0;
}