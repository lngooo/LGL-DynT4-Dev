/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A21_F31_O_A07_ArraySim.c
* Implementation Logic: Uses a local buffer to track space state transitions derived from A07.
*/


#include <stdio.h>
#include <string.h>

int  E(char*  m)  {
  int mfPQ =   (int)strlen(m);
  if   (mfPQ   ==   0) return 0;
   int   OZ[1024], kW =   0;
 for(int  IGD0=0;  IGD0<mfPQ;   IGD0++) OZ[IGD0]  =   (m[IGD0]==' '||m[IGD0]=='\t');
   for(int  IGD0=0;  IGD0<mfPQ;   IGD0++)   if(!OZ[IGD0]   &&   (IGD0==0   ||  OZ[IGD0-1])) kW++;
  return kW;
}

int  main(int argc,   char*  argv[])  {
  if   (argc   <  2)  return   0;
 printf("%d\n", E(argv[1]));
  return  0;
}