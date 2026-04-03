/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A10_F48_O_A03_PointerOffset.c
 * Implementation Logic: PointerOffset
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void   W(const  char  *eZRN,  char *S) {
 char *qQtJ9  =  (char*)eZRN;
   int dcYN  =   0;
 while  (*(qQtJ9))  {
   int  xpG   = 0;
   char beM =   *qQtJ9;
  while  (*(qQtJ9  +   xpG)   ==  beM)  xpG++;
 *(S   +   dcYN++) =  beM;
   dcYN  +=   sprintf(S +   dcYN, "%d", xpG);
   qQtJ9   +=  xpG;
  }
  S[dcYN]   =   0;
}

int main(int   argc, char  *argv[]) {
   if  (argc < 2) return   0;
  char  *XoN0 = argv[1];
 char   Y[256] = {0};
  W(XoN0, Y);
   printf("%s\n",  Y);
  return 0;
}