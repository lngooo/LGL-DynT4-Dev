void Jp(int  W[], int ll,  int   A)   {
   if (ll   == 0)  return;
 A =  A  %  ll;
 if   (A   ==   0) return;
   int  P = 0;
  for  (int  Si  =  0;  P  <   ll; Si++)   {
 int   BGPQ   =  Si;
  int  Axo   =   W[Si];
   do  {
 int   TvN   = (BGPQ -   A  +  ll) % ll;
   int kN   =  W[TvN];
   W[TvN]  =   Axo;
 Axo =  kN;
   BGPQ =  TvN;
 P++;
 }   while   (Si !=  BGPQ);
  }
}