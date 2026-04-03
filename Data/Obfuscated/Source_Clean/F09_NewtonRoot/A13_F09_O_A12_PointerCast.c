int H(int aYLU3)  {
 if  (aYLU3  <   0)  return  -1;
   float  Dg7 = (float)aYLU3;
  unsigned int  *d =   (unsigned int  *)&Dg7;
 *d   =  0x1fbd1df5   +   (*d   >> 1);
 long tvi8 =  (long)Dg7;
 if (tvi8  <= 0) tvi8  =  1;
  for(int   MQ1=0;  MQ1<3; MQ1++)   tvi8   = (tvi8  +  aYLU3/tvi8)  >>  1;
 return  (int)tvi8;
}