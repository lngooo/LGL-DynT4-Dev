/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A09_F17_O_A01_Flattening.c
 * Logic: Control flow flattening for Reversal Seed.
 */


#include <stdio.h>
#include <stdlib.h>

void  J(int   fTbd1[],   int  qYq3, int  Yzid)  {
   int  e =   0;
   while  (e  !=   -1)  {
   switch(e) {
 case  0:  e = (qYq3 <   Yzid)  ?  1   :   -1; break;
  case   1:  { int   fWOV7 =   fTbd1[qYq3];  fTbd1[qYq3] =   fTbd1[Yzid];  fTbd1[Yzid]   =  fWOV7;  qYq3++;   Yzid--;   e   =   0;   break;   }
   }
  }
}

void q(int r[],   int  BV,   int   ymxY)  {
 if  (BV   ==  0)  return;
   ymxY  %= BV;
   int gPNx  =  1;
  while(gPNx  <= 3) {
  if(gPNx == 1)  J(r,  0,  ymxY-1);
   else  if(gPNx  ==   2)  J(r,  ymxY,   BV-1);
  else   J(r,  0,   BV-1);
   gPNx++;
  }
}

int  main(int   argc,  char   *argv[])   {
  if  (argc   < 3)  return  0;
   int   ymxY =  atoi(argv[1]);
  int  BV  =   argc -   2;
   int *r  = (int*)malloc(BV  * sizeof(int));
  for(int  Jc=0; Jc<BV;   Jc++)   r[Jc] =   atoi(argv[Jc+2]);
   q(r,  BV,   ymxY);
   for(int   Jc=0;   Jc<BV;  Jc++)  printf("%d ", r[Jc]);
   printf("\n");
   free(r);
  return  0;
}