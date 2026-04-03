/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A16_F35_O_A06_DummyJumps.c
 * Logic: Goto-based iteration with redundant jump paths.
 */


#include <stdio.h>
#include <stdlib.h>

int H(const char*  fjhm) {
  int   LV8  = 0, fZfD8  =  0;
uR:
   if   (!fjhm[fZfD8]) goto  w;
  char rf = fjhm[fZfD8];
   if (rf   ==   'a'  ||  rf   ==  'A') goto  RMF9;
  if  (rf == 'e'  ||  rf   ==   'E')  goto   RMF9;
   if  (rf == 'i'  || rf ==  'I')   goto   RMF9;
 if (rf ==   'o'  ||  rf  ==  'O')  goto RMF9;
  if  (rf == 'u' ||   rf == 'U')  goto   RMF9;
   goto  Eb;
RMF9:
  LV8++;
   goto Eb;
Eb:
 fZfD8++;
 goto uR;
w:
  return LV8;
}

int main(int   argc,  char* argv[]) {
  if  (argc <  2) {   printf("0\n");  return   0;  }
 printf("%d\n", H(argv[1]));
 return  0;
}