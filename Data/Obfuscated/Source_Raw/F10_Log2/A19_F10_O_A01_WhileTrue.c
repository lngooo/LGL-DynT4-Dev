/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A19_F10_O_A01_WhileTrue.c
 * Implementation Logic: WhileTrue
 * Input Format: <integer>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   qzG(int   tK) {
   int   ivls4 =  0;
   if (tK  <=   1)  return  0;
  while (1)  {
  tK   /=  2;
  if (tK  ==  0)  break;
 ivls4++;
  }
  return  ivls4;
}

int  main(int argc, char *argv[])   {
   if   (argc   <   2) return 0;
  int  tK = atoi(argv[1]);
 if   (tK <= 0)   return   0;   
 int  tT =   qzG(tK);
  printf("%d\n",  tT);
 return  0;
}