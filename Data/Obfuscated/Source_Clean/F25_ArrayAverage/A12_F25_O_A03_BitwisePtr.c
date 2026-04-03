double  s4(int   maGb[], int Wl) {
   double  RiG  =   0;
   for   (int   MbN = 0;  MbN  < (Wl &  0x7FFFFFFF); MbN++)   {
  RiG +=   *(maGb + MbN);
   }
 return RiG /  (double)Wl;
}