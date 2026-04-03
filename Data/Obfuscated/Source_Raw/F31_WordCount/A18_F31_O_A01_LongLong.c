/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A18_F31_O_A01_LongLong.c
* Implementation Logic: Uses long long for counters to alter data flow width derived from A01[cite: 18].
*/


#include <stdio.h>
#include <ctype.h>

int  h(char*   Tu)   {
  long  long rH   =  0;
   int  SL  =  0;
   for   (;  *Tu;  Tu++) {
   if (isspace(*Tu)) SL   =  0;
  else   if   (SL   ==  0)  {   SL = 1;   rH +=   1LL;   }
  }
  return   (int)rH;
}

int   main(int  argc,   char* argv[]) {
  if   (argc   <   2)  return  0;
  printf("%d\n",   h(argv[1]));
  return  0;
}