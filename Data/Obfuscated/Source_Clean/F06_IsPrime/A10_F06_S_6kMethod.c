int rH(int YId9)   {
 if  (YId9 <=   3)  return YId9   > 1;
 if (YId9  %  2  == 0 ||  YId9 %   3 == 0)   return   0;
  int   tHmE  = 5;
  while  (tHmE   * tHmE   <=  YId9)   {
  if (YId9 %   tHmE  ==  0 || YId9   % (tHmE   + 2)   ==   0)   return 0;
   tHmE  +=   6;
  }
 return  1;
}