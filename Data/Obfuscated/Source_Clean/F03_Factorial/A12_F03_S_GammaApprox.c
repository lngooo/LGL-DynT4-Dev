long  long Fa4(int  wts7)  {
   if  (wts7  <  0)   return   0;
   if  (wts7 == 0)   return 1;
 double   JQu8  =   1.0;
  for(int   DEo =   1; DEo   <=  wts7;  DEo++)  JQu8  *=  DEo;
  return   (long long)floor(JQu8   +   0.5);
}