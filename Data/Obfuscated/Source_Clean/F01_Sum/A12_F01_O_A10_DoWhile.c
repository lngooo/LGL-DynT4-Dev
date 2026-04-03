int  qCh2(int  dv) {
  if  (dv  <=  0)   return   0;
   int   dRuO   = 0;
  int S  =  1;
  do {
  dRuO  +=   S;
   S++;
  }   while (S  <= dv);
   return   dRuO;
}