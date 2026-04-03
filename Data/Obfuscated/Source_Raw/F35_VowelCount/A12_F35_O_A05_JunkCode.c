/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A12_F35_O_A05_JunkCode.c
 * Logic: Recursive vowel count with mathematical junk calculations.
 */


#include <stdio.h>
#include <stdlib.h>

int   j(const   char*   ORfC)  {
 if   (!*ORfC) return   0;
   double  HBb4 =   3.14159;
   for(int  eb=0;  eb<2;  eb++)  HBb4   *= 1.1; // Junk
   int  GKo   = 0;
  char   KrCE5   =   *ORfC;
   if (KrCE5=='a'||KrCE5=='e'||KrCE5=='i'||KrCE5=='o'||KrCE5=='u'||KrCE5=='A'||KrCE5=='E'||KrCE5=='I'||KrCE5=='O'||KrCE5=='U')   GKo   =  1;
  return GKo  +   j(ORfC +   1);
}

int main(int argc, char*   argv[])  {
  if  (argc  <   2) { printf("0\n");   return  0;   }
  printf("%d\n",   j(argv[1]));
 return 0;
}