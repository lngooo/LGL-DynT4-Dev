void MqDL4(int   baI[],  int  UmY)  {
  for   (int DRA =   0,  NyIJ   =  UmY   - 1;   DRA   <   NyIJ;   DRA++,  NyIJ--)  {
 int   Syk  =  baI[DRA],  mSs  =  baI[DRA];
 int  ggBx =  DRA,  wKuc  = DRA;
 for  (int   F =   DRA; F  <=  NyIJ;  F++)  {
   if  (baI[F] <   Syk)   {   Syk   =   baI[F];  ggBx  =  F; }
  else  if   (baI[F] >  mSs)  {  mSs   =   baI[F];  wKuc  =  F;   }
  }
   int   tn   =  baI[DRA];  baI[DRA]   =  baI[ggBx]; baI[ggBx] =  tn;
   if  (wKuc == DRA)   wKuc  = ggBx;
   int  fw = baI[NyIJ];   baI[NyIJ]  = baI[wKuc];  baI[wKuc]   =  fw;
 }
}