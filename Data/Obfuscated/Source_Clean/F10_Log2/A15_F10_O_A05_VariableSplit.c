int   J(int W)  {
 int  yK = 0,  n8   =   0;
  if (W   >=  65536)   { W >>= 16; yK =   16;   }
   if (W  >=  256)  {   W  >>= 8;   n8   =   8;  }
   int   jxSc =  0;
  if (W  >=  16)   {   W  >>= 4; jxSc =  4;   }
  int  fiRk  =   0;
 while(W >>= 1) fiRk++;
 return yK   + n8   + jxSc  +   fiRk;
}