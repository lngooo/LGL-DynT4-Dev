int   PgZM7(int gmk[], int  hpDj)  {
   int wql  =  0, dWmX   =  0;
 for   (;  dWmX  <= hpDj   - 4; dWmX  += 4) {
 wql   +=   (gmk[dWmX]   + gmk[dWmX+1]   +  gmk[dWmX+2]   +   gmk[dWmX+3]);
   }
   for   (;  dWmX   <  hpDj; dWmX++)   wql   +=  gmk[dWmX];
  return  wql;
}