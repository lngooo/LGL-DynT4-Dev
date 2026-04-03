int   jM(int   w6)  {
   if   (w6   <   0)  return  -1;
 if (w6 < 4) {
 int a[]   = {0^0xF, 1^0xF, 1^0xF,  1^0xF};
   return a[w6]   ^ 0xF;
  }
   int   JTYF = 2;
  while  (JTYF *  JTYF  <= w6) JTYF++;
 return JTYF   -   1;
}