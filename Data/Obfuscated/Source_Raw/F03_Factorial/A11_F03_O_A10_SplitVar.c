/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A11_F03_O_A10_SplitVar.c
 * Implementation Logic: Binary splitting with variables split into higher/lower components.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

long  long   IDyi(int  cUrm)   {
  if (cUrm   < 0) return  0;
   if   (cUrm  == 0)   return   1;
 long long UbQ = 1, RSJ =  1;
 int  gY   = cUrm  /  2;
  for   (int  ovH3   = 1;   ovH3 <= gY;  ovH3++)  UbQ   *=  ovH3;
 for  (int   ovH3   =  gY  + 1;  ovH3   <=   cUrm; ovH3++)  RSJ *=  ovH3;
 return UbQ   * RSJ;
}

int main(int   argc, char   *argv[]) {
  if   (argc  <   2) return   1;
 printf("%lld\n",  IDyi(atoi(argv[1])));
 return   0;
}