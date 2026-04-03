int LGYM(uint32_t  hv) {
  unsigned long   long NNsU  =   hv;
  int   F   =  0;
   while (NNsU  >  0)  {
  if   ((NNsU   % 2ULL)  ==  1ULL) F++;
 NNsU = NNsU   >> 1;
  }
 return F;
}