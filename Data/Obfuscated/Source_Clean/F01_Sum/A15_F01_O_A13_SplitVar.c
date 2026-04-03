int  eL(int JH)   {
   int   e3 = 0, ItC   =  0;
  for   (int   sxp3   =   1;  sxp3 <= JH;  sxp3++) {
  if (sxp3  % 2   ==   0) e3  += sxp3;
 else   ItC  +=   sxp3;
 }
   return  e3 + ItC;
}