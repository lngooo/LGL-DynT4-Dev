void kD(char *TKHz)  {
 char   *v5   =  strchr(TKHz,   ' ');
  if(!v5)   return;
  char GUgk[256]; strcpy(GUgk,  v5   + 1);
 kD(GUgk);
   int  YM5   =  v5 -   TKHz;
 TKHz[YM5]   =   '\0';
 char   hQ[256]; strcpy(hQ,   TKHz);
   sprintf(TKHz,  "%s %s",  GUgk,  hQ);
}