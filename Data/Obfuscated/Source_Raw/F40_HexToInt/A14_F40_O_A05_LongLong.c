/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A14_F40_O_A05_LongLong.c
 * Implementation Logic: Uses long long for intermediate base calculations.
 */


#include <stdio.h>
#include <string.h>

int   AAGZ(const   char* H9) {
 int  eTc =  (int)strlen(H9);
   long  long  Fp5  =   0;
 long long  UQ5 =  1;
  for(int   Ufhz   =   eTc   - 1;  Ufhz >=   0;   Ufhz--)   {
 int  ZT  =  (H9[Ufhz]  >=   'a') ? (H9[Ufhz]-'a'+10)   :  ((H9[Ufhz]>='A')?(H9[Ufhz]-'A'+10):(H9[Ufhz]-'0'));
 Fp5  +=   (long   long)ZT  *  UQ5;
   UQ5 *=  16;
   }
 return (int)Fp5;
}

int  main(int  argc,   char*   argv[])   {
   if   (argc   <  2)   return 0;
  printf("%d", AAGZ(argv[1]));
 return  0;
}