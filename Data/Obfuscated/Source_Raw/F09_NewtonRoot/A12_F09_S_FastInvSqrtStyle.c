/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A12_F09_S_FastInvSqrtStyle.c
 * Implementation Logic: Fast Inverse Square Root style initial guess (Seed 6).
 */


#include <stdio.h>
#include <stdlib.h>

int FZNN(int  yUZ5) {
   if   (yUZ5  <   0)  return   -1;
   if (yUZ5   <  2)   return   yUZ5;
 float j = (float)yUZ5;
  unsigned int BKQw9 =   *(unsigned   int *)&j;
 BKQw9   =  0x1fbd1df5 +  (BKQw9  >> 1);   // Quake-style magic  guess for  sqrt(n)
  j = *(float  *)&BKQw9;
 // Perform  2 Newton  iterations
 long  aRa6   =   (long)j;
 if  (aRa6 ==  0)  aRa6  = 1;
 aRa6  =   (aRa6 + yUZ5 /   aRa6)   /   2;
   aRa6 = (aRa6 + yUZ5  /   aRa6)   /  2;
   if  ((aRa6  + 1) * (aRa6   +  1)  <=  yUZ5)   aRa6++;
 return  (int)aRa6;
}

int main(int argc,  char  *argv[])  {
 if  (argc  <  2) return  1;
   printf("%d\n",  FZNN(atoi(argv[1])));
 return   0;
}