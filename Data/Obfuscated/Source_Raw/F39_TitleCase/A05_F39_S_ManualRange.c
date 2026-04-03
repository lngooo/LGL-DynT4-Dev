/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A05_F39_S_ManualRange.c
 * Implementation Logic: Checks ASCII ranges manually to isolate words.
 * Input Format: <string>
 */


#include <stdio.h>

void   f9(char* Q) {
 for (int K  = 0; Q[K]; K++)   {
   int oG   =   (K   ==   0  || Q[K-1]  ==  ' ');
  if   (oG)   {
 if  (Q[K]  >= 'a'   &&  Q[K] <= 'z')   Q[K]   = Q[K]  -   'a'  + 'A';
   }   else  {
 if  (Q[K]   >=   'A' && Q[K]  <=   'Z')  Q[K]  =  Q[K]   - 'A'  +  'a';
   }
   }
}

int   main(int  argc, char* argv[])  {
   if   (argc  <   2)   return   0;
   f9(argv[1]);
   printf("%s",  argv[1]);
  return 0;
}