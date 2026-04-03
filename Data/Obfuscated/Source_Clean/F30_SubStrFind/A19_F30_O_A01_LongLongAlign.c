int   Cpfg(char*   jzM,   char*   nUGe)   {
   long long   cMo =  (long long)strlen(jzM);
   long   long   k =  (long   long)strlen(nUGe);
  if (k  ==  0LL)   return  0;
 for   (long  long dvYN = 0; dvYN   <=   cMo  - k; dvYN++)   {
 if   (memcmp(jzM  + dvYN,   nUGe,   (size_t)k)  ==   0) return  (int)dvYN;
 }
  return   -1;
}