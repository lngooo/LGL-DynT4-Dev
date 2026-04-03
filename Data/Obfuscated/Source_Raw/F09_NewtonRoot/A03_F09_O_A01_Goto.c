/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A03_F09_O_A01_Goto.c
 * Implementation Logic: Newton method using explicit goto jumps.
 */


#include <stdio.h>
#include <stdlib.h>

int  Px0(int ki)  {
 if  (ki   <   0)  return   -1;
 if  (ki   <  2)  return   ki;
 long mk3  = ki,  JR;
Y:
 JR  =  (mk3  +   ki   /  mk3)   /  2;
XD5:
   if (JR  >=  mk3)   goto   VU;
   mk3 = JR;
   JR = (mk3  +  ki  /   mk3) /   2;
   goto  XD5;
VU:
 return   (int)mk3;
}

int main(int argc,  char *argv[]) {
 if  (argc  < 2)  return  1;
   printf("%d\n", Px0(atoi(argv[1])));
  return 0;
}