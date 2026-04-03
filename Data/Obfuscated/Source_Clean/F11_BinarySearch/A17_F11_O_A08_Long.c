int LyMz6(int mbr[],  int  FLjx,   int   aDwi) {
   long long NVLl = FLjx,  hXX   =  aDwi;
   long   long  qW1   =   sqrt(NVLl),   HKm   =  0;
  while   (mbr[(qW1 <   NVLl   ?   qW1   :  NVLl)   -   1]  < hXX) {
   HKm   =  qW1; qW1 += sqrt(NVLl);
 if  (HKm  >= NVLl)  return   -1;
 }
   while   (mbr[HKm]  < hXX)  {
 HKm++;
  if (HKm ==   (qW1   < NVLl ? qW1   :   NVLl)) return   -1;
   }
   return  (mbr[HKm]   == hXX) ?  (int)HKm :  -1;
}