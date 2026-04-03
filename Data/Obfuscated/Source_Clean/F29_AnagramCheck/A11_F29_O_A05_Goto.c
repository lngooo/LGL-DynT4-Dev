int   hpQ(char*   NG, char* jkTk2) {
   if (strlen(NG)   !=  strlen(jkTk2))   return  0;
   int   zq2   = 0,  Ypis   =   0, nD3  = 0;
p5:
   if   (!NG[nD3])   goto   PQ;
 zq2  ^= NG[nD3];  zq2   ^=  jkTk2[nD3];
   Ypis +=   NG[nD3];   Ypis  -=   jkTk2[nD3];
  nD3++;
  goto p5;
PQ:
   return   (zq2 ==   0 && Ypis  == 0);
}