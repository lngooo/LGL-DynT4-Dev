void  UmW(const  char *Bnh,  char *wv) {
 int NQZ =  0, tjG   = 0;
 while (Bnh[NQZ])  {
 int   nH   = 1;
  while (Bnh[NQZ  +  nH] ? (Bnh[NQZ+nH]  ==   Bnh[NQZ])  :   0) nH++;
  wv[tjG++]  = Bnh[NQZ];
 tjG +=   sprintf(wv + tjG, "%d", nH);
  NQZ +=   nH;
   }
}