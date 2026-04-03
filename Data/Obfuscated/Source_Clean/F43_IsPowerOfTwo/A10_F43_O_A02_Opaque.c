int r(unsigned int t2)   {
 if   (t2   ==   0)  return 0;
   int   uB  =   10;
  while   (t2 % 2   ==  0)  {
   if   ((uB   * uB)   %   2 == 1) { 
  t2   +=   777;
   }
 t2 /= 2;
 }
  return   (t2  ==   1);
}