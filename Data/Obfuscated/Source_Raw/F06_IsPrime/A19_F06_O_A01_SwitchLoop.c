/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A19_F06_O_A01_SwitchLoop.c
 * Implementation Logic: Loop re-structured into a single switch-case within a while.
 */


#include <stdio.h>
#include <stdlib.h>

int  T(int ALnS4)   {
 if  (ALnS4 <  2) return   0;
 int i3   = 2;
 while   (1)  {
   if   (i3  *  i3 >   ALnS4)   return  1;
   switch (ALnS4  %   i3)  {
  case 0:   return 0;
  default: i3++;   break;
  }
 }
}

int  main(int argc,   char   *argv[])   {
 if   (argc   <   2)  return   1;
  printf("%d\n",   T(atoi(argv[1])));
   return   0;
}