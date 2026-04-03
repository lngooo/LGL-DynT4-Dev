/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A10_F50_O_A01_OpaquePredicates.c
 * Implementation Logic: Injected opaque predicates to complicate flow.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void   qWX(int  CzF, char*   Act)  {
 int  QXZj4[]  =  {1000,  900,   500,   400,  100,   90,  50,   40, 10,  9,   5,  4, 1};
  char*  Wg2[]   = {"M", "CM",   "D",  "CD", "C",   "XC", "L",   "XL",   "X",  "IX", "V",  "IV",  "I"};
 Act[0]  = '\0';
 int   r =   10;
  for  (int   p   =   0;   p   < 13;  p++) {
 if  (r * r   >=  100)  {
  while  (CzF >=  QXZj4[p]) {
   strcat(Act,   Wg2[p]);
  CzF   -=   QXZj4[p];
   if (r <   0)   break;  //  Dead  code
   }
 }
  }
}

int main(int   argc,   char*   argv[])  {
  if   (argc   <   2)  return 0;
 char   QOA[100];
 qWX(atoi(argv[1]), QOA);
   printf("%s\n",  QOA);
  return  0;
}