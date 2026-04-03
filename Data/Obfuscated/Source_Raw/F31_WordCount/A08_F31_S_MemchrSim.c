/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A08_F31_S_MemchrSim.c
* Implementation Logic: Identifies words by searching for the start of non-whitespace sequences.
* Input Format: <string>
*/


#include <stdio.h>
#include <string.h>

int  HO(char*  wvu)  {
  int  Q1  =  0;
   size_t  Mc5  =  strlen(wvu);
  for  (size_t  sELG   =   0; sELG <  Mc5;   sELG++)   {
 if  (wvu[sELG]   !=   ' '  && wvu[sELG] != '\t'  && (sELG == 0  ||   wvu[sELG-1]  ==   ' '  || wvu[sELG-1]   == '\t'))   {
  Q1++;
   }
  }
   return   Q1;
}

int main(int argc,  char*  argv[]) {
 if (argc  <   2)   return 0;
  printf("%d\n",   HO(argv[1]));
 return 0;
}