/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A08_F35_O_A03_Opaque.c
 * Logic: Lookup table with opaque predicates.
 */


#include <stdio.h>
#include <stdlib.h>

int  mh(const  char* W) {
  int  aWc[256]  =   {0};
   int  YdPA   = 7,   JHrS9  =  14;
  aWc['a']=aWc['e']=aWc['i']=aWc['o']=aWc['u']=aWc['A']=aWc['E']=aWc['I']=aWc['O']=aWc['U']=1;
 int U9   =  0;
   while   (*W) {
 if  (JHrS9  ==   YdPA  *   2) {  //  Opaque  predicate
  if   (aWc[(unsigned   char)*W])   U9++;
   W++;
 } else   {
 W--;  //   Dead code
  }
 }
  return   U9;
}

int main(int  argc,   char* argv[])   {
  if  (argc < 2) { printf("0\n");   return   0; }
 printf("%d\n",  mh(argv[1]));
  return 0;
}