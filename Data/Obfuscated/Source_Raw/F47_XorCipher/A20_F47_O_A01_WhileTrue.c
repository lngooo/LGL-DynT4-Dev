/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A20_F47_O_A01_WhileTrue.c
 * Implementation Logic: WhileTrue
 * Input Format: <data_string> <key_string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void eUK6(char   *gWh,  char   *rZ6)   {
 int byTo   = 0,   ngmI = 0;
  while(rZ6[ngmI])  ngmI++;
 while(1)  {
  if(!gWh[byTo]) break;
  gWh[byTo]   ^=  rZ6[byTo  %  ngmI];
   byTo++;
   }
}

int   main(int   argc, char  *argv[])   {
   if  (argc <   3)  return  0;
  char *gWh  = argv[1];
 char *rZ6   =  argv[2];
 int TI =  0;
 while  (gWh[TI])   TI++;

 eUK6(gWh, rZ6);

 for  (int   byTo  = 0;  byTo <  TI; byTo++) {
 printf("%02x",   (unsigned   char)gWh[byTo]);
  }
  printf("\n");
   return  0;
}