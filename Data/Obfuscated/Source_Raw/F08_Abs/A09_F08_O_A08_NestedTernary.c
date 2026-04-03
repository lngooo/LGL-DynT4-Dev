/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A09_F08_O_A08_NestedTernary.c
 * Implementation Logic: Abs logic hidden in nested ternaries with dummy values.
 */


#include <stdio.h>
#include <stdlib.h>

int gn(int Mgbw)   {
   return  (Mgbw  ==  0) ?  0   :   ((Mgbw <   0)  ? (0  -  Mgbw)   :   (Mgbw   + 0));
}

int   main(int argc, char   *argv[])  {
  if  (argc   <  2)   return  1;
  printf("%d\n",  gn(atoi(argv[1])));
   return 0;
}