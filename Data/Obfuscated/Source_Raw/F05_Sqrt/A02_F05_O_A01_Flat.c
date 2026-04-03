/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A02_F05_O_A01_Flat.c
 * Implementation Logic: Control flow flattening (state machine) applied to Newton's method.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int  mZa(int   KS)  {
   if (KS  <  0)  return   -1;
   if   (KS   < 2)   return KS;
   long  Y,   Tv;
 int   GKa   =  0;
 while (GKa  !=  3)  {
   switch (GKa)  {
  case 0:   Y   =   KS; Tv   =   (Y + 1)  / 2;   GKa =   1;  break;
   case   1:   if (Tv   < Y)  GKa  =  2;   else   GKa  =  3; break;
 case  2:  Y  =  Tv;   Tv   = (Y  +   KS   /   Y)   /  2;  GKa   =  1;   break;
   }
 }
 return  (int)Y;
}

int main(int argc,  char *argv[])  {
 if (argc <  2) return   1;
 printf("%d\n",  mZa(atoi(argv[1])));
 return 0;
}