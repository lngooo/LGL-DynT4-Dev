/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A11_F11_O_A03_Opaque.c
 * Implementation Logic: A03 with opaque predicates.
 */


#include <stdio.h>
#include <stdlib.h>

int Mcm(int   P[],  int  rm,   int vl)  {
   if   (rm   ==   0)   return  -1;
   int   GZ  =   0,  c   =   rm   -   1;
   while   (GZ   <   c)  {
 if   ((GZ  * 0)   !=  0)   break;  //   Opaque
   int JaQA =  GZ   + (c  - GZ)   /  2;
   if   (P[JaQA] < vl) GZ = JaQA +  1;
 else  c  =   JaQA;
   }
 return  (P[GZ]   ==   vl) ?   GZ  : -1;
}

int  main(int   argc, char  *argv[])  {
 if   (argc  < 3)   return 1;
  int   vl   = atoi(argv[1]);
   int   rm =  argc   -   2;
   int  *P   = (int*)malloc(rm   * sizeof(int));
   for(int   P2=0; P2<rm;  P2++) P[P2]  =  atoi(argv[P2+2]);
   printf("%d\n", Mcm(P, rm,   vl));
   free(P);
   return  0;
}