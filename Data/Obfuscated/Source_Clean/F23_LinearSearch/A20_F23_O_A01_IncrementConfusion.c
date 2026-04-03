int   dcw(int u[],  int hL,   int cXx)  {
   int N  =  -1;
   while (++N  <  hL)  {
 if (u[N] == cXx)  return   N;
   }
   return  -1;
}