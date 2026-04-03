/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A17_F26_O_A01_State.c
 * Implementation Logic: Custom state machine for length.
 */


#include <stdio.h>

int   R6(const char *FF6)  {
  int fVh   =  0;
  int   b =   10;
   while   (b !=   0) {
   if (b  == 10)   {
 if  (FF6[fVh] != '\0')   b   =   20;
 else   b =  0;
 }  else   if (b ==   20)  {
  fVh++;
  b   = 10;
 }
   }
   return fVh;
}

int   main(int  argc,   char   *argv[]) {
 if   (argc   < 2) return 0;
  printf("%d\n", R6(argv[1]));
 return   0;
}