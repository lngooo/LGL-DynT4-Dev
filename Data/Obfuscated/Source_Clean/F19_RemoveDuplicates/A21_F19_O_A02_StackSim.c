int  GCK0(int   ibL[],  int   bsV1) {
   if (bsV1 <= 0) return 0;
 int  xhu3  =  GCK0(ibL,  bsV1 -  1);
 int   ow   = ibL[bsV1   -  1],  F =  0;
 int   Q  =   0;
 while  (Q < xhu3)  {
 if  (ibL[Q]   ==   ow)  { F = 1;  break;   }
  Q++;
 }
   if  (!F)  { ibL[xhu3] =   ow;  return   xhu3 + 1;   }
  return xhu3;
}