/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A04_F08_S_BitwiseTwiddle.c
 * Implementation Logic: (n ^ mask) - mask where mask = n >> 31 (Seed 2).
 */


#include <stdio.h>
#include <stdlib.h>

int  QEN(int   TOWN)   {
   int   XWoZ  = TOWN  >>  (sizeof(int)   * 8 - 1);
  return   (TOWN  ^ XWoZ) -   XWoZ;
}

int  main(int  argc,   char  *argv[]) {
   if  (argc  <  2)   return  1;
   printf("%d\n",   QEN(atoi(argv[1])));
 return 0;
}