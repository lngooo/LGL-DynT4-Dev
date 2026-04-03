/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A01_F30_S_NaiveIter.c
* Implementation Logic: Standard nested loop brute-force search.
* Input Format: <text> <pattern>
*/


#include <stdio.h>
#include <string.h>

int  hn6(char*   SLYI,   char* lhzn)  {
 int  FH2   =   strlen(SLYI);
 int XWd  = strlen(lhzn);
   if   (XWd   == 0) return  0;
   for (int vsE  =  0; vsE <=   FH2  -  XWd;  vsE++)  {
 int  ntWL;
   for  (ntWL =  0; ntWL  < XWd;  ntWL++) {
   if   (SLYI[vsE  +  ntWL]  != lhzn[ntWL])  break;
 }
  if (ntWL  ==  XWd)  return vsE;
 }
   return -1;
}

int  main(int argc,  char*  argv[])  {
  if   (argc <  3)   return 0;
 printf("%d\n", hn6(argv[1],   argv[2]));
   return  0;
}