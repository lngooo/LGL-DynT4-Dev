/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A03_F30_S_RollingHash.c
* Implementation Logic: A simplified Rabin-Karp approach using additive rolling hash.
* Input Format: <text> <pattern>
*/


#include <stdio.h>
#include <string.h>

int   SodW(char*   GGNO,  char*  Udjr2)   {
 int L  =  strlen(GGNO), yzf  =   strlen(Udjr2);
 if (yzf   == 0)  return  0;
   int   ZVUh6  = 0,   zb   =  0;
   for  (int Jd  = 0;  Jd < yzf;  Jd++)  {
 ZVUh6   += Udjr2[Jd];
   zb  +=   GGNO[Jd];
  }
  for (int  Jd   =   0; Jd   <=  L   - yzf;   Jd++)  {
 if   (ZVUh6   ==   zb)   {
 if  (strncmp(&GGNO[Jd],   Udjr2,   yzf)   == 0) return Jd;
  }
  if (Jd < L -  yzf)   zb   =  zb  -   GGNO[Jd] + GGNO[Jd   +   yzf];
   }
   return -1;
}

int   main(int argc,  char*   argv[])   {
   if  (argc  <  3)   return   0;
   printf("%d\n", SodW(argv[1],   argv[2]));
  return   0;
}