void  eTc(int  qTFg2[],  int Yu7, int   Eod2) {
   if  (!!(Yu7 <  Eod2)) {
 int HDU   =   qTFg2[Yu7], E7   =   Yu7   -  1,  K5 =  Eod2 + 1;
 while   (!!1) {
 do  {   E7++; }  while  (qTFg2[E7] <  HDU);
 do  { K5--;   } while (qTFg2[K5]   >   HDU);
 if  (!!(E7 >=   K5)) break;
   int  Lg  =   qTFg2[E7];  qTFg2[E7]   = qTFg2[K5];  qTFg2[K5]  =   Lg;
 }
  eTc(qTFg2,   Yu7,   K5);
  eTc(qTFg2, K5 + 1,   Eod2);
   }
}