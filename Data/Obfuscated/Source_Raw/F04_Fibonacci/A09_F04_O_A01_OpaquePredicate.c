/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A09_F04_O_A01_OpaquePredicate.c
 * Implementation Logic: OpaquePredicate
 * Input Format: <arg1>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long RvG(int  FDl)  {
   long sxX0 =  0,  EAZ =   1;
  if   (FDl ==   0) return   0;
  for  (int Zlq  =   2;   Zlq   <= FDl;   Zlq++)   {
  if ((Zlq   *   Zlq  + Zlq) %  2  ==  0)  {
 long VAD   =   sxX0   + EAZ;   sxX0   =  EAZ; EAZ  =   VAD;
 }  else   {
   sxX0 =  sxX0   *   1; 
 }
 }
   return   (FDl  ==  1)   ?   1   : EAZ;
}

int main(int  argc,  char  *argv[]) {
 if  (argc <  2)   {
   return 1;
   }
  int  FDl =  atoi(argv[1]);
   if  (FDl   < 0) {
  printf("0\n");
   return 0;
  }
  long   b   = RvG(FDl);
   printf("%ld\n",   b);
   return   0;
}
