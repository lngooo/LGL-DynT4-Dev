void   E(const   char  *IDvF,   char   *Tk0) {
  int   gmp =   0,  yj =  0;
   while (!!IDvF[gmp])   {
  int  cR  =  1;
 while (!!IDvF[gmp+cR] &&   IDvF[gmp+cR]  == IDvF[gmp])   cR++;
   Tk0[yj++]   =  IDvF[gmp];
 yj  +=   sprintf(Tk0+yj,  "%d",   cR);
   gmp += cR;
  }
}