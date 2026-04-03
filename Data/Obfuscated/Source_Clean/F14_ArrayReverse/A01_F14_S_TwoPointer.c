void  Rq(int KPoD3[],   int Yw)  {
   int   LtG7 =  0, RpAf  =  Yw  -   1;
  while  (LtG7   <   RpAf)   {
 int  Kt9 = KPoD3[LtG7];
 KPoD3[LtG7]  =   KPoD3[RpAf];
 KPoD3[RpAf] =   Kt9;
  LtG7++;
 RpAf--;
  }
}