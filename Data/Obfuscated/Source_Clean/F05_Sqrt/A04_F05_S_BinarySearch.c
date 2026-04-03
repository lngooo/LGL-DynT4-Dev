int rfyc(int   q)  {
  if  (q  < 0)  return  -1;
  if  (q  <   2) return q;
   long  xe3   =  0,  ON1  = q,   JXYu  =   0;
  while (xe3   <=   ON1) {
 long V  =  xe3   +  (ON1 -   xe3)  / 2;
 if  (V   *  V  <= q)   {
  JXYu   =   V;
 xe3 = V  +  1;
   }  else {
  ON1   =  V  -   1;
   }
  }
 return (int)JXYu;
}