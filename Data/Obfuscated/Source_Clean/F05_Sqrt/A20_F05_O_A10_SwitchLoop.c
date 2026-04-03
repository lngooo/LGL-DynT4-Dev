int   UOv4(int  b) {
  if   (b  <   0) return   -1;
 long  BC8  =   0;
   int  BNi8 = 0;
   while (BNi8  !=  1)   {
   switch (BNi8)  {
  case 0:   
   if   ((BC8   +   1)   *   (BC8   + 1)  <=  b)  BC8++;
   else   BNi8   =   1;
 break;
   }
  }
   return   (int)BC8;
}