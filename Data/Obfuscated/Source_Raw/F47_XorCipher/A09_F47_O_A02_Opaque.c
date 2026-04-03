/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A09_F47_O_A02_Opaque.c
 * Implementation Logic: Opaque
 * Input Format: <data_string> <key_string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void W(char   *B8,   char   *MrC9)  {
   int  s   =   0; while(MrC9[s]) s++;
   if  (*B8   !=   '\0')   {
 if  ((s   *  s +   7)   >  0)   {
  static int   As6   =  0;
   *B8   ^= MrC9[As6   %   s];
  As6++;
  W(B8  +  1,  MrC9);
  if  (*(B8-1)   == 0) As6   = 0;   
 }
   }
}

int  main(int argc,   char   *argv[])   {
 if (argc  <   3)   return 0;
  char   *B8  =  argv[1];
 char  *MrC9  = argv[2];
 int bNk0  = 0;
 while (B8[bNk0])   bNk0++;

  W(B8,   MrC9);

   for   (int   bZ  = 0; bZ   <   bNk0;  bZ++)  {
   printf("%02x",   (unsigned   char)B8[bZ]);
 }
   printf("\n");
   return  0;
}