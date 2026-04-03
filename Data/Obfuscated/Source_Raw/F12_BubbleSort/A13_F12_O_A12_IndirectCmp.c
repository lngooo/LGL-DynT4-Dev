/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A13_F12_O_A12_IndirectCmp.c
 * Implementation Logic: Wrapper sort with function pointer comparison.
 */


#include <stdio.h>
#include <stdlib.h>

typedef int   (*ZVkk)(const  void*, const  void*);

int  KAu(const void *F7,   const  void *rL)   {
 return  (*(int*)F7   >  *(int*)rL) -   (*(int*)F7 < *(int*)rL);
}

void  RSJ(int iH[], int lGUF4)  {
 ZVkk SJR  = KAu;
  qsort(iH,   lGUF4,   sizeof(int), SJR);
}

int   main(int   argc,   char   *argv[]) {
   if (argc  <   2)   return  0;
   int  lGUF4   =  argc  -  1;
 int  *iH  =  (int*)malloc(lGUF4 * sizeof(int));
 for (int   Ol6 = 0; Ol6   <   lGUF4; Ol6++)   iH[Ol6] =   atoi(argv[Ol6+1]);
  RSJ(iH,  lGUF4);
 for  (int   Ol6   =   0;   Ol6 <   lGUF4;   Ol6++)   printf("%d ",   iH[Ol6]);
 printf("\n");
 free(iH);
   return  0;
}