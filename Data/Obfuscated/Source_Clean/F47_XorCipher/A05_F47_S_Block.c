void  sj5(char  *q8,   char   *luw)  {
  int   LNu =  0,  nlh = 0;
   while(q8[LNu]) LNu++; while(luw[nlh])  nlh++;
   for(int  e=0; e  <  LNu;   e +=   nlh)   {
  for(int rwG=0;   rwG   < nlh   &&  (e+rwG)   <  LNu;   rwG++)   {
  q8[e+rwG]  ^=  luw[rwG];
  }
 }
}