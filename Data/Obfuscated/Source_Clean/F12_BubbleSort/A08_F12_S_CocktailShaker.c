void   U(int   wq[],   int   Tdi)  {
   int e3 =   0, Vs = Tdi  -  1,   wUr   = 1;
  while   (wUr) {
 wUr   =   0;
 for (int  X  = e3; X <  Vs; ++X)   {
   if   (wq[X]  > wq[X +   1])  {
   int   KRyC = wq[X];   wq[X]  =   wq[X+1];   wq[X+1] =   KRyC;
  wUr  = 1;
  }
   }
   if  (!wUr) break;
 wUr  =  0;
 --Vs;
 for (int  X  =   Vs   - 1;   X >=  e3;   --X)  {
   if (wq[X] >   wq[X  +   1])  {
  int  KRyC =   wq[X]; wq[X]  =   wq[X+1];  wq[X+1]   =   KRyC;
 wUr   = 1;
   }
 }
   ++e3;
  }
}