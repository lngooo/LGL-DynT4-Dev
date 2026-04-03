/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A04_F35_O_A01_Flattening.c
 * Logic: Control flow flattening using a state machine.
 */


#include <stdio.h>
#include <stdlib.h>

int it2(const  char*   dGYa) {
   int I8   =   0,   iQLA2   = 0,   qBN  =   1;
   while  (qBN != 0)  {
 switch (qBN)  {
   case 1:   
  if   (dGYa[iQLA2]  ==  '\0')  qBN = 0;
 else  qBN  =   2;
 break;
   case 2:   {
 char V =   dGYa[iQLA2];
  if  (V   == 'a' || V  == 'e'  ||   V  ==   'i'   ||   V  == 'o' ||   V   == 'u'  ||
  V  ==   'A'  ||   V   ==  'E' ||   V == 'I'  || V   ==  'O'  ||   V  == 'U') 
   I8++;
  iQLA2++;
  qBN =  1;
  break;
   }
  }
 }
  return I8;
}

int  main(int  argc,  char*   argv[])   {
  if (argc  < 2)  {  printf("0\n"); return   0;  }
  printf("%d\n",  it2(argv[1]));
   return   0;
}