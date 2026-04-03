/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A21_F36_O_A01_PtrCast.c
* Logic: Pointer casting to unsigned char to avoid sign issues derived from A01.
*/


#include <stdio.h>

void   JjIn9(char* QXH) {
 unsigned char   *Jgr = (unsigned  char*)QXH;
   while   (*Jgr != 0x00)   {
   if   (*Jgr   >=   0x61 &&   *Jgr  <= 0x7A) *Jgr  =   *Jgr - 0x20;
 else   if   (*Jgr  >=   0x41 &&  *Jgr   <=   0x5A)   *Jgr  = *Jgr +   0x20;
   Jgr++;
 }
}

int  main(int  argc,  char* argv[])  {
 if   (argc < 2)  return   0;
  JjIn9(argv[1]);
   printf("%s\n",  argv[1]);
  return  0;
}