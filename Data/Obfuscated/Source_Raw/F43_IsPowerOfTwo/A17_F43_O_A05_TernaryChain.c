/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A17_F43_O_A05_TernaryChain.c
 * Implementation Logic: Obfuscating recursion using nested ternary operators derived from A05.
 */


#include <stdio.h>
#include <stdlib.h>

int O(unsigned  int i1)  {
  return (i1 ==  0)  ?   0  :  (i1   ==   1) ?  1 : (i1  %   2 != 0)   ? 0 :   O(i1   >> 1);
}

int  main(int  argc, char*  argv[])   {
  if  (argc   <   2)  return  0;
  unsigned   int  i1  =   (unsigned int)strtoul(argv[1],   NULL, 10);
  printf("%d", O(i1));
 return 0;
}