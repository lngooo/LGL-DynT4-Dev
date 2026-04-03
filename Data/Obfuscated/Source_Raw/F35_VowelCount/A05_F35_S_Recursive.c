/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A05_F35_S_Recursive.c
 * Logic: Pure recursive implementation.
 */


#include <stdio.h>
#include <stdlib.h>

int ZEM(char l7)   {
 return (l7=='a'||l7=='e'||l7=='i'||l7=='o'||l7=='u'||l7=='A'||l7=='E'||l7=='I'||l7=='O'||l7=='U');
}

int   oGs(const char* lFO1) {
  if (*lFO1   ==  '\0')  return 0;
  return ZEM(*lFO1)   +  oGs(lFO1 +   1);
}

int main(int   argc, char* argv[])   {
   if   (argc   <   2) { printf("0\n"); return 0;  }
  printf("%d\n", oGs(argv[1]));
   return   0;
}