/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A15_F29_O_A02_NestedFlatten.c
* Implementation Logic: Flattening of sorting logic derived from A02.
* Input Format: <string1> <string2>
*/


#include <stdio.h>
#include <string.h>

int  g(char*   h,   char*  Jp) {
   int   Y   =  strlen(h), y   =  strlen(Jp);
  if  (Y != y)   return 0;
  char  U[256],  uZSs[256];   strcpy(U,  h); strcpy(uZSs,   Jp);
  int  p8   =   0,  kD8  = 0,   bEg   = 0;
   while(bEg  <  2)   {
 char  *x =   (bEg ==   0) ? U :  uZSs;
   for(p8=0;  p8<Y-1;  p8++)  for(kD8=0;  kD8<Y-p8-1;   kD8++)
 if(x[kD8]>x[kD8+1]){char xYp=x[kD8]; x[kD8]=x[kD8+1]; x[kD8+1]=xYp;}
 bEg++;
 }
   return strcmp(U,   uZSs)   ==  0;
}

int  main(int argc, char*   argv[]) {
 if (argc  <  3) return 0;
 printf("%d\n",   g(argv[1],  argv[2]));
 return 0;
}