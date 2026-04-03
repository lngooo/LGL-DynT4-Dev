void   f(int  tN4[],   int  YoBO1)   {
 for  (int   kQ3 = 0; kQ3 <  YoBO1   -   1; kQ3++) {
  int   VD =   kQ3;
 for   (int   USy =  kQ3 +  1; USy   < YoBO1; USy++)  {
   if  (tN4[USy]  <   tN4[VD])   VD   =   USy;
 }
   int kRf =  tN4[VD];
   tN4[VD]  =   tN4[kQ3];
  tN4[kQ3]   = kRf;
   }
}