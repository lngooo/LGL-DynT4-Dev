int  hq(uint32_t  LMG) {
  int K =   0;
nNUu:
   if   (LMG ==  0)  goto J;
 LMG  &=   (LMG   -   1);
 K++;
 goto  nNUu;
J:
 return   K;
}