void r(int tn[],   int  E) {
 int  *KCmX =  tn;
  for(int  ou=0;   ou<E/2;   ou++)   {
 int  *y  = &KCmX[ou];
   int  *rcJC6   =   &KCmX[E-1-ou];
 int CFkQ  = *y;
   *y  =  *rcJC6;
  *rcJC6 = CFkQ;
 }
}