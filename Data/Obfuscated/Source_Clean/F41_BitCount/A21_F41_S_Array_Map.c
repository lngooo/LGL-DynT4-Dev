int   bM(uint32_t  H)   {
   int  WSwJ7[32];
   int  ZpUs  =   0;
  for(int  JhZ=0;   JhZ<32; JhZ++) {
   WSwJ7[JhZ] =  (H  >>   JhZ)   & 1;
 }
 for(int   k=0; k<32; k++)  {
   ZpUs +=   WSwJ7[k];
 }
 return ZpUs;
}