void   ol(unsigned char *jd,   int   JqIn3,   char   *RxpB)   {
   const   char *HSCy3   = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  int  O =  0, Budr   = 0;
 while  (O   +   5   <   JqIn3)   {
   for(int   R=0;  R<2; R++)  {
  RxpB[Budr] =   HSCy3[jd[O] >>  2];
   RxpB[Budr+1] = HSCy3[((jd[O]  &   3)   <<   4)   |   (jd[O+1] >> 4)];
 RxpB[Budr+2]   = HSCy3[((jd[O+1]   &   15)  <<   2) |  (jd[O+2]  >> 6)];
  RxpB[Budr+3]  =   HSCy3[jd[O+2] &   63];
   O +=  3;   Budr   +=  4;
   }
  }
 while(O < JqIn3)   {
  RxpB[Budr++]   = HSCy3[jd[O]   >> 2];
   RxpB[Budr++] = HSCy3[((jd[O]   &  3) <<   4)   |  (O+1  <  JqIn3 ?  jd[O+1] >>   4   :  0)];
   RxpB[Budr++]  = (O+1   <  JqIn3)   ?  HSCy3[((jd[O+1]  &  15)   << 2)   |  (O+2  <   JqIn3  ? jd[O+2] >>  6  :   0)]   :   '=';
 RxpB[Budr++]   =  (O+2 < JqIn3) ?  HSCy3[jd[O+2]  &  63]  :   '=';
  O   +=  3;
   }
   RxpB[Budr]   =  0;
}