void  U7(int   om[],  int cZ,   int   R7)  {
 if  (cZ   <  R7)  {
  int  bDt =  cZ  + (R7 -   cZ)   /   2;
 U7(om,  cZ,  bDt);
 U7(om, bDt  + 1,   R7);
  int imsq0 =   bDt   -   cZ   +  1,   mg0  = R7  - bDt;
 int KtsB[128],  GKo4[128];  
 for (int  udE5   =   0;   udE5  <   imsq0;  udE5++)   KtsB[udE5]   =  om[cZ   +  udE5];
  for (int  g0 =   0; g0   <  mg0; g0++)   GKo4[g0] =   om[bDt   + 1 + g0];
 KtsB[imsq0]  =  2147483647;   GKo4[mg0] = 2147483647;   
   int udE5  =   0,   g0   =   0;
 for   (int   Odem = cZ;  Odem  <=   R7; Odem++)  om[Odem] =   (KtsB[udE5]   <= GKo4[g0])  ?   KtsB[udE5++]  :   GKo4[g0++];
   }
}