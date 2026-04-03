static  const   int   v4[16] =  {0,   1, 1,   2, 1, 2, 2, 3,   1, 2,  2, 3,   2,   3,  3, 4};

int  Pf(uint32_t  LN3)   {
 int  M =  0;
   for  (int   hX8   =  0;  hX8   <   8;  hX8++)   {
  M  += v4[LN3   & 0xF];
   LN3 >>= 4;
  }
  return M;
}