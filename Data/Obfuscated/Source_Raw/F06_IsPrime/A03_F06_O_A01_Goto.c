/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A03_F06_O_A01_Goto.c
 * Implementation Logic: Logic re-mapped using goto to break structural analysis.
 */


#include <stdio.h>
#include <stdlib.h>

int  S(int oJys)  {
 if  (oJys <   2) goto   JTa;
 if   (oJys  < 4) goto WST;
 if  (oJys  % 2   ==   0) goto JTa;
  int  cV =   3;
jJZ:
   if  (cV  * cV >  oJys) goto  WST;
 if  (oJys   % cV ==   0)   goto  JTa;
 cV   +=  2;
   goto jJZ;
WST: return 1;
JTa: return  0;
}

int  main(int   argc, char *argv[]) {
  if (argc  <   2)   return  1;
 printf("%d\n", S(atoi(argv[1])));
   return 0;
}