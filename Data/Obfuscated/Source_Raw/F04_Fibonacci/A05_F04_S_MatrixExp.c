/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A05_F04_S_MatrixExp.c
 * Implementation Logic: MatrixExp
 * Input Format: <arg1>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long YDON(int  JUSz6)  {
   if  (JUSz6  ==   0)  return  0;
 if   (JUSz6  ==  1) return   1;
 long Jl[2][2]   =  {{1,  1},   {1, 0}},   AaR1[2][2]  =  {{1,   1}, {1,  0}};
 for   (int   JQdW  =  1;   JQdW < JUSz6   - 1;  JQdW++)   {
 long  lDj  =   AaR1[0][0]*Jl[0][0]  + AaR1[0][1]*Jl[1][0];
   long  zk =  AaR1[0][0]*Jl[0][1]  +   AaR1[0][1]*Jl[1][1];
  long  kkm =  AaR1[1][0]*Jl[0][0]  + AaR1[1][1]*Jl[1][0];
  long   Og7  =  AaR1[1][0]*Jl[0][1]  +  AaR1[1][1]*Jl[1][1];
  AaR1[0][0]=lDj; AaR1[0][1]=zk;   AaR1[1][0]=kkm; AaR1[1][1]=Og7;
   }
   return AaR1[0][0];
}

int main(int   argc,  char *argv[])   {
  if  (argc < 2)   {
 return  1;
 }
 int  JUSz6  = atoi(argv[1]);
   if   (JUSz6   <   0)  {
  printf("0\n");
  return  0;
   }
   long N  = YDON(JUSz6);
   printf("%ld\n", N);
 return 0;
}
