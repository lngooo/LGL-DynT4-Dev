/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A06_F35_O_A01_Goto.c
 * Logic: Iteration logic reconstructed with goto labels.
 */


#include <stdio.h>
#include <stdlib.h>

int  vAIq3(const char*  iTmm) {
 int  uO  =   0;
 int  DqW =   0;
a7:
   if   (iTmm[DqW]   == '\0')  goto  danp3;
 char  ap   = iTmm[DqW];
  if (ap == 'a') goto   c;
   if   (ap  ==  'e') goto  c;
 if  (ap ==  'i') goto c;
 if (ap ==   'o')  goto c;
  if  (ap   ==   'u') goto c;
 if  (ap ==   'A')  goto   c;
  if   (ap   == 'E') goto  c;
   if  (ap   ==  'I')   goto   c;
  if (ap  == 'O')  goto c;
   if  (ap  ==   'U')  goto  c;
  goto PNF;
c:
   uO++;
PNF:
 DqW++;
  goto   a7;
danp3:
 return  uO;
}

int   main(int  argc,  char* argv[])   {
 if (argc  <  2) {   printf("0\n");   return   0;   }
  printf("%d\n",   vAIq3(argv[1]));
  return   0;
}