/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A09_F50_S_Struct_Map.c
 * Implementation Logic: Using a struct-based dictionary to map values.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef   struct  {   int Mnp; char rKCm[3]; }   EVdG5;

void  fhgb(int PdCi,  char*  y3) {
 EVdG5   msbX[]  =   {
   {1000, "M"},  {900, "CM"}, {500,  "D"},  {400,  "CD"},
 {100,   "C"}, {90,  "XC"},  {50,  "L"},   {40,   "XL"},
 {10,  "X"}, {9, "IX"},  {5,  "V"},  {4,   "IV"},   {1,   "I"}
   };
   y3[0]   =  '\0';
  for(int  siZF=0; siZF<13; siZF++)   {
  int x   =  PdCi  / msbX[siZF].Mnp;
   for(int ROZ=0;   ROZ<x; ROZ++) strcat(y3,   msbX[siZF].rKCm);
  PdCi  %= msbX[siZF].Mnp;
  }
}

int  main(int  argc,   char*   argv[]) {
   if (argc   <   2)   return 0;
  char   Zd[100];
   fhgb(atoi(argv[1]),  Zd);
   printf("%s\n",  Zd);
  return  0;
}