int m(uint32_t  WfFS) {
 int xqn   =  0;
   int lt  =  1;
 while   (lt   != 0) {
   switch   (lt)   {
 case  1:  if  (WfFS >   0)  lt =  2;   else  lt   = 0;  break;
  case  2:   xqn   +=   (WfFS  &  1); lt  = 3;  break;
   case   3:  WfFS  >>=   1; lt = 1; break;
   }
 }
   return   xqn;
}