int   kpzy(char   *T)   {
  int   qBAx =   0;   while   (T[qBAx]) qBAx++;
  char   pQP[100];
  int  r =   0;
 while(r  <  qBAx) {  pQP[r]  = T[r]; r++;   }
  r--;
  for(int  lbmz = 0;  lbmz  <   qBAx;   lbmz++)   {
 if(pQP[r--]   !=   T[lbmz])  return   0;
  }
 return 1;
}