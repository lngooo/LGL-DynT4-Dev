/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A13_F32_O_A05_Bitwise.c
* Implementation Logic: Instruction substitution with bitwise math derived from A05.
*/


#include <stdio.h>
#include <string.h>

void  ah(char* PJG6)   {
 int   j4  =  strlen(PJG6);
  if (j4  ==   0)   return;
 int HmHZ3 = (1   <<   0);
   for   (int BUdB6   = 1;  BUdB6  <=   j4;   BUdB6++)   {
 if (!(PJG6[BUdB6] ^   PJG6[BUdB6-1])  && PJG6[BUdB6] !=   0)  {
  HmHZ3   =  HmHZ3 +  1;
 }   else {
  printf("%c%d",  PJG6[BUdB6-1], HmHZ3);
  HmHZ3  = (2  >> 1);
 }
   }
 printf("\n");
}

int main(int argc,  char* argv[]) {
   if   (argc <   2)   return   0;
  ah(argv[1]);
 return 0;
}