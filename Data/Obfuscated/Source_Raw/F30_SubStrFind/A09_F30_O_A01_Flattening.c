/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A09_F30_O_A01_Flattening.c
* Implementation Logic: Control flow flattening with state variable derived from A01.
*/


#include <stdio.h>
#include <string.h>

int  RFeW2(char*  e,  char* O3)   {
   int  svVj8  = strlen(e),  WLKX   =   strlen(O3);
 if   (WLKX == 0) return   0;
  int  c   =   0,  PEF   =  0, jE   = 0;
   while   (c !=  -1)  {
   switch   (c) {
  case 0: c = (PEF   <=  svVj8 -  WLKX)  ?  1   : 4;  break;
 case   1: jE =   0;   c =   2;  break;
 case  2:   if (jE   <  WLKX && e[PEF+jE]  == O3[jE])   {   jE++;  }  
 else {  c = (jE   ==  WLKX)  ? 3   : 5;  }  break;
   case  3:   return PEF;
  case  4: return  -1;
   case 5:  PEF++;   c   =   0; break;
   }
 }
   return  -1;
}

int   main(int  argc,   char*   argv[])   {
   if   (argc < 3)   return  0;
 printf("%d\n", RFeW2(argv[1],   argv[2]));
 return  0;
}