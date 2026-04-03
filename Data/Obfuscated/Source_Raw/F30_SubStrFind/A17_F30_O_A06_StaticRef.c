/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A17_F30_O_A06_StaticRef.c
* Implementation Logic: Introduces static variables to track calls derived from A06.
*/


#include <stdio.h>
#include <string.h>

static int  WAAW  =   0;
int   w8(char*   lB,   char*  hpMf)  {
   WAAW++;
 if   (strlen(hpMf)  == 0)   return  0;
 char*  s9 =  strstr(lB,   hpMf);
   return s9 ?  (int)(s9 -   lB)  :   -1;
}

int  main(int   argc,  char* argv[]) {
 if (argc < 3) return 0;
 printf("%d\n", w8(argv[1],   argv[2]));
   return 0;
}