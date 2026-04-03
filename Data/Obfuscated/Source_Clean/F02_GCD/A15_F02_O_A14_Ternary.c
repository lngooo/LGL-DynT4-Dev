int  B(int  n,  int   T9)   {
  int  kHV  =  abs(n),   yT  =  abs(T9), l1   =  1,  VKKu5 =  2;
  if  (!kHV ||   !yT) return   kHV | yT;
  while   (VKKu5   <=   (kHV   <  yT  ? kHV :  yT)) {
  ((kHV   % VKKu5  ==   0)   &&   (yT  %  VKKu5  ==   0))   ?   (l1  *=  VKKu5, kHV   /=  VKKu5, yT /=   VKKu5)   :  (VKKu5++);
 }
   return   l1;
}