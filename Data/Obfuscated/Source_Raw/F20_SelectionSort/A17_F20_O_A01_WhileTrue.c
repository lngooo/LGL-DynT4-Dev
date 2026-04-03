/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A17_F20_O_A01_WhileTrue.c
 * Implementation Logic: WhileTrue
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void aI(int LxD[], int  nl)  {
 int   ZMBw4   = 0;
 while  (1)  {
  if   (ZMBw4   >= nl)  break;
 int   Wm =   ZMBw4;
 for(int  D  =  ZMBw4   +   1; D   < nl;  D++) if(LxD[D]  <  LxD[Wm]) Wm   =  D;
   int   nQE =   LxD[ZMBw4]; LxD[ZMBw4]   = LxD[Wm];  LxD[Wm]   =  nQE;
   ZMBw4++;
 }
}

int  main(int   argc, char *argv[]) {
   if   (argc <  2) return   0;
   int nl   = argc  -   1;
 int *LxD  =  (int   *)malloc(nl *  sizeof(int));
  for   (int  ZMBw4  =   0;  ZMBw4 <  nl;   ZMBw4++)   LxD[ZMBw4] =  atoi(argv[ZMBw4 +   1]);

 aI(LxD,   nl);

  for (int  ZMBw4   =   0; ZMBw4   <   nl; ZMBw4++)   {
   printf("%d%s", LxD[ZMBw4],  (ZMBw4   ==   nl - 1   ?   ""  :   " "));
 }
   printf("\n");
  free(LxD);
   return 0;
}