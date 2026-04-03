long  samY(int   Nh9)  {
   long   Mz   = 0,  Nm3   =  1,  I;
   if   (Nh9 ==   0)  return  0;
 for   (int  uVT5  =  2;  uVT5  <=   Nh9; uVT5++)   {
 I  = Mz + Nm3;
   Mz   =  Nm3;
 Nm3 = I;
 }
  return   Nm3;
}