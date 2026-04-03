int wghn(int  L)  {
  if   (L  <  0)  return   -1;
  if   (L  <   2) return L;
 long   hmz5  = 1;

   while ((hmz5   <<   2)  <=  L)   hmz5  <<=   1;
  long x   =   (hmz5 + L   /  hmz5)  >>  1;
   while (x < hmz5)   {
  hmz5 =   x;
 x  =  (hmz5   +   L   /   hmz5)  >>  1;
   }

  if   ((hmz5  +  1)  *   (hmz5 +   1)  <= L)  hmz5++;
  return (int)hmz5;
}