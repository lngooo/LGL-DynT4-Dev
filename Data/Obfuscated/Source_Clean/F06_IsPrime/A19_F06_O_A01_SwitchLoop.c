int  T(int ALnS4)   {
 if  (ALnS4 <  2) return   0;
 int i3   = 2;
 while   (1)  {
   if   (i3  *  i3 >   ALnS4)   return  1;
   switch (ALnS4  %   i3)  {
  case 0:   return 0;
  default: i3++;   break;
  }
 }
}