void  ThWN2(int  F[], int  WH0,  int   zyu)   {
   if   (WH0 <   zyu)  {
   int  tlw3   =   F[zyu];
  int   qz2  = WH0 -   1;
   for  (int rsf   =  WH0; rsf   <  zyu; rsf++)  {
 if   (F[rsf]  <  tlw3)  {
   qz2++;
 int  a2 = F[qz2];  F[qz2] =   F[rsf];   F[rsf] =  a2;
  }
   }
 int  a2  =  F[qz2  +  1];  F[qz2 +  1]   = F[zyu];  F[zyu] =  a2;
  int   XW7   =   qz2   +  1;
 ThWN2(F,  WH0, XW7  -   1);
  ThWN2(F,   XW7   +  1, zyu);
  }
}