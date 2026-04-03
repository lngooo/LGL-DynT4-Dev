double   vsKV(int   jT[], int BRv)   {
 double  NQ2 = 0;
 for  (int  ET  =   0;  ET   <   BRv;   ET++)   {
 for(int lQg=0;  lQg<1; lQg++)  NQ2  +=  jT[ET];
   }
 return (BRv  >  0)   ?  (NQ2 /   BRv)   :   0.0;
}