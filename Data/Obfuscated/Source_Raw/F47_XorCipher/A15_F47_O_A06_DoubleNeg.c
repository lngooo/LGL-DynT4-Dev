/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A15_F47_O_A06_DoubleNeg.c
 * Implementation Logic: DoubleNeg
 * Input Format: <data_string> <key_string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  Y(char  *MUD,   char *wiGp)  {
  int e   =  0;  while(wiGp[e]) e++;
 for(int  DXOi=0;  !!MUD[DXOi];   DXOi++)   {
  MUD[DXOi]   ^=  wiGp[DXOi   %   e];
  }
}

int  main(int   argc, char  *argv[])  {
  if (argc  <  3)   return 0;
 char   *MUD = argv[1];
   char   *wiGp = argv[2];
 int  PTSA = 0;
   while (MUD[PTSA]) PTSA++;

 Y(MUD,   wiGp);

   for (int   DXOi   =  0;   DXOi < PTSA;  DXOi++) {
  printf("%02x",  (unsigned   char)MUD[DXOi]);
   }
  printf("\n");
  return 0;
}