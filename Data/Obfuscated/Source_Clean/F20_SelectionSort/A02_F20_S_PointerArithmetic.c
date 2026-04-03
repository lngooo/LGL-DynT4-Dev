void   OtvU6(int Nm1[], int  KZZE) {
 int  *bm1, *nc,  *Y3;
  for   (bm1  = Nm1;  bm1  <   Nm1  +  KZZE - 1;  bm1++)  {
 Y3  =  bm1;
 for   (nc   =   bm1 +  1;   nc <  Nm1  +   KZZE;   nc++) {
 if (*nc  < *Y3)   Y3   = nc;
   }
  int  DHbf   =   *Y3;
   *Y3 = *bm1;
  *bm1   =   DHbf;
  }
}