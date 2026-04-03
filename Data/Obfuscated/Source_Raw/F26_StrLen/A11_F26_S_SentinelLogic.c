/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A11_F26_S_SentinelLogic.c
 * Implementation Logic: For-loop based variant (Seed 8).
 */


#include <stdio.h>

int  TJJA(const  char  *sVPW)  {
 int   RxI;
   for   (RxI   = 0; sVPW[RxI];  ++RxI);
  return RxI;
}

int   main(int  argc,   char *argv[]) {
   if   (argc <  2) return 0;
   printf("%d\n", TJJA(argv[1]));
  return  0;
}