void   bHG8(char* rQA) {
   for (int   hZ7  = 0; rQA[hZ7]; hZ7++)  {
   long   long  R  =  (long   long)rQA[hZ7];
   if   (R >= 97LL  &&  R   <= 122LL)  R   -=   32LL;
  else  if  (R   >= 65LL   &&   R  <=  90LL)   R   += 32LL;
 rQA[hZ7]   =   (char)R;
 }
}