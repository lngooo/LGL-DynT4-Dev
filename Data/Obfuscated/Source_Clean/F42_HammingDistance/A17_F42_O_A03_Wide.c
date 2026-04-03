int N6(unsigned int v,   unsigned   int   O)  {
  unsigned   long  long  h = (unsigned long  long)v ^   O;
 int NcBa2   = 0;
   while   (h  !=   0ULL)  {
 h  &= (h  - 1ULL);
  NcBa2++;
   }
 return NcBa2;
}