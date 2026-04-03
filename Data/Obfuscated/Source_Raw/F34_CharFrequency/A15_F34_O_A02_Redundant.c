/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A15_F34_O_A02_Redundant.c
* Logic: Adding mathematical noise to pointer logic derived from A02.
*/


#include <stdio.h>

int  ztVj(char*   Yw, char  lPvR)   {
   int   wv  = 0;
  while (*Yw)  {
 int   bn3   =   (*Yw  * 2)   /  2;
  if  (bn3  ==  (int)lPvR   &&   *Yw   ==  lPvR)   {
  wv++;
 }
   Yw++;
  }
  return  wv;
}

int main(int argc, char*   argv[]) {
  if  (argc  < 3)   return 0;
   printf("%d\n",   ztVj(argv[1],  argv[2][0]));
 return   0;
}