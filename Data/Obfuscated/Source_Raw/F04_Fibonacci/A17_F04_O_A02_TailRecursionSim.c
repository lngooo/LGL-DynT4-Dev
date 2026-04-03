/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A17_F04_O_A02_TailRecursionSim.c
 * Implementation Logic: TailRecursionSim
 * Input Format: <arg1>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long   jF(int  Lo)   {
 long  bbz   = 0,  YeLB  =   1,  yeU7;
   GxwQ:
   if  (Lo  ==  0)  return  bbz;
 if (Lo   ==   1)   return  YeLB;
   yeU7   =  bbz +   YeLB;  bbz   = YeLB;   YeLB =   yeU7;  Lo--;
   goto   GxwQ;
}

int main(int  argc,  char *argv[]) {
   if (argc  <  2) {
   return  1;
  }
  int Lo   = atoi(argv[1]);
   if (Lo   <   0) {
   printf("0\n");
  return  0;
 }
  long   J =  jF(Lo);
 printf("%ld\n",   J);
 return  0;
}
