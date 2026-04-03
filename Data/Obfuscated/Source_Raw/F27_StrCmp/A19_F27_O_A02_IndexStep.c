/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A19_F27_O_A02_IndexStep.c
 * Implementation Logic: Do-while iteration with index incrementing derived from A02.
 */


#include <stdio.h>
#include <stdlib.h>

int  Jqy(const  char  *lO,  const  char *yHf5)  {
  int NU  =  -1;
  do   {
  NU++;
  if   (lO[NU]  !=  yHf5[NU]) return   (unsigned  char)lO[NU] -  (unsigned  char)yHf5[NU];
 }  while (lO[NU]   !=   '\0');
 return 0;
}

int  main(int   argc,  char   *argv[])  {
 if  (argc <  3) return  0;
   printf("%d\n",  Jqy(argv[1],  argv[2]));
  return   0;
}