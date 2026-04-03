/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A05_F21_S_Pointer.c
 * Implementation Logic: 纯指针偏移实现，不使用数组下标 
 * Input Format: <int1> <int2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void yMU(int   *aBcJ,   int A)   {
   for(int oX=A/2;oX>0;oX/=2){for(int  *CO=aBcJ+oX;CO<aBcJ+A;CO++){int  kKbW=*CO,*Nw4=CO;while(Nw4>=aBcJ+oX&&*(Nw4-oX)>kKbW){*Nw4=*(Nw4-oX);Nw4-=oX;}*Nw4=kKbW;}}
}

int main(int   argc, char *argv[])   {
   if   (argc <  2)   return 0;
   int A  =  argc  -  1;
  int   *aBcJ =   (int  *)malloc(A *   sizeof(int));
   for  (int   JA2 = 0; JA2   <  A;   JA2++) aBcJ[JA2]   = atoi(argv[JA2+1]);
   yMU(aBcJ,  A);
   for   (int JA2   = 0;  JA2  < A;   JA2++)   printf("%d%c", aBcJ[JA2],  JA2   ==   A   - 1 ? '\n' : ' ');
  free(aBcJ);
  return 0;
}
