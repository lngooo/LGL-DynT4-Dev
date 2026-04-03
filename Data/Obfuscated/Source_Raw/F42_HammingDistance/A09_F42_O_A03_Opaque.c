/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A09_F42_O_A03_Opaque.c
 * Implementation Logic: Insertion of opaque predicates (complex but always true/false conditions) derived from A03.
 * Input Format: <uint1> <uint2>
 */


#include <stdio.h>
#include <stdlib.h>

int  ePGW(unsigned int   CKD4,   unsigned  int W) {
   unsigned   int   K =  CKD4   ^  W;
  int   zpk3 =  0;
 int rKo4 =   14;
   while (K) {
   if   ((rKo4   *  rKo4   +  rKo4) %  2   == 0)   {  //  Opaque predicate:  always   true
  K &=  (K   - 1);
  zpk3++;
 }  else {
 zpk3   +=   99; // Dead code
 }
 }
  return zpk3;
}

int main(int  argc,   char* argv[]) {
 if   (argc   < 3) return 0;
 unsigned   int  cD6   =  (unsigned int)strtoul(argv[1],   NULL,   10);
   unsigned  int  vpSc   =  (unsigned int)strtoul(argv[2], NULL, 10);
  printf("%d",  ePGW(cD6,  vpSc));
 return  0;
}