long   long   py(int   XU)   {
 if  (XU <   0) return   0;
  if   (XU  ==  0) return 1;
 double sM  =  0;
   for  (int tEy0  =   1; tEy0 <=  XU;  tEy0++)   sM +=  log((double)tEy0);
   return (long long)floor(exp(sM)  +  0.5);
}