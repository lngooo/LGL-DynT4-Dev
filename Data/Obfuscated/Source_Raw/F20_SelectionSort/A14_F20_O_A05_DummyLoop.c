/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A14_F20_O_A05_DummyLoop.c
 * Implementation Logic: DummyLoop
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   t1(int Aw[],   int YcVN9)  {
   for (int a   = 0;   a  <   YcVN9;   a++)  {
 int  DDsS  =   a;
   for   (int  lJs  =   a +   1;  lJs <   YcVN9;   lJs++) {
 for(int   H=0; H<1; H++)   if (Aw[lJs] < Aw[DDsS])  DDsS  =   lJs;
 }
 int   oV7   = Aw[a];  Aw[a]  =  Aw[DDsS];  Aw[DDsS]   =   oV7;
   }
}

int main(int  argc,   char  *argv[]) {
  if (argc  < 2)  return 0;
   int  YcVN9   =   argc -   1;
  int *Aw  =   (int *)malloc(YcVN9 *  sizeof(int));
  for (int  a   =   0; a <  YcVN9;  a++)  Aw[a] = atoi(argv[a  +   1]);

   t1(Aw, YcVN9);

  for   (int  a =  0;   a   <   YcVN9;   a++) {
  printf("%d%s",   Aw[a],   (a  ==  YcVN9   -  1 ?   ""   : " "));
   }
   printf("\n");
   free(Aw);
  return 0;
}