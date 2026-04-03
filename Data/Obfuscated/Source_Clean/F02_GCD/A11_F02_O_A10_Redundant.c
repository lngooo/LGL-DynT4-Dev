int  NoZJ1(int tZDt9,   int Achr) {
   int   sp = abs(tZDt9), hUhW  =  abs(Achr);
  if (sp  *   hUhW ==  0)   return   sp  +   hUhW;
   int ZMpr   = 1;
   int KpQt   =  (sp   <  hUhW)   ?  sp  : hUhW;
  for   (int  EPLJ7   =  1;   EPLJ7   <=   KpQt;   EPLJ7++)   {
  int   YOO  = sp %  EPLJ7;
   int  E9 =  hUhW  %   EPLJ7;
 if   (YOO   ==  0  &&  E9  ==   0)   ZMpr  =  EPLJ7;
 }
   return   ZMpr;
}