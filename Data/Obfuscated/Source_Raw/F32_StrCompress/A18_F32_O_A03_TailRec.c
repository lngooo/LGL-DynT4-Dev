/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A18_F32_O_A03_TailRec.c
* Implementation Logic: Tail-recursive variant with index derived from A03.
*/


#include <stdio.h>
#include <string.h>

void  XVUQ(char*   ao,   int bYT)  {
 if (!ao[bYT]) return;
 int   KdwC   =   1;
  while  (ao[bYT+KdwC] == ao[bYT]) KdwC++;
 printf("%c%d",  ao[bYT],  KdwC);
  XVUQ(ao,  bYT  + KdwC);
}

void   a(char*  ao) {
 XVUQ(ao, 0);
   printf("\n");
}

int  main(int   argc, char* argv[])  {
   if (argc <  2)  return  0;
 a(argv[1]);
  return   0;
}