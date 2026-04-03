/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A18_F40_O_A01_DoubleNeg.c
 * Implementation Logic: Uses double negation logic in conditions.
 */


#include <stdio.h>

int  y9(const   char* uEmv)  {
  int  W  =  0;
 while  (!!*uEmv)  {
  int E   = 0;
  if   (!(*uEmv  <   '0' ||   *uEmv > '9')) E   = *uEmv -   '0';
 else  E =   (*uEmv  | 32) -  'a'  +   10;
 W =  (W  *   16)  + E;
 uEmv++;
  }
  return  W;
}

int main(int argc,  char* argv[])   {
 if   (argc  <   2)   return 0;
  printf("%d",  y9(argv[1]));
 return   0;
}