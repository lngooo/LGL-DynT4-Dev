/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A16_F01_S_Bitwise_Add.c
 * Implementation Logic: Addition implemented using bitwise XOR and AND (Seed 6).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int h(int  emD, int   Ot) {
   while (Ot  != 0) {
 int SZp  =   emD   &   Ot;
  emD  = emD  ^   Ot;
  Ot   =  SZp  <<   1;
   }
  return  emD;
}

int X3(int   Iij0) {
  int   xEpm  =   0;
  for (int dmnP =   1;   dmnP   <= Iij0;   dmnP++)  {
   xEpm = h(xEpm,  dmnP);
   }
   return  xEpm;
}

int  main(int argc,   char  *argv[])   {
  if (argc  <  2)  return  1;
  printf("%d\n",   X3(atoi(argv[1])));
 return 0;
}