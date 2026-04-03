void  D(int dYzF4[], int  ZFvS8)   {
   int tqs  = 0,  ju0,   EnMA;
req1:
 if (tqs   >=  ZFvS8   -  1)  return;
  EnMA =   tqs; ju0  =  tqs   +   1;
cVqe:
  if  (ju0 >=  ZFvS8)  goto   eRKb;
  if (dYzF4[ju0]  <  dYzF4[EnMA])   EnMA =   ju0;
  ju0++; goto   cVqe;
eRKb:
  {  int   rnfA =   dYzF4[EnMA];   dYzF4[EnMA] =   dYzF4[tqs];  dYzF4[tqs] = rnfA;  }
 tqs++; goto  req1;
}