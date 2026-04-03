/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A01_F39_S_StateMachine.c
 * Implementation Logic: Uses a boolean flag to track word boundaries and transform characters.
 * Input Format: <string>
 */


#include <stdio.h>
#include <ctype.h>

void  dRKS7(char*  xmXy2)  {
 int Zzpv2   =   1;
   for   (int Is   =   0;   xmXy2[Is] !=   '\0';   Is++)  {
   if (isspace(xmXy2[Is])) {
 Zzpv2  =   1;
  }   else  if (Zzpv2)  {
 xmXy2[Is]   =   toupper(xmXy2[Is]);
 Zzpv2  =  0;
  } else {
  xmXy2[Is] =  tolower(xmXy2[Is]);
  }
   }
}

int main(int argc,  char* argv[])   {
  if  (argc   <  2)  return 0;
   dRKS7(argv[1]);
 printf("%s",   argv[1]);
 return 0;
}