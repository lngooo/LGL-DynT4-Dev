/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A16_F48_O_A02_StackSim.c
 * Implementation Logic: StackSim
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  epd(const   char  *sqv,  char   *dP)  {
  if (!*sqv)   return;
 int PSt1   = 0;
   while (sqv[PSt1]   ==   sqv[0])   PSt1++;
 int  yU1 =   strlen(dP);
   dP[yU1]  =  sqv[0];
  sprintf(dP  +  yU1 +  1,   "%d",  PSt1);
 epd(sqv   + PSt1,  dP);
}

int  main(int  argc,   char *argv[]) {
  if   (argc <  2)   return 0;
  char  *HIv  =   argv[1];
 char  J[256]  =  {0};
   epd(HIv,   J);
   printf("%s\n",  J);
   return  0;
}