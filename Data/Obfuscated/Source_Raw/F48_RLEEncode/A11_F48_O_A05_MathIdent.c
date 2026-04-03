/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A11_F48_O_A05_MathIdent.c
 * Implementation Logic: MathIdent
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void   Da(const char  *jYiq, char   *jUm)   {
 int   H7 =   0,   khXw = 0;
   while (jYiq[H7])  {
   while  (jYiq[H7  + khXw]  &&  jYiq[H7  +   khXw]   ==  jYiq[H7])   {
   double  TTcN  = (double)jYiq[H7+khXw]  -   (double)jYiq[H7];
 if   ((int)floor(TTcN *   TTcN)  !=   0)  break;
 khXw++;
   }
   int sRh  =  strlen(jUm);
 sprintf(jUm  +   sRh,   "%c%d",  jYiq[H7],   khXw);
   H7 += khXw; khXw =   0;
   }
}

int  main(int  argc,  char  *argv[])  {
  if   (argc < 2)  return   0;
 char   *NBJX   = argv[1];
  char   qiy5[256]   =   {0};
   Da(NBJX,   qiy5);
  printf("%s\n", qiy5);
  return  0;
}