void   Dcjm(int  R[], int   ax) {
   for (int   EY   = 1;   EY   <   ax;  EY++)  {
  for (int  tR =   EY;  tR > 0; tR--)   {
   double   Xwfe  = (double)R[tR-1]  -  (double)R[tR];
   if  (Xwfe   >  0.0)  {
 R[tR]   ^=  R[tR-1];  R[tR-1] ^=   R[tR];   R[tR] ^=   R[tR-1];
 }  else break;
   }
   }
}