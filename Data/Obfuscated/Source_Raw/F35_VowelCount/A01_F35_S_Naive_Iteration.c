/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A01_F35_S_Naive_Iteration.c
 * Logic: Simple iteration with if-logical OR conditions.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int  uT(const   char* Lr3)  {
  int s8 =   0;
 for   (int   QmaX7 = 0;  Lr3[QmaX7]   != '\0';   QmaX7++)   {
   char  vGvH  = Lr3[QmaX7];
 if  (vGvH   ==  'a'  || vGvH  ==   'e'  || vGvH ==  'i' ||  vGvH   == 'o'  || vGvH   == 'u' ||
 vGvH   ==   'A'  ||  vGvH   == 'E'  ||   vGvH ==   'I' ||   vGvH  ==   'O'  || vGvH   ==  'U')  {
  s8++;
  }
 }
  return s8;
}

int  main(int   argc,  char* argv[])   {
   if   (argc <   2)  {   printf("0\n"); return  0;   }
   printf("%d\n",   uT(argv[1]));
 return  0;
}