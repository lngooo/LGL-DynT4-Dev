long   Au(int   AGcp) {
   if   (AGcp == 0) return   0;
  if   (AGcp  == 1)   return   1;
  long   Ooi0   =   0, yH8  =   1;
  int j =  2;
   for   (; j <= AGcp -   1; j  +=  2)  {
   Ooi0  =  Ooi0   + yH8; yH8 = Ooi0 +   yH8;
  }
 if  (j  <=  AGcp)   {
 long   uq7  = Ooi0 +   yH8;   Ooi0  =  yH8;  yH8  = uq7;
   }
   return yH8;
}