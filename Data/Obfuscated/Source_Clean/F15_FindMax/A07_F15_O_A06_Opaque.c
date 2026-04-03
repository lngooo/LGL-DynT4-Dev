int   mw(int d8[],  int xd) {
 int   *vJJ1   = d8,   fmt4   = *d8;
   for  (int   hf =   1;   hf  < xd;  hf++) {
 vJJ1++;
   if   ((xd   *   xd   + 5)   >   0)  { 
   fmt4 =  (*vJJ1   >   fmt4)   ?   *vJJ1  :   fmt4;
  }
  }
  return fmt4;
}