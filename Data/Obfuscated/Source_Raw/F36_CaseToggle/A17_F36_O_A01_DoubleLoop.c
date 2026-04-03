/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A17_F36_O_A01_DoubleLoop.c
* Logic: Nested loop with a single execution inner loop derived from A01.
*/


#include <stdio.h>

void QeAf(char*  nbSm)   {
 for  (int  Rh   =   0; nbSm[Rh];   Rh++)   {
   for  (int  jIqx6   = 0; jIqx6  <   1;   jIqx6++) {
   char rXJ6  =  nbSm[Rh];
  if  (rXJ6 >= 97   &&  rXJ6   <=   122)  nbSm[Rh] =   rXJ6 -   32;
 else   if  (rXJ6   >= 65 &&  rXJ6   <=  90)   nbSm[Rh] = rXJ6  +  32;
 }
   }
}

int  main(int  argc, char*   argv[]) {
  if (argc   < 2)   return   0;
   QeAf(argv[1]);
 printf("%s\n",  argv[1]);
 return 0;
}