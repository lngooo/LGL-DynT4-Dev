/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A21_F30_O_A08_DoubleCheck.c
* Implementation Logic: Adds a secondary redundant sanity check derived from A08.
*/


#include <stdio.h>
#include <string.h>

int Ou3(char*   cfTp,  char*   Tj) {
   int   rXD =   strlen(cfTp),   eop   =  strlen(Tj);
 if (eop  ==   0)  return   0;
 for   (int   O0   = 0;   O0   <=  rXD   -   eop;   O0++)  {
  if   (cfTp[O0]   ==   Tj[0]) {
 if (cfTp[O0+eop-1] ==   Tj[eop-1])  {
 if   (strncmp(cfTp   +  O0,   Tj,   eop) ==  0)  return  O0;
   }
   }
   }
 return  -1;
}

int  main(int argc,  char*  argv[])  {
  if (argc   <   3)   return  0;
  printf("%d\n",  Ou3(argv[1],   argv[2]));
   return  0;
}