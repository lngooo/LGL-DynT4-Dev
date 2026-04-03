int   Nruy(int   OLBa[],   int  QZ1, int   Ofg)  {
 int m  =   0,  HzLQ  = QZ1   - 1,  VTJu;
cv1:
 if (m   > HzLQ) goto   zh;
   VTJu   = m + (HzLQ  -  m)  /  2;
  if (OLBa[VTJu] ==  Ofg) goto   V;
   if   (OLBa[VTJu]  < Ofg)   {   m  =   VTJu +  1;   goto cv1;  }
 HzLQ  =  VTJu  -  1;   goto cv1;
V:
   return   VTJu;
zh:
 return -1;
}