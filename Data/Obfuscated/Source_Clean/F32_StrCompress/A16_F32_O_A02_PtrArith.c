void  x6(char* TAYR)  {
 char *WQ  = TAYR;
  while  (*WQ)   {
   char  *Qh  =   WQ;
 while (*(Qh  +  1)   ==   *WQ) Qh++;
 printf("%c%d",  *WQ,   (int)(Qh  -   WQ +   1));
 WQ  = Qh  +  1;
   }
   printf("\n");
}