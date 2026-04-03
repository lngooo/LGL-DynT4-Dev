/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A05_F33_S_PointerArithmetic.c
 * Implementation Logic: PointerArithmetic
 * Input Format: <str1> <str2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void AuOe(char **D,   int OWJ2,  char *HQIU8) {
 if  (OWJ2   <=  0) return;
   for (int   oHtp   =  0;  ;  oHtp++)   {
   char OCi9 = *(D[0]   +  oHtp);
 if  (OCi9 ==  '\0')   {   *(HQIU8 +   oHtp) = '\0';  break;  }
   int   GWj  =  1;
   for  (int   IwqN   = 1;   IwqN  < OWJ2; IwqN++) {
  if (*(D[IwqN]   +   oHtp)  != OCi9) { GWj   = 0;  break; }
  }
  if  (!GWj) { *(HQIU8   +   oHtp) = '\0';  break;  }
 *(HQIU8  +  oHtp) =  OCi9;
  }
}

int main(int   argc, char   *argv[]) {
  if  (argc  <  2)  return  0;
   int   q  =  argc - 1;
  char **D  = &argv[1];
 char NQ[128]   =  {0};
   AuOe(D,  q,  NQ);
  printf("%s\n", NQ);
   return   0;
}