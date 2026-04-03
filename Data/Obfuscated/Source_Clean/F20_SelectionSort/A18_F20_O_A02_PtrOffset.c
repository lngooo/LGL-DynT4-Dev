void   eyyh(int  Yv[],   int  C8)   {
  for  (int  CoJ7   = 0;   CoJ7  <   C8;  CoJ7++)   {
 int *LEKK0  = Yv   +   CoJ7;
 int *l5 = LEKK0  + 1;
 int  *M   = LEKK0;
 while  (l5  <   Yv  + C8)   {
  if   (*l5  <   *M) M  =   l5;
 l5++;
 }
   int   esDw   =  *LEKK0;   *LEKK0  =  *M; *M   =  esDw;
  }
}