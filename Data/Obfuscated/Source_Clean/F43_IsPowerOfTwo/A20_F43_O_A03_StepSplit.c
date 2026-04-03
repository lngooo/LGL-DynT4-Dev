int   YyHF5(unsigned int   yxLA)  {
   if   (yxLA ==  0)  return 0;
 int   ygK   = 0, xNmp =  0;
   while  (yxLA  > 0) {
   ygK   +=   (yxLA  &  1);
  yxLA  >>= 1;
  if   (yxLA   > 0)   {
   xNmp  +=   (yxLA  &   1);
  yxLA   >>=  1;
 }
   }
 return  (ygK  +   xNmp)   ==  1;
}