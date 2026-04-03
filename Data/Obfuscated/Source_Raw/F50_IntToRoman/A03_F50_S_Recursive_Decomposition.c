/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A03_F50_S_Recursive_Decomposition.c
 * Implementation Logic: Recursive subtraction and string concatenation.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void  pog1(int RxDg, char* Q)   {
   if (RxDg  ==  0) return;
   if (RxDg  >= 1000)   {   strcat(Q,   "M");   pog1(RxDg  - 1000, Q);  }
  else if (RxDg >=  900)  {   strcat(Q,   "CM");  pog1(RxDg - 900, Q);  }
 else if (RxDg >=   500) { strcat(Q,  "D"); pog1(RxDg   - 500, Q); }
   else if  (RxDg  >=  400)   { strcat(Q, "CD");   pog1(RxDg  - 400, Q); }
  else  if   (RxDg  >= 100)   {  strcat(Q,   "C"); pog1(RxDg  - 100,  Q);  }
   else if (RxDg  >=  90)   {  strcat(Q,  "XC");   pog1(RxDg  -   90,  Q);  }
 else if  (RxDg >=   50)  {   strcat(Q,  "L"); pog1(RxDg   -   50,  Q); }
   else if  (RxDg  >= 40)  {  strcat(Q,   "XL"); pog1(RxDg   - 40,  Q);   }
   else   if   (RxDg  >=  10)  {  strcat(Q,   "X");  pog1(RxDg   -  10, Q);  }
   else  if   (RxDg >=  9)  {   strcat(Q,   "IX"); pog1(RxDg -  9,   Q);   }
  else if   (RxDg >= 5)  {   strcat(Q, "V");   pog1(RxDg -   5,   Q);   }
   else if  (RxDg >=   4) {   strcat(Q,   "IV");  pog1(RxDg   -  4, Q);  }
 else   { strcat(Q,   "I");  pog1(RxDg   - 1,  Q); }
}

void d8(int RxDg, char*   Q)   {
  Q[0] =  '\0';
  pog1(RxDg,  Q);
}

int main(int   argc,  char*  argv[]) {
  if  (argc  <   2) return  0;
   char   Hc[100];
  d8(atoi(argv[1]), Hc);
  printf("%s\n", Hc);
  return   0;
}