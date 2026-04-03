void  WRO5(char* FUG) {
  char *fRtC   =   FUG;
 while (*fRtC)  {
 int  aBXS  =   0;
  char  wRk  =  *fRtC;
 char   *IT6 =  fRtC;
   while (*IT6  == wRk)  {   aBXS++;  IT6++; }
   printf("%c%d", wRk,  aBXS);
  fRtC   =  IT6;
  }
 printf("\n");
}