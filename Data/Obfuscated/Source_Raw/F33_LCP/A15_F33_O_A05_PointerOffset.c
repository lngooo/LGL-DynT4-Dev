/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A15_F33_O_A05_PointerOffset.c
 * Implementation Logic: PointerOffset
 * Input Format: <str1> <str2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void   pjX(char  **X,  int   XtD,   char  *yZJ1)  {
 char *Ue = *X;
  int eZER4 =  0;
   while(*(Ue +   eZER4)) {
  for(int   HD=1; HD<XtD;  HD++) {
 if(*(X[HD]   +   eZER4)   !=  *(Ue   +  eZER4))  {   *(yZJ1  +  eZER4) = 0;   return;   }
   }
   *(yZJ1 +   eZER4) =   *(Ue  +   eZER4);
  eZER4++;
   }
   *(yZJ1 +  eZER4)   =   0;
}

int  main(int argc,   char   *argv[])   {
  if   (argc <  2)  return  0;
   int Wj =   argc   - 1;
 char   **X  =  &argv[1];
  char q[128]   = {0};
  pjX(X, Wj,  q);
   printf("%s\n", q);
   return  0;
}