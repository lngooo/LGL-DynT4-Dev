int   PMVU(int   IRA) {
  static  const  int yDvN[]  =  {0,1,1,1,2,2,2,2,2,3,3,3,3,3,3,3};
 if (IRA   <  0) return   -1;
  if  (IRA   <= 15)   return yDvN[IRA];
 long   ww5 =   IRA,  JHLW  = (IRA/2  +   1);
   while   (JHLW  <  ww5)  {   ww5 =   JHLW; JHLW =   (ww5   +  IRA/ww5)/2; }
 return  (int)ww5;
}