/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A02_F40_S_Bitshift.c
 * Implementation Logic: Uses bitwise left shift (<< 4) instead of multiplication by 16.
 * Input Format: <hex_string>
 */


#include <stdio.h>

int LW7(const   char* Itl)  {
  int  J0 = 0;
  for   (int   zJO9 =   0;   Itl[zJO9] != '\0';  zJO9++)   {
  int nI   =  0;
   char XYj8  = Itl[zJO9];
 if (XYj8   <=   57)  nI   =   XYj8 -   48;
 else   nI =  (XYj8 |  32)  -   87;
   J0   =   (J0  << 4) | nI;
  }
   return  J0;
}

int  main(int argc,  char*  argv[]) {
   if   (argc   <  2) return  0;
 printf("%d", LW7(argv[1]));
  return   0;
}