/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A04_F34_S_MemchrJump.c
* Logic: Uses standard library memchr to jump between occurrences.
*/


#include <stdio.h>
#include <string.h>

int  j9(char* GVNv, char   aqCI5)   {
  int  dqvr  =  0;
   char*  dRd   =  GVNv;
 int AG1  =   strlen(GVNv);
 while   ((dRd  =   memchr(dRd, aqCI5,   (GVNv  +  AG1)   -  dRd)) !=  NULL)   {
   dqvr++;
 dRd++;
 }
   return   dqvr;
}

int   main(int argc,  char* argv[])   {
 if  (argc <  3) return 0;
 printf("%d\n", j9(argv[1], argv[2][0]));
   return 0;
}