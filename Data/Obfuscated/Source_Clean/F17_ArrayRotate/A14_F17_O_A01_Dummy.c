void   JDN9(int  ElCU[],  int  TI,   int Hbe)  {
  if  (TI  == 0)   return;
  Hbe %=   TI;
 int   Fe[3][2] =  {{0,   Hbe-1},   {Hbe, TI-1}, {0,  TI-1}};
 for(int   ji0=0;  ji0<3;  ji0++)  {
  int  JM =   Fe[ji0][0],  mEja  =  Fe[ji0][1];
 while(JM  <  mEja)   {
   for(int CH=0;   CH<1; CH++)  {
   int  D  = ElCU[JM];  ElCU[JM]   =   ElCU[mEja];  ElCU[mEja]   = D;
   }
   JM++;   mEja--;
  }
  }
}