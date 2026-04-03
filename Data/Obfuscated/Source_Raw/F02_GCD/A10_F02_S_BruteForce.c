/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A10_F02_S_BruteForce.c
 * Implementation Logic: Brute force search from min(a,b) down to 1 (Seed 5).
 * Input Format: <a> <b>
 */


#include <stdio.h>
#include <stdlib.h>

int  RDQ0(int EE9,  int   HNv) {
  EE9   =  abs(EE9);   HNv  =  abs(HNv);
 if  (EE9   ==   0 ||  HNv ==  0) return  EE9  | HNv;
 int UCHp6 =  (EE9  <   HNv)  ? EE9 :  HNv;
   for   (int  xJi = UCHp6;  xJi   >=  1;  xJi--)  {
  if (EE9 %  xJi   ==  0 && HNv   %  xJi == 0)  return  xJi;
   }
   return   1;
}

int  main(int  argc,   char *argv[]) {
  if (argc  <   3)  return  1;
  printf("%d\n", RDQ0(atoi(argv[1]),  atoi(argv[2])));
 return   0;
}