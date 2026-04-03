/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A16_F27_O_A08_FlatMachine.c
 * Implementation Logic: Logic of A08 refactored into a state machine.
 */


#include <stdio.h>
#include <stdlib.h>

int  cPQv(const   char   *Ct,  const   char *dWI)   {
 int zrSE = 5;
  while(zrSE  != 0) {
 if(zrSE ==  5) {  if(*Ct   && *dWI  &&   *Ct  ==  *dWI)  zrSE   = 10;  else zrSE  =  15;   }
  else  if(zrSE  ==  10) { Ct++;   dWI++; zrSE  =   5; }
 else if(zrSE ==   15)   return  *(unsigned  char*)Ct   -  *(unsigned char*)dWI;
 }
  return  0;
}

int  main(int argc, char *argv[])  {
   if   (argc   <   3)  return  0;
  printf("%d\n", cPQv(argv[1], argv[2]));
  return   0;
}