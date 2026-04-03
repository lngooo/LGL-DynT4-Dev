/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A07_F02_O_A06_Unrolled.c
 * Implementation Logic: Stein's algorithm with partially unrolled bit-shifting loops.
 * Input Format: <a> <b>
 */


#include <stdio.h>
#include <stdlib.h>

int  pa(int jIBs, int  u)   {
  jIBs   = abs(jIBs);   u  =   abs(u);
  if   (!jIBs || !u) return   jIBs  | u;
  int ZnaP = 0;
 while  (!((jIBs&1)||(u&1)))  {   jIBs>>=1;  u>>=1;   ZnaP++;  }
  while (u)   {
 while  (!(u&1))  u>>=1;
 if   (jIBs  >  u) {  int  O  =   jIBs;  jIBs  =  u; u  =   O;  }
  u   -=  jIBs;
 }
   return  jIBs <<  ZnaP;
}

int   main(int argc,   char  *argv[])  {
 if (argc  <   3)  return  1;
  printf("%d\n",   pa(atoi(argv[1]),   atoi(argv[2])));
  return 0;
}