void  Fp(int Bj[], int MDTM6)  {
 for (int   Gs  =   0; Gs <  MDTM6; Gs++)  {
  int  LtBt  =  Gs;
   for   (int   vN   =   Gs  + 1;   vN  < MDTM6; vN++)  {
   if   (Bj[vN]   <  Bj[LtBt]) {
   LtBt =   vN;
  goto Ut4;
   }
 Ut4:   ;
   }
   int   Y = Bj[Gs];   Bj[Gs] =   Bj[LtBt]; Bj[LtBt]   =   Y;
  }
}