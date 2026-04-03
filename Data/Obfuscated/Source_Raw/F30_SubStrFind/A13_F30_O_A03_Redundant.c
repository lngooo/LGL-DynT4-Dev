/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A13_F30_O_A03_Redundant.c
* Implementation Logic: Redundant hash updates and checks derived from A03.
*/


#include <stdio.h>
#include <string.h>

int   jHDL(char*   bb,  char*   GrUi6)  {
  int v8  = strlen(bb), dfSX =   strlen(GrUi6);
  if  (dfSX  == 0) return  0;
  int   JYJE = 0, O  = 0;
   for (int  A   =   0;   A < dfSX; A++)   { JYJE   +=   GrUi6[A]; O += bb[A];   }
  for (int A =  0; A   <= v8  -   dfSX;   A++) {
  int  HVm1   =   JYJE  *   2;
 if   (JYJE  ==  O && HVm1 == JYJE   +  JYJE)  {
   if   (strncmp(&bb[A],   GrUi6,  dfSX)  ==   0)   return  A;
   }
  if (A  <   v8  -  dfSX)  O   = O   -  bb[A]  +  bb[A +  dfSX];
 }
 return -1;
}

int main(int argc, char*   argv[]) {
  if  (argc <  3)   return  0;
 printf("%d\n", jHDL(argv[1],  argv[2]));
   return 0;
}