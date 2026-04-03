void Krh(int haH[],   int  d3,   int vbq)  {
  if   (d3  >= vbq)  return;
 int  *oUo   = haH  +  vbq;
 int *hcdh  =  haH + d3;
  for (int *Q   = haH   + d3;   Q   <  oUo; Q++)   {
 if   (*Q  < *oUo)   {
 int   J2  =  *Q;   *Q =  *hcdh;   *hcdh  = J2;
 hcdh++;
 }
  }
   int J2 = *hcdh;  *hcdh  =  *oUo; *oUo = J2;
 Krh(haH,   d3, (int)(hcdh   - haH)  - 1);
 Krh(haH, (int)(hcdh   -   haH) + 1, vbq);
}