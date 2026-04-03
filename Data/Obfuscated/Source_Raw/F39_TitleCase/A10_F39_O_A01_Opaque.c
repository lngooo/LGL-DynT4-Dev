/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A10_F39_O_A01_Opaque.c
 * Implementation Logic: A01 with opaque predicate if(x*x >= 0).
 * Input Format: <string>
 */


#include <stdio.h>
#include <ctype.h>

void  LqA(char* pb) {
   int FMCn7  =   15;
 if  ((FMCn7   * FMCn7)  >=   0) {
   int   x =  1;
   for  (int  Sj1  =   0;  pb[Sj1];  Sj1++) {
  if  (isspace(pb[Sj1]))  x = 1;
  else if   (x) {   pb[Sj1] = toupper(pb[Sj1]); x =   0;   }
 else  pb[Sj1] =   tolower(pb[Sj1]);
  }
 }
}

int main(int argc, char*   argv[])   {
 if  (argc   <   2)  return 0;
   LqA(argv[1]);
   printf("%s",   argv[1]);
 return   0;
}