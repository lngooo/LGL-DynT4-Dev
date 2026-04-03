/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A20_F41_O_A06_Intertwined.c
 * Implementation Logic: Intertwined control flow derived from A06, adding redundant labels and dummy jumps.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int tIlw1(uint32_t  Fw)  {
  int  tKht   =   0;
  if  (Fw ==  0) goto  KIEd;
v:
  Fw &=  (Fw   - 1);
 tKht++;
 if  (Fw != 0)   goto   v;
  goto  KIEd;
xIV:
 tKht--;   // Never   reached
KIEd:
 return tKht;
}

int main(int  argc, char*  argv[])  {
  if  (argc < 2)  return  0;
 uint32_t ewj  = (uint32_t)strtoul(argv[1], NULL, 10);
   printf("%d\n",  tIlw1(ewj));
   return   0;
}