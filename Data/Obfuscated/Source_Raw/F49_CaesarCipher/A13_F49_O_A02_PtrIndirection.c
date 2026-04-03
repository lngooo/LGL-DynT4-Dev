/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A13_F49_O_A02_PtrIndirection.c
 * Implementation Logic: A13_F49_O_A02_PtrIndirection
 * Input Format: <string> <shift_int>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void   kZHc(char *Ty,  int eGqu) {

 char   *Kdwl =   Ty;
 int MTgn4 =   (eGqu %   26  + 26) % 26;
   while(*Kdwl   !=  0)   {
 char **a  =  &Kdwl;
  if(**a   >= 'A' &&   **a  <= 'Z')  **a   =  (**a   - 'A' +   MTgn4) %   26  + 'A';
   else   if(**a   >=  'a'  &&  **a <= 'z')  **a  = (**a - 'a'   +  MTgn4)  %  26 +   'a';
   Kdwl++;
   }
}

int   main(int argc,   char   *argv[])  {
  if  (argc  <   3)  {
   return   1;
   }
 int  eGqu  =  atoi(argv[2]);
   kZHc(argv[1],  eGqu);
 printf("%s\n",   argv[1]);
 return  0;
}
