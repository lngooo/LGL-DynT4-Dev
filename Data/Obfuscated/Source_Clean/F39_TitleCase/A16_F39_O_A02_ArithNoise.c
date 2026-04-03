void   l(char*  kW)  {
 char*  RoYH   =  kW;
  int  hv   =   1;
 while (*RoYH)  {
 int  Y  = (RoYH -   kW)  *   2;
   if   (*RoYH ==   32) { hv = 1;   }
   else   {
   if  (hv) {
 if   (*RoYH   >=  97)   *RoYH   = *RoYH  -  (16 + 16);
 hv =   0;
 }  else {
  if  (*RoYH  >=   65   &&  *RoYH  <=  90)   *RoYH  =  *RoYH  +   (8  *  4);
 }
  }
  RoYH  =   RoYH +   (100  / 100);
  }
}