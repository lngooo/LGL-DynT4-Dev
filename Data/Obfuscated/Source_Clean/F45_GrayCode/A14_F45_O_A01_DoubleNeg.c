unsigned int   VM(unsigned  int   SylX1)   {
 unsigned int  h   =   SylX1 >> 1;
  return  ~((~SylX1  &  ~h)  |   (SylX1 &   h));  
}