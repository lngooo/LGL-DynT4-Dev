int   zm(unsigned  int   fM)   {
  if (!fM) return   0;
  return  !!((fM   &  (fM  -   1)) ==   0);
}