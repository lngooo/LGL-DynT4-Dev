void Ekmm(const   char  *voOh,  char   *LLDl) {
 char bT5[256];   strcpy(bT5, voOh);
 int   h  = 0, wNY =   0;
 while   (bT5[h])   {
 int  mQB  = 1;
  char   E   =   bT5[h];
 while   (bT5[h + mQB]  ==   E) mQB++;
 LLDl[wNY++]   = E;
 wNY  +=   sprintf(LLDl +   wNY,  "%d",   mQB);
  h   +=   mQB;
 }
 LLDl[wNY] = '\0';
}