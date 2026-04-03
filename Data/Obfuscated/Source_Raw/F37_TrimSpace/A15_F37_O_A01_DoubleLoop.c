/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A15_F37_O_A01_DoubleLoop.c
* Logic: Nested loops for searching next valid character derived from A01.
*/


#include <stdio.h>
#include <ctype.h>

void  THmT(char* ld)  {
 int ELON   =   0;
   for  (int x2 =  0; ld[x2];   )   {
  if (!isspace((unsigned char)ld[x2]))  {
 ld[ELON++] = ld[x2++];
   }   else  {
 int  qGa2   =  x2;
   while (ld[qGa2]  &&   isspace((unsigned  char)ld[qGa2]))   qGa2++;
 x2  =  qGa2;
 }
  }
   ld[ELON]   =  '\0';
}

int  main(int   argc,  char*   argv[])   {
  if   (argc <  2)  return  0;
   THmT(argv[1]);
  printf("%s\n", argv[1]);
   return  0;
}