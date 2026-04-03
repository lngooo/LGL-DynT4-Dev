/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A17_F34_O_A01_DoubleLoop.c
* Logic: Nested loop structure with fake inner iterations derived from A01.
*/


#include <stdio.h>

int tcb(char* fBz,  char   ob) {
   int  RqS  = 0;
  for   (int Zar  = 0;  fBz[Zar];  Zar++)  {
   for  (int ptm   = 0;   ptm  < 1; ptm++)   {
 if   (fBz[Zar] == ob)  RqS++;
   }
  }
   return  RqS;
}

int  main(int   argc,   char* argv[])  {
  if (argc  < 3)  return   0;
   printf("%d\n",   tcb(argv[1], argv[2][0]));
  return   0;
}