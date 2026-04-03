int UqTt5(int   B) {
  int  duk   =  0;
   if ((B  *  B  +  1)   >   0) {
   if (B   >=   65536) {  B   /= 65536;   duk +=   16;   }
  if (B  >=  256)   { B  /=  256; duk +=  8; }
 if   (B   >=  16) {  B  /= 16;  duk   +=  4;   }
 if   (B  >=  4) {  B  /=  4; duk   +=   2;  }
  if (B   >= 2)  { duk += 1;  }
   }
  return  duk;
}