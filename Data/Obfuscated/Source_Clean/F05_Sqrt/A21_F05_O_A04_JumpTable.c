int  EHZ(int MviA)  {
  if (MviA <   0)  return -1;
 long   gKSg7  = 0, M  =  MviA,   VgS5  =   0;
  void  *cht[]  =  {&&eJuD,   &&w3};
eJuD:
   if (gKSg7 <=   M)   {
  long  pbh   =  gKSg7 +   (M  - gKSg7)   /   2;
   if  (pbh  * pbh  <=  MviA)   { VgS5   =  pbh;   gKSg7  =   pbh + 1;   }
 else   M   =   pbh  -   1;
   goto *cht[0];
   }
w3:
   return (int)VgS5;
}