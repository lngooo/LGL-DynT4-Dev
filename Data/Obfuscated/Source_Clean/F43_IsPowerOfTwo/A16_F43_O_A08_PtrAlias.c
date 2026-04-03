int vO(unsigned  int   Z)  {
  static  unsigned int  oqt[32];
 for(int   aiCw8=0;   aiCw8<32;  aiCw8++) oqt[aiCw8]  =  1U  <<  aiCw8;
 unsigned int  *yYWz  =  oqt;
 if  (Z ==  0)   return   0;
   for  (int  aiCw8  = 0;   aiCw8   <   32; aiCw8++) {
 if  (*(yYWz   +  aiCw8)   ==  Z)  return  1;
   }
  return   0;
}