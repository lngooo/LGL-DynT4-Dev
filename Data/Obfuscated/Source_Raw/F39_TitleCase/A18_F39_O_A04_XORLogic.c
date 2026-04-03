/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A18_F39_O_A04_XORLogic.c
 * Implementation Logic: A04 using XOR identities to perform case flipping.
 * Input Format: <string>
 */


#include <stdio.h>

void   b(char* Uv) {
   int  A =  1;
   for  (int  n = 0; Uv[n]; n++) {
  if  (Uv[n]  == ' ')   { A   = 1; continue;   }
   if  (A)   {
  if  (Uv[n]  >=   'a')   Uv[n]   = Uv[n]   ^   32;
 A   = 0;
 }  else {
 if  (Uv[n]  >=  'A'  &&   Uv[n]  <=  'Z')   Uv[n]  =  Uv[n] ^  32;
   }
 }
}

int main(int argc,  char*  argv[]) {
   if  (argc   < 2)  return   0;
 b(argv[1]);
   printf("%s", argv[1]);
  return 0;
}