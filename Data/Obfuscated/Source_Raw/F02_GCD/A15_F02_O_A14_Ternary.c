/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A15_F02_O_A14_Ternary.c
 * Implementation Logic: Prime factorization logic obfuscated with ternary operators.
 * Input Format: <a> <b>
 */


#include <stdio.h>
#include <stdlib.h>

int  B(int  n,  int   T9)   {
  int  kHV  =  abs(n),   yT  =  abs(T9), l1   =  1,  VKKu5 =  2;
  if  (!kHV ||   !yT) return   kHV | yT;
  while   (VKKu5   <=   (kHV   <  yT  ? kHV :  yT)) {
  ((kHV   % VKKu5  ==   0)   &&   (yT  %  VKKu5  ==   0))   ?   (l1  *=  VKKu5, kHV   /=  VKKu5, yT /=   VKKu5)   :  (VKKu5++);
 }
   return   l1;
}

int main(int   argc, char *argv[])   {
 if (argc  < 3)   return 1;
 printf("%d\n",   B(atoi(argv[1]), atoi(argv[2])));
 return 0;
}