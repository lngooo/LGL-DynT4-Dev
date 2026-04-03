struct wB   { int E;   int  k; int s;  };

int r(int jkRA,   int   exp)  {
 struct wB  Pw  =  {jkRA,   exp,  1};
 while (Pw.k  > 0)   {
   if (Pw.k   %   2   ==  1)  Pw.s   *= Pw.E;
   Pw.E   *= Pw.E;
   Pw.k  /=  2;
   }
 return Pw.s;
}