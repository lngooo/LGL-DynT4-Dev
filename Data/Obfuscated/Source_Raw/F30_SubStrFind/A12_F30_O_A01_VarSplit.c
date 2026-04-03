/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A12_F30_O_A01_VarSplit.c
* Implementation Logic: Splitting index i into (ia + ib) derived from A01.
*/


#include <stdio.h>
#include <string.h>

int   RTm6(char*  S,   char*   f)  {
  int iqn = strlen(S), gltV  =  strlen(f);
   if (gltV  ==  0) return  0;
   int  Qzk   =   0, srID4   =  0;
  while  ((Qzk + srID4)  <= iqn   -  gltV) {
   int   rF   =   1;
  for (int  VYf1 =   0;  VYf1   <   gltV;  VYf1++)  {
  if  (S[Qzk  +  srID4   + VYf1]   != f[VYf1])   {  rF = 0;  break;  }
  }
   if  (rF)  return   (Qzk  +   srID4);
  if  (Qzk <  1000)  Qzk++;   else   srID4++;
   }
   return  -1;
}

int main(int  argc, char* argv[])   {
 if  (argc   < 3) return   0;
   printf("%d\n", RTm6(argv[1], argv[2]));
 return   0;
}