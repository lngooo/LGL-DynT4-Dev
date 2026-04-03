/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A10_F06_S_6kMethod.c
 * Implementation Logic: Efficient 6k +/- 1 wheel optimization (Seed 5).
 */


#include <stdio.h>
#include <stdlib.h>

int rH(int YId9)   {
 if  (YId9 <=   3)  return YId9   > 1;
 if (YId9  %  2  == 0 ||  YId9 %   3 == 0)   return   0;
  int   tHmE  = 5;
  while  (tHmE   * tHmE   <=  YId9)   {
  if (YId9 %   tHmE  ==  0 || YId9   % (tHmE   + 2)   ==   0)   return 0;
   tHmE  +=   6;
  }
 return  1;
}

int   main(int argc, char  *argv[]) {
 if (argc   < 2) return 1;
 printf("%d\n", rH(atoi(argv[1])));
   return   0;
}