int p3(int vrH)  {
  if  (vrH <   0) return   -1;
   if  (vrH < 2)   return   vrH;
   long xDUp = vrH, zY =  (xDUp   + 1)  /  2;
yv:
  if (!(zY <   xDUp))   goto p;
   xDUp  =  zY;
 zY  =  (xDUp   + vrH   /  xDUp) / 2;
  goto  yv;
p:
 return  (int)xDUp;
}