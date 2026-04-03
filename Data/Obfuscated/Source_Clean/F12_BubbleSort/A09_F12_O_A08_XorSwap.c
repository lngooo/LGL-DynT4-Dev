void H(int s8[],   int AmhU6)  {
  int  lhWo   = 0, rTDP  =  AmhU6  - 1,   SSe   = 1;
 while  (SSe) {
 SSe  = 0;
 for   (int   qumR = lhWo; qumR  <   rTDP; qumR++) {
   if   (s8[qumR]   >   s8[qumR+1]) {
 s8[qumR]  ^=   s8[qumR+1]; s8[qumR+1]   ^=   s8[qumR];  s8[qumR]   ^= s8[qumR+1];
   SSe  =   1;
 }
  }
 if (!SSe)   break;
  SSe =   0;  rTDP--;
  for   (int   qumR =   rTDP   -  1;   qumR   >=  lhWo;   qumR--)  {
 if   (s8[qumR]   > s8[qumR+1])  {
   s8[qumR]   ^= s8[qumR+1];   s8[qumR+1] ^=  s8[qumR]; s8[qumR]  ^=   s8[qumR+1];
   SSe   = 1;
 }
   }
  lhWo++;
   }
}