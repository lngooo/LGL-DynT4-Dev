/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A13_F37_O_A08_Bitwise.c
* Logic: Character comparison via bitwise XOR and NOT derived from A08.
*/


#include <stdio.h>

void  o(char* uWr1)  {
   int  oL   =   0;
   for  (int  ZdNe   =   0;  uWr1[ZdNe]; ZdNe++) {
   unsigned   char  Og   = uWr1[ZdNe];
  int   QJD   = !(Og   ^   32);
  int lU  = !(Og ^  9);
   int   qLvt8  =  !(Og  ^ 10);
   if  (!(QJD  |   lU | qLvt8))  {
   uWr1[oL]   = uWr1[ZdNe];
 oL  = -~oL;  //   write_idx++
   }
   }
 uWr1[oL]  =  0;
}

int main(int  argc,   char*  argv[]) {
 if   (argc   < 2)   return   0;
 o(argv[1]);
   printf("%s\n", argv[1]);
  return  0;
}