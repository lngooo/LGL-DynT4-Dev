/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A05_F09_O_A04_Opaque.c
 * Implementation Logic: Recursive Newton with opaque predicates.
 */


#include <stdio.h>
#include <stdlib.h>

long MBu8(long  vxp1,   int   g7) {
  if   (   (vxp1  *  vxp1  + 7) <   0  )   return   0;   // Opaque  false
 long UrxG   =  (vxp1  +   g7   /   vxp1) /   2;
 return  (UrxG   >=  vxp1) ?  vxp1  :   MBu8(UrxG,   g7);
}

int cqbF(int  g7)   {
   return (g7   <  0) ?   -1  :  (int)MBu8(g7, g7);
}

int  main(int argc, char  *argv[])   {
 if  (argc  <  2)   return   1;
  printf("%d\n", cqbF(atoi(argv[1])));
 return 0;
}