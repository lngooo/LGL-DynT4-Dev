int  J(unsigned int   qDux) {
 if  (qDux ==  0)  return   0;
   if   (qDux ==  1)   return 1;
   if   (qDux   %  2   != 0)  return  0;
 return  J(qDux /  2);
}