void   IN4(int   Ki[], int  j2)  {
  if (j2   <= 1) return;
  for (int   t1   =  0;  t1   <   j2  - 1;  t1++)   {
  if   (Ki[t1]  >   Ki[t1+1])  {
  int  BTC   =  Ki[t1];   Ki[t1] =   Ki[t1+1];  Ki[t1+1]   = BTC;
 }
  }
   IN4(Ki, j2 -   1);
}

void paNf(int   Ki[],  int j2) {
 IN4(Ki, j2);
}