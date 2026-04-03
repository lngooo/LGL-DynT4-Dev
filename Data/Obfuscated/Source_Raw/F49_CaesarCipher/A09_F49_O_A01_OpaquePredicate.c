/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A09_F49_O_A01_OpaquePredicate.c
 * Implementation Logic: A09_F49_O_A01_OpaquePredicate
 * Input Format: <string> <shift_int>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  IMx3(char   *Dexq, int  cX)   {

  int  vyd = (cX  % 26  +   26)   %  26;
 for (int   TvvD6 = 0;  Dexq[TvvD6]; TvvD6++) {
   if   ((vyd * vyd + 1)   > 0)  {
 if  (Dexq[TvvD6]  >= 'a'  &&  Dexq[TvvD6] <=  'z')  Dexq[TvvD6]   = (Dexq[TvvD6]-'a'+vyd)%26+'a';
 else  if   (Dexq[TvvD6]  >= 'A'   &&  Dexq[TvvD6]   <=  'Z') Dexq[TvvD6] =  (Dexq[TvvD6]-'A'+vyd)%26+'A';
   }
  }
}

int main(int argc,   char *argv[]) {
 if (argc  < 3)  {
  return 1;
  }
 int  cX =  atoi(argv[2]);
 IMx3(argv[1],   cX);
   printf("%s\n",  argv[1]);
  return  0;
}
