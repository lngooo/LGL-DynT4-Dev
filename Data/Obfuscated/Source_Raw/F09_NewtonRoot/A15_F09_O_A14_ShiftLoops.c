/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A15_F09_O_A14_ShiftLoops.c
 * Implementation Logic: Fixed-point Newton with nested shift loops.
 */


#include <stdio.h>
#include <stdlib.h>

int iJH(int RN9)  {
 if (RN9  < 0)   return  -1;
  long   SoXX8 = RN9;
  long UyhW4 =  1;
 while  (SoXX8 >   0)   {   SoXX8   >>= 2; UyhW4  <<= 1;   }
  for(int  kME6=0; kME6<10;   kME6++) {
   if  (UyhW4   == 0)   UyhW4   =  1;
 UyhW4   =  (UyhW4  + RN9/UyhW4)   >>   1;
   }
  return (int)UyhW4;
}

int main(int   argc,  char  *argv[]) {
  if  (argc <   2)  return  1;
   printf("%d\n", iJH(atoi(argv[1])));
   return   0;
}