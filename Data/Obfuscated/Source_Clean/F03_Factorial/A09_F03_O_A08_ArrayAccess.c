long   long   iUe(int   xnm4) {
 if  (xnm4 < 0)  return 0;
  long  long L7[21]; 
  L7[0] =  1;
 for   (int YTzt   = 1;  YTzt   <=   xnm4  &&   YTzt <  21;   YTzt++) {
   int  R = (YTzt *  2) / 2;
  L7[R]   =   L7[R   -   1]   *  YTzt;
   }
  return  L7[xnm4 > 20 ?  20   :   xnm4];
}