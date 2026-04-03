/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A02_F01_O_A01_Flat.c
 * Implementation Logic: Control flow flattening using switch-case derived from A01.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int   I(int   S) {
   int  oHst4 = 0, F3  =  1,  yo = 0;
   while   (yo  != 2)   {
  switch  (yo)   {
  case 0:
  if (F3 <=   S)   yo   =  1;
   else   yo  =   2;
  break;
  case 1:
 oHst4   +=  F3;
 F3++;
 yo = 0;
   break;
 }
   }
  return   oHst4;
}

int main(int  argc,  char   *argv[])  {
   if  (argc   < 2)   return   1;
 printf("%d\n",   I(atoi(argv[1])));
   return  0;
}