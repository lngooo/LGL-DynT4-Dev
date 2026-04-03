/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A16_F14_O_A08_Flat.c
 * Implementation Logic: Flattened do-while loop.
 */


#include <stdio.h>
#include <stdlib.h>

void NBnz(int  vDTr8[],  int   cf0)  {
  if  (cf0   <  2)  return;
  int   Piwp  =   0,  Tt   =  10;
 while(Tt !=  0)   {
  switch(Tt)   {
  case 10: {  int  joXl   = vDTr8[Piwp];  vDTr8[Piwp] =  vDTr8[cf0-1-Piwp];   vDTr8[cf0-1-Piwp] =   joXl;  Piwp++;  Tt  =   20;  break; }
 case   20: Tt  = (Piwp  <  cf0   /  2) ?   10 :   0;  break;
   }
 }
}

int   main(int  argc,   char *argv[])  {
   if  (argc < 2) return   0;
 int  cf0  =   argc  - 1;
 int *vDTr8 =  (int*)malloc(cf0  *  sizeof(int));
   for(int   Piwp=0;   Piwp<cf0;   Piwp++)   vDTr8[Piwp]   = atoi(argv[Piwp+1]);
  NBnz(vDTr8,  cf0);
  for(int   Piwp=0;   Piwp<cf0;  Piwp++) printf("%d ",  vDTr8[Piwp]);
 printf("\n");
   free(vDTr8);
  return   0;
}