/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A02_F50_S_Hardcoded_PlaceValues.c
 * Implementation Logic: Static lookup tables for thousands, hundreds, tens, and ones.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void   Slzy(int  aka,   char*   HKg2)   {
 char*  rH[] = {"",  "M", "MM",   "MMM"};
   char*   WdvU[]  =  {"",   "C",   "CC",  "CCC", "CD",  "D", "DC",   "DCC", "DCCC",  "CM"};
  char*   U3[]   =  {"",  "X",   "XX",  "XXX",   "XL",  "L",  "LX",  "LXX",  "LXXX",   "XC"};
 char*   zEfl[]   =  {"", "I",   "II",  "III", "IV",  "V", "VI",   "VII", "VIII",  "IX"};

  HKg2[0]  = '\0';
   strcat(HKg2,  rH[aka /  1000]);
   strcat(HKg2,  WdvU[(aka  %   1000)   / 100]);
 strcat(HKg2,  U3[(aka %   100)  /   10]);
  strcat(HKg2,   zEfl[aka  % 10]);
}

int main(int argc,  char*   argv[]) {
  if   (argc <   2)   return   0;
  char   DPaj7[100];
  Slzy(atoi(argv[1]), DPaj7);
 printf("%s\n",  DPaj7);
  return   0;
}