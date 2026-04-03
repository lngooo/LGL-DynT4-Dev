/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A15_F38_O_A01_DoublePtr.c
 * Implementation Logic: 深度混淆：基于 A01 的多重指针嵌套
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void VH8(char   *lwM)  {
  char   **KPEE5  = &lwM;
   int  s7  =   strlen(*KPEE5);
  for(int   G8=0;   G8 <   (s7 >>  1);  G8++)   {
   char   v  =   (*KPEE5)[G8];
  (*KPEE5)[G8]   = (*KPEE5)[s7-1-G8];
   (*KPEE5)[s7-1-G8]   =  v;
 }
   char   *kSD   =   *KPEE5;
   int  Mds   = 0;
 for(int dG=0;   dG  <=  s7;   dG++)   {
   if(kSD[dG] == 32 ||  kSD[dG]  ==  '\0')  {
  int mho   =  dG   -  1;
  while(Mds <   mho)   {
 char   K =   kSD[Mds];
 kSD[Mds++] =  kSD[mho];
  kSD[mho--] = K;
  }
  Mds   =   dG +  1;
   }
   }
}

int main(int  argc, char   *argv[])  {
 if (argc <  2)   return   0;
 char   LJ[512]  =  "";
 for(int G8 =   1;  G8 < argc;  G8++)  {
 strcat(LJ, argv[G8]);
   if(G8 <  argc -  1)   strcat(LJ, " ");
   }
   VH8(LJ);
 printf("%s\n",  LJ);
 return  0;
}
