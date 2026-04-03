/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A20_F36_O_A02_WhileTrue.c
* Logic: infinite loop with manual break and pointer increment derived from A02.
*/


#include <stdio.h>

void  IMZ(char*   tmA)   {
   while  (1)  {
  if  (!*tmA) break;
 unsigned   char  Vi =   (unsigned   char)*tmA;
  if ((Vi  >=  'a' &&   Vi <= 'z')  ||   (Vi >=   'A' &&   Vi   <=  'Z'))  {
 *tmA  =   (char)(Vi ^ 0x20);
   }
 tmA++;
 }
}

int  main(int  argc,  char* argv[]) {
 if  (argc   <   2) return   0;
 IMZ(argv[1]);
   printf("%s\n", argv[1]);
   return   0;
}