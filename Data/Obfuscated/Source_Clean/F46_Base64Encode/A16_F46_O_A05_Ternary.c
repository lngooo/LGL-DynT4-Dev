void   dl(unsigned  char  *x7,   int  YZT,  char   *Zi)   {
  const   char   *tPQ  =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 for(int   NI=0;  NI<((YZT+2)/3)*3;  NI+=3)  {
   int  tD   =   (NI  <   YZT)  ?   x7[NI]  :  0;
   int   TuYa =   (NI+1 <   YZT)   ?   x7[NI+1]   : 0;
   int q  =  (NI+2 <   YZT)  ?   x7[NI+2]  : 0;
 Zi[(NI/3)*4] =   tPQ[tD   >>  2];
   Zi[(NI/3)*4+1]  =   tPQ[((tD &  3)  <<   4)   | (TuYa   >>  4)];
   Zi[(NI/3)*4+2]   =  (NI+1  < YZT)  ?   tPQ[((TuYa  &  15) <<   2)   | (q   >> 6)]  : '=';
   Zi[(NI/3)*4+3]  =   (NI+2  < YZT)  ? tPQ[q  &  63] :  '=';
   }
  Zi[((YZT+2)/3)*4]  =   0;
}