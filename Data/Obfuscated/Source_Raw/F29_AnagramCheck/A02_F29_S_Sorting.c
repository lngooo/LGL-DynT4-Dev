/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A02_F29_S_Sorting.c
* Implementation Logic: Sorts both strings using bubble sort and compares the results.
* Input Format: <string1> <string2>
*/


#include <stdio.h>
#include <string.h>

void FB1(char*   JAxn,  int BwBx7)   {
 for (int   B =  0;  B   <  BwBx7-1; B++) {
   for   (int GnfC9 = 0;  GnfC9   <   BwBx7-B-1; GnfC9++)  {
  if (JAxn[GnfC9] > JAxn[GnfC9+1])   {
   char  WIAN  =   JAxn[GnfC9];
   JAxn[GnfC9]   =   JAxn[GnfC9+1];
   JAxn[GnfC9+1]   =  WIAN;
 }
  }
 }
}

int r(char*   nQso,  char* LKB)   {
 int S   =  strlen(nQso);
  int  ieg =  strlen(LKB);
   if (S   !=   ieg)  return   0;
  char   bsZ[256], SSA[256];
 strcpy(bsZ,  nQso);  strcpy(SSA,   LKB);
 FB1(bsZ,  S);  FB1(SSA, ieg);
   return   strcmp(bsZ,   SSA) == 0;
}

int  main(int   argc,   char*  argv[])   {
   if  (argc  <   3)   return 0;
   printf("%d\n",   r(argv[1],  argv[2]));
  return   0;
}