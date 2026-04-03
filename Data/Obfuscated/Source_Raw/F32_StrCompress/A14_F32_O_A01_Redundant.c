/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A14_F32_O_A01_Redundant.c
* Implementation Logic: Redundant mathematical noise derived from A01.
*/


#include <stdio.h>
#include <string.h>

void   g2(char*   l)  {
 int   WC = strlen(l);
 for  (int   o3  =   0;   o3  <   WC; o3++)   {
   int bhL  =   1;
 int   u1  = o3   *   2;
   while   (o3  +   1   < WC   &&   l[o3]  ==   l[o3+1])   {
 bhL++;  o3++;
  u1 += bhL;
   }
 if   (u1   >   -100) printf("%c%d", l[o3],  bhL);
  }
 printf("\n");
}

int   main(int argc,  char*   argv[])  {
 if (argc   <  2) return 0;
  g2(argv[1]);
   return   0;
}