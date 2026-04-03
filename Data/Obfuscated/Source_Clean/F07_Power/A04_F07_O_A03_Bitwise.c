int   Wi5(int  ejO7, int  exp)  {
  int  NwW   =   1;
 while  (exp  >   0)   {
  if  (exp &   1)  NwW   *=  ejO7;
  ejO7   *= ejO7;
   exp   >>= 1;
   }
 return   NwW;
}