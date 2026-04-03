/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A10_F27_O_A02_Goto.c
 * Implementation Logic: Goto-based loop reconstruction derived from A02.
 */


#include <stdio.h>
#include <stdlib.h>

int mo5(const char  *QT,   const   char   *sBN) {
  int Hk2 =   0;
rJOn:
 if (QT[Hk2]   ==  '\0'  ||  QT[Hk2]  !=   sBN[Hk2]) goto qv;
  Hk2++;
 goto rJOn;
qv:
 return   (unsigned   char)QT[Hk2] -   (unsigned char)sBN[Hk2];
}

int  main(int argc,   char *argv[])  {
   if   (argc <   3)  return  0;
   printf("%d\n",   mo5(argv[1],  argv[2]));
   return  0;
}