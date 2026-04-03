int pk(int JOeO)  {
   if (JOeO < 0)   return -1;
   unsigned int k8   =  0;
 unsigned int y   =  1   <<  30;
  while (y   >   JOeO)   y >>=   2;
   while (y !=   0) {
   if (JOeO   >= k8  + y)   {
 JOeO   -= k8 +   y;
   k8  =  (k8   >>   1) +  y;
   } else {
  k8  >>=  1;
 }
   y >>=  2;
 }
  return (int)k8;
}