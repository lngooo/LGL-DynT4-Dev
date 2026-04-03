void   AwI1(int LhDE9[],   int v)  {
   int  JA8   = 0, Ke7 = v  -  1, yt   =  0;
  while  (yt !=  -1)   {
  switch (yt)   {
   case   0: yt  =   (JA8  <  Ke7)  ? 1 :   2; break;
  case 1:   {   int   OO   =  LhDE9[JA8]; LhDE9[JA8] =  LhDE9[Ke7];   LhDE9[Ke7]  =   OO;   JA8++; Ke7--;   yt = 0;   break;  }
   case  2:   yt  =   -1;  break;
 }
   }
}