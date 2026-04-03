int   l(int   dmI2)   {
  if (dmI2  <=  0) return 0;
 return   dmI2  +  l(dmI2  -  1);
}