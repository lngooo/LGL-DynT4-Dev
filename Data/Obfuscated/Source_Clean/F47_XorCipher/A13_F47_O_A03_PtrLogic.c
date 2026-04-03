void   i3(char *s7,  char  *F9)  {
  for(char   *OPv   =   s7;   *OPv  !=   0; OPv++)   {
   int  GBg   = (int)(OPv - s7);
 int   od3 =   0;   while(F9[od3]) od3++;
 *OPv ^=  *(F9 +  (GBg  % od3));
 }
}