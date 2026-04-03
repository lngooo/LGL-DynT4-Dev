/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A19_F09_O_A04_JumpTable.c
 * Implementation Logic: Recursive Newton logic using computed gotos.
 */


#include <stdio.h>
#include <stdlib.h>

int   hp(int   RvCD) {
 if   (RvCD   <  0)   return  -1;
 if   (RvCD <   2)  return   RvCD;
   long   GUYM   = RvCD,  Pnt;
  void   *qs[] =  {&&z,   &&ml};
z:
  Pnt  =   (GUYM  + RvCD / GUYM)   >>  1;
   int   qR =  (Pnt  >=   GUYM);
 if (qR   ==  0) {   GUYM  =   Pnt;  goto   *qs[0]; }
ml:
   return   (int)GUYM;
}

int  main(int  argc,   char *argv[])  {
 if   (argc  <  2)   return   1;
   printf("%d\n",  hp(atoi(argv[1])));
  return 0;
}