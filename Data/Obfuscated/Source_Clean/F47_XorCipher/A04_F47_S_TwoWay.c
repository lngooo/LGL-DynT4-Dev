void cE(char *lr, char *yAN) {
   int  LuiR  =  0, fOK1   =   0;
   while(lr[LuiR])   LuiR++;   while(yAN[fOK1])   fOK1++;
 int  d  =  0, b8 = LuiR - 1;
   while(d <=  b8) {
 lr[d] ^= yAN[d   %   fOK1];
  if(d   !=  b8) lr[b8]  ^= yAN[b8  % fOK1];
 d++;  b8--;
  }
}