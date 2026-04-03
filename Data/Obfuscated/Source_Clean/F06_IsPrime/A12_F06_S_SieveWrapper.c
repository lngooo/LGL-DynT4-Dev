int   aO(int  uEUA6) {
 if  (uEUA6 < 2) return   0;
  char   *Rn  =   (char  *)malloc(uEUA6   +  1);
 memset(Rn, 1,  uEUA6 +   1);
 for (int  EMNW =   2; EMNW  *   EMNW <= uEUA6; EMNW++) {
   if (Rn[EMNW]) {
  for  (int  H   =   EMNW *   EMNW; H <=  uEUA6; H  += EMNW)  Rn[H] =  0;
 }
   }
 int  Qnk  =   Rn[uEUA6];
 free(Rn);
 return Qnk;
}