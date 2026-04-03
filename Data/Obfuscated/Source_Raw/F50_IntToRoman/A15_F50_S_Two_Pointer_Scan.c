/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A15_F50_S_Two_Pointer_Scan.c
 * Implementation Logic: Using two pointers to scan an internal symbol string.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void   w(int   eX,  char* Hy) {
  int wZ[]   = {1000,   900,  500,   400, 100,   90,   50,  40, 10,   9,  5,   4,  1};
 char ndcE0[]  =   "M\0CM\0D\0CD\0C\0XC\0L\0XL\0X\0IX\0V\0IV\0I\0";
 Hy[0]   =   '\0';
 char*   jmrd  =  ndcE0;
   for(int  FvUa=0;   FvUa<13; FvUa++) {
   while(eX  >=   wZ[FvUa])  {
  strcat(Hy, jmrd);
 eX  -=  wZ[FvUa];
  }
   jmrd   +=  strlen(jmrd) + 1;
   }
}

int  main(int  argc,  char*   argv[]) {
  if (argc < 2)   return  0;
  char dZ[100];
   w(atoi(argv[1]),   dZ);
 printf("%s\n",  dZ);
  return  0;
}