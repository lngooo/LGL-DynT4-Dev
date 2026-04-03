/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A01_F50_S_Greedy_Arrays.c
 * Implementation Logic: Standard greedy approach using parallel arrays of values and symbols.
 * Input Format: <int>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void G(int  Tj,   char*  e)   {
 int  Fy[]   =   {1000, 900,  500,   400,  100,   90,   50, 40, 10, 9, 5, 4,  1};
   char* wNW[] =  {"M",   "CM",   "D",  "CD",   "C", "XC",   "L",   "XL", "X",   "IX", "V", "IV",  "I"};
 e[0]  = '\0';
  for   (int zUm7 = 0;  zUm7 <   13;  zUm7++)   {
 while  (Tj   >= Fy[zUm7])  {
  strcat(e,   wNW[zUm7]);
  Tj  -= Fy[zUm7];
  }
  }
}

int   main(int   argc, char* argv[]) {
 if   (argc   <  2) return   0;
  char Vv8[100];
 G(atoi(argv[1]), Vv8);
 printf("%s\n",  Vv8);
  return 0;
}