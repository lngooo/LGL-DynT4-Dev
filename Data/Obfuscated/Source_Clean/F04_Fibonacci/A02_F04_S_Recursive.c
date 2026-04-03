long FDaL(int   XlF)   {
   if  (XlF <=   1)   return  (long)XlF;
  return   FDaL(XlF   - 1) +  FDaL(XlF  - 2);
}