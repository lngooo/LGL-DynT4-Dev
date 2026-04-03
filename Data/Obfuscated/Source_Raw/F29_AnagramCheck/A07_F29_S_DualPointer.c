/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A07_F29_S_DualPointer.c
* Implementation Logic: Iterates through s1 and uses a second pointer to scan and nullify in s2.
* Input Format: <string1> <string2>
*/


#include <stdio.h>
#include <string.h>

int   X(char*   ORVF7, char* GwjX0)  {
   int  iEt =  strlen(ORVF7),  d4  =   strlen(GwjX0);
 if  (iEt !=   d4)  return   0;
   char   c2[256];   strcpy(c2,  GwjX0);
   for(int VHl=0;  VHl<iEt;   VHl++) {
  int g =  0;
  for(int Rq2=0; Rq2<d4;   Rq2++)  {
   if(ORVF7[VHl]   ==  c2[Rq2])  {
 c2[Rq2]  = 0; g =   1;   break;
  }
  }
 if(!g) return 0;
   }
 return  1;
}

int   main(int   argc, char* argv[])   {
 if (argc <  3)   return  0;
 printf("%d\n", X(argv[1], argv[2]));
 return 0;
}