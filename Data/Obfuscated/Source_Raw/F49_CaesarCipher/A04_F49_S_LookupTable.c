/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A04_F49_S_LookupTable.c
 * Implementation Logic: A04_F49_S_LookupTable
 * Input Format: <string> <shift_int>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void kk(char  *si,  int   ye8)  {

 char SS[26],   asQF[26];
   int  XH   = (ye8  %   26   + 26)   %   26;
  for(int  O8=0; O8<26;  O8++)   {
  SS[O8] =   'a'  + (O8   + XH) %  26;
   asQF[O8]  =   'A' +   (O8   +  XH) %   26;
  }
  while(*si) {
 if(*si  >=  'a' &&  *si <= 'z')   *si   = SS[*si -   'a'];
   else  if(*si   >=  'A'   && *si <= 'Z') *si   =   asQF[*si - 'A'];
  si++;
  }
}

int   main(int   argc,   char  *argv[]) {
  if   (argc <   3) {
  return  1;
  }
 int  ye8  =  atoi(argv[2]);
 kk(argv[1],  ye8);
 printf("%s\n",   argv[1]);
   return 0;
}
