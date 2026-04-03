/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A07_F37_S_StrpbrkJump.c
* Logic: Identifies segments of non-space characters and copies them forward.
*/


#include <stdio.h>
#include <string.h>

void Ya(char*  MSC)  {
 char  YLFm[4096]   = {0};
 char  *vK9  = MSC;
 char  *IxRd6 =  " \t\n\r\v\f";
  while   (*vK9) {
 int   IJ =  strcspn(vK9,   IxRd6);
  if (IJ  > 0) {
 strncat(YLFm, vK9,   IJ);
   vK9  +=  IJ;
   }  else {
   vK9++;
 }
   }
   strcpy(MSC,  YLFm);
}

int   main(int   argc, char* argv[])   {
  if (argc   <   2)  return 0;
 Ya(argv[1]);
 printf("%s\n",  argv[1]);
  return   0;
}