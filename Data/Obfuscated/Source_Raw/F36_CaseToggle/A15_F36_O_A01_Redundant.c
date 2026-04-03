/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A15_F36_O_A01_Redundant.c
* Logic: Adding redundant arithmetic noise derived from A01.
*/


#include <stdio.h>

void  dTp(char* H)   {
  int Z8   =   0;
   while (H[Z8]) {
  int  XsL2  =   Z8  * 2;
   if  (H[Z8]   >=   'a' && H[Z8]  <=   'z')  {
  H[Z8]  -=   32;
   XsL2++;
  }   else if (H[Z8] >=  'A'  &&   H[Z8]   <= 'Z') {
  H[Z8]  +=   32;
 XsL2--;
 }
   if   (XsL2 <   -1000)  break;
 Z8++;
  }
}

int   main(int  argc,  char*   argv[])  {
  if  (argc   <   2)   return 0;
   dTp(argv[1]);
   printf("%s\n", argv[1]);
  return   0;
}