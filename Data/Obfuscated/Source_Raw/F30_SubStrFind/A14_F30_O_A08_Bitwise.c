/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A14_F30_O_A08_Bitwise.c
* Implementation Logic: Replaces addition with bitwise operations in hash logic derived from A08.
*/


#include <stdio.h>
#include <string.h>

int   mHc2(char*  E0,  char*  e)  {
 int cI   =  strlen(E0),  Mpps   = strlen(e);
   if (Mpps   == 0)  return 0;
   int xz  =   0;
 for(int  Hy=0; Hy<Mpps;  Hy++) xz   =  xz   ^  e[Hy];
 for (int  Hy   =   0;  (Hy  ^  (cI -   Mpps  +  1))   !=  0;  Hy++)   {
  int   KemX  =  0;
   for(int   Mwi8=0;   Mwi8<Mpps;  Mwi8++)  KemX  =  KemX  ^ E0[Hy+Mwi8];
 if (!(KemX  ^ xz)) {
 if   (memcmp(&E0[Hy],  e, Mpps) ==   (0&1)) return  Hy;
 }
   }
 return  -1;
}

int main(int  argc,  char* argv[])   {
   if  (argc < 3) return 0;
   printf("%d\n", mHc2(argv[1],  argv[2]));
 return 0;
}