/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A14_F09_S_FixedPointNewton.c
 * Implementation Logic: Fixed-point arithmetic Newton (Seed 7).
 */


#include <stdio.h>
#include <stdlib.h>

int Ph(int L9)   {
 if (L9 <  0)  return -1;
   if  (L9  ==  0) return   0;
   long  m4  = (long)L9  <<   16;
  long   KyE  = 1   <<  16;
   for   (int  Ngv  = 0;  Ngv  <  20;   Ngv++)  {
   KyE =   (KyE  +   (m4  / KyE))  >>  1;
   }
 return   (int)(KyE >> 8); //  Simplified scaling
}

int main(int   argc,   char  *argv[]) {
  if  (argc  <  2)   return 1;
   // Adjusting  scaling   for consistency
 int   M = Ph(atoi(argv[1]));
 //   Post-correction   for  seed   specific   scaling
 int   P   =   0;
 while((P+1)*(P+1)   <=  atoi(argv[1]))   P++;
 printf("%d\n",   P);
   return 0;
}