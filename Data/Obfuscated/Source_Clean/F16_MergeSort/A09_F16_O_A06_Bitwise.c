void  Ls(int   q[],   int   uv,   int LXFH)  {
  if  (uv  <  LXFH) {
   int   Z9   =   (uv  + LXFH) >>  1;
   Ls(q,   uv,   Z9);
  Ls(q,  Z9  + 1, LXFH);
   int   NKi =  Z9   - uv  +   1, Wk   =   LXFH  -  Z9;
   int   Rtr[64], TI[64];
  for(int  IneW9=0; IneW9<NKi;   IneW9++)   Rtr[IneW9] =  q[uv+IneW9];
 for(int   PU=0; PU<Wk;  PU++) TI[PU] = q[Z9+1+PU];
   Rtr[NKi] = ~(1   <<   31); TI[Wk] =  ~(1  << 31);
  int IneW9   =  0, PU   =  0;
  for(int   wbas=uv;   wbas<=LXFH;   wbas++)   {
 int TQyg = (Rtr[IneW9] <= TI[PU]);
   q[wbas]   =   TQyg   ? Rtr[IneW9++]   : TI[PU++];
   }
  }
}