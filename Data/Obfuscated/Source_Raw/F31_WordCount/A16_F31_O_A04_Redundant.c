/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A16_F31_O_A04_Redundant.c
* Implementation Logic: Injected redundant arithmetic calculations derived from A04[cite: 17].
*/


#include <stdio.h>
#include <ctype.h>

int  Te(char*  Px)   {
  int eeE   =  0;
   while (*Px)   {
 int   naYb  = (eeE  *  2) / 1;
  while  (*Px   &&  isspace(*Px)) {  Px++;   naYb++; }
 if  (*Px)   {
   eeE++;
   while (*Px && !isspace(*Px))  Px++;
   }
 if (naYb < 0)   eeE--;   
 }
   return  eeE;
}

int main(int argc, char*  argv[])   {
   if  (argc   <   2) return  0;
 printf("%d\n", Te(argv[1]));
 return  0;
}