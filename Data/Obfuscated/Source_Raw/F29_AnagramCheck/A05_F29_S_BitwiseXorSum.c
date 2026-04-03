/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A05_F29_S_BitwiseXorSum.c
* Implementation Logic: Combines XOR sum and additive sum to reduce collision probability.
* Input Format: <string1> <string2>
*/


#include <stdio.h>
#include <string.h>

int KFeY(char*  Ck,   char* MGCh)  {
  if   (strlen(Ck)  != strlen(MGCh))   return  0;
  int  eC =   0,   WD  =   0;
 for   (int MMRk   = 0; Ck[MMRk];  MMRk++)   {
   eC   ^=  Ck[MMRk];   eC ^=   MGCh[MMRk];
 WD += Ck[MMRk]; WD   -=   MGCh[MMRk];
  }
   return   (eC   ==   0  &&   WD   ==   0);
}

int   main(int argc,   char*   argv[]) {
 if (argc <   3)   return   0;
   printf("%d\n",   KFeY(argv[1], argv[2]));
 return  0;
}