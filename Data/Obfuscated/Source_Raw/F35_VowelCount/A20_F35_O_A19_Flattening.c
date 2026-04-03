/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A20_F35_O_A19_Flattening.c
 * Logic: Ternary chain logic with control flow flattening.
 */


#include <stdio.h>
#include <stdlib.h>

int   NVJy(const   char*  jhC7)   {
 int   kupg =   0, iiLW   =   1;
 while  (iiLW)  {
  if  (*jhC7   == 0)   {  iiLW  =   0; }
  else {
 char  KlF = *jhC7;
 int   Xjl = (KlF=='a'||KlF=='e'||KlF=='i'||KlF=='o'||KlF=='u'||
  KlF=='A'||KlF=='E'||KlF=='I'||KlF=='O'||KlF=='U') ?   1  :  0;
 kupg +=  Xjl;
   jhC7++;
 }
  }
  return   kupg;
}

int main(int argc,   char*   argv[]) {
   if   (argc <   2) {   printf("0\n");   return  0;   }
  printf("%d\n",   NVJy(argv[1]));
 return 0;
}