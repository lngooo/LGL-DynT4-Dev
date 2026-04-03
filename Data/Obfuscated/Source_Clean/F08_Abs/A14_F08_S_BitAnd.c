int  RTI(int  FCpl)  {
  if (FCpl   ==  -2147483648) return 2147483647;  
  if   (FCpl  >=   0) return  FCpl;
  return   (FCpl  ^   0xFFFFFFFF) + 1;
}