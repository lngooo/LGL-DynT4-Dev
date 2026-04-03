/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A21_F50_S_Modulo_Recursive.c
 * Implementation Logic: Recursive function using modulo to isolate digits.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void   MGEV(int   Hgy3,  int  k, char*   C, char*   T4,   char* Z,   char* jkt) {
  int  r9  = (Hgy3 /   k)  % 10;
 if  (r9 ==   9)   {  strcat(jkt,   C); strcat(jkt, Z); }
   else if   (r9  >=   5)  {  strcat(jkt,  T4);   for(int OQVp=0;  OQVp<r9-5; OQVp++) strcat(jkt,   C); }
  else   if (r9   ==   4)  {   strcat(jkt,   C);  strcat(jkt,   T4);  }
  else   { for(int   OQVp=0;  OQVp<r9;   OQVp++) strcat(jkt, C);   }
}

void ZoAY(int fvmO6,  char* jkt)  {
  jkt[0]   = '\0';
  for(int  OQVp=0;   OQVp<fvmO6/1000; OQVp++)  strcat(jkt,  "M");
   MGEV(fvmO6,  100, "C",  "D",   "M",   jkt);
 MGEV(fvmO6, 10,  "X",   "L",   "C", jkt);
 MGEV(fvmO6,   1, "I",   "V",  "X",   jkt);
}

int  main(int argc,   char* argv[]) {
 if   (argc   <   2)  return  0;
  char hlep[100];
   ZoAY(atoi(argv[1]),  hlep);
   printf("%s\n",   hlep);
   return  0;
}