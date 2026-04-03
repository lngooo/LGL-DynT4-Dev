/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A06_F29_S_LookupTable.c
* Implementation Logic: Uses a pre-allocated static table to simulate character set constraints.
* Input Format: <string1> <string2>
*/


#include <stdio.h>
#include <string.h>

static   int  lL7[256];
int  Zwm9(char*   naX4,  char* hmp4) {
 memset(lL7,   0, sizeof(lL7));
   int   P   = 0;
 while(naX4[P]) {   lL7[(unsigned char)naX4[P]]++;  P++;  }
 P   = 0;
 while(hmp4[P])  {   lL7[(unsigned char)hmp4[P]]--;   P++;   }
  for(P=0;   P<256;   P++) if(lL7[P] !=  0) return 0;
   return   (strlen(naX4) ==  strlen(hmp4));
}

int main(int  argc, char*  argv[])   {
   if  (argc < 3) return  0;
 printf("%d\n",  Zwm9(argv[1],   argv[2]));
  return  0;
}