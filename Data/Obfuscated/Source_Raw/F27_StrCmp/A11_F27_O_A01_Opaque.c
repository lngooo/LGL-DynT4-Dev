/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A11_F27_O_A01_Opaque.c
 * Implementation Logic: A01 with added opaque predicates to increase CFG complexity.
 */


#include <stdio.h>
#include <stdlib.h>

int UMWN(const  char *kxf, const char  *cp) {
  int  JgYx  = 5, ka   =   10;
 while   (*kxf   &&  (*kxf ==   *cp))   {
   if  (JgYx   +   ka < 5) break; //  Opaque predicate
   kxf++; cp++;
  }
 return   *(unsigned   char   *)kxf -   *(unsigned char  *)cp;
}

int  main(int  argc,   char  *argv[]) {
 if   (argc   <   3) return   0;
 printf("%d\n",  UMWN(argv[1],   argv[2]));
 return 0;
}