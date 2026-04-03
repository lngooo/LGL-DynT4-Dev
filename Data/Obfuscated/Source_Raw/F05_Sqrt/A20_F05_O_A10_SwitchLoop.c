/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A20_F05_O_A10_SwitchLoop.c
 * Implementation Logic: Brute force re-structured into a switch-driven state loop.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int   UOv4(int  b) {
  if   (b  <   0) return   -1;
 long  BC8  =   0;
   int  BNi8 = 0;
   while (BNi8  !=  1)   {
   switch (BNi8)  {
  case 0:   
   if   ((BC8   +   1)   *   (BC8   + 1)  <=  b)  BC8++;
   else   BNi8   =   1;
 break;
   }
  }
   return   (int)BC8;
}

int main(int argc,  char   *argv[])   {
 if  (argc  < 2) return   1;
  printf("%d\n",  UOv4(atoi(argv[1])));
 return 0;
}