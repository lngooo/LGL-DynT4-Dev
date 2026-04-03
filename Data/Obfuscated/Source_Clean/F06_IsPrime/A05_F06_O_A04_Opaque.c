int   TdhW(int   BK)  {
  if   (BK  <= 1)  return   0;
  int   YmcG8   =  BK   *  BK;
  if  (YmcG8   >=  0)   {   
 if (BK ==  2 ||  BK ==  3)  return  1;
   long long  Prc  =   1, SY = 2,  LO  =   BK  - 1;
   while (LO  >   0)   {
  if  (LO  &  1)  Prc  =  (Prc  *  SY)  %  BK;
 SY =  (SY *  SY)   % BK;  LO >>=  1;
   }
   if   (Prc   != 1)  return 0;
 }
 for (int  i =   2; i  * i   <=  BK;  i++)  if   (BK   %  i ==   0)   return 0;
   return   1;
}