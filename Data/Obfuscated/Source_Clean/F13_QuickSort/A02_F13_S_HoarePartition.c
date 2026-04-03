void  MWEu(int   lQh[],  int  UGw, int   cEE0)  {
  if  (UGw   <   cEE0)   {
  int   c =   lQh[UGw];
   int yEB5   = UGw - 1, ee  =   cEE0   +  1;
   while   (1)   {
   do   {   yEB5++; } while  (lQh[yEB5]   <   c);
 do   {   ee--;  } while  (lQh[ee] >  c);
   if   (yEB5  >=  ee)  break;
 int  Vip8 =  lQh[yEB5];  lQh[yEB5] =   lQh[ee];  lQh[ee]   = Vip8;
 }
 MWEu(lQh,   UGw, ee);
   MWEu(lQh, ee +   1,   cEE0);
  }
}