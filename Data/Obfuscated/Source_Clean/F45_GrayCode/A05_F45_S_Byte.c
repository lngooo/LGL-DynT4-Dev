unsigned int sh(unsigned int   v)   {
   unsigned   char nM[4];
  unsigned   int F =  v >>  1;
  unsigned char   Ak[4];
  for(int N=0;  N<4;  N++) {
  nM[N]   =   (v   >> (N*8)) & 0xFF;
  Ak[N]  = (F >>  (N*8))  &  0xFF;
  }
 unsigned   int   Pe8 =  0;
  for(int   N=0;  N<4; N++)   {
 Pe8 |=  (unsigned int)(nM[N] ^   Ak[N]) <<   (N*8);
  }
  return Pe8;
}