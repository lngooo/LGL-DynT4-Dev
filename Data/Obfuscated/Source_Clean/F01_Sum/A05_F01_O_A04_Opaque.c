int hjyT8(int c) {
 if  (c  <=  0) {
  if ((c *  c) >=  0)  return  0;
  else  return   -1;
   }
   return   c   +  hjyT8(c - 1);
}