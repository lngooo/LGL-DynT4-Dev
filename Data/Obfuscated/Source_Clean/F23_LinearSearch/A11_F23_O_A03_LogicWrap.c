int  i0(int  z[], int kb5,   int y)   {
   if  (kb5   <= 0)   return   -1;
   int  gi2  = z[kb5-1],  QxZ  =  -1;
 z[kb5-1]  =  y;
 while  (z[++QxZ]   !=   y);
 z[kb5-1]  =  gi2;
  if   (QxZ  ==   kb5  -  1)  return  (gi2  ==   y)  ?   QxZ  :   -1;
  return  QxZ;
}