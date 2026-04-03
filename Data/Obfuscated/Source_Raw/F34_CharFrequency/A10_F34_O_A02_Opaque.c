/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A10_F34_O_A02_Opaque.c
* Logic: Opaque predicates injected into pointer logic derived from A02.
*/


#include <stdio.h>

int   CvW(char*   WQx4,  char SiB)   {
  int oQ0   =  0;
 int h = 7;
   while (*WQx4)   {
  if ((h  *   h) %   2   !=   0) {
 if   (*WQx4  == SiB) oQ0++;
  WQx4++;
  }   else  {
   WQx4--;   // Dead   code
 }
   }
 return oQ0;
}

int  main(int   argc,  char* argv[]) {
 if   (argc   <  3)   return   0;
  printf("%d\n", CvW(argv[1],   argv[2][0]));
 return  0;
}