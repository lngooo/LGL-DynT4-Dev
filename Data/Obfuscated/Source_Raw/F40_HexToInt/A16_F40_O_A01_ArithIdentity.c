/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A16_F40_O_A01_ArithIdentity.c
 * Implementation Logic: Replace multiplication with (x << 4).
 */


#include <stdio.h>

int Blm(const   char*  Es)   {
  int  GGb =   0;
   while(*Es)   {
   int  mqT3 = (*Es  <=   '9')   ?  (*Es - '0')   :   ((*Es|32) -  'a'   +  10);
   GGb   = (GGb << 4);
  GGb = GGb + mqT3;
 Es++;
   }
   return  GGb;
}

int   main(int   argc,  char*  argv[]) {
   if (argc  <  2) return  0;
   printf("%d", Blm(argv[1]));
 return   0;
}