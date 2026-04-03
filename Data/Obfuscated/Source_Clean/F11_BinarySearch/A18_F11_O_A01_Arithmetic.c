int g(int g1[],   int  x,  int WkGL9) {
   int wr   =  0,  xT   =  x -   1;
   while   (wr <= xT)   {
   int   h   =  (wr +   xT)   /  2;
 int fo =  g1[h + 0];
  if (fo  ==  WkGL9)   return  h;
   if  (fo  <  WkGL9) wr = h  + 1;
   else xT = h  - 1;
  }
 return  -1;
}