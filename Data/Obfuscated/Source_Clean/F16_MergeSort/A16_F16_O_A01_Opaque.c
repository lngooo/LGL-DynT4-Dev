void VCfF(int   yJF[],   int   pajm, int  z) {
   if  (pajm   <  z) {
   int  JZT6  =   (pajm +   z)   / 2;
  if  ((JZT6 *   JZT6   + 1) > 0)  {
   VCfF(yJF,  pajm,  JZT6);
  VCfF(yJF,   JZT6 +  1,   z);
   int  *x  = (int*)malloc((z-pajm+1)*4), Q=pajm,  GU=JZT6+1,  GAHx=0;
   while(Q<=JZT6  && GU<=z)   x[GAHx++] =   (yJF[Q]<=yJF[GU]) ? yJF[Q++]  : yJF[GU++];
   while(Q<=JZT6)  x[GAHx++]  =   yJF[Q++];  while(GU<=z)   x[GAHx++] =  yJF[GU++];
 for(int WroA=0;  WroA<GAHx; WroA++) yJF[pajm+WroA]   = x[WroA];
  free(x);
   }
  }
}