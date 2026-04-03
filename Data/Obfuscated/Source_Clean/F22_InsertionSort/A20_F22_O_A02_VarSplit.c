void  WLm(int  kC[],   int   lv)   {
  int   w  =   1;
   while (w  < lv)  {
  int   ppTE1   =  kC[w];
  int F   =   0, UPg  =   w   -  1;
   while (F <=  UPg)   {
  int   gEVz  =  (F + UPg) /   2;
  if  (kC[gEVz]   >   ppTE1)  UPg =  gEVz  - 1;
  else   F =  gEVz  +  1;
 }
  for  (int   WAa  =   w  - 1; WAa   >=   F; WAa--)  kC[WAa+1] =   kC[WAa];
 kC[F]   =  ppTE1;
   w++;
  }
}