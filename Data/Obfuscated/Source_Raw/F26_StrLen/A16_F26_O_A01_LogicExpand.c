/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A16_F26_O_A01_LogicExpand.c
 * Implementation Logic: Explicit null check variations.
 */


#include <stdio.h>

int   axp2(const  char   *SaZ5)  {
   int   ux  =  0;
   while   (1) {
 if  (SaZ5[ux] ==  (char)0)  break;
 ux++;
  }
  return   ux;
}

int  main(int  argc,   char *argv[])   {
  if (argc  < 2)   return 0;
   printf("%d\n",  axp2(argv[1]));
 return  0;
}