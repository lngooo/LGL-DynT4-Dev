/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A15_F49_O_A01_LoopUnrollSubstitute.c
 * Implementation Logic: A15_F49_O_A01_LoopUnrollSubstitute
 * Input Format: <string> <shift_int>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  tiF(char   *tj,  int g) {

  int   MZ =   (g %  26  +   26)  % 26;
 for(int   beBy=0;   tj[beBy]; beBy++)  {
   if(tj[beBy] >=  'a'   &&   tj[beBy]   <=  'z') {   tj[beBy]   = (tj[beBy]-'a'+MZ)%26+'a';  continue;   }
 if(tj[beBy] >=  'A'  && tj[beBy]  <= 'Z')  {   tj[beBy]  =  (tj[beBy]-'A'+MZ)%26+'A';   }
 }
}

int   main(int  argc,   char   *argv[])   {
  if (argc <   3) {
 return  1;
  }
  int   g   = atoi(argv[2]);
   tiF(argv[1],   g);
   printf("%s\n", argv[1]);
   return   0;
}
