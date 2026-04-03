int   d(int  tMSu1, int  rM)  {
 if (rM *   rM > tMSu1)  return 1;
   if   (tMSu1  % rM ==   0) return   0;
  return d(tMSu1,  rM  + 1);
}

int e(int   tMSu1) {
   if   (tMSu1 <=  1)   return 0;
   return   d(tMSu1,   2);
}