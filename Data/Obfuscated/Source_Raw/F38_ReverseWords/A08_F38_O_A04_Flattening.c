/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A08_F38_O_A04_Flattening.c
 * Implementation Logic: 控制流平坦化：基于 A04 引入 Switch 状态机
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void   WFI(char  *ZOa) {
   int mR5  = 0,  JFm, uxE9  =   strlen(ZOa),  q;  char  k[256]   =   "";
   while(mR5 != 99) {
  switch(mR5)  {
 case  0:  q   =   uxE9;  JFm =   uxE9  -   1;   mR5  = 1;   break;
   case  1:   mR5  =  (JFm >=  -1)   ?  2 :   4; break;
   case 2:  if(JFm  ==   -1 ||  ZOa[JFm] == ' ')   {
  strncat(k,  ZOa  + JFm   +  1,   q   - JFm  - 1);
  if(JFm !=   -1)   strcat(k,  " ");
  q   =  JFm;
 }
  mR5  = 3; break;
  case  3: JFm--;   mR5 =   1; break;
 case   4:   strcpy(ZOa, k);   mR5 =   99;   break;
   }
  }
}

int  main(int   argc,   char   *argv[])  {
 if (argc   < 2)   return 0;
 char   P[512]  =   "";
  for(int  JFm = 1; JFm   < argc;   JFm++)  {
   strcat(P,   argv[JFm]);
   if(JFm  < argc  -  1)   strcat(P, " ");
 }
  WFI(P);
  printf("%s\n", P);
  return   0;
}
