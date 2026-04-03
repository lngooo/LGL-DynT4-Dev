/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A06_F36_S_PointerDiff.c
* Logic: Uses pointer subtraction to calculate indices for case shifting.
*/


#include <stdio.h>

void   fZg6(char*   b3)  {
 char   *f2   =  b3;
 while   (*f2)  {
 char   YbPq  = *f2;
   if  (YbPq  >=  65  &&  YbPq   <= 90)   *f2  =  YbPq   + (97 - 65);
   else   if (YbPq   >= 97   &&  YbPq  <=  122)   *f2   =  YbPq -   (97   - 65);
 f2++;
  }
}

int  main(int argc,   char*  argv[]) {
   if  (argc <  2)   return  0;
 fZg6(argv[1]);
 printf("%s\n",   argv[1]);
   return   0;
}