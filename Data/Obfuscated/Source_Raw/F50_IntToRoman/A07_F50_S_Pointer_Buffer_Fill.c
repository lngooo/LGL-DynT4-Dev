/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A07_F50_S_Pointer_Buffer_Fill.c
 * Implementation Logic: Directly filling buffer using pointer arithmetic and characters.
 */


#include <stdio.h>
#include <stdlib.h>

void   W(int   Dh5,   char*  Ybnh)  {
  char  *K = Ybnh;
   while(Dh5  >=   1000)  {   *K++   =   'M';  Dh5 -=   1000;   }
  if(Dh5 >=   900)  {  *K++   = 'C';  *K++  =   'M';  Dh5   -= 900;   }
   if(Dh5  >= 500) { *K++ =  'D'; Dh5   -=  500;  }
  if(Dh5 >=  400)   { *K++  =   'C';  *K++   =  'D'; Dh5 -=  400;  }
  while(Dh5 >=  100)  { *K++ = 'C'; Dh5   -=   100; }
 if(Dh5  >= 90)  { *K++   =   'X'; *K++  =  'C'; Dh5   -=   90; }
  if(Dh5  >=  50) { *K++  = 'L'; Dh5   -= 50;  }
   if(Dh5  >=   40)  {   *K++ = 'X'; *K++ = 'L'; Dh5 -=   40;  }
 while(Dh5 >=   10) { *K++  = 'X';   Dh5  -=   10; }
 if(Dh5 >= 9) { *K++  =   'I'; *K++  =   'X';   Dh5 -= 9;  }
  if(Dh5 >=   5)   { *K++  = 'V';   Dh5 -=   5; }
  if(Dh5  >=   4)   {   *K++   =  'I';   *K++ =  'V'; Dh5 -=  4;   }
   while(Dh5 >=   1)   { *K++   =   'I'; Dh5 -= 1;   }
  *K =   '\0';
}

int  main(int argc, char*  argv[])  {
   if (argc <  2) return 0;
  char   ALGc[100];
  W(atoi(argv[1]),   ALGc);
   printf("%s\n", ALGc);
   return 0;
}