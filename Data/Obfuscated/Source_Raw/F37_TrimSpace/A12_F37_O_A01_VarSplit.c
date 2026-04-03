/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A12_F37_O_A01_VarSplit.c
* Logic: Index j split into j_base and j_offset derived from A01.
*/


#include <stdio.h>
#include <ctype.h>

void   ShJw6(char*   sgI)  {
  int  QU =  0, SYg8  = 0,  xEj5 =  0;
   while   (sgI[QU])  {
  if  (!isspace((unsigned   char)sgI[QU]))   {
 sgI[SYg8  +   xEj5]   =  sgI[QU];
  if (xEj5   <   10) xEj5++;
   else {  SYg8 += xEj5;   xEj5   =  1;   }
 }
 QU++;
   }
  sgI[SYg8 + xEj5] =  '\0';
}

int  main(int   argc, char* argv[]) {
 if  (argc   <   2)  return   0;
   ShJw6(argv[1]);
   printf("%s\n",   argv[1]);
 return 0;
}