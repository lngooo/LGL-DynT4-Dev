struct  GL4  {   int  S;   int   Iw; };

int K(int  jS)  {
  struct GL4   lg3  =   {jS, 1};
  if (lg3.S  <  2)  return  0;
   for  (int wG0  = 2; wG0 * wG0 <=   lg3.S;   wG0++)  {
 if  (lg3.S  %  wG0   == 0)  { lg3.Iw  =  0;  break;  }
  }
 return lg3.Iw;
}