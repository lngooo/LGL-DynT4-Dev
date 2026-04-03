/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A19_F26_O_A07_DoubleGoto.c
 * Implementation Logic: Spaghetti-like jumps for length.
 */


#include <stdio.h>

int   eH6(const   char   *Qf2)  {
 int aBSo   = 0;
eRCB:
 if (!*Qf2) goto  O;
 goto  D7;
D7:
 aBSo++;  Qf2++;
   goto   eRCB;
O:
 return  aBSo;
}

int   main(int   argc, char *argv[])  {
  if (argc  <  2) return   0;
  printf("%d\n",   eH6(argv[1]));
  return  0;
}