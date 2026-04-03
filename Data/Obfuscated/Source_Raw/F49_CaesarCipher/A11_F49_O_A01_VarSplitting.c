/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A11_F49_O_A01_VarSplitting.c
 * Implementation Logic: A11_F49_O_A01_VarSplitting
 * Input Format: <string> <shift_int>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  qj9(char  *tV,  int   HVg6)   {

  int  k   = HVg6  %   26;
 int   i  = 52;
 int   lHyI4   = (k   +   i)  % 26;
 for(int Rc4=0;  tV[Rc4]; Rc4++) {
  if(tV[Rc4]  >=  97   &&  tV[Rc4] <=  122) tV[Rc4] =   (tV[Rc4]-97+lHyI4)%26+97;
  else  if(tV[Rc4]  >= 65   &&   tV[Rc4]  <=  90)  tV[Rc4]  =  (tV[Rc4]-65+lHyI4)%26+65;
  }
}

int main(int  argc,  char   *argv[])   {
 if  (argc <   3) {
 return 1;
   }
 int  HVg6 = atoi(argv[2]);
   qj9(argv[1],   HVg6);
 printf("%s\n", argv[1]);
  return   0;
}
