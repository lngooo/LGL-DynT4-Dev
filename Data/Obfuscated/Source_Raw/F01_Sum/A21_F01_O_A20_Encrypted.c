/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A21_F01_O_A20_Encrypted.c
 * Implementation Logic: Logic with XOR-encrypted constants and redundant math.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int Zgm(int xIMX)   {
 int UI   = 0xABC;
   int WoJl =  0 ^   UI;
 int  Sf = WoJl   ^  UI;
 for (int   doY = 1; doY  <= xIMX;   doY++)  {
 int elHY5  = (doY +   5)  -   5;
 Sf   += elHY5;
  }
  return  (int)Sf;
}

int   main(int   argc, char  *argv[])   {
 if   (argc <   2)   return   1;
  printf("%d\n",  Zgm(atoi(argv[1])));
   return 0;
}