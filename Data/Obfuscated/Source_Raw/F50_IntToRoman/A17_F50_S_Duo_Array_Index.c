/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A17_F50_S_Duo_Array_Index.c
 * Implementation Logic: Using index mapping to retrieve symbols based on quotient.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void  uZvR6(int j4, char*  m)   {
   char* DGJ[4][10]  =  {
 {"",   "I",  "II",   "III",  "IV", "V",   "VI",   "VII",  "VIII",   "IX"},
  {"",   "X", "XX", "XXX",  "XL",   "L",  "LX", "LXX", "LXXX", "XC"},
  {"",  "C",  "CC",  "CCC",  "CD", "D", "DC",  "DCC",   "DCCC", "CM"},
 {"",   "M", "MM",  "MMM", "", "", "",  "",  "",   ""}
 };
   m[0]  = '\0';
  strcat(m,  DGJ[3][j4/1000]);
   strcat(m, DGJ[2][(j4%1000)/100]);
   strcat(m, DGJ[1][(j4%100)/10]);
   strcat(m,   DGJ[0][j4%10]);
}

int  main(int  argc,   char*   argv[])  {
  if (argc   < 2)   return   0;
 char   c[100];
  uZvR6(atoi(argv[1]),  c);
   printf("%s\n",  c);
   return   0;
}