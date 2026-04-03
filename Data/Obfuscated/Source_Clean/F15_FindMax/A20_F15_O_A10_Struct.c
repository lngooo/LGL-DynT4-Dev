struct   e  {  int   HiVh;  int df;  int  pI6;  };

int  CDBn(int  X[], int  o) {
   struct e  VC5 =   {X[0],  0,  X[0]};
  for(int   wm=1;  wm<o;   wm++)   {
 VC5.df  = X[wm];
 VC5.pI6   =  (VC5.df   > VC5.pI6)  ?   VC5.df  :   VC5.pI6;
   }
 return VC5.pI6;
}