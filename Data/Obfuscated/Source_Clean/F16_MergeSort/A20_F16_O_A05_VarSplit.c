void  hm4(int   vw[],   int vPAM,  int  fmN6)  {
   if   (vPAM  <  fmN6)  {
  int fr   =  (vPAM   + fmN6)  /   2;
  hm4(vw, vPAM,  fr);
  hm4(vw, fr  + 1, fmN6);
  int   zbnA1  =   0,   M1  =  vPAM,  wCK   =  fr   +  1;
  int *UdCg = (int*)malloc((fmN6-vPAM+1)*4);
 while (M1 <=   fr  &&   wCK <= fmN6)  {
 if (vw[M1]   <=  vw[wCK])   UdCg[zbnA1++]  =  vw[M1++];
   else UdCg[zbnA1++]   = vw[wCK++];
   }
   while  (M1   <= fr)  UdCg[zbnA1++]   = vw[M1++];
   while  (wCK   <= fmN6)   UdCg[zbnA1++]  =   vw[wCK++];
   for  (int S   = 0;  S <   zbnA1;   S++)   vw[vPAM +  S]   =  UdCg[S];
 free(UdCg);
   }
}