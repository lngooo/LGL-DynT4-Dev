/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A03_F40_S_LUT.c
 * Implementation Logic: Uses a pre-computed array to map ASCII characters to hex values.
 * Input Format: <hex_string>
 */


#include <stdio.h>

int  ZY2(const  char*   d)  {
  static  const   int   tfdn[256]   =   {['0']=0,  ['1']=1,   ['2']=2,  ['3']=3,  ['4']=4,   ['5']=5, ['6']=6, ['7']=7, ['8']=8,  ['9']=9, ['a']=10,  ['b']=11,  ['c']=12,   ['d']=13,   ['e']=14, ['f']=15,   ['A']=10, ['B']=11,  ['C']=12,   ['D']=13, ['E']=14,  ['F']=15};
  int  mo =   0;
  for (; *d; d++)  {
  mo   =   (mo  *  16)   +   tfdn[(unsigned char)*d];
   }
   return   mo;
}

int  main(int argc, char* argv[])   {
   if (argc   <  2)   return   0;
  printf("%d",   ZY2(argv[1]));
  return  0;
}