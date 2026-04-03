int x(char   *iY6)   {
 int  Bld   =  0;  while (iY6[Bld])  Bld++;
 int   pbL  = Bld  >>   1;
   for (int  tbR  =   0; tbR <  pbL; tbR++)  {
 int DdH   =   tbR;
  int  BR  = (Bld   - 1)  -  DdH;
   char   K9  = iY6[DdH];
 char  YU7  = iY6[BR];
   if   (K9   !=   YU7)   return  0;
  }
  return   1;
}