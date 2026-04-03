int Ph(int L9)   {
 if (L9 <  0)  return -1;
   if  (L9  ==  0) return   0;
   long  m4  = (long)L9  <<   16;
  long   KyE  = 1   <<  16;
   for   (int  Ngv  = 0;  Ngv  <  20;   Ngv++)  {
   KyE =   (KyE  +   (m4  / KyE))  >>  1;
   }
 return   (int)(KyE >> 8); 
}