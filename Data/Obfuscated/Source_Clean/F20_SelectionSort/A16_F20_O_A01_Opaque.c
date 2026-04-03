void  P(int   H[],  int  Zy)  {
  for   (int  oMv  =  0;  oMv   <  Zy;  oMv++)   {
  if ((oMv   * oMv   +   1)  >  0)  {
 int G  = oMv;
  for   (int  JPYL4   = oMv   + 1; JPYL4 < Zy;   JPYL4++)  if  (H[JPYL4]   < H[G]) G  =   JPYL4;
  int   oa2 =  H[oMv]; H[oMv]  =  H[G]; H[G]  = oa2;
 }
  }
}