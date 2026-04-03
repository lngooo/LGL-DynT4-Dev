/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A12_F49_O_A05_SwitchCase.c
 * Implementation Logic: A12_F49_O_A05_SwitchCase
 * Input Format: <string> <shift_int>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void   kmWx(char   *H, int  p) {

  int  XvX = (p  % 26 +  26)  % 26;
   for(int   yIS=0;  H[yIS];  yIS++)   {
 int  UIFU =   (H[yIS]   >=  'a'  &&  H[yIS] <= 'z')  ? 1 :   (H[yIS]   >= 'A'   &&   H[yIS]  <=   'Z' ?  2 : 0);
  switch(UIFU)  {
   case   1:  H[yIS]  =   (H[yIS]-'a'+XvX)%26+'a';   break;
   case  2: H[yIS]  =  (H[yIS]-'A'+XvX)%26+'A';   break;
  default:   break;
   }
 }
}

int main(int   argc,  char  *argv[])  {
   if  (argc <  3)   {
  return  1;
  }
   int  p   = atoi(argv[2]);
  kmWx(argv[1], p);
   printf("%s\n",  argv[1]);
 return   0;
}
