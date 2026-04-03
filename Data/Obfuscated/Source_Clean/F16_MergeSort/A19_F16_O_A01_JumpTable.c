void Z4(int DiB[], int  E,  int   Qig)  {
  if (E  < Qig)  {
   int  A3  =  (E +   Qig)  /  2;
  Z4(DiB,   E, A3);
  Z4(DiB,   A3   +  1, Qig);
 int *qY  =   (int*)malloc((Qig-E+1)*4), eX6=E, zZYK=A3+1,  V3=0;
 bi3:
 if   (eX6  <=   A3   &&   zZYK <= Qig)   {
   if   (DiB[eX6] <=  DiB[zZYK])   {  qY[V3++] = DiB[eX6++];   goto   bi3;  }
 else {  qY[V3++]  =  DiB[zZYK++]; goto bi3;  }
   }
   while  (eX6  <=   A3)  qY[V3++]  =   DiB[eX6++];
   while (zZYK   <= Qig) qY[V3++] =   DiB[zZYK++];
  for(int G=0; G<V3;  G++) DiB[E+G]   =   qY[G];
  free(qY);
   }
}