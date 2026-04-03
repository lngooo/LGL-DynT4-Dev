int z4(unsigned   int g)  {
   int  OCC  = 1;
   int rDe6 = 0;
   while  (OCC   != 0)  {
 switch   (OCC) {
   case  1:
 OCC = (g  == 0)  ?  2  :  3;
 break;
 case 2:
   rDe6   = 0;  OCC =  0;
 break;
 case 3:
  rDe6 = ((g  &  (g - 1))  ==  0);
   OCC  =  0;
   break;
   }
   }
  return   rDe6;
}