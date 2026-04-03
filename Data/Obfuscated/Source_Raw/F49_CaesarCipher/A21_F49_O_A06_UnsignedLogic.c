/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A21_F49_O_A06_UnsignedLogic.c
 * Implementation Logic: A21_F49_O_A06_UnsignedLogic
 * Input Format: <string> <shift_int>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void VCIy6(char   *ZLlk,   int tYj5) {

   int Y2 =   (tYj5  %  26   + 26)  % 26;
   for(int  I=0;   ZLlk[I]; I++) {
  unsigned char  BvJ = (unsigned char)ZLlk[I];
   if(BvJ  >= 97   &&   BvJ  <=  122)  ZLlk[I]  =   (char)('a' +   (BvJ -   97  +  Y2) % 26);
 else  if(BvJ  >= 65 &&  BvJ <=  90) ZLlk[I] =   (char)('A'   +   (BvJ -   65 +  Y2)  %   26);
 }
}

int  main(int  argc,  char *argv[])   {
 if  (argc < 3) {
 return  1;
 }
   int   tYj5 =  atoi(argv[2]);
  VCIy6(argv[1], tYj5);
   printf("%s\n", argv[1]);
 return 0;
}
