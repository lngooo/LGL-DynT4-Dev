int  Dqn7(int   w)   {
  int yRl1  = w  >>  31;
  if  ((w * w   + 1) >   0)   {
 return (w ^   yRl1) - yRl1;
   }
   return  0;
}